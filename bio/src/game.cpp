/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file game.cpp
 *     Implementation of related functions.
 * @par Purpose:
 *     Unknown.
 * @par Comment:
 *     None.
 * @author   Tomasz Lis
 * @date     12 Nov 2008 - 05 Nov 2021
 * @par  Copying and copyrights:
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 */
/******************************************************************************/
#include "game.hpp"

#include "bftime.h"
#include "bfpalette.h"
#include "bfwindows.h"
#include "data.hpp"
#include <cstdio>
#include <cstdlib>

short unsigned persecond;

char unsigned fullUpdate;

void game()
{
  // code at 0001:0005f41c
  TbTimeSec currentSecond, previousSecond;
  ULONG previousSecTurn;
  char save_fname7[128];
  //char save_fname6[128];// unused?
  char *userStr;

  previousSecond = 0;
  previousSecTurn = 0;
  currentSecond = 0;
  LbPaletteFade(0, 0x10u, 1u);
  if ( editorMode )
    ifcEditor.PlugIn();
  else
    ifcTitle.PlugIn();
  gameStartTime = LbTimerClock();

  while ( !control.Flags.QuitGame && LbWindowsControl() )
  {
    currentSecond = LbTimerClock() / 1000u;
    if ( currentSecond != previousSecond )
    {
      previousSecond = currentSecond;
      persecond = control.Turn - previousSecTurn;
      previousSecTurn = control.Turn;
    }
    if ( IFCBase::plugIn )
    {
      IFCBase::pullOut->PullOut();
      IFCBase::plugIn->PlugIn();
      IFCBase::plugIn = 0;
      if ( runFlags.Paused )
      {
        if ( !currentIFC->canPause )
          runFlags.Paused = 0;
      }
    }
    control_game();
    process_packets();
    draw_game();
    snd.ProcessSounds();
    if ( (runFlags.TesterAutosave || runFlags.Tester)
      && control.Flags.GameStart
      && !runFlags.Paused
      && ((control.Turn & 0x7F) == 0)
      && runFlags.TesterAutosave )
    {
      //strcpy(save_fname6, config.InstalledFile("save/save6.sav"));// unused, unless bio.Write gets a struct
      strcpy(save_fname7, config.InstalledFile("save/save7.sav"));
      userStr = getenv("USERID");
      if ( userStr != NULL )
        sprintf(bio.saveName, "%.2sSAVE", userStr);
      else
        strcpy(bio.saveName, "AUTOSAVE");
      bio.Write(save_fname7);
    }
    ++control.Turn;
  }
  gameEndTime = LbTimerClock();
  LbPaletteFade(0, 0x10u, 1u);
}

void PlaySmacker( char *fname, unsigned char arg2, unsigned char arg3)
{
// code at 0001:0005f67f
}

void PlayIntro()
{
  // code at 0001:0005f640
  PlaySmacker("intro/biointro.smk", 1, 0);
  bio.players[localPlayer].SetPlayerPointer();
}

/******************************************************************************/

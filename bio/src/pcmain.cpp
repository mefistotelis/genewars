/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file pcmain.cpp
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
#include "pchost.hpp"

#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include "bfscreen.h"
#include "bfmusic.h"
#include "bfmemory.h"
#include "data.hpp"
#include "tables.hpp"
#include "game.hpp"
#include "pchost.hpp"

BBOOL allow_start_game;

const char cmdln_opts[] = {
    'z','x','t','s','r','p','m','i','g','e','d',
    'Z','X','T','S','R','P','M','G','E','D','?',
};

int setup_logging()
{
  char *userid;
  char err_log_fname[32];
  userid = getenv("USERID");
  if ( userid )
  {
    // Find log file name which does not exist and is writable
    int i;
    sprintf(err_log_fname, "%s.err", userid);
    i = 0;
    while ( !access(err_log_fname, F_OK) && access(err_log_fname, W_OK) )
    {
      sprintf(err_log_fname, "%d%7s.err", i, userid);
      puts(err_log_fname);
      i++;
    }
    printf("Error log: %s\n", err_log_fname);
    freopen(err_log_fname, "w", stderr);
  }
}

void print_usage()
{
// code at 0001:000608a5
}

void parse_params(int argc, char *argv[])
{
  int i, pos;
  unsigned char cmd_idx;
  long longval;
  BBOOL finish_param;

  finish_param = 0;
  for (i = 1; i < argc; i++)
  {
    BBOOL found_cmd;
    if ( argv[i][0] == '-' || argv[i][0] == '/' )
    {
      const char *cmdp;
      pos = 1;
      while (argv[i][pos] != '\0')
      {
        cmd_idx = 23;
        cmdp = cmdln_opts;
        do
        {
          if (cmd_idx == 0)
            break;
          found_cmd = *cmdp == argv[i][pos];
          cmdp++;
          cmd_idx--;
        }
        while ( !found_cmd );
        pos++;

        switch ( cmd_idx )
        {
          case 0:
              printf("Unrecognised option \"%c\".\n", argv[i][pos-1]);
              allow_start_game = 0;
              break;
          case 1:                               // "-?"
              allow_start_game = 0;
              break;
          case 2:                               // "-d"
          case 12:
              if (argv[i][pos] == '\0') {
                  finish_param = 1;
                  break;
              }
              runFlags.Debug = 1;
              if ( argv[i][pos] == 'l' || argv[i][pos] == 'L' )
              {
                  mouseDebug = 1;
                  lbScreenDirectAccessActive = 1;
              }
              else if ( argv[i][pos] == 'k' || argv[i][pos] == 'K' )
              {
                  runFlags.DebugKeyboard = 1;
              } else
              {
                  printf("Unrecognised debug option \"%c\".\n", argv[i][pos-1]);
                  allow_start_game = 0;
              }
              finish_param = 1;
              break;
          case 3:                               // "-e"
          case 13:
              editorMode = 1;
              break;
          case 4:                               // "-g"
          case 14:
              runFlags.ScreenShots = 1;
              break;
          case 5:                               // "-m"
          case 16:
              if (argv[i][pos] == '\0') {
                  finish_param = 1;
                  break;
              }
              if ( argv[i][pos] == 'h' || argv[i][pos] == 'H' )
              {
                  lbDisplay.ScreenMode = 13;
              }
              else if ( argv[i][pos] == 'l' || argv[i][pos] == 'L' )
              {
                  lbDisplay.ScreenMode = 1;
              }
              else
              {
                  allow_start_game = 0;
                  printf("Error : Unrecognized screen mode \"%c\".\n", argv[i][pos]);
              }
              finish_param = 1;
              break;
          case 6:                               // "-p"
          case 17:
              if (argv[i][pos] == '\0') {
                  finish_param = 1;
                  break;
              }
              recorder.Init(&argv[i][pos], 1);
              runFlags.RecorderActive = 1;
              finish_param = 1;
              break;
          case 7:                               // "-r"
          case 18:
              if (argv[i][pos] == '\0') {
                  finish_param = 1;
                  break;
              }
              recorder.Init(&argv[i][pos], 0);
              runFlags.RecorderActive = 1;
              finish_param = 1;
              break;
          case 8:                               // "-s"
          case 19:
              runFlags.HiSoundsActive = 1;
              break;
          case 9:                               // "-t"
          case 20:
              runFlags.Tester = 1;
              break;
          case 10:                              // "-x"
          case 21:
              if (argv[i][pos] == '\0') {
                  finish_param = 1;
                  break;
              }
              strcpy(control.SessionName, &argv[i][pos]);
              finish_param = 1;
              break;
          case 11:                              // "-z"
          case 22:
              runFlags.TesterAutosave = 1;
              break;
          case 15:                              // "-i"
              longval = atol(&argv[i][pos + 1]);
              if ( LbNetworkSetupIPXAddress(longval) != 1 )
              {
                  printf("CAN'T DETECT NETWORK\n");
                  exit(1);
              }
              finish_param = 1;
              break;
        }
        if ( finish_param )
        {
          finish_param = 0;
          break;
        }
      }
    }
  }
}

int main(int argc, char *argv[])
{
  // code at 0001:00060280
  allow_start_game = true;

  setup_logging();

  printf("\n%s\nVersion %lu(%s)\n(%s, %s)\n", project_name, project_version, project_builder, project_date, project_time);

  runFlags.Network = 0;
  runFlags.Paused = 0;
  runFlags.Tester = 0;
  runFlags.Debug = 0;
  runFlags.RecorderActive = 0;
  runFlags.OutOfSync = 0;
  runFlags.AlreadyOutOfSync = 0;
  runFlags.DebugKeyboard = 0;
  runFlags.TesterAutosave = 0;
  runFlags.HiSoundsActive = 0;
  runFlags.ScreenShots = 0;
  runFlags.GameScreenOpen = 0;

  control.Flags.QuitGame = 0;
  control.Flags.WorldGenerated = 0;
  control.Flags.GameStart = 0;
  control.Flags.SoundOn = 1;
  control.Flags.MusicOn = 1;
  control.NoPlayers = 1;
  strcpy(control.SessionName, "GENE0");

  {
  TbScreenModeInfo *smdinfo;
  lbDisplay.ScreenMode = 13;
  smdinfo = &lbScreenModeInfo[lbDisplay.ScreenMode];
  startup_files[0].SLength = (smdinfo->Height * smdinfo->Width * smdinfo->BitsPerPixel) >> 3;
  startup_files[1].SLength = (smdinfo->Height * smdinfo->Width * smdinfo->BitsPerPixel) >> 3;
  }

  parse_params(argc, argv);

  if ( allow_start_game )
  {
    setup_game();
    if ( !editorMode )
      PlayIntro();
    game();
    if ( !editorMode )
      StopMusic();
    reset_game();
    LbMemoryReset();
  }
  else
  {
    print_usage();
  }
  printf(
    "total time = %lu secs  packet time = %lu secs (%lu%%)\n",
    (gameEndTime - gameStartTime) / 100,
    pktTotalTime / 100,
    100 * pktTotalTime / (gameEndTime - gameStartTime));
  //fflush(&__iob[1]);
  return 0;
}

/******************************************************************************/

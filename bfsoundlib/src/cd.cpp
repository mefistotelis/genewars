/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file cd.cpp
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
#include "cd.h"

long unsigned volatile CDCountdown;

char unsigned volatile CDTimerActive;

void cbCDCountdown( long unsigned )
{
// code at 0001:000a60b0
}

int GetCDCountdown()
{
// code at 0001:000a60f0
}

int GetCDAble()
{
// code at 0001:000a6100
}

short unsigned CDTrackPlaying()
{
// code at 0001:000a6110
}

int InitRedbook()
{
// code at 0001:000a6130
}

int PlayCDTrack()
{
// code at 0001:000a6170
}

int PlayCDChunk()
{
// code at 0001:000a6260
}

int PlayCDFromTrack()
{
// code at 0001:000a62c0
}

int PauseCD()
{
// code at 0001:000a6330
}

int ResumeCD()
{
// code at 0001:000a6370
}

int StopCD()
{
// code at 0001:000a63b0
}

int NumCDTracks()
{
// code at 0001:000a6400
}

int CDTrackInfo()
{
// code at 0001:000a6420
}

int CDAudioStatus()
{
// code at 0001:000a6480
}

int SetCDVolume()
{
// code at 0001:000a64a0
}

int GetCDVolume()
{
// code at 0001:000a64d0
}

long unsigned ConvertCDTime( CDTime )
{
// code at 0001:000a64e0
}

CDTime ConvertDOSCDTime( long unsigned )
{
// code at 0001:000a6540
}

int IsCDPlaying()
{
// code at 0001:000a65f0
}

CDTime CDHeadPosition()
{
// code at 0001:000a6620
}

int FreeCD()
{
// code at 0001:000a6660
}

char signed InitialCDVolume;

int CDAble;


/******************************************************************************/

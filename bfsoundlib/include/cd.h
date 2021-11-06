/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file cd.hpp
 *     Header file for cd.cpp.
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
#ifndef BFSOUNDLIB_CD_H_
#define BFSOUNDLIB_CD_H_

#ifdef __cplusplus
extern "C" {
#endif

struct CDTime { // sizeof=unknown
    int a1;
};

typedef struct CDTime CDTime;

extern long unsigned volatile CDCountdown;
extern char unsigned volatile CDTimerActive;
void cbCDCountdown( long unsigned );
int GetCDCountdown();
int GetCDAble();
short unsigned CDTrackPlaying();
int InitRedbook();
int PlayCDTrack();
int PlayCDChunk();
int PlayCDFromTrack();
int PauseCD();
int ResumeCD();
int StopCD();
int NumCDTracks();
int CDTrackInfo();
int CDAudioStatus();
int SetCDVolume();
int GetCDVolume();
long unsigned ConvertCDTime( CDTime );
CDTime ConvertDOSCDTime( long unsigned );
int IsCDPlaying();
CDTime CDHeadPosition();
int FreeCD();

extern char signed InitialCDVolume;
extern int CDAble;

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_CD_H_
/******************************************************************************/

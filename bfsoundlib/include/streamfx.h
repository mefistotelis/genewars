/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file streamfx.hpp
 *     Header file for streamfx.cpp.
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
#ifndef BFSOUNDLIB_STREAMFX_H_
#define BFSOUNDLIB_STREAMFX_H_

#ifdef __cplusplus
extern "C" {
#endif

extern int StreamedSoundAble;
extern int CDSpeed;

int StreamedSampleFinished();
int InitStreamedSound();
int FreeStreamedSound();
int PlayStreamedSample();
int MonitorStreamedSoundTrack();
int SetStreamedSampleVolume();
int StopStreamedSample();
int SwitchOffStreamedSound();
void SwitchOnStreamedSound();
int GetStreamedSoundPosition();
int SetStreamedSoundPosition();
int SwapStreamedSoundTrack();
char * findfirstfile( char *, char * );
int CDSpeedTest();

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_STREAMFX_H_
/******************************************************************************/

/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file variable.hpp
 *     Header file for variable.cpp.
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
#ifndef BFSOUNDLIB_VARIABLE_H_
#define BFSOUNDLIB_VARIABLE_H_

#include "bftypes.h"
#include "listsamp.h"

#ifdef __cplusplus
extern "C" {
#endif

int GetNumberOfSamples();
int GetSoundAble();
int GetMusicAble();
int GetSoundActive();
int GetMusicActive();
int GetSoundInstalled();
int GetMusicInstalled();
int GetStereoSound();
int GetNumberOfSongs();
int GetCurrentSoundMasterVolume();
int GetCurrentMusicMasterVolume();
int GetSoundDriver();
int GetMusicDriver();
int GetSelected95MidiDevice();
int GetSelected95WaveDevice();
int GetFirstSampleInfoStructure();
int GetLastSampleInfoStructure();
int GetSongHandle();
int GetCDSpeed();

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_VARIABLE_H_
/******************************************************************************/

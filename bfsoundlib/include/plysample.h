/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file play_sam.hpp
 *     Header file for play_sam.cpp, playsadd.cpp, samp_pan.cpp, samp_pit.cpp,
 *     samp_vol.cpp, stop_all.cpp, stop_sam.cpp.
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
#ifndef BFSOUNDLIB_PLYSAMPLE_H_
#define BFSOUNDLIB_PLYSAMPLE_H_

#ifdef __cplusplus
extern "C" {
#endif

int PlaySample();
int PlaySampleFromAddress();

int IsSamplePlaying();

int SetSamplePan();
int SetSamplePitch();
int SetSampleVolume();

int StopSample();
int StopAllSamples();

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_PLYSAMPLE_H_
/******************************************************************************/

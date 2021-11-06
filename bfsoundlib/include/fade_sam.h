/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file fade_sam.hpp
 *     Header file for fade_sam.cpp.
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
#ifndef BFSOUNDLIB_FADE_SAM_H_
#define BFSOUNDLIB_FADE_SAM_H_

#ifdef __cplusplus
extern "C" {
#endif

void cbfadesample( long unsigned );
int FadeSample();
int StopAllSampleFadeTimers();

extern long sample_fade_handle;
extern char unsigned volatile switch_off_sample_fade_timer;
extern char unsigned volatile a_sample_is_fading;
extern char unsigned volatile samples_currently_fading;

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_FADE_SAM_H_
/******************************************************************************/

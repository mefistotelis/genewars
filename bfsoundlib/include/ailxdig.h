/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ailxdig.h
 *     Header file for ailxdig.c.
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
#ifndef BFSOUNDLIB_AILXDIG_H_
#define BFSOUNDLIB_AILXDIG_H_

#ifdef __cplusplus
extern "C" {
#endif

int AILXDIG_start();
int WVL_search();
int XDIG_set_volume();
int XDIG_set_pitch();
int _XDIG_TIMB_trap();
int _XDIG_MIDI_trap();
int _AIL_API_create_wave_synthesizer();
int _AIL_API_destroy_wave_synthesizer();
int AILXDIG_end();

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_AILXDIG_H_
/******************************************************************************/

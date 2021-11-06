/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file init_aud.cpp
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
#include "bfaudio.h"

int FullDIG_INIPath;

int FullMDI_INIPath;

int SoundAndMusicDataPath;

int SoundDriverPath;

short unsigned current_SB16_left_master_volume;

short unsigned current_SB16_right_master_volume;

short unsigned old_SB16_left_midi_volume;

short unsigned old_SB16_right_midi_volume;

short unsigned old_SB16_left_digi_volume;

short unsigned old_SB16_right_digi_volume;

short unsigned old_SB16_left_treble_volume;

short unsigned old_SB16_right_treble_volume;

int InitAudio()
{
// code at 0001:000b1bf0
}

void prepare_SB16_volumes()
{
// code at 0001:000b1ec0
}

void reset_SB16_volumes()
{
// code at 0001:000b1ff0
}

short unsigned old_SB16_left_bass_volume;

short unsigned old_SB16_right_bass_volume;

char unsigned sb16_mixer_set;


/******************************************************************************/

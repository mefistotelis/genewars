/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file init_aud.hpp
 *     Header file for init_aud.cpp, free_aud.cpp, mast_vol.cpp, setupaud.cpp.
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
#ifndef BFSOUNDLIB_BFAUDIO_H_
#define BFSOUNDLIB_BFAUDIO_H_

#ifdef __cplusplus
extern "C" {
#endif

extern int FullDIG_INIPath;
extern int FullMDI_INIPath;
extern int SoundAndMusicDataPath;
extern int SoundDriverPath;
extern short unsigned current_SB16_left_master_volume;
extern short unsigned current_SB16_right_master_volume;
extern short unsigned old_SB16_left_midi_volume;
extern short unsigned old_SB16_right_midi_volume;
extern short unsigned old_SB16_left_digi_volume;
extern short unsigned old_SB16_right_digi_volume;
extern short unsigned old_SB16_left_treble_volume;
extern short unsigned old_SB16_right_treble_volume;

int InitAudio();
int FreeAudio();

void prepare_SB16_volumes();
void reset_SB16_volumes();
extern short unsigned old_SB16_left_bass_volume;
extern short unsigned old_SB16_right_bass_volume;
extern char unsigned sb16_mixer_set;

int SetMusicMasterVolume();
int SetSoundMasterVolume();

int SetupAudioOptionDefaults();

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_BFAUDIO_H_
/******************************************************************************/

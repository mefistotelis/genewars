/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file init_sou.hpp
 *     Header file for init_sou.cpp, free_sou.cpp, switchso.cpp.
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
#ifndef BFSOUNDLIB_BFSOUND_H_
#define BFSOUNDLIB_BFSOUND_H_

#ifdef __cplusplus
extern "C" {
#endif

extern int sample_id;
extern int end_sample_id;
extern int SoundInstalled;
extern int DisableLoadSounds;
extern int NumberOfSamples;
extern int Sfx;
extern int EndSfxs;
extern int SfxData;
extern int SoundType;
extern int SoundDriver;
extern int AILStartupAlreadyInitiated;

int InitSound();
int DetermineSoundType();
int FreeSound();

extern int MaxNumberOfSamples;
extern int SoundAble;
extern char unsigned SixteenBit;
extern int SoundActive;
extern int AutoScanForSoundHardware;
extern int StereoSound;
extern int CurrentSoundBank;
extern int CurrentSoundMasterVolume;
extern char unsigned DirectSoundUsingGameSDKWindow;
extern int SampleRate;
extern char unsigned ive_got_an_sb16;
extern int Selected95WaveDevice;
extern int SB16_io;
extern int UseMultiMediaExtensions;
extern int SoundInstallChoice;

int LoadSounds();
void format_sounds();
int AllocateSoundBankMemory();
void DeInitSoundBank();
extern char full_sound_data_path[];

int SwitchOffSound();
int SwitchOnSound();

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_BFSOUND_H_
/******************************************************************************/

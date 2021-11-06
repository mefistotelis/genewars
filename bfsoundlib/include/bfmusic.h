/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file bfmusic.h
 *     Header file for init_mus.cpp, free_mus.cpp.
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
#ifndef BFSOUNDLIB_BFMUSIC_H_
#define BFSOUNDLIB_BFMUSIC_H_

#ifdef __cplusplus
extern "C" {
#endif

extern int UseCurrentAwe32Soundfont;
extern int MusicInstalled;
extern int MusicType;
extern int CurrentTempo;
extern int SongCurrentlyPlaying;
extern int NumberOfSongs;
extern int Music;
extern int EndMusic;
extern int MusicData;
extern int MusicDriver;
extern int SongHandle;
extern int DangerMusicFadeHandle;
extern int Awe32SoundfontLoaded;
extern int DisableLoadMusic;
extern char unsigned ive_got_an_awe32;
extern int DisableDangerMusic;
extern int DangerMusicVolume;
extern int DangerMusicFadeActive;

int InitMusic();
int FreeMusic();

int fm_instrument_file_exists( char unsigned * );
extern int CurrentMusicMasterVolume;
extern int MusicAble;
extern int MusicActive;
extern int CurrentDangerMusicFadeDirection;
extern int DangerMusicVolumeChange;
extern int DangerMusicAble;
extern int Selected95MidiDevice;
extern int MusicInstallChoice;

int LoadMusic();
void format_music();
int AllocateMusicBankMemory();
void DeInitMusicBank();
extern char full_music_data_path[];

int StopMusic();

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_BFMUSIC_H_
/******************************************************************************/

/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file setup.hpp
 *     Header file for setup.cpp.
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
#ifndef BIO_SETUP_HPP_
#define BIO_SETUP_HPP_

enum ConfigInstall { // type=int8_t
    CFI_INTRO = 0,
    CFI_ANIMS,
    CFI_SOUNDS,
    CFI_LEVELS,
    CFI_DATA,
    MAX_CFI, // 5
};

struct AudioInitOptions { // sizeof=30
    CBYTE *IniPath; // offset=0
    CBYTE *SoundDriverPath; // offset=4
    CBYTE *SoundDataPath; // offset=8
    UWORD SoundType; // offset=12
    UWORD AbleFlags; // offset=14
    WORD SelectedWin95MidiDevice; // offset=16
    WORD SelectedWin95WaveDevice; // offset=18
    UBYTE MaxSamples; // offset=20
    UBYTE StereoOption; // offset=21
    UBYTE AutoScan; // offset=22
    UBYTE DisableDangerMusic; // offset=23
    UBYTE DisableLoadSounds; // offset=24
    UBYTE DisableLoadMusic; // offset=25
    UBYTE UseCurrentAwe32Soundfont; // offset=26
    UBYTE UseMultiMediaExtensions; // offset=27
    UBYTE InitStreamedSound; // offset=28
    UBYTE InitRedbookAudio; // offset=29
};

class Config { // sizeof=184
    void CDToSegment(ConfigInstall arg1);
    BBOOL IsCurrentDriveInstallDrive();
    BBOOL IsCurrentDriveCDROM();
    void SetToInstallDrive();
    void SetToCDROM();
    char * InstalledFile(char *arg1);
    char * InsertInstallDir(char *arg1);
    BBOOL GetConfigs();
    char cdROMDir[31];
    BBOOL installedSegments[4];
    char installDir[127];
    unsigned int installDriveNum;
    unsigned int cdDriveNum;
    ConfigLanguage language; // offset=0
    SoundConfig sound; // offset=1
};

void start_game();
void setup_game();
void reset_game();
void setup_map();
void setup_strings( char *, char * *, long );

#endif // BIO_SETUP_HPP_
/******************************************************************************/

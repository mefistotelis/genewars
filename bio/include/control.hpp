/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file control.hpp
 *     Header file for control.cpp.
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
#ifndef BIO_CONTROL_HPP_
#define BIO_CONTROL_HPP_

class SoundManager { // sizeof=159
    class SoundManager * SoundManager(class SoundManager *arg1);
    BBOOL CanSamplePlay(ULONG arg1, SampleID arg2, UBYTE arg3);
    UBYTE ComputePan(XY arg1);
    UBYTE ComputeVolume(XY arg1, UBYTE arg2);
    SoundRequest * GetSoundReq(Thing *arg1, SoundRequest *arg2, BBOOL arg3);
    SampleInfo * GetSampleInfo(ULONG arg1, SampleID arg2);
    void SubmitBufferedSound(char *arg1, SoundRequest *arg2);
    void SubmitSoundRequest(SoundRequest *arg1);
    void FreeRequest(SoundRequest *arg1);
    void StopSpeech();
    void StartSpeech(SoundRequest *arg1);
    void FadeOutAmbient(SoundRequest *arg1);
    void StopOldAndEstablishAmbient();
    void EstablishAmbient();
    UBYTE GetCDTrackPlaying();
    BBOOL IsCDPlaying();
    BBOOL IsNarratorSpeaking();
    UBYTE NumRequests();
    SoundRequest * GetSoundReq(Thing *arg1);
    SoundRequest * GetNextSoundReq(Thing *arg1, SoundRequest *arg2);
    SoundRequest * GetSoundReq(ULONG arg1, SampleID arg2);
    void KillAllSounds();
    void CloseAllSpeech();
    void StopCD();
    void PlayCDTrack(UBYTE arg1);
    void StopSound(UBYTE arg1, SampleID arg2);
    void RegisterFreedThing(Thing *arg1);
    void ProcessSounds();
    void Sound(UBYTE arg1, char *arg2, BufferSubmitMode arg3, UBYTE arg4, UBYTE arg5, UBYTE arg6, ULONG arg7, UBYTE arg8);
    void Sound(Thing *arg1, char *arg2, BufferSubmitMode arg3, UBYTE arg4, UBYTE arg5, UBYTE arg6, ULONG arg7);
    void Sound(UBYTE arg1, SampleID arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5, ULONG arg6, UBYTE arg7);
    void Sound(Thing *arg1, SampleID arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5, ULONG arg6);
    void ChangeAmbientVolume(UBYTE arg1);
    void SilenceAmbientSample();
    void ChangeAmbientSample(SampleID arg1);
    class SoundManager * SoundManager(XY arg1);
    SpeechFileStatus speech[17];
    UBYTE playingCDTrack;
    BBOOL narratorSpeaking;
    SBYTE samplesPlaying[93];
    SampleBufferQueue bufferQueue;
    char sampleToLoadInBuffer[63];
    UBYTE sampleBuffer[255];
    SoundRequest *bufferReq;
    UBYTE numRequests;
    UBYTE ambientSampleVolume;
    SampleID ambientSampleNum;
    SoundTag bumpTags[8];
    SoundRequest requests[8];
    XY origin;
};


class TextEntry { // sizeof=73
    class TextEntry * TextEntry(class TextEntry *arg1);
    BBOOL ValidChar(UBYTE arg1);
    class TextEntry * TextEntry();
    BBOOL PressedEscape();
    BBOOL PressedReturn();
    BBOOL IsEnteringText();
    BBOOL IsActive();
    UBYTE EnterText();
    void SetupText(CBYTE *arg1, UBYTE arg2, UBYTE arg3);
    CBYTE oldText[64];
    BBOOL alNum;
    TextEntryStatus status;
    UBYTE maxlen;
    UBYTE ucase;
    CBYTE *text;
};

struct TbIffPalette { // sizeof=4
    SLONG Loaded; // offset=0
    UBYTE Palette[255]; // offset=4
};

typedef struct TbIffPalette TbIffPalette;

struct TbIff { // sizeof=18
    UWORD Width; // offset=0
    UWORD Height; // offset=2
    ULONG FileSize; // offset=4
    TbIffPalette *Palette; // offset=8
    UWORD XOffset; // offset=12
    UWORD YOffset; // offset=14
    UBYTE XAspect; // offset=16
    UBYTE YAspect; // offset=17
};

typedef struct TbIff TbIff;

struct find_t { // sizeof=30
    char reserved[20]; // offset=0
    char attrib; // offset=21
    uint16_t wr_time; // offset=22
    uint16_t wr_date; // offset=24
    uint32_t size; // offset=26
    char name[255]; // offset=30
};

typedef struct find_t find_t;

void control_game();
void setup_controller();
char * MakeScreenShotName( char * );
void ResetAllInputs();

#endif // BIO_CONTROL_HPP_
/******************************************************************************/

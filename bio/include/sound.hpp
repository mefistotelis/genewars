/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file sound.hpp
 *     Header file for sound.cpp.
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
#ifndef BIO_SOUND_HPP_
#define BIO_SOUND_HPP_

#include "listsamp.h"
#include "bffile.h"
#include "xy.hpp"
#include "sndsample.hpp"

class Thing;

enum BufferSubmitMode { // type=int8_t
    BSM_IMMEDIATE = 0,
    BSM_QUEUED,
    BSM_ONECHANCE,
};

class SoundTag { // sizeof=6
public:
    ULONG id; // offset=0
    SampleID sampleNum; // offset=4
public:
    BBOOL IsNewSample();
    void SetNewSample();
};

class SoundRequest { // sizeof=23
public:
    SampleInfo *sampleInfo; // offset=0
    Thing *thing; // offset=4
    ULONG id; // offset=8
    ULONG pitch; // offset=12
    SampleID sampleNum; // offset=16
    UBYTE volume; // offset=18
    SBYTE loop; // offset=19
    UBYTE type; // offset=20
    UBYTE pan; // offset=21
    BBOOL makeSoft; // offset=22
public:
    void Invalidate();
    BBOOL Valid();
};

struct SpeechFileEntry { // sizeof=8
    SLONG offset; // offset=0
    SLONG size; // offset=4
};

class SpeechFileStatus { // sizeof=8
public:
    TbFileHandle handle; // offset=0
    SLONG numSamples; // offset=4
public:
    void Invalidate();
    BBOOL Valid();
};

class SampleBufferQueue { // sizeof=350
public:
    SoundRequest req[4];
    char names[4][64]; // offset=92
    UBYTE first; // offset=348
    UBYTE size; // offset=349
public:
    BBOOL Add(char *arg1, SoundRequest &arg2);
    char * GetNext(SoundRequest &arg1);
    void Reset();
};

class SoundManager { // sizeof=72607
public:
    XY origin;
    SoundRequest requests[9]; // offset=4
    SoundTag bumpTags[9]; // offset=211
    SampleID ambientSampleNum; // offset=265
    UBYTE ambientSampleVolume; // offset=267
    UBYTE numRequests; // offset=268
    SoundRequest *bufferReq; // offset=269
    UBYTE sampleBuffer[71680]; // offset=273
    char sampleToLoadInBuffer[64]; // offset=71953
    SampleBufferQueue bufferQueue; // offset=72017
    SBYTE samplesPlaying[94]; // offset=72367
    BBOOL narratorSpeaking; // offset=72461
    UBYTE playingCDTrack; // offset=72462
    SpeechFileStatus speech[18]; // offset=72463
public:
    SoundManager(XY cor1);
    void ChangeAmbientSample(SampleID arg1);
    void SilenceAmbientSample();
    void ChangeAmbientVolume(UBYTE arg1);
    void Sound(Thing *arg1, SampleID arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5, ULONG arg6);
    void Sound(UBYTE arg1, SampleID arg2, UBYTE arg3, UBYTE arg4, UBYTE arg5, ULONG arg6, UBYTE arg7);
    void Sound(Thing *arg1, char *arg2, BufferSubmitMode arg3, UBYTE arg4, UBYTE arg5, UBYTE arg6, ULONG arg7);
    void Sound(UBYTE arg1, char *arg2, BufferSubmitMode arg3, UBYTE arg4, UBYTE arg5, UBYTE arg6, ULONG arg7, UBYTE arg8);
    void ProcessSounds();
    void RegisterFreedThing(Thing *arg1);
    void StopSound(UBYTE arg1, SampleID arg2);
    void PlayCDTrack(UBYTE arg1);
    void StopCD();
    void CloseAllSpeech();
    void KillAllSounds();
    SoundRequest * GetSoundReq(ULONG arg1, SampleID arg2);
    SoundRequest * GetNextSoundReq(Thing *arg1, SoundRequest *arg2);
    SoundRequest * GetSoundReq(Thing *arg1);
    UBYTE NumRequests();
    BBOOL IsNarratorSpeaking();
    BBOOL IsCDPlaying();
    UBYTE GetCDTrackPlaying();
private:
    void EstablishAmbient();
    void StopOldAndEstablishAmbient();
    void FadeOutAmbient(SoundRequest *arg1);
    void StartSpeech(SoundRequest *arg1);
    void StopSpeech();
    void FreeRequest(SoundRequest *arg1);
    void SubmitSoundRequest(SoundRequest &arg1);
    void SubmitBufferedSound(char *arg1, SoundRequest &arg2);
    SampleInfo * GetSampleInfo(ULONG arg1, SampleID arg2);
    SoundRequest * GetSoundReq(Thing *arg1, SoundRequest *arg2, BBOOL arg3);
    UBYTE ComputeVolume(XY cor1, UBYTE arg2);
    UBYTE ComputePan(XY cor1);
    BBOOL CanSamplePlay(ULONG arg1, SampleID arg2, UBYTE arg3);
//public:
    //SoundManager(SoundManager const &arg1);
};

#endif // BIO_SOUND_HPP_
/******************************************************************************/

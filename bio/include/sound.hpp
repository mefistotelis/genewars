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

enum BufferSubmitMode { // type=int8_t
    BSM_IMMEDIATE = 0,
    BSM_QUEUED,
    BSM_ONECHANCE,
};

class SoundTag { // sizeof=6
    void SetNewSample();
    BBOOL IsNewSample();
    ULONG id; // offset=0
    SampleID sampleNum; // offset=4
};

class SoundRequest { // sizeof=23
    BBOOL Valid();
    void Invalidate();
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
};

class SpeechFileStatus { // sizeof=8
    BBOOL Valid();
    void Invalidate();
    TbFileHandle handle; // offset=0
    SLONG numSamples; // offset=4
};


typedef class SoundRequest SoundRequest;

typedef class SoundTag SoundTag;

class SampleBufferQueue { // sizeof=94
    void Reset();
    char * GetNext(SoundRequest *arg1);
    BBOOL Add(char *arg1, SoundRequest *arg2);
    UBYTE size;
    UBYTE first;
    char names[3][63];
    SoundRequest req[3];
};

typedef class SampleBufferQueue SampleBufferQueue;

typedef class SpeechFileStatus SpeechFileStatus;

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

class SpeechFileEntry { // sizeof=8
    SLONG offset; // offset=0
    SLONG size; // offset=4
};

typedef class SpeechFileEntry SpeechFileEntry;

char unsigned SoundTag::IsNewSample();
void SoundTag::SetNewSample();
void SoundRequest::Invalidate();
char unsigned SoundRequest::Valid();
void SpeechFileStatus::Invalidate();
char unsigned SpeechFileStatus::Valid();
char unsigned MapDisplay::IsExploredTerrainInView();
char unsigned IFCBase::IsCurrent();
void SoundManager::StopSpeech();
void SoundManager::FreeRequest( SoundRequest * );
near SoundManager::SoundManager( XY & );
void SoundManager::PlayCDTrack( char unsigned );
void SoundManager::StopCD();
void SoundManager::StartSpeech( SoundRequest * );
void SoundManager::CloseAllSpeech();
void SoundManager::KillAllSounds();
void SoundManager::StopSound( char unsigned, SampleID );
SampleInfo * SoundManager::GetSampleInfo( long unsigned, SampleID );
SoundRequest * SoundManager::GetSoundReq( long unsigned, SampleID );
SoundRequest * SoundManager::GetSoundReq( Thing *, SoundRequest *, char unsigned );
void SoundManager::RegisterFreedThing( Thing * );
void SoundManager::ChangeAmbientSample( SampleID );
void SoundManager::SilenceAmbientSample();
void SoundManager::ChangeAmbientVolume( char unsigned );
char unsigned SoundManager::ComputeVolume( XY, char unsigned );
char unsigned SoundManager::ComputePan( XY );
void SoundManager::ProcessSounds();
void SoundManager::SubmitSoundRequest( SoundRequest & );
char unsigned SoundManager::CanSamplePlay( long unsigned, SampleID, char unsigned );
void SoundManager::Sound( Thing *, SampleID, char unsigned, char unsigned, char unsigned, long unsigned );
void SoundManager::Sound( char unsigned, SampleID, char unsigned, char unsigned, char unsigned, long unsigned, char unsigned );
void SoundManager::Sound( Thing *, char *, BufferSubmitMode, char unsigned, char unsigned, char unsigned, long unsigned );
void SoundManager::Sound( char unsigned, char *, BufferSubmitMode, char unsigned, char unsigned, char unsigned, long unsigned, char unsigned );
void SoundManager::SubmitBufferedSound( char *, SoundRequest & );
char unsigned SampleBufferQueue::Add( char *, SoundRequest & );
char * SampleBufferQueue::GetNext( SoundRequest & );

#endif // BIO_SOUND_HPP_
/******************************************************************************/

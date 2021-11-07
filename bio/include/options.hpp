/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file options.hpp
 *     Header file for options.cpp.
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
#ifndef BIO_OPTIONS_HPP_
#define BIO_OPTIONS_HPP_


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

typedef class SoundRequest SoundRequest;

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

typedef struct MyGadget MyGadget;

class HelpDraw { // sizeof=26
    void GenericHelpDraw(MyGadget *arg1, char *arg2);
    void Draw(MyGadget *arg1, char *arg2);
    void SetColors(UBYTE arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4);
    void DislodgeAndReset();
    void Dislodge();
    SWORD hx; // offset=0
    SWORD hy; // offset=2
    SWORD hWidth; // offset=4
    SLONG turn; // offset=6
    SLONG length; // offset=10
    ULONG id; // offset=14
    UBYTE pen; // offset=18
    UBYTE outline; // offset=19
    UBYTE fill; // offset=20
    UBYTE boxOutline; // offset=21
    MyGadget *gad; // offset=22
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

class IFCOptions : IFCBase { // sizeof=59
    class IFCOptions * IFCOptions(class IFCOptions *arg1);
    void FindWhichSlotsAreUsed();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    class IFCOptions * IFCOptions(MyGadget *arg1);
    void (**__vfptr)();
    unsigned int *__vbptr;
    BBOOL savePausedState;
    SBYTE saveTextEntrySlot;
    MyMinSprite mMs;
    char slotNames[7][31];
    BBOOL slotUsed[7];
    TbSprite *sprites;
    MySprite *spr;
    MyGadget *gad;
    SBYTE selectedSlot; // offset=4
    MyAnimBank *anb; // offset=5
    IFCBase *previousIFC; // offset=9
};

char unsigned SoundManager::IsCDPlaying();
char * Config::InsertInstallDir( char * );
char unsigned Config::IsCurrentDriveCDROM();
void IFCOptions::PlugIn();
void IFCOptions::PullOut();
void IFCOptions::Draw();
void IFCOptions::Update();
void IFCOptions::FindWhichSlotsAreUsed();

#endif // BIO_OPTIONS_HPP_
/******************************************************************************/

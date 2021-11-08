/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file effect.hpp
 *     Header file for effect.cpp.
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
#ifndef BIO_EFFECT_HPP_
#define BIO_EFFECT_HPP_


class Point { // sizeof=12
    void Set(SLONG arg1, SLONG arg2, SLONG arg3);
    SLONG X; // offset=0
    SLONG Y; // offset=4
    SLONG Z; // offset=8
};

typedef class Point Point;

class FlickerStuff { // sizeof=193
    BBOOL Valid();
    void Invalidate();
    Point uppers[15]; // offset=0
    BBOOL uAbove[15]; // offset=128
    BBOOL lAbove[15]; // offset=144
    SWORD effects[15]; // offset=160
    BBOOL valid; // offset=192
    Point lowers[15]; // offset=193
};

typedef class FlickerStuff FlickerStuff;

class FlickerHandler { // sizeof=8
    void Free(UBYTE arg1);
    SBYTE Create();
    FlickerStuff flickers[7]; // offset=0
};

typedef class FlickerHandler FlickerHandler;

typedef class Player Player;


class Effect : MovingThing { // sizeof=81
    class Effect * operator=(class Effect *arg1);
    class Effect * Effect(class Effect *arg1);
    class Effect * Effect();
    void DrawZoneMarker(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4);
    UBYTE MakeFire(GridTile *arg1, SLONG arg2);
    UBYTE CreateNewEffectFromOld(EffectStats *arg1);
    BBOOL operator==(Effect *arg1);
    void KillSoundOffTag(XY arg1, SampleID arg2, BBOOL arg3);
    SLONG WriteBuffer(Effect **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    SLONG ReadBuffer(Effect **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    void UpdateAll();
    void InitArray();
    Effect * Create(EffectType arg1, XY arg2, SLONG arg3, Vector *arg4, UWORD arg5, UBYTE arg6, SBYTE arg7, Thing *arg8);
    Plant * StripDragTree(GridTile *arg1);
    EtherealZone * GetEZone();
    void UnpackSpec(Specialist *arg1);
    void PackSpec(Specialist *arg1);
    BBOOL IsPackSpecValid();
    void Free();
    BBOOL IsChunkyDeath();
    BBOOL IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    BBOOL IsMovable();
    BBOOL IsASplasher();
    void DrawOnMap(SWORD arg1, SWORD arg2);
    BBOOL IsDead();
    UBYTE Update();
    void Resync();
    void Write(SLONG *arg1);
    void Read(SLONG *arg1);
    void (**__vfptr)();
    MyMinSprite ezStarMMs;
    EffectType type; // offset=69
    SBYTE state; // offset=70
    ThingIDX thing; // offset=71
    SWORD pixCount; // offset=74
    UBYTE power; // offset=76
    MyAnimBank *anb; // offset=77
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



class ShotHitScan : RangeScanner { // sizeof=62
    class ShotHitScan * ShotHitScan(class ShotHitScan *arg1);
    void PerGrid();
    class ShotHitScan * ShotHitScan(Effect arg1, SLONG arg2);
    void (**__vfptr)();
    ULONG bestRange;
    ULONG sqShotRadius;
    Thing *creator;
    Effect shot;
    Thing *hitThing; // offset=41
    BBOOL ricochet; // offset=45
};

class FireScan : RangeScanner { // sizeof=45
    class FireScan * FireScan(class FireScan *arg1);
    void PerGrid();
    class FireScan * FireScan(Effect arg1);
    void (**__vfptr)();
    Effect fire;
};

class MonolithHitScan : RangeScanner { // sizeof=53
    class MonolithHitScan * MonolithHitScan(class MonolithHitScan *arg1);
    void PerGrid();
    class MonolithHitScan * MonolithHitScan(Effect arg1);
    void (**__vfptr)();
    ULONG bestRange;
    Effect mono;
    Thing *hitThing; // offset=41
};

class StasisBoltScan : RangeScanner { // sizeof=50
    class StasisBoltScan * StasisBoltScan(class StasisBoltScan *arg1);
    void PerGrid();
    class StasisBoltScan * StasisBoltScan(Effect arg1, SLONG arg2);
    void (**__vfptr)();
    ULONG sqShotRadius;
    Effect shot;
    BBOOL hitThing; // offset=41
};

#endif // BIO_EFFECT_HPP_
/******************************************************************************/

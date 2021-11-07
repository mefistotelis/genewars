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

enum BufferSubmitMode { // type=int8_t
    BSM_IMMEDIATE = 0,
    BSM_QUEUED,
    BSM_ONECHANCE,
};

typedef enum BufferSubmitMode BufferSubmitMode;

enum SampleID { // type=int16_t
    S_INVALID = 0,
    S_B1OUTERSPACE,
    S_B1FADEUP,
    S_B1LINES,
    S_B1SMALLSYSTEMSCALEUP,
    S_B1SYSTEMSCALEUP, // 5
    S_B1EXPANDBOX,
    S_B1SMALLSYSTEMFLASH,
    S_B1LINES2,
    S_B1TARGETLOCK,
    S_B1TEXTSOUND1, // 10
    S_B1TEXTSOUND2,
    S_B1HYPERSPACE,
    S_LASERSHIELD,
    S_LASERDOWN,
    S_SPEECH, // 15
    S_EAT1,
    S_EAT2,
    S_EAT3,
    S_BLOCK,
    S_BUTTON1, // 20
    S_BUTTON2,
    S_BUTTON3,
    S_BUTTON4,
    S_BUTTON5,
    S_BUTTON6, // 25
    S_POPGUN,
    S_BURP,
    S_GROAN1,
    S_GROAN2,
    S_GROAN3, // 30
    S_SCREAM1,
    S_LASERUP,
    S_STUNSHOT,
    S_CREAK2,
    S_MOTOR, // 35
    S_MOTOREND,
    S_SHIPINT,
    S_CHEAT,
    S_LAUNCHER,
    S_FALL, // 40
    S_EARTHMOV,
    S_TREESHAKE,
    S_FIRE,
    S_LAUNCHNO,
    S_EXPSMALL2, // 45
    S_EXPLARGE2,
    S_MOTORON,
    S_MOTOROFF,
    S_SAWMILL,
    S_DRILL, // 50
    S_CHAINSAW,
    S_PUMPFILL,
    S_WINOPEN,
    S_WINEND,
    S_RADIO, // 55
    S_SPACESHIP,
    S_STUNNED,
    S_WARNING,
    S_SPLASH,
    S_DRIP, // 60
    S_SPARK,
    S_SHIELDARC,
    S_PELLETPOOF,
    S_STATIC,
    S_NOISE1, // 65
    S_NOISE2,
    S_NOISE3,
    S_BIRTH,
    S_DINOYES,
    S_CRABYES, // 70
    S_FROGYES,
    S_BIRDYES,
    S_MULEYES,
    S_HAMMER,
    S_SKID, // 75
    S_SWITCH,
    S_POWERON,
    S_POWEROFF,
    S_ALARM,
    S_LANDING, // 80
    S_DOCKING,
    S_BLASTOFF,
    S_DRONE,
    S_2001,
    S_GENELAB, // 85
    S_RESEARCHBEAM,
    S_HEALBEAM,
    S_HITBUILDING,
    S_BIRDATTACK,
    S_FROGATTACK, // 90
    S_MULEATTACK,
    S_CRABATTACK,
    S_DINOATTACK,
    S_MAXSAMPLES,
    S_TREEHIT, // 95
    S_AXECHOP,
    S_LASLARGE,
    S_LASMED,
    S_LASSMALL,
    S_HITSPLAT, // 100
    S_EXPLARGE,
    S_EXPMED,
    S_EXPSMALL,
    S_BARREN,
    S_DESERT, // 105
    S_LUSH,
    S_WAVES,
};

typedef enum SampleID SampleID;

typedef class Player Player;



class SoundTag { // sizeof=6
    void SetNewSample();
    BBOOL IsNewSample();
    ULONG id; // offset=0
    SampleID sampleNum; // offset=4
};

struct SampleInfo { // sizeof=25
    HSAMPLE SampleHandle; // offset=0
    SLONG SampleVolume; // offset=4
    UWORD SamplePitch; // offset=8
    UWORD SamplePan; // offset=10
    UWORD FadeToVolume; // offset=12
    ULONG SourceID; // offset=14
    SWORD SampleNumber; // offset=18
    UBYTE FadeState; // offset=20
    UBYTE FadeStopFlag; // offset=21
    UBYTE FadeStep; // offset=22
    UBYTE UserFlag; // offset=23
    UBYTE SampleType; // offset=24
};

typedef struct SampleInfo SampleInfo;

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

class FlatMap { // sizeof=6
    void DrawOver(SWORD arg1, SWORD arg2, UBYTE arg3);
    void Map2Screen(XY *arg1);
    void Update(BBOOL arg1);
    GridTile * XYOn(SWORD arg1, SWORD arg2, XY *arg3);
    BBOOL Valid();
    void CopyRegionFrom(SLONG arg1, SLONG arg2, SLONG arg3, SLONG arg4, SLONG arg5, SLONG arg6);
    void Draw(UBYTE arg1, SWORD arg2, SWORD arg3);
    void Draw(UBYTE arg1);
    void FreeMe();
    void UpdateGridTile(GridTile *arg1);
    void MakeRadiationMap(UBYTE arg1);
    void MakeEnergyMap(UBYTE arg1);
    void MakeLifeformMap(UBYTE arg1);
    void MakeTopographyMap(UBYTE arg1);
    void ReDraw(UBYTE arg1);
    PixBuffer * Init(Planet *arg1, UBYTE arg2, SWORD arg3, SWORD arg4, UBYTE arg5, BBOOL arg6);
    UBYTE mapMode;
    BBOOL useExplored;
    PixBuffer *pixBuffer;
};

typedef class FlatMap FlatMap;

class IsoMapBuffer { // sizeof=12
    void SetNewXlatedTop(UBYTE arg1, UBYTE arg2);
    void SetNewTop(UBYTE arg1, UBYTE arg2);
    void Draw(UBYTE arg1);
    void FreeMe();
    BBOOL Valid();
    BBOOL GetXYFromMap(XY arg1, XY *arg2);
    GridTile * XYOn(SWORD arg1, SWORD arg2, XY *arg3);
    void ProjectPixelOnWScreen(XY arg1, UBYTE arg2);
    void UpdateXY(XY arg1);
    void ReDraw();
    void Update();
    PixBuffer * Init(FlatMap *arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4, SWORD arg5, SWORD arg6);
    SBYTE fadeDelta;
    UBYTE topY;
    UBYTE topX;
    FlatMap *flatMap;
    PixBuffer *pixBuffer;
    SBYTE fadeLevel; // offset=0
};

typedef class IsoMapBuffer IsoMapBuffer;

class MapBucketThing { // sizeof=10
    SWORD next; // offset=0
    SWORD x; // offset=2
    SWORD yDev; // offset=4
    Thing *thing; // offset=6
};

typedef class MapBucketThing MapBucketThing;

class MapDisplay { // sizeof=217
    void RegisterFoundationGrid(XY arg1, UBYTE arg2);
    void SelectAmbientSound();
    void SetRefreshColumn(UBYTE arg1);
    BBOOL RegisterPoint(XY arg1, SBYTE arg2);
    void DrawRefreshColumns();
    void DrawSingleColumn(UBYTE arg1);
    void DrawRightColumn(UBYTE arg1);
    void DrawLeftColumn(UBYTE arg1);
    void DrawBottomRow(SWORD arg1);
    void DrawTopRow(SWORD arg1);
    void DrawMapSprites();
    void FragCopyBScreenToWScreen();
    void draw_delta_column(SLONG arg1, SLONG arg2, SLONG arg3, SLONG *arg4, SLONG *arg5);
    void draw_column(SLONG arg1, SLONG arg2, SLONG arg3);
    BBOOL IsExploredTerrainInView();
    BBOOL IsGlassBuildings();
    void ToggleGlassBuildings();
    BBOOL IsDrawFoundations();
    void ClearDrawFoundations();
    void SetDrawFoundations();
    void ClearModified();
    BBOOL IsModified();
    void SetModified();
    void ClearRegisteredRightClick();
    void SetRegisteredRightClick();
    BBOOL IsRegisteredRightClick();
    BBOOL HasJustScrolled();
    BBOOL IsScrolling();
    void SetScrolled();
    BBOOL CanSelectThing();
    void ClearCanSelectThing();
    void SetCanSelectThing();
    BBOOL IsFullScreen();
    void ClearFullScreen();
    void SetFullScreen();
    BBOOL IsOnScreen(SWORD arg1, SWORD arg2);
    void DrawGlassTile(XY arg1, UBYTE arg2, BBOOL arg3);
    void RefreshFoundationGrids();
    void SetPanelRefreshZones();
    void RefreshRadar();
    void ProjectLine(XY arg1, XY arg2, ULONG arg3, MySprite *arg4, MyMinSprite *arg5);
    void ProjectCircle(XY arg1, ULONG arg2, UBYTE arg3, MySprite *arg4, BBOOL arg5, MyMinSprite *arg6);
    void StaticSetZones();
    XY GetDisplayCenter();
    void CenterOn(XY arg1);
    void RegisterBlockChange(XY arg1);
    void RegisterPointChange(XY arg1);
    void RegisterTopoPointChange(XY arg1);
    void RefreshFromBScreen();
    BBOOL ScrollHandler();
    void ForceRedraw();
    void ResetForPullOut();
    MapBucketThing * PutThingInBucket(Thing *arg1);
    void Draw();
    void Free();
    void Init();
    BBOOL needToDrawSprites;
    BBOOL exploredTerrainInView;
    SBYTE glassBuildingCounter;
    UBYTE scrollCount;
    XY selectedXY;
    MapRefreshColumn refreshColumns[19];
    SWORD numBucketThings;
    MapBucketThing *buckets[223];
    MapBucketThing bucketThings[255];
    Thing *selectedThing;
    XY other;
    XY win; // offset=0
    XY oldWin; // offset=4
    XY scroll; // offset=8
    XY cursor; // offset=12
    XY center; // offset=16
    GridTile *ptrG; // offset=20
    Thing *thing; // offset=24
    UBYTE flags; // offset=28
    UWORD leftEdge; // offset=29
    UWORD selectFilter; // offset=31
    FlatMap flatMap; // offset=33
    IsoMapBuffer isoMap; // offset=39
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

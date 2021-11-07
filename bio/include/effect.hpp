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

enum EventHelpType { // type=int8_t
    EVH_NULL = 0,
    EVH_EXTRACTOR,
    EVH_FIRST_STAGE_DISTRIBUTOR,
    EVH_SECOND_STAGE_DISTRIBUTOR,
    EVH_THIRD_STAGE_DISTRIBUTOR,
    EVH_PHOTON_PROCESSOR, // 5
    EVH_SPECTRAL_SPONGE,
    EVH_EM_TRAP,
    EVH_LANDING_PAD,
    EVH_ROTATOR,
    EVH_WIND_PROCESSOR, // 10
    EVH_ATMOSPHERIC_GENERATOR,
    EVH_PULPER,
    EVH_PULVERISER,
    EVH_MASS_PULVERISER,
    EVH_RECYCLING_PLANT, // 15
    EVH_RECYCLOTRON,
    EVH_GOOP_FACTORY,
    EVH_TECH_FACILITY,
    EVH_FUSION_BATTERY,
    EVH_FUSION_GENERATOR, // 20
    EVH_SHIELD_GENERATOR,
    EVH_SANCTUARY_GENERATOR,
    EVH_DENIAL_DOME,
    EVH_ETHEREAL_DETECTOR,
    EVH_ETHEREAL_SCOPE, // 25
    EVH_ETHEREAL_OBSERVATORY,
    EVH_STUNNER_TURRET,
    EVH_ZAP_TURRET,
    EVH_BLASTER_TURRET,
    EVH_GOOP_VAT, // 30
    EVH_GENE_POD,
    EVH_GENE_MACHINE,
    EVH_GENE_LAB,
    EVH_ARCHITECT,
    EVH_FARMER, // 35
    EVH_SCIENTIST,
    EVH_SHEPHERD,
    EVH_DINO,
    EVH_CRAB,
    EVH_FROG, // 40
    EVH_BIRD,
    EVH_MULE,
    EVH_HYBRID_RESTRICTION,
    EVH_PLANTS,
    EVH_ESCOPE = 56,
    EVH_MONOLITH,
    EVH_SPECIALISTMONO,
    EVH_CREATUREMONO,
    EVH_DRAG, // 60
    EVH_HELP,
    EVH_POWERGRAPH,
    EVH_GOOPMETER,
    EVH_SPECPANEL,
    EVH_BUILDINGPANEL, // 65
    EVH_CREATUREPANEL,
    EVH_HERDEAT,
    EVH_HERDFIGHT,
    EVH_HERDBREED,
    EVH_YOUAREBAD, // 70
    EVH_ACTIVATE,
    EVH_UPGRADE,
    EVH_BADOMETER,
    EVH_SCOREORAMA,
    EVH_SELECTTEAM, // 75
    EVH_BIOMASSZONE,
    EVH_MULEZONE,
    EVH_CRABZONE,
    EVH_DINOZONE,
    EVH_FROGZONE, // 80
    EVH_BIRDZONE,
    EVH_TEMPLEZONE,
    EVH_HYBRID,
    MAX_EVH,
};

typedef enum EventHelpType EventHelpType;

enum EventType { // type=int8_t
    EV_DROP_LAB = 0,
    EV_ETHEREAL,
    EV_METEOR_STORM,
    EV_BIG_BANG,
    EV_SHIELDARCUP,
    EV_SHIELDARCDOWN, // 5
    EV_ETHEREAL_SCOUT,
    EV_LASER_BLAST,
    EV_SMUGGLER,
};

typedef enum EventType EventType;

enum EffectStatType { // type=int8_t
    ET_PLAYONCE = 0,
    ET_COLLIDE,
    ET_TIMED,
    ET_BUBBLE,
    ET_COLLIDETIMED,
    ET_INDEFINITE, // 5
    ET_PERMANENT,
};

typedef enum EffectStatType EffectStatType;

enum EffectType { // type=uint8_t
    EF_EXPLOSION_1 = 0,
    EF_EXPLOSION_2,
    EF_EXPLOSION_3,
    EF_EXPLOSION_4,
    EF_EXPLOSION_5,
    EF_EXPLOSION_6, // 5
    EF_TURBO,
    EF_CHOP,
    EF_TIMBER,
    EF_RADIATION,
    EF_TELEPORT, // 10
    EF_LASER,
    EF_LASER_TAIL,
    EF_METEOR,
    EF_SHARD_1,
    EF_SHARD_2, // 15
    EF_SHARD_3,
    EF_FIRE,
    EF_GRENADE,
    EF_BOLT,
    EF_BOLT_BLAST, // 20
    EF_BUBBLE,
    EF_RIPPLE,
    EF_TURRET_SHOT_1,
    EF_TURRET_SHOT_2,
    EF_TURRET_SHOT_3, // 25
    EF_ETHEREAL,
    EF_DEBRIS_1,
    EF_DEBRIS_2,
    EF_DEBRIS_3,
    EF_DEBRIS_4, // 30
    EF_DEBRIS_5,
    EF_BLOOD,
    EF_SPARK,
    EF_FLAME_BREATH,
    EF_STUN, // 35
    EF_DRAGWOODDISK,
    EF_GUNSHOT1,
    EF_GUNSHOT2,
    EF_GUNSHOT3,
    EF_GUNSHOT4, // 40
    EF_STASISSHOT1,
    EF_STASISSHOT2,
    EF_STASISSHOT3,
    EF_PELLETPOOF,
    EF_POD, // 45
    EF_SMOKE,
    EF_SPARKLE,
    EF_SPLASH,
    EF_SMUGGLER,
    EF_DEMO_CHARGE, // 50
    EF_DEMO_EXPLOSION,
    EF_SPIT,
    EF_SPIT_HIT,
    EF_ETHEREAL_LEAVE,
    EF_CHUNK_1, // 55
    EF_CHUNK_2,
    EF_CHUNK_3,
    EF_CHUNK_4,
    EF_MONOLITH,
    EF_GOODSPARKLE, // 60
    EF_BADSPARKLE,
    EF_FIRE_SPIT,
    EF_NAPALM,
    EF_ZONEMARKER,
    EF_SHIELDHITARC, // 65
    EF_SHIELDFLICKER,
    EF_DRAGTREE,
    EF_FREEDRAGTREE,
    EF_DEADSPECIALIST,
    EF_SOUNDTAG, // 70
    EF_END,
    EF_LAST_SPRITE_EFFECT,
    EF_NULL = 255,
};

typedef enum EffectType EffectType;

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



typedef class Effect Effect;

class EffectStats { // sizeof=6
    EffectStatType type; // offset=0
    BBOOL gravity; // offset=1
    UBYTE priority; // offset=2
    EffectType makes; // offset=3
    BBOOL movable; // offset=4
    BBOOL splash; // offset=5
};

typedef class EffectStats EffectStats;

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

class RangeScan { // sizeof=20
    class RangeScan * RangeScan(class RangeScan *arg1);
    void Init(XY *arg1, ULONG arg2, BBOOL arg3);
    class RangeScan * RangeScan(XY *arg1, ULONG arg2, BBOOL arg3);
    XY tgt;
    SWORD yHi;
    SWORD yLo;
    SWORD xHi;
    SWORD xLo;
    XY xy;
    SWORD yD;
    SWORD xD;
};

class RangeScanner : RangeScan { // sizeof=41
    class RangeScanner * RangeScanner(class RangeScanner *arg1);
    void PerGrid();
    void Do();
    class RangeScanner * RangeScanner(XY arg1, ULONG arg2);
    void (**__vfptr)();
    ULONG maxRange;
    ULONG squareMaxRange;
    ULONG squareRange;
    GridTile *g;
    BBOOL foundAThing; // offset=20
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

typedef class StasisBoltScan StasisBoltScan;

typedef struct PolyPoint PolyPoint;

typedef class ShotHitScan ShotHitScan;

typedef class FireScan FireScan;

typedef class MonolithHitScan MonolithHitScan;

void Point::Set( long, long, long );
char unsigned SoundManager::__defarg();
SoundRequest * SoundManager::GetSoundReq( Thing * );
short Thing::__defarg();
char unsigned Thing::__defarg();
char unsigned Thing::IsEnemy( Thing * );
long MovingThing::Altitude();
long MovingThing::AltAboveGround();
char unsigned MovingThing::IsMovable();
char unsigned MovingThing::IsStaticallyDrawn();
char unsigned MovingThing::IsMovingThing();
char unsigned MovingThing::IsVectorable();
char unsigned MovingThing::IsScreenPointInside( short, short, short, short );
void MovingThing::Init( ThingType, XY, char unsigned, short, long, Vector const & );
char unsigned MovingThing::ShapeFacing();
short MovingThing::MaxMoveSpeed();
void MovingThing::StopMoving();
void MovingThing::NewGridUpdate( GridTile * );
char unsigned MovingThing::NeedToAvoid( GridTile * );
char unsigned MovingThing::IsASplasher();
void MovingThing::ChangeMove( ComponentVector const & );
char unsigned MovingThing::IsMoving( short );
void SmartMovingThing::Init( ThingType, XY, char unsigned, short, long, Vector const & );
void SmartMovingThing::StartAMove( XY );
void SmartMovingThing::StopMoving();
char unsigned SmartMovingThing::IsDoneMovingToTgt();
char unsigned SmartMovingThing::IsStuck();
char unsigned SmartMovingThing::IsFlying();
char unsigned SmartMovingThing::IsIgnoreClutter();
void SmartMovingThing::ClearRescanPath();
void SmartMovingThing::ClearMoveToTgt();
char unsigned Creature::CanArmor();
char unsigned PlSpec::IsDead();
char unsigned PlSpec::IsScreenPointInside( short, short, short, short );
char unsigned PlSpec::IsMovable();
char unsigned Effect::IsPackSpecValid();
void Effect::UnpackSpec( Specialist & );
char unsigned Thing::TToggle4();
void MovingThing::DrawOnMap( short, short );
void Event::Free();
near ShotHitScan::ShotHitScan( Effect &, long );
void ShotHitScan::PerGrid();
near FireScan::FireScan( Effect & );
void FireScan::PerGrid();
near MonolithHitScan::MonolithHitScan( Effect & );
void MonolithHitScan::PerGrid();
near StasisBoltScan::StasisBoltScan( Effect &, long );
void StasisBoltScan::PerGrid();
void FlickerStuff::Invalidate();
char unsigned FlickerStuff::Valid();
void FlickerHandler::Free( char unsigned );
Effect * Effect::Create( EffectType, XY, long, Vector const &, short unsigned, char unsigned, char signed, Thing * );
void Effect::Free();
void Effect::InitArray();
void Effect::Resync();
void Effect::Read( long & );
void Effect::Write( long & );
void Effect::DrawOnMap( short, short );
char unsigned Effect::MakeFire( GridTile *, long );
char unsigned Effect::IsChunkyDeath();
char unsigned Effect::IsScreenPointInside( short, short, short, short );
long Effect::ReadBuffer( Effect * *, long, long, BioGame & );
long Effect::WriteBuffer( Effect * *, long, long, BioGame & );
void Effect::DrawZoneMarker( long, long, long, long );
Plant * Effect::StripDragTree( GridTile * );
void Effect::KillSoundOffTag( XY, SampleID, char unsigned );
char unsigned Effect::CreateNewEffectFromOld( EffectStats const & );
char unsigned Effect::Update();
void Effect::UpdateAll();
char signed FlickerHandler::Create();
char unsigned Event::CreateSphereRing( Point *, char unsigned *, char unsigned );
Event * Event::Create( char unsigned, XY, char unsigned, Thing * );
void Event::InitArray();
void Event::Resync();
void Event::Read( long & );
void Event::Write( long & );
long Event::ReadBuffer( Event * *, long, long, BioGame & );
near PlSpec::PlSpec();
near SmartMovingThing::SmartMovingThing();
near MovingThing::MovingThing();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
long Event::WriteBuffer( Event * *, long, long, BioGame & );
char unsigned Event::Update();
void Event::UpdateAll();
char unsigned Effect::operator ==( Effect * );
char unsigned Event::operator ==( Event * );

#endif // BIO_EFFECT_HPP_
/******************************************************************************/

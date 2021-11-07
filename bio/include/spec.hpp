/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file spec.hpp
 *     Header file for spec.cpp.
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
#ifndef BIO_SPEC_HPP_
#define BIO_SPEC_HPP_

enum { // type=int8_t
    SCIE_SPR_STUDY = 13,
    SCIE_SPR_HEAL,
    SCIE_SPR_SHOOT, // 15
};

enum { // type=int8_t
    SHEP_SPR_HERD = 13,
    SHEP_SPR_SHOOT,
    SHEP_SPR_SHOOTSTASIS = 22,
};

enum { // type=int8_t
    FARM_SPR_HARVEST = 13,
    FARM_SPR_PLANT,
    FARM_SPR_CHOP, // 15
};

enum { // type=int8_t
    ARCH_SPR_FOUNDATION = 13,
    ARCH_SPR_PELLET,
    ARCH_SPR_BUILD, // 15
    ARCH_SPR_DRONE,
    ARCH_SPR_BOOM,
};

enum { // type=int8_t
    FNDERR_TOOCLOSE = 1,
    FNDERR_WATER,
    FNDERR_TREES,
    FNDERR_TIRED,
};

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

typedef uint8_t BBOOL;

enum { // type=int8_t
    CL_BLACK = 0,
    CL_WHITE,
    CL_RED,
    CL_GREEN,
    CL_BLUE,
    CL_YELLOW, // 5
    CL_CYAN,
    CL_MAGENTA,
};

typedef void *NSERV_HANDLE;

typedef void *CALLBACK;

typedef UWORD *PUWORD;

typedef uint8_t UBYTE;

typedef UBYTE *PUBYTE;

typedef uint32_t clock_t;

typedef void (*onexit_t)();

typedef unsigned int ino_t;

typedef unsigned int size_t;

typedef uint32_t time_t;

typedef uint16_t wchar_t;

struct TbSprite { // sizeof=6
    SBYTE *Data; // offset=0
    UBYTE SWidth; // offset=4
    UBYTE SHeight; // offset=5
};

class Specialist { // sizeof=36
    void ClearPlanetside();
    void SetPlanetside();
    BBOOL IsPlanetside();
    void ClearOnTeam();
    void SetOnTeam();
    BBOOL IsOnTeam();
    char * Name(char *arg1);
    void Invalidate();
    BBOOL Valid();
    char name[19]; // offset=0
    UBYTE sex; // offset=20
    PlayerRace race; // offset=21
    SpecialistClass specClass; // offset=22
    SBYTE ability; // offset=23
    SBYTE resolve; // offset=24
    SBYTE strength; // offset=25
    SBYTE currentStrength; // offset=26
    SBYTE currentResolve; // offset=27
    ULONG landings; // offset=28
    ULONG flags; // offset=32
};

typedef class Specialist Specialist;

typedef class Player Player;


class PowerGraph { // sizeof=45
    UBYTE PowerToColor(SWORD arg1);
    void Draw(SLONG arg1, SLONG arg2);
    void Update(SWORD arg1, SWORD arg2, SWORD arg3);
    UBYTE index;
    SWORD lo[49];
    SWORD hi[49];
    SWORD history[49];
};

typedef class PowerGraph PowerGraph;


class PSpecies { // sizeof=32
    char name[15]; // offset=0
    SBYTE terrain[7]; // offset=16
    UBYTE seedTime; // offset=24
    UBYTE range; // offset=25
    UBYTE maxNeighbours; // offset=26
    UBYTE lifeSpan; // offset=27
    UBYTE food; // offset=28
    UBYTE wood; // offset=29
    UBYTE seeds; // offset=30
    UBYTE density; // offset=31
};

typedef class PSpecies PSpecies;

struct CreatureSpeciesForHerd { // sizeof=1
    uint8_t player; // offset=0
    uint8_t species; // offset=1
};

typedef struct CreatureSpeciesForHerd CreatureSpeciesForHerd;

struct BuildingStage { // sizeof=1
    uint8_t player; // offset=0
    uint8_t stage; // offset=1
};

typedef struct BuildingStage BuildingStage;

class EventHelp { // sizeof=150
    BBOOL IsForceDisplay();
    void Log(EventHelpType arg1, BBOOL arg2);
    BBOOL eventLog[149]; // offset=0
};

typedef class EventHelp EventHelp;

class CowboyIFC { // sizeof=15
    SBYTE go; // offset=0
    UBYTE gunType; // offset=1
    SWORD hits; // offset=2
    SWORD misses; // offset=4
    SWORD shots; // offset=6
    SWORD firingArc; // offset=8
    SLONG gunRange; // offset=10
    CreatureSpecies studySpecies; // offset=14
};

typedef class CowboyIFC CowboyIFC;


struct TbLoadFiles { // sizeof=44
    CBYTE FName[27]; // offset=0
    void **Start; // offset=28
    void **SEnd; // offset=32
    ULONG SLength; // offset=36
    UWORD Flags; // offset=40
    UWORD Spare; // offset=42
};

typedef struct TbLoadFiles TbLoadFiles;





typedef class PlSpec PlSpec;

class GunSpec { // sizeof=7
    SWORD shotSpeed; // offset=0
    SWORD shotLifeInTurns; // offset=2
    SWORD reloadTime; // offset=4
    UBYTE shotEffect; // offset=6
};

typedef class GunSpec GunSpec;

class PlSpec : SmartMovingThing { // sizeof=200
    class PlSpec * operator=(class PlSpec *arg1);
    class PlSpec * PlSpec(class PlSpec *arg1);
    class PlSpec * PlSpec();
    void SetAltSpecialFlipToThing(Thing *arg1);
    void SetWaiting();
    void BuilderSetDemoCharges(SBYTE arg1);
    void StartLumberjackChopping(Plant *arg1);
    GunSpec * GetGunSpec(UBYTE arg1);
    void SetupMoveToInsideBuilding(Building *arg1, XY arg2);
    void SetupMoveAwayFromThing(Thing *arg1);
    void SetupMoveToThing(Thing *arg1);
    void SetupMoveToSpecialTgt(XY arg1);
    void InitiateMove();
    void RemoveRefsFromCreatures();
    void DoActionActiveDuringNewMove();
    void DoAnySpecialWhileMoving();
    void ShootAtMovingThing(MovingThing *arg1, ULONG arg2, UBYTE arg3);
    void CowboyRanging(MovingThing *arg1, ULONG arg2);
    void ReleaseShepherdedCreatures();
    Creature * CowboyCreatureScan();
    PlSpec * CowboyPlsScan();
    UBYTE AssessAlternateDir(UBYTE arg1);
    UWORD SpecialMove(SBYTE arg1);
    void AssignMove(UBYTE arg1);
    SBYTE SpecialToolTest(UBYTE arg1, SBYTE arg2, SBYTE arg3);
    BBOOL IsFoundationSiteOK(BuilderIFC *arg1, UBYTE *arg2);
    BBOOL operator==(PlSpec *arg1);
    SLONG WriteBuffer(PlSpec **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    SLONG ReadBuffer(PlSpec **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    void UpdateAll();
    void InitArray();
    SLONG ArchitectBuildCost(BuildingType arg1);
    SLONG ArchitectPelletCost();
    SLONG ScientistHealRange();
    SLONG ScientistStudyRange();
    UBYTE GetGun(BBOOL arg1);
    SLONG FarmerPackCapacity();
    SLONG LumberjackFellRange();
    SLONG FarmerHarvestRange();
    SLONG FarmerPlantingRange();
    SLONG CowboyPatrolRange();
    SLONG ShepherdThrowRange();
    SLONG ShepherdCatchRange();
    BBOOL IsFullyCloaked();
    BBOOL CanGetOrder();
    BBOOL IsActionAbortable();
    BBOOL IsDoingSpecial();
    void InterruptMove();
    void SetupMoveToTgt(XY arg1);
    void RemoveFromGame();
    void Speech(ULONG arg1, BufferSubmitMode arg2);
    SBYTE ActionOn(Thing *arg1, BBOOL arg2, BBOOL arg3, BBOOL arg4);
    XY GetXYToChopTreeDown(Plant *arg1);
    BBOOL CanDoSpecialWithMove();
    BBOOL CanAbortSpecialWithMove();
    void GetAbducted(Ethereal *arg1);
    void SetCowboyTarget(Creature *arg1);
    void StartAction(UBYTE arg1, ULONG arg2, ULONG arg3);
    void SetTarget(UBYTE arg1);
    void DoAbduct();
    void DoLiftoff();
    void DoNewShepherd();
    void DoNewFarmer();
    void DoScientist();
    void DoShepherd();
    void DoLumberjack();
    void DoGeologist();
    void DoFarmer();
    void DoCowboy();
    void DoBuilder();
    void DoWaiting();
    BBOOL DoMove(BBOOL arg1);
    void BeginSpecial();
    BBOOL OKToSwitchToSpecial();
    void AbortSpecial(BBOOL arg1);
    void BeginMove(SBYTE arg1);
    SWORD PassableHex(XY arg1, BOOL arg2);
    BOOL PassableDir(UBYTE arg1);
    void FromCenter(GridTile *arg1, XY *arg2);
    void SetDrawFlags();
    void Resync(UBYTE arg1);
    BBOOL Dead();
    void Init(UBYTE arg1, UBYTE arg2);
    BBOOL IsMovable();
    BBOOL IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    BBOOL IsBusyDoingSomething();
    BBOOL IsDead();
    void StartAMove(XY arg1);
    void DrawOnMap(SWORD arg1, SWORD arg2);
    SWORD MaxMoveSpeed();
    void Discover();
    BBOOL Damage(SLONG arg1, Thing *arg2);
    UBYTE Update();
    void Resync();
    void Write(SLONG *arg1);
    void Read(SLONG *arg1);
    void (**__vfptr)();
    SBYTE mode; // offset=85
    SBYTE saveMode; // offset=86
    SBYTE newMode; // offset=87
    SBYTE ifcGo; // offset=88
    SBYTE specialShp; // offset=89
    SBYTE moveMode; // offset=90
    SBYTE playerNewMoveMode; // offset=91
    XY playerTgt; // offset=92
    XY sp; // offset=96
    SLONG reload; // offset=100
    SLONG pixCount; // offset=104
    SLONG savePixCount; // offset=108
    UWORD flags; // offset=112
    UBYTE seeds; // offset=114
    UBYTE cloaked; // offset=115
    SBYTE crewIDX; // offset=116
    MyMinSprite auxMMs; // offset=117
    PlsError error; // offset=122
    ThingIDX damagedBy; // offset=123
    PLSInterface ifc; // offset=126
    TbLoadFiles loadFile; // offset=148
    Specialist *spec; // offset=192
    MyAnimBank *anb; // offset=196
};


class EffectStats { // sizeof=6
    EffectStatType type; // offset=0
    BBOOL gravity; // offset=1
    UBYTE priority; // offset=2
    EffectType makes; // offset=3
    BBOOL movable; // offset=4
    BBOOL splash; // offset=5
};

typedef class EffectStats EffectStats;


class Point { // sizeof=12
    void Set(SLONG arg1, SLONG arg2, SLONG arg3);
    SLONG X; // offset=0
    SLONG Y; // offset=4
    SLONG Z; // offset=8
};

typedef class Point Point;



class ASpecies { // sizeof=45
    SLONG smarts; // offset=0
    UBYTE strength; // offset=4
    UBYTE defense; // offset=5
    SLONG speed; // offset=6
    SLONG lifeSpan; // offset=10
    SLONG health; // offset=14
    SLONG energy; // offset=18
    SLONG restFrequency; // offset=22
    UBYTE birthsPerLife; // offset=26
    SWORD mass; // offset=27
    UBYTE food[2]; // offset=29
    SLONG costInGoop; // offset=32
    UBYTE wuss; // offset=36
    SLONG halfLife; // offset=37
    SLONG birthSpan; // offset=41
};

typedef class ASpecies ASpecies;

class Gene { // sizeof=2
    BBOOL IsBasicInGene(CreatureBaseSpecies arg1);
    CreatureBaseSpecies dominant; // offset=0
    CreatureBaseSpecies recessive; // offset=1
};

typedef class Gene Gene;

typedef void AwarenessScan;

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

class WeightedRangeScanner : RangeScanner { // sizeof=106
    class WeightedRangeScanner * WeightedRangeScanner(class WeightedRangeScanner *arg1);
    void Do();
    class WeightedRangeScanner * WeightedRangeScanner(XY arg1, ULONG arg2, XY *arg3, SLONG arg4);
    class WeightedRangeScanner * WeightedRangeScanner(XY arg1, ULONG arg2);
    void (**__vfptr)();
    SLONG dirWeights[15];
    UBYTE bestDir; // offset=41
};

struct __24e741VDI_HDR { // sizeof=10
    BYTE ID[7]; // offset=0
    ULONG driver_version; // offset=8
    REALFAR common_IO_configurations; // offset=12
    UWORD num_IO_configurations; // offset=16
    REALFAR environment_string; // offset=18
    IO_PARMS IO; // offset=22
    WORD service_rate; // offset=46
    UWORD busy; // offset=48
    UWORD driver_num; // offset=50
    UWORD this_ISR; // offset=52
    REALFAR prev_ISR; // offset=54
    BYTE scratch[127]; // offset=58
    BYTE dev_name[79]; // offset=186
};

typedef struct __24e741VDI_HDR VDI_HDR;

struct __3f9o8oAIL_DRIVER { // sizeof=44
    REALFAR seg; // offset=0
    ULONG sel; // offset=4
    void *buf; // offset=8
    ULONG size; // offset=12
    VDI_HDR *VHDR; // offset=16
    LONG type; // offset=20
    LONG initialized; // offset=24
    LONG PM_ISR; // offset=28
    HTIMER server; // offset=32
    void (*destructor)(void *arg1); // offset=36
    void *descriptor; // offset=40
};

typedef struct __3f9o8oAIL_DRIVER AIL_DRIVER;

struct __4qsnj8DIG_MODE { // sizeof=14
    UWORD minimum_physical_sample_rate; // offset=0
    UWORD nominal_physical_sample_rate; // offset=2
    UWORD maximum_physical_sample_rate; // offset=4
    UWORD minimum_DMA_half_buffer_size; // offset=6
    UWORD maximum_DMA_half_buffer_size; // offset=8
    ULONG flags; // offset=10
};

typedef struct __4qsnj8DIG_MODE DIG_MODE;

struct __1th3moDIG_DDT { // sizeof=240
    UBYTE format_supported[15]; // offset=0
    DIG_MODE format_data[15]; // offset=16
};

typedef struct __1th3moDIG_DDT DIG_DDT;

struct __3n9rjlDIG_DST { // sizeof=10
    REALFAR DMA_buffer_A; // offset=0
    REALFAR DMA_buffer_B; // offset=4
    WORD active_buffer; // offset=8
};

typedef struct __3n9rjlDIG_DST DIG_DST;

typedef struct _SAMPLE SAMPLE;

struct _DIG_DRIVER { // sizeof=140
    AIL_DRIVER *drvr; // offset=0
    DIG_DDT *DDT; // offset=4
    DIG_DST *DST; // offset=8
    HTIMER timer; // offset=12
    LONG half_buffer_size; // offset=16
    LONG DMA_rate; // offset=20
    LONG hw_format; // offset=24
    ULONG hw_mode_flags; // offset=28
    REALFAR DMA_seg; // offset=32
    ULONG DMA_sel; // offset=36
    void *DMA_buf; // offset=40
    void *DMA[1]; // offset=44
    WORD *buffer_flag; // offset=52
    LONG last_buffer; // offset=56
    LONG channels_per_sample; // offset=60
    LONG bytes_per_channel; // offset=64
    LONG channels_per_buffer; // offset=68
    LONG samples_per_buffer; // offset=72
    LONG build_size; // offset=76
    LONG *build_buffer; // offset=80
    LONG playing; // offset=84
    LONG quiet; // offset=88
    SAMPLE *samples; // offset=92
    LONG n_samples; // offset=96
    LONG n_active_samples; // offset=100
    LONG master_volume; // offset=104
    LONG system_data[7]; // offset=108
};

typedef struct _DIG_DRIVER _DIG_DRIVER;

struct _SAMPLE { // sizeof=148
    _DIG_DRIVER *driver; // offset=0
    ULONG status; // offset=4
    void *start[1]; // offset=8
    ULONG len[1]; // offset=16
    ULONG pos[1]; // offset=24
    ULONG done[1]; // offset=32
    LONG current_buffer; // offset=40
    LONG last_buffer; // offset=44
    LONG loop_count; // offset=48
    LONG format; // offset=52
    ULONG flags; // offset=56
    LONG playback_rate; // offset=60
    LONG volume; // offset=64
    LONG pan; // offset=68
    CALLBACK SOB; // offset=72
    LONG vol_scale[1][255]; // offset=73
    CALLBACK EOB; // offset=76
    CALLBACK EOS; // offset=80
    LONG user_data[7]; // offset=84
    LONG system_data[7]; // offset=116
};

typedef SAMPLE *HSAMPLE;

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

typedef class SoundRequest SoundRequest;

class SoundTag { // sizeof=6
    void SetNewSample();
    BBOOL IsNewSample();
    ULONG id; // offset=0
    SampleID sampleNum; // offset=4
};

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

class SpeechFileStatus { // sizeof=8
    BBOOL Valid();
    void Invalidate();
    TbFileHandle handle; // offset=0
    SLONG numSamples; // offset=4
};

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

class SoundConfig { // sizeof=10
    void Set();
    void Write(char *arg1);
    void Read(char *arg1);
    SLONG sfxVolume; // offset=0
    SLONG musicVolume; // offset=4
    BBOOL sfxOn; // offset=8
    BBOOL musicOn; // offset=9
};

typedef class SoundConfig SoundConfig;

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

class PaletteSelector { // sizeof=81
    class PaletteSelector * PaletteSelector(class PaletteSelector *arg1);
    void RestoreSelectFilter();
    void SetSelectFilter(UBYTE arg1);
    void ClearSelect();
    BBOOL IsSelectActive();
    void SlideClose();
    void SlideOpen();
    SBYTE GetSelected();
    void UnlockPalette();
    void LockPalette();
    void Draw();
    BBOOL Update(SWORD arg1);
    void CreateShepherdMenu();
    void CreatePlantMenu();
    void CreateBuildingMenu();
    void Close();
    void Create(Thing *arg1);
    void Init();
    class PaletteSelector * PaletteSelector();
    uint8_t open;
    uint8_t closed;
    uint8_t selectFilterStored;
    SBYTE slideDelta;
    SBYTE x;
    UBYTE saveSelectFilter;
    UBYTE listSize;
    UBYTE error[31];
    UBYTE mapTo[31];
    SBYTE select[2];
    UBYTE top[2];
    BBOOL active;
    PaletteSelectorMode mode;
    Thing *activeThing;
};


typedef struct MyGadget MyGadget;

class TeamCircles { // sizeof=63
    void StopStatic(UBYTE arg1);
    void StartStatic(UBYTE arg1, BBOOL arg2);
    void SelectCircle(UBYTE arg1);
    void DrawTeamCircle(UBYTE arg1);
    void Reset();
    void Draw();
    void Update();
    void Init();
    BBOOL red[4];
    SBYTE circleFadeDelta;
    TeamCircleMode modes[4]; // offset=0
    SBYTE circleActive; // offset=5
    SBYTE circleFadeLevel; // offset=6
    MyMinSprite mMs[4]; // offset=7
    MyMinSprite staticMms[4]; // offset=32
};

typedef class TeamCircles TeamCircles;

typedef class PaletteSelector PaletteSelector;

class EtherealScope { // sizeof=11
    class EtherealScope * EtherealScope(class EtherealScope *arg1);
    void Draw();
    void Init();
    class EtherealScope * EtherealScope();
    BBOOL blipHitSaucer;
    UBYTE saucerFade;
    SLONG blipRange;
    MyMinSprite etherealMms;
};

typedef class EtherealScope EtherealScope;

struct FontKernData { // sizeof=225
    UBYTE KernedCount; // offset=0
    UBYTE CharactersKerned[223]; // offset=1
    SBYTE Kern[255]; // offset=225
};

typedef struct FontKernData FontKernData;

struct Colour { // sizeof=3
    UBYTE Red; // offset=0
    UBYTE Green; // offset=1
    UBYTE Blue; // offset=2
};

typedef struct Colour Colour;

struct FontInfo { // sizeof=28
    TbSprite *SpaceSprite; // offset=0
    FontKernData *TextKerningData; // offset=4
    Colour *Palette; // offset=8
    UBYTE *FFCTable; // offset=12
    ULONG ControlFlags; // offset=16
    ULONG PenColour; // offset=20
    ULONG OutlineColour; // offset=24
};

typedef struct FontInfo FontInfo;

class TurnPrintInfo { // sizeof=110
    BBOOL Print();
    char *drawCurrent;
    char *current;
    SLONG delayCount;
    SLONG count;
    SLONG length;
    SLONG x; // offset=0
    SLONG y; // offset=4
    SLONG delay; // offset=8
    SLONG step; // offset=12
    char *str; // offset=16
    char hilite[2][9]; // offset=20
    char *drawStr; // offset=50
    FontInfo dfi; // offset=54
    ULONG drawing; // offset=82
    SLONG linesDrawn; // offset=86
};

typedef class TurnPrintInfo TurnPrintInfo;

class GroupSelect { // sizeof=110
    SBYTE ActionOn(Thing *arg1, BBOOL arg2);
    void DrawGroupSelected();
    BBOOL GroupSelectThings();
    void SetTarget(XY arg1);
    void ClearAnchorGroupSelecting();
    void SetAnchorGroupSelecting(SWORD arg1, SWORD arg2);
    void ClearGroupSelecting();
    void SetGroupSelecting();
    BBOOL IsAnchorGroupSelecting();
    void SwitchOffGroup(SWORD *arg1, SWORD arg2, UBYTE arg3, UBYTE arg4);
    void AssignTargetToGroup(Thing *arg1, SWORD *arg2, SWORD arg3, UBYTE arg4, UBYTE arg5, UBYTE arg6);
    void AssignXYToGroup(XY arg1, SWORD *arg2, SWORD arg3, UBYTE arg4, UBYTE arg5);
    void AssignXYToTeam(XY arg1, UBYTE arg2, UBYTE arg3);
    BBOOL SetGroupSwitchTo();
    void RemoveIdxFromGroup(SWORD arg1);
    void AddIdxToGroup(SWORD arg1);
    BBOOL IsTargetSet();
    BBOOL IsGroupSelecting();
    BBOOL IsAGroupCurrentlySelected();
    void ResetGroup();
    void Draw();
    BBOOL Update(SWORD *arg1);
    void Close();
    void Init();
    UBYTE plsMask;
    MyMinSprite mMs;
    UBYTE flags;
    UBYTE numPls;
    UWORD numGroupSelected;
    XY corner2;
    XY corner1;
    SWORD groupSelectedThings[43];
    XY target; // offset=0
};

typedef class GroupSelect GroupSelect;

class GroupPad : MainInterfacePad { // sizeof=35
    class GroupPad * GroupPad(class GroupPad *arg1);
    void MapDraw();
    void Draw(SBYTE arg1);
    BBOOL Update(SWORD arg1);
    void Init(Thing *arg1);
    class GroupPad * GroupPad();
    void (**__vfptr)();
    unsigned int *__vbptr;
    SBYTE action;
    GroupSelect group;
    Thing *actionThing; // offset=4
    clock_t actionClock; // offset=8
};

typedef class GroupPad GroupPad;

class IFCPlanetside : IFCBase { // sizeof=46
    class IFCPlanetside * IFCPlanetside(class IFCPlanetside *arg1);
    void DrawTgtFlag();
    void DrawBadBar(UBYTE arg1);
    void BarHelp(MyGadget *arg1);
    void MapHelp(MyGadget *arg1);
    void GeneralGadgetHelp(MyGadget *arg1);
    void CircleHelp(MyGadget *arg1);
    void TgtFlagEffect(XY arg1, Thing *arg2);
    void JumpToNextBuilding();
    void ClearInterfaceReferencesTo(Thing *arg1);
    void CyanFlicker(UBYTE arg1);
    void EnableAllCircles();
    void DisableAllCircles();
    void DrawAllBottomControls();
    void DrawGameMap();
    void DrawGoopMeter();
    void DrawBadOMeter();
    void ResetForNewGame();
    BBOOL IsOnOffSwitchOn();
    void SetOnOffSwitch(BBOOL arg1);
    void SetBarsRefresh(UBYTE arg1);
    void CloseActivePad();
    BBOOL IsThingSelectedInPad(Thing *arg1);
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    class IFCPlanetside * IFCPlanetside(MyGadget *arg1);
    void (**__vfptr)();
    unsigned int *__vbptr;
    uint8_t helpState;
    uint8_t onOffSwitchState;
    UBYTE masterSoundVolume;
    XY tgtFlagXY;
    MyMinSprite tgtFlagMMs;
    XY mapMouseScroll;
    Building *jumpBuilding;
    MyGadget *gad; // offset=4
    MyAnimBank *anb; // offset=8
    MySprite *mSpr; // offset=12
    TbSprite *spr; // offset=16
    MyAnimBank *pIconsAnb; // offset=20
    MySprite *pIconsMSpr; // offset=24
    TbSprite *pIconsSpr; // offset=28
    TeamCircles circles; // offset=32
    BuildingPad buildingPad; // offset=82
    PaletteSelector actionPalette; // offset=95
    WindowPad winPad; // offset=108
    GroupPad groupPad; // offset=120
    GroupSelect group; // offset=155
    CreaturePad creaturePad; // offset=157
    EtherealScope eScope; // offset=176
    uint8_t noSwitch; // offset=187
    MainInterfacePad *mainPad; // offset=188
    BasicPad basicPad; // offset=192
    ClonePad clonePad; // offset=201
    LabPad labPad; // offset=214
};


class LumberjackScan : RangeScanner { // sizeof=57
    class LumberjackScan * LumberjackScan(class LumberjackScan *arg1);
    void PerGrid();
    class LumberjackScan * LumberjackScan(PlSpec arg1);
    void (**__vfptr)();
    SLONG dirBonus;
    SLONG bestValue;
    PlSpec pls;
    Plant *tgtPlant; // offset=41
};

class HarvestClearScan : RangeScanner { // sizeof=55
    class HarvestClearScan * HarvestClearScan(class HarvestClearScan *arg1);
    void Do();
    void PerGrid();
    class HarvestClearScan * HarvestClearScan(PlSpec arg1, BBOOL arg2, BBOOL arg3);
    void (**__vfptr)();
    BBOOL clearFlags;
    BBOOL collect;
    ResearchGrid rGrid;
    PlSpec pls;
    ULONG seedsGot; // offset=41
};

class FarmerPlantingScan : WeightedRangeScanner { // sizeof=115
    class FarmerPlantingScan * FarmerPlantingScan(class FarmerPlantingScan *arg1);
    void PerGrid();
    class FarmerPlantingScan * FarmerPlantingScan(PlSpec arg1, BBOOL arg2);
    void (**__vfptr)();
    BBOOL rangeInvert;
    PSpecies pSpc;
    PlSpec pls;
};

class SurvivalScan : RangeScanner { // sizeof=53
    class SurvivalScan * SurvivalScan(class SurvivalScan *arg1);
    void PerGrid();
    class SurvivalScan * SurvivalScan(PlSpec arg1, ULONG arg2);
    void (**__vfptr)();
    ULONG bestRange;
    PlSpec pls;
    Creature *tgtCreature; // offset=41
};

class StudyCreatureScan : RangeScanner { // sizeof=53
    class StudyCreatureScan * StudyCreatureScan(class StudyCreatureScan *arg1);
    void PerGrid();
    class StudyCreatureScan * StudyCreatureScan(PlSpec arg1);
    void (**__vfptr)();
    ULONG bestRange;
    PlSpec scientist;
    Creature *tgtCreature; // offset=41
};

class HealCreatureScan : RangeScanner { // sizeof=53
    class HealCreatureScan * HealCreatureScan(class HealCreatureScan *arg1);
    void PerGrid();
    class HealCreatureScan * HealCreatureScan(PlSpec arg1);
    void (**__vfptr)();
    ULONG bestRange;
    PlSpec scientist;
    Creature *tgtCreature; // offset=41
};

class PlSpecLoader { // sizeof=80
    void Free(PlayerRace arg1, SpecialistClass arg2, MyAnimBank *arg3);
    void Free(PlSpec *arg1);
    MyAnimBank * Load(PlayerRace arg1, SpecialistClass arg2);
    BBOOL Load(PlSpec *arg1);
    MyAnimBank *anbs[3][3];
    SBYTE counters[3][3];
};

typedef class HarvestClearScan HarvestClearScan;

typedef class SurvivalScan SurvivalScan;

typedef class StudyCreatureScan StudyCreatureScan;

typedef class HealCreatureScan HealCreatureScan;

typedef class LumberjackScan LumberjackScan;

typedef class FarmerPlantingScan FarmerPlantingScan;

char unsigned GridTile::__defarg();
near WeightedRangeScanner::WeightedRangeScanner( XY &, long unsigned );
char unsigned SoundManager::__defarg();
char unsigned SoundManager::__defarg();
char unsigned SoundManager::__defarg();
long unsigned SoundManager::__defarg();
char unsigned SoundManager::IsNarratorSpeaking();
char unsigned MovingThing::IsMoving();
void SmartMovingThing::ClearIgnoreClutter();
void SmartMovingThing::SetIgnoreClutter();
char unsigned Creature::IsDraggingStuff();
void Creature::ClearDraggingStuff();
void Building::SetUpgradeOK();
void Building::ClearUpgradeOK();
void Building::SetBeingWrecked();
void Building::ClearBeingWrecked();
long PlSpec::ScientistStudyRange();
long PlSpec::ScientistHealRange();
long PlSpec::ArchitectPelletCost();
void Effect::PackSpec( Specialist & );
void TopoGrid::Invalidate();
char unsigned TopoGrid::Valid();
char unsigned TopoMorpher::TopoGridIDX( TopoGrid * );
char unsigned TopoMorpher::IsTopoGridValid( char unsigned );
void TopoMorpher::AbortTopoGrid( char unsigned );
short WeightedAngle( char unsigned );
long Creature::UseEnergy( long );
near LumberjackScan::LumberjackScan( PlSpec & );
void LumberjackScan::PerGrid();
near HarvestClearScan::HarvestClearScan( PlSpec &, char unsigned, char unsigned );
void HarvestClearScan::PerGrid();
void HarvestClearScan::Do();
near FarmerPlantingScan::FarmerPlantingScan( PlSpec &, char unsigned );
void FarmerPlantingScan::PerGrid();
near SurvivalScan::SurvivalScan( PlSpec &, long unsigned );
void SurvivalScan::PerGrid();
near StudyCreatureScan::StudyCreatureScan( PlSpec & );
void StudyCreatureScan::PerGrid();
near HealCreatureScan::HealCreatureScan( PlSpec & );
void HealCreatureScan::PerGrid();
MyAnimBank * PlSpecLoader::Load( PlayerRace, SpecialistClass );
char unsigned PlSpecLoader::Load( PlSpec * );
void PlSpecLoader::Free( PlayerRace, SpecialistClass, MyAnimBank * );
void PlSpec::SetWaiting();
void PlSpec::SetAltSpecialFlipToThing( Thing * );
void PlSpec::SetupMoveToSpecialTgt( XY );
void PlSpec::SetupMoveToThing( Thing * );
void PlSpec::SetupMoveAwayFromThing( Thing * );
void PlSpec::SetupMoveToInsideBuilding( Building *, XY );
GunSpec & PlSpec::GetGunSpec( char unsigned );
void PlSpecLoader::Free( PlSpec * );
char * Specialist::Name( char * );
void PlSpec::Speech( long unsigned, BufferSubmitMode );
void PlSpec::Init( char unsigned, char unsigned );
char unsigned PlSpec::Damage( long, Thing * );
char unsigned PlSpec::IsFoundationSiteOK( BuilderIFC &, char unsigned & );
char signed PlSpec::ActionOn( Thing *, char unsigned, char unsigned, char unsigned );
void PlSpec::BeginSpecial();
short PlSpec::MaxMoveSpeed();
void PlSpec::StartAction( char unsigned, long unsigned, long unsigned );
void PlSpec::Discover();
void PlSpec::BeginMove( char signed );
void PlSpec::GetAbducted( Ethereal * );
void PlSpec::AbortSpecial( char unsigned );
void PlSpec::StartAMove( XY );
void PlSpec::SetTarget( char unsigned );
void PlSpec::BuilderSetDemoCharges( char signed );
void PlSpec::InitiateMove();
char unsigned PlSpec::DoMove( char unsigned );
void PlSpec::DoWaiting();
void PlSpec::DoAbduct();
void PlSpec::DoLiftoff();
void PlSpec::DoBuilder();
void PlSpec::ShootAtMovingThing( MovingThing *, long unsigned, char unsigned );
void PlSpec::StartLumberjackChopping( Plant * );
void PlSpec::CowboyRanging( MovingThing *, long unsigned );
void PlSpec::DoCowboy();
void PlSpec::DoScientist();
void PlSpec::DoGeologist();
XY PlSpec::GetXYToChopTreeDown( Plant * );
void PlSpec::DoNewFarmer();
void PlSpec::DoLumberjack();
void PlSpec::DoFarmer();
void PlSpec::ReleaseShepherdedCreatures();
void PlSpec::DoNewShepherd();
void PlSpec::DoShepherd();
void PlSpec::Resync();
void PlSpec::InitArray();
void PlSpec::SetDrawFlags();
void PlSpec::DrawOnMap( short, short );
void PlSpec::Read( long & );
void PlSpec::Write( long & );
long PlSpec::ReadBuffer( PlSpec * *, long, long, BioGame & );
long PlSpec::WriteBuffer( PlSpec * *, long, long, BioGame & );
char unsigned PlSpec::CanAbortSpecialWithMove();
char unsigned PlSpec::CanDoSpecialWithMove();
void PlSpec::DoAnySpecialWhileMoving();
void PlSpec::DoActionActiveDuringNewMove();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
void PlSpec::RemoveFromGame();
void PlSpec::RemoveRefsFromCreatures();
char unsigned PlSpec::Update();
void PlSpec::UpdateAll();
char unsigned PlSpec::operator ==( PlSpec * );

#endif // BIO_SPEC_HPP_
/******************************************************************************/

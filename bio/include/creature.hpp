/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file creature.hpp
 *     Header file for creature.cpp.
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
#ifndef BIO_CREATURE_HPP_
#define BIO_CREATURE_HPP_

typedef enum HerdMode HerdMode;

enum CreatureUserAction { // type=int8_t
    CRU_NOTHING = 0,
    CRU_ATTACK,
    CRU_BURN,
    CRU_PICKUP,
    CRU_COLLECT,
    CRU_CHOP, // 5
    CRU_BUILD,
    CRU_PATROL,
    MAX_CRU,
};

typedef enum CreatureUserAction CreatureUserAction;

enum CreatureMode { // type=int8_t
    CRM_NOTHING = 0,
    CRM_WORK,
    CRM_BUILD,
    MAX_CRMS,
};

typedef enum CreatureMode CreatureMode;

enum CreatureSpecies { // type=int8_t
    CRS_DINO = 0,
    CRS_CRAB,
    CRS_FROG,
    CRS_BIRD,
    CRS_MULE,
    CRS_DINOCRAB, // 5
    CRS_DINOFROG,
    CRS_DINOBIRD,
    CRS_DINOMULE,
    CRS_CRABBOFROG,
    CRS_CRABBOBIRD, // 10
    CRS_CRABBOMULE,
    CRS_FROGGOBIRD,
    CRS_FROGGOMULE,
    CRS_BIRDDOMULE,
    CRS_CRABBOSAUR, // 15
    CRS_FROGGOSAUR,
    CRS_FROGGOCRAB,
    CRS_BIRDDOSAUR,
    CRS_BIRDDOCRAB,
    CRS_BIRDDOFROG, // 20
    CRS_MULEOSAUR,
    CRS_MULEOCRAB,
    CRS_MULEOFROG,
    CRS_MULEOBIRD,
    MAX_CRS, // 25
};

typedef enum CreatureSpecies CreatureSpecies;

enum CreatureBaseSpecies { // type=int8_t
    CRB_DINO = 0,
    CRB_CRAB,
    CRB_FROG,
    CRB_BIRD,
    CRB_MULE,
    MAX_CRB, // 5
};

typedef enum CreatureBaseSpecies CreatureBaseSpecies;

enum CreatureState { // type=int8_t
    CR_MOVING = 0,
    CR_HUNTING,
    CR_PICKUP,
    CR_INLOVE,
    CR_EATBONES,
    CR_EATMEAT, // 5
    CR_EATSPECIALIST,
    CR_EATVEGI,
    CR_RESTING,
    CR_NURSING,
    CR_KISSING, // 10
    CR_CHOPPING,
    CR_DRINKING,
    CR_BUILDING,
    CR_NAPALM,
    CR_FROZEN, // 15
    CR_KICKING,
    CR_DIVING,
    CR_STASIS,
    CR_ORBIT,
    CR_STUNNED, // 20
    CR_FIGHTING,
    CR_ATTACKBUILDING,
    CR_ATTACKSPECIALIST,
    CR_DYING,
    CR_BONES1, // 25
    CR_BONES2,
    CR_BONES3,
};

typedef enum CreatureState CreatureState;

struct Normal { // sizeof=12
    SLONG NX; // offset=0
    SLONG NY; // offset=4
    SLONG NZ; // offset=8
};

typedef struct Normal Normal;

typedef class ThingIDX ThingIDX;

typedef struct MyMinSprite MyMinSprite;

typedef class Player Player;

typedef class Creature Creature;

struct CreatureSpeciesForHerd { // sizeof=1
    uint8_t player; // offset=0
    uint8_t species; // offset=1
};

typedef struct CreatureSpeciesForHerd CreatureSpeciesForHerd;



class AwarenessScan : RangeScanner { // sizeof=228
    class AwarenessScan * AwarenessScan(class AwarenessScan *arg1);
    void Do();
    void PerGrid();
    class AwarenessScan * AwarenessScan(Creature arg1);
    void (**__vfptr)();
    ASpecies speci;
    Creature c;
    int mates[15]; // offset=45
    int threats[15]; // offset=46
    int terrain[15]; // offset=109
    int enemies[15]; // offset=110
    SWORD foundEnemies; // offset=173
    int friends[15]; // offset=174
    SWORD foundThreats; // offset=175
    SWORD foundFriends; // offset=177
    SWORD foundFood; // offset=179
    SWORD foundMates; // offset=181
    UBYTE bestEnemies; // offset=183
    UBYTE bestFriends; // offset=184
    UBYTE bestFood; // offset=185
    UBYTE bestMates; // offset=186
    UBYTE bestTerrain; // offset=187
    UBYTE bestThreats; // offset=188
    UBYTE foodRankings[2]; // offset=189
    Thing *bestThing; // offset=192
    Creature *bestMate; // offset=196
    Thing *bestEnemy; // offset=200
    Thing *bestThreat; // offset=204
    SLONG bestRanking; // offset=208
    SLONG bestMateRanking; // offset=212
    SLONG bestEnemyRanking; // offset=216
    SLONG bestThreatRanking; // offset=220
    int food[15]; // offset=237
};

class RangeScanner : RangeScan { // sizeof=41
    class RangeScanner * RangeScanner(class RangeScanner *arg1);
    void PerGrid();
    void Do();
    class RangeScanner * RangeScanner(XY *arg1, ULONG arg2);
    void (**__vfptr)();
    ULONG maxRange;
    ULONG squareMaxRange;
    ULONG squareRange;
    GridTile *g;
    BBOOL foundAThing; // offset=20
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

typedef class AwarenessScan AwarenessScan;

class Creature : SmartMovingThing { // sizeof=124
    class Creature * operator=(class Creature *arg1);
    class Creature * Creature(class Creature *arg1);
    class Creature * Creature();
    void EveryCR_BONES3(GridTile *arg1);
    void EveryCR_BONES2(GridTile *arg1);
    void EveryCR_BONES1(GridTile *arg1);
    void EveryCR_DYING(GridTile *arg1);
    void EveryCR_ATTACKSPECIALIST(GridTile *arg1);
    void EveryCR_ATTACKBUILDING(GridTile *arg1);
    void EveryCR_FIGHTING(GridTile *arg1);
    void EveryCR_ORBIT(GridTile *arg1);
    void EveryCR_BUILDING(GridTile *arg1);
    void EveryCR_DRINKING(GridTile *arg1);
    void EveryCR_CHOPPING(GridTile *arg1);
    void EveryCR_NAPALM(GridTile *arg1);
    void EveryCR_KISSING(GridTile *arg1);
    void EveryCR_NURSING(GridTile *arg1);
    void EveryCR_RESTING(GridTile *arg1);
    void EveryCR_EATVEGI(GridTile *arg1);
    void EveryCR_EATSPECIALIST(GridTile *arg1);
    void EveryCR_EATMEAT(GridTile *arg1);
    void EveryCR_EATBONES(GridTile *arg1);
    void EveryCR_INLOVE(GridTile *arg1);
    void EveryCR_DIVING(GridTile *arg1);
    void EveryCR_HUNTING(GridTile *arg1);
    void EveryCR_MOVING(GridTile *arg1);
    BBOOL ZeroJOB_BUILD(GridTile *arg1, AwarenessScan *arg2);
    BBOOL ZeroJOB_WORK(GridTile *arg1, AwarenessScan *arg2);
    void ZeroCR_BONES3(GridTile *arg1);
    void ZeroCR_BONES2(GridTile *arg1);
    void ZeroCR_BONES1(GridTile *arg1);
    void ZeroCR_DYING(GridTile *arg1);
    void ZeroCR_ATTACKSPECIALIST(GridTile *arg1);
    void ZeroCR_ATTACKBUILDING(GridTile *arg1);
    void ZeroCR_FIGHTING(GridTile *arg1);
    void ZeroCR_STUNNED(GridTile *arg1);
    void ZeroCR_ORBIT(GridTile *arg1);
    void ZeroCR_BUILDING(GridTile *arg1);
    void ZeroCR_DRINKING(GridTile *arg1);
    void ZeroCR_CHOPPING(GridTile *arg1);
    void ZeroCR_NAPALM(GridTile *arg1);
    void ZeroCR_KISSING(GridTile *arg1);
    void ZeroCR_NURSING(GridTile *arg1);
    void ZeroCR_RESTING(GridTile *arg1);
    void ZeroCR_FROZEN(GridTile *arg1);
    void ZeroCR_EATVEGI(GridTile *arg1);
    void ZeroCR_EATSPECIALIST(GridTile *arg1);
    void ZeroCR_EATMEAT(GridTile *arg1);
    void ZeroCR_EATBONES(GridTile *arg1);
    void ZeroCR_INLOVE(GridTile *arg1);
    void ZeroCR_PICKUP(GridTile *arg1);
    void ZeroCR_STASIS(GridTile *arg1);
    void ZeroCR_DIVING(GridTile *arg1);
    void ZeroCR_HUNTING(GridTile *arg1);
    void ZeroCR_MOVING(GridTile *arg1);
    SLONG SpitCost();
    void UpdateFrozen(GridTile *arg1);
    BBOOL CheckJobs(GridTile *arg1, AwarenessScan *arg2);
    void UpdateGrowth();
    void HandleSpecialsForHunting(Thing *arg1, SLONG arg2);
    BBOOL SpitAt(Thing *arg1, EffectType arg2);
    BBOOL BreatheFire(Thing *arg1);
    void SetResting(SLONG arg1, GridTile *arg2);
    void AssignAnim();
    void AnimUpdate();
    void EndUpdateCheck();
    BBOOL UpdateCriticalStuff(GridTile *arg1);
    BBOOL Instincts(GridTile *arg1, AwarenessScan *arg2);
    Effect * SetDragWoodDisk(Building *arg1);
    MovingThing * SetDraggingStuff(Thing *arg1, GridTile *arg2);
    BBOOL AddEnergy(SLONG arg1, UBYTE arg2);
    Building * ChooseNewDragToBuilding(TheBase *arg1, Building *arg2, Building *arg3);
    BBOOL ChooseVegiOrBones(GridTile *arg1);
    BBOOL IsInRangeOfShepherd(HerdMode arg1, HerdMode arg2, PlSpec **arg3);
    BBOOL operator==(Creature *arg1);
    void VoidPlTarget(Thing *arg1, BBOOL arg2);
    SLONG WriteBuffer(Creature **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    SLONG ReadBuffer(Creature **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    void UpdateAll();
    Creature * Create(UBYTE arg1, CreatureSpecies arg2, XY arg3, UBYTE arg4, Creature *arg5);
    void InitArray();
    void ShatterFrozen();
    CreatureUserAction ActionOn(Thing *arg1, BBOOL arg2, BBOOL arg3);
    void StartPickupThing(MovingThing *arg1);
    void SetPlayerMoveTo(XY arg1);
    BBOOL SetWorkingOn(Thing *arg1);
    BBOOL SetHunting(Thing *arg1, BBOOL arg2);
    void Kill(BBOOL arg1);
    void DropWhateverYouWereDragging();
    void StopWhateverYouWereDoing();
    void SetStasis(SWORD arg1);
    BBOOL CanDive();
    BBOOL CanArmor();
    BBOOL CanSpit();
    UBYTE GetYesPitch();
    void SoundYesSample();
    SampleID GetYesSample();
    SLONG ViewScale8();
    void SetupMove(SWORD arg1);
    SWORD IsStasisForHowLong();
    UWORD TurfRange();
    void ClearTurf();
    void SetTurf(XY arg1);
    BBOOL IsTurfSet();
    BBOOL IsPlayerActive();
    void ClearPlayerActive();
    void SetPlayerActive(CreatureUserAction arg1);
    UBYTE AdultScale8();
    void ClearDraggingStuff();
    void ClearBeingEaten();
    void SetBeingEaten();
    BBOOL CanGetOrders();
    BBOOL CanChopTrees(Gene *arg1);
    BBOOL IsFrozen();
    BBOOL IsScrapping();
    BBOOL IsHungry();
    BBOOL IsBeingEaten();
    BBOOL IsDraggingStuff();
    BBOOL IsCreatureMoving();
    BBOOL IsAdult();
    BBOOL IsBones();
    void PutInOrbit();
    void SetMemory(XY arg1);
    BBOOL IsMemoryValid();
    void InvalidateMemory();
    void Free();
    SLONG Childhood();
    SLONG Energy();
    SLONG Health();
    SLONG Lifespan();
    SLONG Speed();
    SLONG Defense();
    SLONG Strength();
    SLONG Smarts();
    BBOOL IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    void DrawOnMap(SWORD arg1, SWORD arg2);
    void Draw(SWORD arg1, SWORD arg2);
    SLONG UseEnergy(SLONG arg1);
    SLONG QualityXlate(SBYTE arg1, SLONG arg2);
    SBYTE ResearchPercent(SBYTE arg1);
    SLONG ResearchValue();
    char * GetName();
    Gene * Gene();
    ASpecies * Species();
    void VectorToWhereGoingTo(Vector *arg1);
    SLONG SquareTrueRangeToWhereGoingTo();
    void Undiscover();
    void Discover();
    BBOOL CanFly();
    BBOOL IsSpecial();
    BBOOL IsStuck();
    BBOOL IsDoneMovingToTgt();
    BBOOL IsStasis();
    BBOOL IsDead();
    BBOOL IsVectorable();
    BBOOL NeedToAvoid(GridTile *arg1);
    void NewGridUpdate(GridTile *arg1);
    void SetSpeedHandler(Normal *arg1, SWORD arg2);
    void StartAMove(XY arg1);
    SWORD MaxMoveSpeed();
    void StartFightWith(Thing *arg1);
    BBOOL Damage(SLONG arg1, Thing *arg2);
    UBYTE Update();
    void Resync();
    void Write(SLONG *arg1);
    void Read(SLONG *arg1);
    void Init(ThingType arg1, XY arg2, UBYTE arg3, SWORD arg4, SLONG arg5, Vector *arg6);
    void (**__vfptr)();
    MyMinSprite huntingMMs;
    MyMinSprite scaredMMs;
    MyMinSprite tiredMMs;
    MyMinSprite hungryMMs;
    MyMinSprite packMMs;
    MyMinSprite packLeadersMMs;
    MyMinSprite shepherdedMMs;
    MyMinSprite heartMMs;
    MyMinSprite woodDiskMMs;
    ThingIDX target; // offset=85
    ThingIDX plTarget; // offset=88
    ThingIDX utility; // offset=91
    CreatureState state; // offset=94
    CreatureMode mode; // offset=95
    UWORD flags; // offset=96
    SWORD maxEnergy; // offset=98
    SWORD maxHealth; // offset=100
    SWORD lifeSpan; // offset=102
    SWORD energy; // offset=104
    SWORD health; // offset=106
    SWORD pixCount; // offset=108
    XY memory; // offset=110
    XY turf; // offset=114
    UBYTE quality; // offset=118
    UBYTE adultScale8; // offset=119
    CreatureUserAction cua; // offset=120
    SBYTE birthState; // offset=121
    CreatureSpecies species; // offset=122
    UBYTE frozen; // offset=123
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

class WeightedTgtRangeScanner : WeightedRangeScanner { // sizeof=238
    class WeightedTgtRangeScanner * WeightedTgtRangeScanner(class WeightedTgtRangeScanner *arg1);
    void Do();
    class WeightedTgtRangeScanner * WeightedTgtRangeScanner(XY arg1, ULONG arg2, XY *arg3, SLONG arg4);
    class WeightedTgtRangeScanner * WeightedTgtRangeScanner(XY arg1, ULONG arg2);
    void (**__vfptr)();
    Thing *bestThings[15];
    int bestPerSector[15];
    Thing *tgtThing; // offset=106
};

class FlatMap { // sizeof=6
    void DrawOver(SWORD arg1, SWORD arg2, UBYTE arg3);
    void Map2Screen(XY arg1);
    void Update(BBOOL arg1);
    GridTile * XYOn(SWORD arg1, SWORD arg2, XY arg3);
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
    BBOOL GetXYFromMap(XY arg1, XY arg2);
    GridTile * XYOn(SWORD arg1, SWORD arg2, XY arg3);
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


class ChopperScan : WeightedTgtRangeScanner { // sizeof=110
    class ChopperScan * ChopperScan(class ChopperScan *arg1);
    void PerGrid();
    class ChopperScan * ChopperScan(Creature arg1);
    void (**__vfptr)();
    int bestRanges[15];
    Plant *closestPerSector[15];
};

class CollectorScan : WeightedTgtRangeScanner { // sizeof=246
    class CollectorScan * CollectorScan(class CollectorScan *arg1);
    void PerGrid();
    class CollectorScan * CollectorScan(Creature arg1, BBOOL arg2, BBOOL arg3);
    void (**__vfptr)();
    UBYTE bonesBonus;
    UBYTE plantBonus;
    BBOOL lookForBones;
    BBOOL lookForPlants;
    Creature c;
};

class BuilderTreeScan : RangeScanner { // sizeof=49
    class BuilderTreeScan * BuilderTreeScan(class BuilderTreeScan *arg1);
    void PerGrid();
    class BuilderTreeScan * BuilderTreeScan(Creature arg1);
    void (**__vfptr)();
    ULONG bestRange;
    Plant *tgtPlant; // offset=41
};

typedef class BuilderTreeScan BuilderTreeScan;

typedef class CollectorScan CollectorScan;

typedef class ChopperScan ChopperScan;

near WeightedRangeScanner::WeightedRangeScanner( XY &, long unsigned, XY *, long );
near WeightedTgtRangeScanner::WeightedTgtRangeScanner( XY &, long unsigned );
near WeightedTgtRangeScanner::WeightedTgtRangeScanner( XY &, long unsigned, XY *, long );
char unsigned Thing::IsDitheredColor();
char unsigned SmartMovingThing::IsAvoidWaiting();
void SmartMovingThing::ClearIsFlying();
void SmartMovingThing::SetIsFlying();
void SmartMovingThing::SetMoveToTgtWithDir( XY );
char unsigned Creature::__defarg();
HerdMode Creature::__defarg();
PlSpec * * Creature::__defarg();
long Creature::Strength();
long Creature::Defense();
long Creature::Speed();
long Creature::Health();
long Creature::Energy();
long Creature::Childhood();
void Creature::InvalidateMemory();
char unsigned Creature::IsMemoryValid();
char unsigned Creature::IsAdult();
char unsigned Creature::IsBeingEaten();
void Creature::SetBeingEaten();
void Creature::ClearBeingEaten();
char unsigned Creature::CanSpit();
char unsigned Creature::CanDive();
void Plant::SetBeingEaten();
char unsigned Plant::IsBeingEaten();
void Plant::ClearBeingEaten();
GridTile * Effect::__defarg();
char unsigned * __defarg();
char unsigned * __defarg();
void SmartMovingThing::SetMoveToBuilding( Building * );
char unsigned SmartMovingThing::SetMoveToTgtTest( XY );
char unsigned Creature::AdultScale8();
char unsigned Creature::CanFly();
void Creature::SetupMove( short );
near AwarenessScan::AwarenessScan( Creature & );
void AwarenessScan::PerGrid();
void AwarenessScan::Do();
near ChopperScan::ChopperScan( Creature & );
void ChopperScan::PerGrid();
near CollectorScan::CollectorScan( Creature &, char unsigned, char unsigned );
void CollectorScan::PerGrid();
near BuilderTreeScan::BuilderTreeScan( Creature & );
void BuilderTreeScan::PerGrid();
extern char signed const Creature::void UpdateFrozen( GridTile * )::.0::dominantFreezeFactor[];
char signed Creature::ResearchPercent( char signed );
void Creature::UpdateFrozen( GridTile * );
void Creature::Discover();
void Creature::Draw( short, short );
void Creature::DrawOnMap( short, short );
char unsigned Creature::IsVectorable();
char unsigned Creature::IsScreenPointInside( short, short, short, short );
void Creature::Resync();
Creature * Creature::Create( char unsigned, CreatureSpecies, XY, char unsigned, Creature * );
void Creature::InitArray();
void Creature::Read( long & );
void Creature::Write( long & );
long Creature::ReadBuffer( Creature * *, long, long, BioGame & );
long Creature::SpitCost();
long Creature::WriteBuffer( Creature * *, long, long, BioGame & );
short Creature::MaxMoveSpeed();
void Creature::SetResting( long, GridTile * );
char unsigned Creature::BreatheFire( Thing * );
char unsigned Creature::SpitAt( Thing *, EffectType );
long Creature::SquareTrueRangeToWhereGoingTo();
void Creature::VectorToWhereGoingTo( Vector & );
char unsigned Creature::NeedToAvoid( GridTile * );
void Creature::NewGridUpdate( GridTile * );
void Creature::SetSpeedHandler( Normal &, short );
char unsigned Creature::SetHunting( Thing *, char unsigned );
void Creature::ShatterFrozen();
char unsigned Creature::Damage( long, Thing * );
char unsigned Creature::AddEnergy( long, char unsigned );
void Creature::SetStasis( short );
void Creature::StartFightWith( Thing * );
void Creature::DropWhateverYouWereDragging();
void Creature::StopWhateverYouWereDoing();
void Creature::Kill( char unsigned );
void Creature::ZeroCR_ORBIT( GridTile * );
void Creature::ZeroCR_KISSING( GridTile * );
void Creature::EveryCR_DIVING( GridTile * );
void Creature::ZeroCR_DIVING( GridTile * );
void Creature::StartPickupThing( MovingThing * );
Effect * Creature::SetDragWoodDisk( Building & );
MovingThing * Creature::SetDraggingStuff( Thing &, GridTile * );
void Creature::EveryCR_HUNTING( GridTile * );
void Creature::EveryCR_INLOVE( GridTile * );
void Creature::ZeroCR_CHOPPING( GridTile * );
void Creature::EveryCR_KISSING( GridTile * );
void Creature::EveryCR_FIGHTING( GridTile * );
void Creature::EveryCR_NAPALM( GridTile * );
void Creature::ZeroCR_PICKUP( GridTile * );
void Creature::ZeroCR_FROZEN( GridTile * );
void Creature::ZeroCR_BUILDING( GridTile * );
void Creature::ZeroCR_STUNNED( GridTile * );
void Creature::ZeroCR_FIGHTING( GridTile * );
void Creature::ZeroCR_DYING( GridTile * );
void Creature::ZeroCR_STASIS( GridTile * );
void Creature::EveryCR_BONES1( GridTile * );
void Creature::EveryCR_BONES2( GridTile * );
void Creature::EveryCR_BONES3( GridTile * );
void Creature::EveryCR_EATMEAT( GridTile * );
void Creature::EveryCR_EATBONES( GridTile * );
void Creature::EveryCR_EATVEGI( GridTile * );
char unsigned Creature::Instincts( GridTile *, AwarenessScan & );
char unsigned Creature::CheckJobs( GridTile *, AwarenessScan & );
void Creature::EveryCR_RESTING( GridTile * );
void Creature::ZeroCR_RESTING( GridTile * );
void Creature::HandleSpecialsForHunting( Thing *, long );
char unsigned Creature::IsInRangeOfShepherd( HerdMode, HerdMode, PlSpec * * );
Building * Creature::ChooseNewDragToBuilding( TheBase &, Building *, Building * );
char unsigned Creature::ZeroJOB_WORK( GridTile *, AwarenessScan & );
char unsigned Creature::ZeroJOB_BUILD( GridTile *, AwarenessScan & );
char unsigned Creature::SetWorkingOn( Thing * );
void Creature::StartAMove( XY );
void Creature::SetPlayerMoveTo( XY );
char unsigned Creature::UpdateCriticalStuff( GridTile * );
void Creature::AssignAnim();
void Creature::UpdateGrowth();
void Creature::AnimUpdate();
void Creature::EndUpdateCheck();
char unsigned Creature::Update();
void Creature::UpdateAll();
void Creature::VoidPlTarget( Thing *, char unsigned );
CreatureUserAction Creature::ActionOn( Thing *, char unsigned, char unsigned );
extern void (near * const __vftbl[])();
extern char signed const Creature::void UpdateFrozen( GridTile * )::.0::recessiveFreezeFactor[];
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
char unsigned Creature::operator ==( Creature * );
extern void (near * const __vftbl[])();

#endif // BIO_CREATURE_HPP_
/******************************************************************************/

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

#include "bftypes.h"
#include "myspr.h"
#include "creaturestat.hpp"
#include "effectstat.hpp"
#include "smvthing.hpp"

class BioGame;
class Building;
class GridTile;
class AwarenessScan;
class TheBase;

class Gene { // sizeof=2
public:
    CreatureBaseSpecies dominant; // offset=0
    CreatureBaseSpecies recessive; // offset=1
public:
    BBOOL IsBasicInGene(CreatureBaseSpecies arg1);
};

class Creature : public SmartMovingThing { // sizeof=124
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
    static MyMinSprite woodDiskMMs;
    static MyMinSprite heartMMs;
    static MyMinSprite shepherdedMMs;
    static MyMinSprite packLeadersMMs;
    static MyMinSprite packMMs;
    static MyMinSprite hungryMMs;
    static MyMinSprite tiredMMs;
    static MyMinSprite scaredMMs;
    static MyMinSprite huntingMMs;
//internal:
    //void (**__vfptr)(); // offset=35
public:
    void Init(ThingType arg1, XY arg2, UBYTE arg3, SWORD arg4, SLONG arg5, Vector const &arg6);
    void Read(SLONG &arg1);
    void Write(SLONG &arg1);
    void Resync();
    UBYTE Update();
    BBOOL Damage(SLONG arg1, Thing *arg2);
    void StartFightWith(Thing *arg1);
    SWORD MaxMoveSpeed();
    void StartAMove(XY arg1);
    void SetSpeedHandler(Normal &arg1, SWORD arg2);
    void NewGridUpdate(GridTile *gtile1);
    BBOOL NeedToAvoid(GridTile *gtile1);
    BBOOL IsVectorable();
    BBOOL IsDead();
    BBOOL IsStasis();
    BBOOL IsDoneMovingToTgt();
    BBOOL IsStuck();
    BBOOL IsSpecial();
    BBOOL CanFly();
    void Discover();
    void Undiscover();
    SLONG SquareTrueRangeToWhereGoingTo();
    void VectorToWhereGoingTo(Vector &arg1);
    ASpecies & Species();
    ::Gene & Gene();
    char * GetName();
    SLONG ResearchValue();
    SBYTE ResearchPercent(SBYTE arg1);
    SLONG QualityXlate(SBYTE arg1, SLONG arg2);
    SLONG UseEnergy(SLONG arg1);
    void Draw(SWORD arg1, SWORD arg2);
    void DrawOnMap(SWORD arg1, SWORD arg2);
    BBOOL IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    SLONG Smarts();
    SLONG Strength();
    SLONG Defense();
    SLONG Speed();
    SLONG Lifespan();
    SLONG Health();
    SLONG Energy();
    SLONG Childhood();
    void Free();
    void InvalidateMemory();
    BBOOL IsMemoryValid();
    void SetMemory(XY arg1);
    void PutInOrbit();
    BBOOL IsBones();
    BBOOL IsAdult();
    BBOOL IsCreatureMoving();
    BBOOL IsDraggingStuff();
    BBOOL IsBeingEaten();
    BBOOL IsHungry();
    BBOOL IsScrapping();
    BBOOL IsFrozen();
    BBOOL CanChopTrees(::Gene const &gene1);
    BBOOL CanGetOrders();
    void SetBeingEaten();
    void ClearBeingEaten();
    void ClearDraggingStuff();
    UBYTE AdultScale8();
    void SetPlayerActive(CreatureUserAction arg1);
    void ClearPlayerActive();
    BBOOL IsPlayerActive();
    BBOOL IsTurfSet();
    void SetTurf(XY arg1);
    void ClearTurf();
    UWORD TurfRange();
    SWORD IsStasisForHowLong();
    void SetupMove(SWORD arg1);
    SLONG ViewScale8();
    SampleID GetYesSample();
    void SoundYesSample();
    UBYTE GetYesPitch();
    BBOOL CanSpit();
    BBOOL CanArmor();
    BBOOL CanDive();
    void SetStasis(SWORD arg1);
    void StopWhateverYouWereDoing();
    void DropWhateverYouWereDragging();
    void Kill(BBOOL arg1);
    BBOOL SetHunting(Thing *arg1, BBOOL arg2);
    BBOOL SetWorkingOn(Thing *arg1);
    void SetPlayerMoveTo(XY arg1);
    void StartPickupThing(MovingThing *arg1);
    CreatureUserAction ActionOn(Thing *arg1, BBOOL arg2, BBOOL arg3);
    void ShatterFrozen();
    void InitArray();
    Creature * Create(UBYTE arg1, CreatureSpecies arg2, XY arg3, UBYTE arg4, Creature *arg5);
    void UpdateAll();
    SLONG ReadBuffer(Creature **arg1, SLONG arg2, SLONG arg3, BioGame &arg4);
    SLONG WriteBuffer(Creature **arg1, SLONG arg2, SLONG arg3, BioGame &arg4);
    void VoidPlTarget(Thing *arg1, BBOOL arg2);
    BBOOL operator ==(Creature *arg1);
private:
    BBOOL IsInRangeOfShepherd(HerdMode arg1, HerdMode arg2, PlSpec **arg3);
    BBOOL ChooseVegiOrBones(GridTile *gtile1);
    Building * ChooseNewDragToBuilding(TheBase &arg1, Building *arg2, Building *arg3);
    BBOOL AddEnergy(SLONG arg1, UBYTE arg2);
    MovingThing * SetDraggingStuff(Thing &arg1, GridTile *gtile2);
    Effect * SetDragWoodDisk(Building &arg1);
    BBOOL Instincts(GridTile *gtile1, AwarenessScan &arg2);
    BBOOL UpdateCriticalStuff(GridTile *gtile1);
    void EndUpdateCheck();
    void AnimUpdate();
    void AssignAnim();
    void SetResting(SLONG arg1, GridTile *gtile2);
    BBOOL BreatheFire(Thing *arg1);
    BBOOL SpitAt(Thing *arg1, EffectType arg2);
    void HandleSpecialsForHunting(Thing *arg1, SLONG arg2);
    void UpdateGrowth();
    BBOOL CheckJobs(GridTile *gtile1, AwarenessScan &arg2);
    void UpdateFrozen(GridTile *gtile1);
    SLONG SpitCost();
    void ZeroCR_MOVING(GridTile *gtile1);
    void ZeroCR_HUNTING(GridTile *gtile1);
    void ZeroCR_DIVING(GridTile *gtile1);
    void ZeroCR_STASIS(GridTile *gtile1);
    void ZeroCR_PICKUP(GridTile *gtile1);
    void ZeroCR_INLOVE(GridTile *gtile1);
    void ZeroCR_EATBONES(GridTile *gtile1);
    void ZeroCR_EATMEAT(GridTile *gtile1);
    void ZeroCR_EATSPECIALIST(GridTile *gtile1);
    void ZeroCR_EATVEGI(GridTile *gtile1);
    void ZeroCR_FROZEN(GridTile *gtile1);
    void ZeroCR_RESTING(GridTile *gtile1);
    void ZeroCR_NURSING(GridTile *gtile1);
    void ZeroCR_KISSING(GridTile *gtile1);
    void ZeroCR_NAPALM(GridTile *gtile1);
    void ZeroCR_CHOPPING(GridTile *gtile1);
    void ZeroCR_DRINKING(GridTile *gtile1);
    void ZeroCR_BUILDING(GridTile *gtile1);
    void ZeroCR_ORBIT(GridTile *gtile1);
    void ZeroCR_STUNNED(GridTile *gtile1);
    void ZeroCR_FIGHTING(GridTile *gtile1);
    void ZeroCR_ATTACKBUILDING(GridTile *gtile1);
    void ZeroCR_ATTACKSPECIALIST(GridTile *gtile1);
    void ZeroCR_DYING(GridTile *gtile1);
    void ZeroCR_BONES1(GridTile *gtile1);
    void ZeroCR_BONES2(GridTile *gtile1);
    void ZeroCR_BONES3(GridTile *gtile1);
    BBOOL ZeroJOB_WORK(GridTile *gtile1, AwarenessScan &arg2);
    BBOOL ZeroJOB_BUILD(GridTile *gtile1, AwarenessScan &arg2);
    void EveryCR_MOVING(GridTile *gtile1);
    void EveryCR_HUNTING(GridTile *gtile1);
    void EveryCR_DIVING(GridTile *gtile1);
    void EveryCR_INLOVE(GridTile *gtile1);
    void EveryCR_EATBONES(GridTile *gtile1);
    void EveryCR_EATMEAT(GridTile *gtile1);
    void EveryCR_EATSPECIALIST(GridTile *gtile1);
    void EveryCR_EATVEGI(GridTile *gtile1);
    void EveryCR_RESTING(GridTile *gtile1);
    void EveryCR_NURSING(GridTile *gtile1);
    void EveryCR_KISSING(GridTile *gtile1);
    void EveryCR_NAPALM(GridTile *gtile1);
    void EveryCR_CHOPPING(GridTile *gtile1);
    void EveryCR_DRINKING(GridTile *gtile1);
    void EveryCR_BUILDING(GridTile *gtile1);
    void EveryCR_ORBIT(GridTile *gtile1);
    void EveryCR_FIGHTING(GridTile *gtile1);
    void EveryCR_ATTACKBUILDING(GridTile *gtile1);
    void EveryCR_ATTACKSPECIALIST(GridTile *gtile1);
    void EveryCR_DYING(GridTile *gtile1);
    void EveryCR_BONES1(GridTile *gtile1);
    void EveryCR_BONES2(GridTile *gtile1);
    void EveryCR_BONES3(GridTile *gtile1);
public:
    //Creature(); -- generate default no-args constructor
    //Creature(Creature &arg1); -- generate default copy constructor
    Creature & operator =(Creature &arg1);
};

#endif // BIO_CREATURE_HPP_
/******************************************************************************/

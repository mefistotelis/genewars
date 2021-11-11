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
    BBOOL IsBasicInGene(CreatureBaseSpecies arg1);
    CreatureBaseSpecies dominant; // offset=0
    CreatureBaseSpecies recessive; // offset=1
};

class Creature : public SmartMovingThing { // sizeof=124
public:
    Creature * operator =(Creature *crtr1);
    //Creature(Creature *arg1); -- generate default copy constructor
    //Creature(); -- generate default no-args constructor
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
    BBOOL ZeroJOB_BUILD(GridTile *arg1, AwarenessScan &arg2);
    BBOOL ZeroJOB_WORK(GridTile *arg1, AwarenessScan &arg2);
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
    BBOOL CheckJobs(GridTile *arg1, AwarenessScan &scan);
    void UpdateGrowth();
    void HandleSpecialsForHunting(::Thing *tng1, SLONG arg2);
    BBOOL SpitAt(::Thing *tng1, EffectType arg2);
    BBOOL BreatheFire(::Thing *tng1);
    void SetResting(SLONG arg1, GridTile *arg2);
    void AssignAnim();
    void AnimUpdate();
    void EndUpdateCheck();
    BBOOL UpdateCriticalStuff(GridTile *arg1);
    BBOOL Instincts(GridTile *arg1, AwarenessScan &scan);
    Effect * SetDragWoodDisk(Building &bldg);
    ::MovingThing * SetDraggingStuff(::Thing &tng1, GridTile *arg2);
    BBOOL AddEnergy(SLONG arg1, UBYTE arg2);
    Building * ChooseNewDragToBuilding(TheBase &base, Building *arg2, Building *arg3);
    BBOOL ChooseVegiOrBones(GridTile *arg1);
    BBOOL IsInRangeOfShepherd(HerdMode arg1, HerdMode arg2, PlSpec **arg3);
    BBOOL operator ==(Creature *crtr1);
    void VoidPlTarget(::Thing *tng1, BBOOL arg2);
    SLONG WriteBuffer(Creature **crtr, SLONG arg2, SLONG arg3, BioGame &game);
    SLONG ReadBuffer(Creature **crtr, SLONG arg2, SLONG arg3, BioGame &game);
    void UpdateAll();
    Creature * Create(UBYTE arg1, CreatureSpecies arg2, XY cor3, UBYTE arg4, Creature *arg5);
    void InitArray();
    void ShatterFrozen();
    CreatureUserAction ActionOn(::Thing *tng1, BBOOL arg2, BBOOL arg3);
    void StartPickupThing(::MovingThing *tng1);
    void SetPlayerMoveTo(XY cor1);
    BBOOL SetWorkingOn(::Thing *tng1);
    BBOOL SetHunting(::Thing *tng1, BBOOL arg2);
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
    BBOOL CanChopTrees(::Gene const &gene);
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
    Gene & Gene();
    ASpecies & Species();
    void VectorToWhereGoingTo(Vector &vec1);
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
    void SetSpeedHandler(Normal &nrm1, SWORD arg2);
    void StartAMove(XY cor1);
    SWORD MaxMoveSpeed();
    void StartFightWith(::Thing *arg1);
    BBOOL Damage(SLONG arg1, ::Thing *tng2);
    UBYTE Update();
    void Resync();
    void Write(SLONG &arg1);
    void Read(SLONG &arg1);
    void Init(ThingType arg1, XY arg2, UBYTE arg3, SWORD arg4, SLONG arg5, Vector const &vec6);
    //void (**__vfptr)();
    static MyMinSprite huntingMMs;
    static MyMinSprite scaredMMs;
    static MyMinSprite tiredMMs;
    static MyMinSprite hungryMMs;
    static MyMinSprite packMMs;
    static MyMinSprite packLeadersMMs;
    static MyMinSprite shepherdedMMs;
    static MyMinSprite heartMMs;
    static MyMinSprite woodDiskMMs;
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

#endif // BIO_CREATURE_HPP_
/******************************************************************************/

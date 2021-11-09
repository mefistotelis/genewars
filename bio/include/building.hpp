/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file building.hpp
 *     Header file for building.cpp.
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
#ifndef BIO_BUILDING_HPP_
#define BIO_BUILDING_HPP_

#include "bftypes.h"
#include "buildingstat.hpp"
#include "creaturestat.hpp"
#include "thing.hpp"

class BioGame;

class Building : StaticThing { // sizeof=67
    Building * operator =(Building *bldg1);
    //Building(class Building *arg1);
    //Building();
    BBOOL operator ==(Building *bldg1);
    char * GetName();
    Creature * GeneLabMadeCreature(BBOOL &arg1);
    BBOOL IsMineMinedOut();
    BBOOL CanMakeSpeciesInGenelab(CreatureSpecies arg1);
    BBOOL IsGenelabBusy();
    BBOOL IsGenelabReady();
    ULONG TurretRange();
    ULONG ShieldRange();
    ULONG ObservatoryRange();
    ULONG PowerStationRange();
    ULONG MaxMineMinerals();
    ULONG MaxSawmillWood();
    ULONG MaxGoopStorage();
    BBOOL IsAGoopStorage();
    BBOOL IsObservable();
    BBOOL IsAPowerGenerator();
    BBOOL IsUpgradable();
    void UserUpgrade();
    void ClearBeingWrecked();
    void SetBeingWrecked();
    void ClearUpgradeOK();
    void SetUpgradeOK();
    void ClearDisabled();
    void SetDisabled();
    void ClearBusted();
    void SetBusted();
    BBOOL IsBeingWrecked();
    BBOOL IsWrecking();
    BBOOL IsBeingUpgraded();
    BBOOL IsUpgradeOK();
    BBOOL IsFunctional();
    BBOOL IsDisabled();
    BBOOL IsBusted();
    BBOOL IsDamaged();
    BBOOL IsPowered();
    BBOOL IsBuilt();
    BBOOL Build(UWORD arg1, BBOOL arg2);
    void DisableBuilding();
    void StartWreck(PlSpec *arg1);
    void StopAnyContinuousSound();
    void FinishBuilding();
    void Free();
    void Init(UBYTE arg1, BuildingType arg2, XY cor3);
    void Draw(SWORD arg1, SWORD arg2);
    SLONG WriteBuffer(Building **bldng, SLONG arg2, SLONG arg3, BioGame &game);
    SLONG ReadBuffer(Building **bldng, SLONG arg2, SLONG arg3, BioGame &game);
    void InitArray();
    void UpdateAll();
    BBOOL IsDead();
    BBOOL Damage(SLONG arg1, ::Thing *arg2);
    UBYTE Update();
    void Resync();
    void Write(SLONG &arg1);
    void Read(SLONG &arg1);
    void (**__vfptr)();
    SWORD build; // offset=43
    BuildingType type; // offset=45
    UBYTE stage; // offset=46
    UBYTE buildToStage; // offset=47
    UBYTE damageWobble; // offset=48
    UWORD flags; // offset=49
    UBYTE speciMake; // offset=51
    BBOOL padFlashState; // offset=52
    SWORD origGeneComplete; // offset=53
    BBOOL padBurned; // offset=54
    SLONG wreckScale; // offset=55
    SLONG geneComplete; // offset=56
    ULONG wood; // offset=57
    SWORD creatureMade; // offset=58
    XY target; // offset=59
    UBYTE creatureType; // offset=60
    SWORD power; // offset=61
    UBYTE userTypeStorage; // offset=62
    UBYTE addPower; // offset=63
    ThingIDX thingTgt; // offset=64
    UBYTE mode; // offset=65
    SWORD angle; // offset=66
    UBYTE reload; // offset=67
};

#endif // BIO_BUILDING_HPP_
/******************************************************************************/

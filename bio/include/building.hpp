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
#include "xy.hpp"
#include "thingidx.hpp"
#include "buildingstat.hpp"
#include "creaturestat.hpp"
#include "thing.hpp"

class BioGame;

class Building : public StaticThing { // sizeof=67
    SWORD build; // offset=43
    BuildingType type; // offset=45
    UBYTE stage; // offset=46
    UBYTE buildToStage; // offset=47
    UBYTE damageWobble; // offset=48
    UWORD flags; // offset=49
  union {
    UBYTE reload; // offset=51
    UBYTE speciMake; // offset=51
  };
  union {
    SWORD angle; // offset=52
    SWORD origGeneComplete; // offset=52
    BBOOL padFlashState; // offset=52
  };
  union {
    XY target; // offset=54
    ULONG wood; // offset=54
    SLONG geneComplete; // offset=54
    SLONG wreckScale; // offset=54
    BBOOL padBurned; // offset=54
  };
    SWORD creatureMade; // offset=58
  union {
    UBYTE mode; // offset=60
    UBYTE userTypeStorage; // offset=60
    UBYTE creatureType; // offset=60
  };
    SWORD power; // offset=61
    UBYTE addPower; // offset=63
    ThingIDX thingTgt; // offset=64
//internal:
    //void (**__vfptr)(); // offset=35
public:
    virtual void Read(SLONG &arg1);
    virtual void Write(SLONG &arg1);
    virtual void Resync();
    virtual UBYTE Update();
    virtual BBOOL Damage(SLONG arg1, Thing *tng2);
    virtual BBOOL IsDead();
    void UpdateAll();
    void InitArray();
    SLONG ReadBuffer(Building **bldng1, SLONG arg2, SLONG arg3, BioGame &game4);
    SLONG WriteBuffer(Building **bldng1, SLONG arg2, SLONG arg3, BioGame &game4);
    virtual void Draw(SWORD arg1, SWORD arg2);
    void Init(UBYTE arg1, BuildingType arg2, XY arg3);
    void Free();
    void FinishBuilding();
    void StopAnyContinuousSound();
    void StartWreck(PlSpec *arg1);
    void DisableBuilding();
    BBOOL Build(UWORD arg1, BBOOL arg2);
    BBOOL IsBuilt();
    BBOOL IsPowered();
    BBOOL IsDamaged();
    BBOOL IsBusted();
    BBOOL IsDisabled();
    BBOOL IsFunctional();
    BBOOL IsUpgradeOK();
    BBOOL IsBeingUpgraded();
    BBOOL IsWrecking();
    BBOOL IsBeingWrecked();
    void SetBusted();
    void ClearBusted();
    void SetDisabled();
    void ClearDisabled();
    void SetUpgradeOK();
    void ClearUpgradeOK();
    void SetBeingWrecked();
    void ClearBeingWrecked();
    void UserUpgrade();
    BBOOL IsUpgradable();
    BBOOL IsAPowerGenerator();
    BBOOL IsObservable();
    BBOOL IsAGoopStorage();
    ULONG MaxGoopStorage();
    ULONG MaxSawmillWood();
    ULONG MaxMineMinerals();
    ULONG PowerStationRange();
    ULONG ObservatoryRange();
    ULONG ShieldRange();
    ULONG TurretRange();
    BBOOL IsGenelabReady();
    BBOOL IsGenelabBusy();
    BBOOL CanMakeSpeciesInGenelab(CreatureSpecies arg1);
    BBOOL IsMineMinedOut();
    Creature * GeneLabMadeCreature(BBOOL &arg1);
    char * GetName();
    BBOOL operator ==(Building *bldng1);
    //Building(); -- generate default no-args constructor
    //Building(Building &bldng1); -- generate default copy constructor
    Building & operator =(Building &bldng1);
};

#endif // BIO_BUILDING_HPP_
/******************************************************************************/

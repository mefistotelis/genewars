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

#include "buildingstat.hpp"

class Building : StaticThing { // sizeof=67
    class Building * operator=(class Building *arg1);
    class Building * Building(class Building *arg1);
    class Building * Building();
    BBOOL operator==(Building *arg1);
    char * GetName();
    Creature * GeneLabMadeCreature(BBOOL *arg1);
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
    void Init(UBYTE arg1, BuildingType arg2, XY arg3);
    void Draw(SWORD arg1, SWORD arg2);
    SLONG WriteBuffer(Building **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    SLONG ReadBuffer(Building **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    void InitArray();
    void UpdateAll();
    BBOOL IsDead();
    BBOOL Damage(SLONG arg1, Thing *arg2);
    UBYTE Update();
    void Resync();
    void Write(SLONG *arg1);
    void Read(SLONG *arg1);
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


class TurretScan : RangeScanner { // sizeof=53
    class TurretScan * TurretScan(class TurretScan *arg1);
    void PerGrid();
    class TurretScan * TurretScan(Building arg1);
    void (**__vfptr)();
    SLONG closestRange;
    Building turret;
    Thing *tgtThing; // offset=41
};

class SawmillScan : RangeScanner { // sizeof=53
    class SawmillScan * SawmillScan(class SawmillScan *arg1);
    void PerGrid();
    class SawmillScan * SawmillScan(Building arg1);
    void (**__vfptr)();
    SLONG bestValue;
    Building sawmill;
    Plant *tgtPlant; // offset=41
};

class FarmScan : RangeScanner { // sizeof=53
    class FarmScan * FarmScan(class FarmScan *arg1);
    void PerGrid();
    class FarmScan * FarmScan(Building arg1);
    void (**__vfptr)();
    SLONG bestValue;
    Building farm;
    Thing *tgt; // offset=41
};

class ShieldScan : RangeScanner { // sizeof=49
    class ShieldScan * ShieldScan(class ShieldScan *arg1);
    void BounceThingOffShield(MovingThing *arg1, BBOOL arg2);
    void PerGrid();
    class ShieldScan * ShieldScan(Building arg1);
    void (**__vfptr)();
    ULONG squareShieldRange;
    Building shield;
};


#endif // BIO_BUILDING_HPP_
/******************************************************************************/

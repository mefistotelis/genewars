/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file thebase.hpp
 *     TheBase class.
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
#ifndef THEBASE_HPP_
#define THEBASE_HPP_

#include "bftypes.h"
#include "xy.hpp"
#include "buildingstat.hpp"

class Building;
class BuilderIFC;

class PowerGraph { // sizeof=301
    SWORD history[50];
    SWORD hi[50]; // offset=100
    SWORD lo[50]; // offset=200
    UBYTE index; // offset=300
public:
    void Update(SWORD arg1, SWORD arg2, SWORD arg3);
    void Draw(SLONG arg1, SLONG arg2);
    UBYTE PowerToColor(SWORD arg1);
};

class TheBase { // sizeof=377
    UBYTE player; // offset=0
    SBYTE numBuildings; // offset=1
    SLONG startingGoop; // offset=2
    SLONG goop; // offset=6
    UWORD totalPower; // offset=10
    UWORD powerGenerated; // offset=12
    UWORD powerReceived; // offset=14
    SLONG powerAverage; // offset=16
    SLONG etherealDetectionTime; // offset=20
    PowerGraph powerGraph; // offset=24
    ULONG goopCapacity; // offset=325
    UWORD status[8]; // offset=329
    UWORD trees; // offset=345
    XY center; // offset=347
    UBYTE builtStuff[14]; // offset=351
    UWORD buildingTypesBuilt; // offset=365
    UWORD pad[3]; // offset=367
    SLONG numCreatures; // offset=373
public:
    TheBase();
    void Reset();
    Building * AddNewBuilding(BuildingType arg1, XY cor2);
    void RemoveBuilding(UBYTE arg1);
    Building * NearestBuilding(XY cor1, ULONG arg2, UWORD arg3);
    Building * NearestBuildingNeedingWork(XY cor1, BBOOL arg2);
    Building * JumpToNextPowerStation(Building *arg1);
    void StartFoundation(BuilderIFC &arg1, XY cor2);
    void ComputeGoopCapacity();
    void StoreGoopInBuildings();
    BBOOL IsAnyBuildingNeedingWork(BBOOL arg1);
    BBOOL InPowerStationRange(XY cor1);
    BBOOL IsUnderAttack();
    BBOOL IsLowPower();
    BBOOL IsEtherealApproach();
    BBOOL IsBuildable(BuildingType arg1);
    BBOOL IsUpgradable(BuildingType arg1, UBYTE arg2);
    Building * GetSiteBuilding(UBYTE arg1);
    BBOOL AddGoop(ULONG arg1);
    SLONG Goop();
    void UseGoop(SLONG arg1);
    Building * NearestAnyBuilding(XY cor1, ULONG arg2, UWORD arg3, SBYTE arg4);
private:
    void ComputeCenter();
//public:
    //TheBase(TheBase const &arg1); -- generate default copy constructor
};

#endif // THEBASE_HPP_
/******************************************************************************/

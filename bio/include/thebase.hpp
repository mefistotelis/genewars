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

class TheBase { // sizeof=121
    class TheBase * TheBase(class TheBase *arg1);
    void ComputeCenter();
    Building * NearestAnyBuilding(XY arg1, ULONG arg2, UWORD arg3, SBYTE arg4);
    void UseGoop(SLONG arg1);
    SLONG Goop();
    BBOOL AddGoop(ULONG arg1);
    Building * GetSiteBuilding(UBYTE arg1);
    BBOOL IsUpgradable(BuildingType arg1, UBYTE arg2);
    BBOOL IsBuildable(BuildingType arg1);
    BBOOL IsEtherealApproach();
    BBOOL IsLowPower();
    BBOOL IsUnderAttack();
    BBOOL InPowerStationRange(XY arg1);
    BBOOL IsAnyBuildingNeedingWork(BBOOL arg1);
    void StoreGoopInBuildings();
    void ComputeGoopCapacity();
    void StartFoundation(BuilderIFC *arg1, XY arg2);
    Building * JumpToNextPowerStation(Building *arg1);
    Building * NearestBuildingNeedingWork(XY arg1, BBOOL arg2);
    Building * NearestBuilding(XY arg1, ULONG arg2, UWORD arg3);
    void RemoveBuilding(UBYTE arg1);
    Building * AddNewBuilding(BuildingType arg1, XY arg2);
    void Reset();
    class TheBase * TheBase();
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
    ULONG goopCapacity; // offset=69
    UWORD status[7]; // offset=73
    UWORD trees; // offset=89
    XY center; // offset=91
    UBYTE builtStuff[13]; // offset=95
    UWORD buildingTypesBuilt; // offset=109
    UWORD pad[2]; // offset=111
    SLONG numCreatures; // offset=117
};

char unsigned TheBase::AddGoop( long unsigned );
void TheBase::UseGoop( long );
near TheBase::TheBase();
void TheBase::Reset();
char unsigned TheBase::IsAnyBuildingNeedingWork( char unsigned );
void TheBase::StartFoundation( BuilderIFC &, XY );
Building * TheBase::AddNewBuilding( BuildingType, XY );
void TheBase::RemoveBuilding( char unsigned );
Building * TheBase::JumpToNextPowerStation( Building * );
Building * TheBase::NearestBuilding( XY, long unsigned, short unsigned );
char unsigned TheBase::InPowerStationRange( XY );
Building * TheBase::NearestAnyBuilding( XY, long unsigned, short unsigned, char signed );
Building * TheBase::NearestBuildingNeedingWork( XY, char unsigned );
void TheBase::ComputeCenter();
void TheBase::ComputeGoopCapacity();
void TheBase::StoreGoopInBuildings();
char unsigned TheBase::IsBuildable( BuildingType );
char unsigned TheBase::IsUpgradable( BuildingType, char unsigned );
long TheBase::Goop();

#endif // THEBASE_HPP_
/******************************************************************************/

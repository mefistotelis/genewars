/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file thebase.cpp
 *     Implementation of related functions.
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
#include "thebase.hpp"

char unsigned PowerGraph::PowerToColor(SWORD arg1)
{
// code at 0001:00040010
}

void PowerGraph::Update(SWORD arg1, SWORD arg2, SWORD arg3)
{
// code at 0001:00039aa7
}

void PowerGraph::Draw(SLONG arg1, SLONG arg2)
{
// code at 0001:00039b3c
}

TheBase::TheBase()
{
  // code at 0001:00039cfb
  // done
}

BBOOL TheBase::AddGoop(ULONG arg1)
{
// code at 0001:00040674
}

void TheBase::UseGoop(SLONG arg1)
{
// code at 0001:00040448
}

void TheBase::Reset()
{
// code at 0001:00039d1e
}

BBOOL TheBase::IsAnyBuildingNeedingWork(BBOOL arg1)
{
// code at 0001:00039d64
}

void TheBase::StartFoundation(BuilderIFC &bldr, XY cor2)
{
// code at 0001:00039dfc
}

Building * TheBase::AddNewBuilding(BuildingType arg1, XY cor2)
{
// code at 0001:0003a4ba
}

void TheBase::RemoveBuilding(UBYTE arg1)
{
// code at 0001:0003a664
}

Building * TheBase::JumpToNextPowerStation(Building *arg1)
{
// code at 0001:0003a75c
}

Building * TheBase::NearestBuilding(XY cor1, ULONG arg2, UWORD arg3)
{
// code at 0001:0003a7f3
}

BBOOL TheBase::InPowerStationRange(XY cor1)
{
// code at 0001:0003a92b
}

Building * TheBase::NearestAnyBuilding(XY cor1, ULONG arg2, UWORD arg3, SBYTE arg4)
{
// code at 0001:0003a9de
}

Building * TheBase::NearestBuildingNeedingWork(XY cor1, BBOOL arg2)
{
// code at 0001:0003aaf9
}

void TheBase::ComputeCenter()
{
// code at 0001:0003abc1
}

void TheBase::ComputeGoopCapacity()
{
// code at 0001:0003aca9
}

void TheBase::StoreGoopInBuildings()
{
// code at 0001:0003adfc
}

BBOOL TheBase::IsBuildable(BuildingType arg1)
{
// code at 0001:0003afe8
}

BBOOL TheBase::IsUpgradable(BuildingType arg1, UBYTE arg2)
{
// code at 0001:0003b097
}

SLONG TheBase::Goop()
{
// code at 0001:000182ac
}


/******************************************************************************/

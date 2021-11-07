/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file xy.cpp
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
#include "xy.hpp"

XY XY::operator *(int n) const
{
// code at 0001:00059970
}

XY XY::operator &=(int n)
{
// code at 0001:00059934
}

SLONG XY::AltAt() const
{
// code at 0001:0004a0d6
}

SLONG XY::ShadeAt() const
{
// code at 0001:0004a2a6
}

void XY::EverythingAt(SLONG &arg1, UBYTE &arg2) const
{
// code at 0001:0004a4f5
}

XY XY::operator +=(XY o2)
{
// code at 0001:00040be0
}

XY XY::BaseTile() const
{
// code at 0001:00040ba4
}

void XY::ClearFoundation(UBYTE arg1) const
{
// code at 0001:00040b78
}

void XY::SetFoundation(UBYTE arg1) const
{
// code at 0001:00040b48
}

BBOOL XY::operator ==(XY arg1) const
{
// code at 0001:000378f0
}

UBYTE XY::IsFoundationSiteWrong(UBYTE arg1) const
{
// code at 0001:000378bc
}

XY XY::operator +(int n) const
{
// code at 0001:00084838
}

XY XY::operator -(int n) const
{
// code at 0001:000847f8
}

BBOOL XY::IsPassable(UBYTE arg1, Building *arg2, MovingThing *arg3) const
{
// code at 0001:00083ff8
}

BBOOL XY::operator !=(XY arg1) const
{
// code at 0001:00005bc0
}

XY XY::operator +(XY arg1) const
{
// code at 0001:00005b80
}

XY XY::Set(SWORD arg1, SWORD arg2)
{
// code at 0001:00005b44
}

XY XY::Add(SWORD arg1, SWORD arg2)
{
// code at 0001:00004bf4
}

GridTile * XY::GridtileAt() const
{
// code at 0001:00003664
}

UBYTE XY::TerrainAt() const
{
// code at 0001:00003630
}

XY XY::CenterFrom() const
{
// code at 0001:000262ac
}

XY XY::operator >>=(int n)
{
// code at 0001:00056db4
}

XY XY::operator <<=(int n)
{
// code at 0001:00056d78
}

XY XY::operator -=(XY)
{
// code at 0001:000938e4
}

Normal XY::NormalAt() const
{
// code at 0001:0008bc25
}

ULONG XY::SquareRangeTo(XY arg1) const
{
// code at 0001:0008bfe6
}

ULONG XY::SquareTrueRangeTo(XY arg1) const
{
// code at 0001:0008c057
}

ULONG XY::SquareTrueRangeTo(XY arg1, SLONG arg2, SLONG arg3) const
{
// code at 0001:0008c0eb
}

ULONG XY::RangeTo(XY arg1) const
{
// code at 0001:0008c173
}

ULONG XY::TrueRangeTo(XY arg1) const
{
// code at 0001:0008c1e7
}

ULONG XY::TrueRangeTo(XY arg1, SLONG arg2, SLONG arg3) const
{
// code at 0001:0008c27e
}

SWORD XY::DirTo(XY arg1) const
{
// code at 0001:0008c309
}

void XY::AngleVectorTo(XY arg1, Vector &arg2) const
{
// code at 0001:0008c365
}

void XY::AngleVectorTo(XY arg1, Vector &arg2, SLONG arg3, SLONG arg4) const
{
// code at 0001:0008c405
}

XY XY::RangeTargetXYTo(XY, short unsigned, short)
{
// code at 0001:0008c49a
}

XY XY::TargetXYAround(short unsigned)
{
// code at 0001:0008c599
}

XY XY::ExactTargetXYAround(short unsigned)
{
// code at 0001:0008c776
}

XY XY::AngleRangeFromXY(short, short unsigned)
{
// code at 0001:0008c8cc
}

GridTile * XY::NearestGridtileAt() const
{
// code at 0001:0008c9a7
}

Building * XY::BuildingAt(UBYTE arg1) const
{
// code at 0001:0008ca56
}

Building * XY::ExactBuildingAt(UBYTE arg1) const
{
// code at 0001:0008cb40
}

BBOOL XY::IsClearToMoveTo(XY arg1, UBYTE arg2, XY &arg3, MovingThing *arg4, Building *arg5) const
{
// code at 0001:0008cc48
}

BBOOL XY::IsClearToMoveToIgnoringBuildings(XY arg1, UBYTE arg2, XY &arg3, MovingThing *arg4) const
{
// code at 0001:0008cdcc
}

XY XY::FindFirstUnobstructedXY(XY arg1, UBYTE arg2, MovingThing *arg3, Building *arg4) const
{
// code at 0001:0008cf4a
}

UBYTE XY::IsFoundationSiteWrong(UBYTE arg1, UBYTE arg2) const
{
// code at 0001:0008d067
}

XY XY::FoundationSiteAt(UBYTE arg1) const
{
// code at 0001:0008d25f
}

void XY::LockUnlockFoundation(UBYTE arg1, BBOOL arg2) const
{
// code at 0001:0008d2c7
}

XY XY::FoundationUpperLeft(UBYTE arg1) const
{
// code at 0001:0008d374
}

void XY::SetLzPad(Building *arg1, BBOOL arg2, BBOOL arg3) const
{
// code at 0001:0008d3d3
}

void XY::MarkFoundation(UBYTE arg1, BBOOL arg2) const
{
// code at 0001:0008d58b
}

BBOOL XY::FlattenFoundation(UBYTE arg1, ULONG arg2, ULONG arg3) const
{
// code at 0001:0008d6b0
}

BBOOL XY::IsClearLineOfSightTo(XY arg1, SLONG arg2, SLONG arg3) const
{
// code at 0001:0008d8ad
}

void XY::DiscoverMap(SLONG arg1) const
{
// code at 0001:0008d98d
}

void XY::UndiscoverMap(SLONG arg1) const
{
// code at 0001:0008daec
}

BBOOL XY::IsPassable(UBYTE arg1, MovingThing *tng) const
{
// code at 0001:00052a38
}

void XY::Clear()
{
// code at 0001:0001e10c
}

XY XY::operator &(int n) const
{
// code at 0001:00085750
}

XY XY::operator -(XY arg1) const
{
// code at 0001:0003940c
}

XY XY::operator /=(int n)
{
// code at 0001:000393c0
}

XY XY::operator <<(int n) const
{
// code at 0001:0003937c
}

XY XY::operator >>(int n) const
{
// code at 0001:000781c8
}

XY XY::operator /(int n) const
{
// code at 0001:00088fc4
}

/*unsigned char XY::__defarg()
{
// code at 0001:00004c30
}*/

/*short XY::__defarg()
{
// code at 0001:0001e13c
}*/

/*Building * XY::__defarg()
{
// code at 0001:00052bf0
}*/

/******************************************************************************/

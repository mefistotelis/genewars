/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file xy.hpp
 *     XY class.
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
#ifndef XY_HPP_
#define XY_HPP_

#include "bftypes.h"

class Building;
class GridTile;
class MovingThing;
class Vector;

struct Normal { // sizeof=12
    SLONG NX; // offset=0
    SLONG NY; // offset=4
    SLONG NZ; // offset=8
};

class XY { // sizeof=4
public:
    SWORD x; // offset=0
    SWORD y; // offset=2
public:
    XY operator <<=(int n);
    XY operator <<(int n) const;
    XY operator >>=(int n);
    XY operator >>(int n) const;
    XY operator |(int n);
    XY operator |=(int n);
    XY operator &(int n) const;
    XY operator &=(int n);
    XY operator /(int n) const;
    XY operator /=(int n);
    XY operator *(int n) const;
    XY operator -(int n) const;
    XY operator +(int n) const;
    XY operator -(XY obj) const;
    XY operator +(XY obj) const;
    XY operator -=(XY obj);
    XY operator +=(XY obj);
    BBOOL operator !=(XY obj) const;
    BBOOL operator ==(XY obj) const;
    XY Set(SWORD arg1, SWORD arg2);
    void Clear();
    XY Add(SWORD arg1, SWORD arg2);
    XY Abs();
    XY Abs(XY &arg1);
    BBOOL InRegion(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    BBOOL IsClear();
    XY BaseTile() const;
    XY CenterFrom() const;
    ULONG SquareRangeTo(XY arg1) const;
    ULONG SquareTrueRangeTo(XY arg1) const;
    ULONG SquareTrueRangeTo(XY arg1, SLONG arg2, SLONG arg3) const;
    ULONG RangeTo(XY arg1) const;
    ULONG TrueRangeTo(XY arg1) const;
    ULONG TrueRangeTo(XY arg1, SLONG arg2, SLONG arg3) const;
    SWORD DirTo(XY arg1) const;
    SWORD QRangeTo(XY arg1);
    SWORD QDirTo(XY arg1);
    void AngleVectorTo(XY arg1, Vector &arg2) const;
    void AngleVectorTo(XY arg1, Vector &arg2, SLONG arg3, SLONG arg4) const;
    SLONG AltAt() const;
    SLONG ShadeAt() const;
    Normal NormalAt() const;
    UBYTE TerrainAt() const;
    XY RangeTargetXYTo(XY arg1, UWORD arg2, SWORD arg3);
    XY TargetXYAround(UWORD arg1);
    XY ExactTargetXYAround(UWORD arg1);
    XY AngleRangeFromXY(SWORD arg1, UWORD arg2);
    Building * BuildingAt(UBYTE arg1) const;
    GridTile * GridtileAt() const;
    GridTile * NearestGridtileAt() const;
    BBOOL IsPassable(UBYTE arg1, MovingThing *arg2) const;
    BBOOL IsPassable(UBYTE arg1, Building *arg2, MovingThing *arg3) const;
    XY FindFirstUnobstructedXY(XY arg1, UBYTE arg2, MovingThing *arg3, Building *arg4) const;
    BBOOL IsClearToMoveTo(XY arg1, UBYTE arg2, XY &arg3, MovingThing *arg4, Building *arg5) const;
    BBOOL IsClearToMoveToIgnoringBuildings(XY arg1, UBYTE arg2, XY &arg3, MovingThing *arg4) const;
    BBOOL IsClearLineOfSightTo(XY arg1, SLONG arg2, SLONG arg3) const;
    UBYTE IsFoundationSiteWrong(UBYTE arg1) const;
    UBYTE IsFoundationSiteWrong(UBYTE arg1, UBYTE arg2) const;
    XY FoundationSiteAt(UBYTE arg1) const;
    XY FoundationUpperLeft(UBYTE arg1) const;
    Building * ExactBuildingAt(UBYTE arg1) const;
    void DiscoverMap(SLONG arg1) const;
    void UndiscoverMap(SLONG arg1) const;
    void ClearFoundation(UBYTE arg1) const;
    void SetFoundation(UBYTE arg1) const;
    BBOOL FlattenFoundation(UBYTE arg1, ULONG arg2, ULONG arg3) const;
    void SetLzPad(Building *arg1, BBOOL arg2, BBOOL arg3) const;
    void EverythingAt(SLONG &arg1, UBYTE &arg2) const;
private:
    SWORD RawRangeTo(XY arg1);
    UBYTE RawDirTo(XY arg1);
    void MarkFoundation(UBYTE arg1, BBOOL arg2) const;
    void LockUnlockFoundation(UBYTE arg1, BBOOL arg2) const;
//public:
    //XY(XY const &cor1); -- generate default copy constructor
};

#endif // XY_HPP_
/******************************************************************************/

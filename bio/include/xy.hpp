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

class XY { // sizeof=4
    class XY * XY(class XY *arg1);
    void LockUnlockFoundation(UBYTE arg1, BBOOL arg2);
    void MarkFoundation(UBYTE arg1, BBOOL arg2);
    UBYTE RawDirTo(XY arg1);
    SWORD RawRangeTo(XY arg1);
    void EverythingAt(SLONG *arg1, UBYTE *arg2);
    void SetLzPad(Building *arg1, BBOOL arg2, BBOOL arg3);
    BBOOL FlattenFoundation(UBYTE arg1, ULONG arg2, ULONG arg3);
    void SetFoundation(UBYTE arg1);
    void ClearFoundation(UBYTE arg1);
    void UndiscoverMap(SLONG arg1);
    void DiscoverMap(SLONG arg1);
    Building * ExactBuildingAt(UBYTE arg1);
    XY FoundationUpperLeft(UBYTE arg1);
    XY FoundationSiteAt(UBYTE arg1);
    UBYTE IsFoundationSiteWrong(UBYTE arg1, UBYTE arg2);
    UBYTE IsFoundationSiteWrong(UBYTE arg1);
    BBOOL IsClearLineOfSightTo(XY arg1, SLONG arg2, SLONG arg3);
    BBOOL IsClearToMoveToIgnoringBuildings(XY arg1, UBYTE arg2, XY *arg3, MovingThing *arg4);
    BBOOL IsClearToMoveTo(XY arg1, UBYTE arg2, XY *arg3, MovingThing *arg4, Building *arg5);
    XY FindFirstUnobstructedXY(XY arg1, UBYTE arg2, MovingThing *arg3, Building *arg4);
    BBOOL IsPassable(UBYTE arg1, Building *arg2, MovingThing *arg3);
    BBOOL IsPassable(UBYTE arg1, MovingThing *arg2);
    GridTile * NearestGridtileAt();
    GridTile * GridtileAt();
    Building * BuildingAt(UBYTE arg1);
    XY AngleRangeFromXY(SWORD arg1, UWORD arg2);
    XY ExactTargetXYAround(UWORD arg1);
    XY TargetXYAround(UWORD arg1);
    XY RangeTargetXYTo(XY arg1, UWORD arg2, SWORD arg3);
    UBYTE TerrainAt();
    Normal NormalAt();
    SLONG ShadeAt();
    SLONG AltAt();
    void AngleVectorTo(XY arg1, Vector *arg2, SLONG arg3, SLONG arg4);
    void AngleVectorTo(XY arg1, Vector *arg2);
    SWORD QDirTo(XY arg1);
    SWORD QRangeTo(XY arg1);
    SWORD DirTo(XY arg1);
    ULONG TrueRangeTo(XY arg1, SLONG arg2, SLONG arg3);
    ULONG TrueRangeTo(XY arg1);
    ULONG RangeTo(XY arg1);
    ULONG SquareTrueRangeTo(XY arg1, SLONG arg2, SLONG arg3);
    ULONG SquareTrueRangeTo(XY arg1);
    ULONG SquareRangeTo(XY arg1);
    XY CenterFrom();
    XY BaseTile();
    BBOOL IsClear();
    BBOOL InRegion(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    XY Abs(XY *arg1);
    XY Abs();
    XY Add(SWORD arg1, SWORD arg2);
    void Clear();
    XY Set(SWORD arg1, SWORD arg2);
    XY operator<<=(int arg1);
    XY operator<<(int arg1);
    XY operator>>=(int arg1);
    XY operator>>(int arg1);
    XY operator|(int arg1);
    XY operator|=(int arg1);
    XY operator&(int arg1);
    XY operator&=(int arg1);
    XY operator/(int arg1);
    XY operator/=(int arg1);
    XY operator*(int arg1);
    XY operator-(int arg1);
    XY operator+(int arg1);
    XY operator-(XY arg1);
    XY operator+(XY arg1);
    XY operator-=(XY arg1);
    XY operator+=(XY arg1);
    BBOOL operator!=(XY arg1);
    BBOOL operator==(XY arg1);
    SWORD x; // offset=0
    SWORD y; // offset=2
};

long XY::AltAt() const;
long XY::ShadeAt() const;
void XY::EverythingAt( long &, char unsigned & ) const;
XY XY::operator +=( XY );
XY XY::BaseTile() const;
void XY::ClearFoundation( char unsigned ) const;
void XY::SetFoundation( char unsigned ) const;
char unsigned XY::operator ==( XY ) const;
char unsigned XY::IsFoundationSiteWrong( char unsigned ) const;
XY XY::operator +( int ) const;
XY XY::operator -( int ) const;
char unsigned XY::IsPassable( char unsigned, Building *, MovingThing * ) const;
char unsigned XY::operator !=( XY ) const;
XY XY::operator +( XY ) const;
XY XY::Set( short, short );
char unsigned XY::__defarg();
XY XY::Add( short, short );
GridTile * XY::GridtileAt() const;
char unsigned XY::TerrainAt() const;
XY XY::CenterFrom() const;
XY XY::operator >>=( int );
XY XY::operator <<=( int );
XY XY::operator -=( XY );
Normal XY::NormalAt() const;
long unsigned XY::SquareRangeTo( XY ) const;
long unsigned XY::SquareTrueRangeTo( XY ) const;
long unsigned XY::SquareTrueRangeTo( XY, long, long ) const;
long unsigned XY::RangeTo( XY ) const;
long unsigned XY::TrueRangeTo( XY ) const;
long unsigned XY::TrueRangeTo( XY, long, long ) const;
short XY::DirTo( XY ) const;
void XY::AngleVectorTo( XY, Vector & ) const;
void XY::AngleVectorTo( XY, Vector &, long, long ) const;
XY XY::RangeTargetXYTo( XY, short unsigned, short );
XY XY::TargetXYAround( short unsigned );
XY XY::ExactTargetXYAround( short unsigned );
XY XY::AngleRangeFromXY( short, short unsigned );
GridTile * XY::NearestGridtileAt() const;
Building * XY::BuildingAt( char unsigned ) const;
Building * XY::ExactBuildingAt( char unsigned ) const;
char unsigned XY::IsClearToMoveTo( XY, char unsigned, XY &, MovingThing *, Building * ) const;
char unsigned XY::IsClearToMoveToIgnoringBuildings( XY, char unsigned, XY &, MovingThing * ) const;
XY XY::FindFirstUnobstructedXY( XY, char unsigned, MovingThing *, Building * ) const;
char unsigned XY::IsFoundationSiteWrong( char unsigned, char unsigned ) const;
XY XY::FoundationSiteAt( char unsigned ) const;
void XY::LockUnlockFoundation( char unsigned, char unsigned ) const;
XY XY::FoundationUpperLeft( char unsigned ) const;
void XY::SetLzPad( Building *, char unsigned, char unsigned ) const;
void XY::MarkFoundation( char unsigned, char unsigned ) const;
char unsigned XY::FlattenFoundation( char unsigned, long unsigned, long unsigned ) const;
char unsigned XY::IsClearLineOfSightTo( XY, long, long ) const;
void XY::DiscoverMap( long ) const;
void XY::UndiscoverMap( long ) const;
short XY::__defarg();
void XY::Clear();
XY XY::operator *( int ) const;
XY XY::operator &=( int );
XY XY::operator &( int ) const;
Building * XY::__defarg();
char unsigned XY::IsPassable( char unsigned, MovingThing * ) const;
XY XY::operator -( XY ) const;
XY XY::operator /=( int );
XY XY::operator <<( int ) const;
XY XY::operator >>( int ) const;
XY XY::operator /( int ) const;

#endif // XY_HPP_
/******************************************************************************/

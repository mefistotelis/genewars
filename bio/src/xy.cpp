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

#include "gridtile.hpp"
#include "data.hpp"

XY XY::operator *(int n) const
{
  // code at 0001:00059970
  XY corr;

  corr.x = n * this->x;
  corr.y = n * this->y;
  return corr;
}

XY XY::operator &=(int n)
{
  // code at 0001:00059934
  this->x &= n;
  this->y &= n;
  return *this;
}

/** Get grid altitude at current XY.
 */
SLONG XY::AltAt() const
{
  // code at 0001:0004a0d6
  SLONG tileX, tileY;
  SLONG subposX, subposY;
  GridTile *gtile;
  SLONG alt1, alt2, alt3, alt4;
  // We will need tile numbers to get grid points altitudes
  tileX = this->x >> 8;
  tileY = this->y >> 8;
  gtile = &bio.grid[(tileY) & 0x7F][(tileX) & 0x7F];
  alt1 = gtile->Alt;
  gtile = &bio.grid[(tileY+1) & 0x7F][(tileX+1) & 0x7F];
  alt3 = gtile->Alt;
  // Sub-positions within tiles will be used to weight the altitude inbetween
  subposX = (this->x & 0xFF);
  subposY = (this->y & 0xFF);
  if ( subposX < subposY )
  {
    gtile = &bio.grid[(tileY+1) & 0x7F][(tileX) & 0x7F];
    alt2 = gtile->Alt;
    alt4 = ((alt2 - alt1) * subposY + (alt3 - alt2) * subposX) >> 7;
  }
  else
  {
    gtile = &bio.grid[(tileY) & 0x7F][(tileX+1) & 0x7F];
    alt2 = gtile->Alt;
    alt4 = ((alt2 - alt1) * subposX + (alt3 - alt2) * subposY) >> 7;
  }
  return 2 * alt1 + alt4;
}

/** Get grid shade at current XY.
 */
SLONG XY::ShadeAt() const
{
  // code at 0001:0004a2a6
  SLONG tileX, tileY;
  SLONG subposX, subposY;
  GridTile *gtile;
  SLONG shade1, shade2, shade3, shade4;

  tileX = this->x >> 8;
  tileY = this->y >> 8;
  gtile = &bio.grid[(tileY) & 0x7F][(tileX) & 0x7F];
  shade1 = gtile->explored * gtile->Shade >> 6;
  gtile = &bio.grid[(tileY+1) & 0x7F][(tileX+1) & 0x7F];
  shade3 = gtile->explored * gtile->Shade >> 6;
  subposX = (this->x & 0xFF);
  subposY = (this->y & 0xFF);
  if ( subposX < subposY )
  {
    gtile = &bio.grid[(tileY+1) & 0x7F][(tileX) & 0x7F];
    shade2 = gtile->explored * gtile->Shade >> 6;
    shade4 = ((shade2 - shade1) * subposY + (shade3 - shade2) * subposX) >> 7;
  }
  else
  {
    gtile = &bio.grid[(tileY) & 0x7F][(tileX+1) & 0x7F];
    shade2 = gtile->explored * gtile->Shade >> 6;
    shade4 = ((shade2 - shade1) * subposX + (shade3 - shade2) * subposY) >> 7;
  }
  shade4 = ((2 * shade1 + shade4 - 7680) >> 8) + 16;
  if (shade4 > 64)
    shade4 = 64;
  if (shade4 < 0)
    shade4 = 0;
  return shade4;
}

void XY::EverythingAt(SLONG &altAt, UBYTE &shadeAt) const
{
  // code at 0001:0004a4f5
  SLONG tileX, tileY;
  SLONG subposX, subposY;
  GridTile *gtile;
  SLONG shade1, shade2, shade3, shade4;
  SLONG alt1, alt2, alt3, alt4;

  tileX = this->x >> 8;
  tileY = this->y >> 8;
  gtile = &bio.grid[(tileY) & 0x7F][(tileX) & 0x7F];
  alt1 = gtile->Alt;
  shade1 = gtile->explored * gtile->Shade >> 6;
  gtile = &bio.grid[(tileY+1) & 0x7F][(tileX+1) & 0x7F];
  alt3 = gtile->Alt;
  shade3 = gtile->explored * gtile->Shade >> 6;
  subposX = (this->x & 0xFF);
  subposY = (this->y & 0xFF);
  if ( subposX < subposY )
  {
    gtile = &bio.grid[(tileY+1) & 0x7F][(tileX) & 0x7F];
    alt2 = gtile->Alt;
    shade2 = gtile->explored * gtile->Shade >> 6;
    alt4 = (subposX * (alt3 - alt2) + subposY * (alt2 - alt1)) >> 7;
    shade4 = ((shade2 - shade1) * subposY + (shade3 - shade2) * subposX) >> 7;
  }
  else
  {
    gtile = &bio.grid[(tileY) & 0x7F][(tileX+1) & 0x7F];
    alt2 = gtile->Alt;
    shade2 = gtile->explored * gtile->Shade >> 6;
    alt4 = ((alt3 - alt2) * subposY + (alt2 - alt1) * subposX) >> 7;
    shade4 = ((shade2 - shade1) * subposX + (shade3 - shade2) * subposY) >> 7;
  }
  shade4 = ((2 * shade1 + shade4 - 7680) >> 8) + 16;
  if (shade4 >= 64)
    shade4 = 64;
  if (shade4 < 0)
    shade4 = 0;
  shadeAt = shade4;
  altAt = 2 * alt1 + alt4;
}

XY XY::operator +=(XY cor1)
{
  // code at 0001:00040be0
  this->x += cor1.x;
  this->y += cor1.y;
  return *this;
}

/** Returns XY at beginning of the tile.
 */
XY XY::BaseTile() const
{
  // code at 0001:00040ba4
  XY corr;

  corr.x = (this->x & ~0xff);
  corr.y = (this->y & ~0xff);
  return corr;
}

void XY::ClearFoundation(UBYTE arg1) const
{
  // code at 0001:00040b78
  this->MarkFoundation(arg1, 0);
}

void XY::SetFoundation(UBYTE arg1) const
{
  // code at 0001:00040b48
  this->MarkFoundation(arg1, 1);
}

BBOOL XY::operator ==(XY cor1) const
{
  // code at 0001:000378f0
  return cor1.x == this->x && cor1.y == this->y;
}

UBYTE XY::IsFoundationSiteWrong(UBYTE arg1) const
{
  // code at 0001:000378bc
  return this->IsFoundationSiteWrong(arg1, 100);
}

XY XY::operator +(int n) const
{
  // code at 0001:00084838
  XY corr;

  corr.x = n + this->x;
  corr.y = n + this->y;
  return corr;
}

XY XY::operator -(int n) const
{
  // code at 0001:000847f8
  XY corr;

  corr.x = this->x - n;
  corr.y = this->y - n;
  return corr;
}

BBOOL XY::IsPassable(UBYTE arg1, Building *arg2, MovingThing *arg3) const
{
// code at 0001:00083ff8
}

BBOOL XY::operator !=(XY cor1) const
{
  // code at 0001:00005bc0
  return cor1.x != this->x || cor1.y != this->y;
}

XY XY::operator +(XY cor1) const
{
  // code at 0001:00005b80
  XY corr;

  corr.x = cor1.x + this->x;
  corr.y = cor1.y + this->y;
  return corr;
}

XY XY::Set(SWORD nx, SWORD ny)
{
  // code at 0001:00005b44
  this->x = nx;
  this->y = ny;
  return *this;
}

XY XY::Add(SWORD dx, SWORD dy)
{
  // code at 0001:00004bf4
  this->x += dx;
  this->y += dy;
  return *this;
}

GridTile * XY::GridtileAt() const
{
// code at 0001:00003664
}

UBYTE XY::TerrainAt() const
{
// code at 0001:00003630
}

/** Returns XY at center of the tile.
 */
XY XY::CenterFrom() const
{
  // code at 0001:000262ac
  XY corr;

  corr.x = (this->x & ~0xff) | 0x7f;
  corr.y = (this->y & ~0xff) | 0x7f;
  return corr;
}

XY XY::operator >>=(int n)
{
  // code at 0001:00056db4
  this->x >>= n;
  this->y >>= n;
  return *this;
}

XY XY::operator <<=(int n)
{
  // code at 0001:00056d78
  this->x <<= n;
  this->y <<= n;
  return *this;
}

XY XY::operator -=(XY cor1)
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
  return !(arg1 & (1 << this->TerrainAt())) && (this->GridtileAt()->ClutterRating(tng) < 10);
}

void XY::Clear()
{
  // code at 0001:0001e10c
  this->x = 0;
  this->y = 0;
}

XY XY::operator &(int n) const
{
  // code at 0001:00085750
  XY corr;

  corr.x = n & this->x;
  corr.y = n & this->y;
  return corr;
}

XY XY::operator -(XY cor1) const
{
  // code at 0001:0003940c
  XY corr;

  corr.x = this->x - cor1.x;
  corr.y = this->y - cor1.y;
  return corr;
}

XY XY::operator /=(int n)
{
  // code at 0001:000393c0
  this->x /= (SWORD)n;
  this->y /= (SWORD)n;
  return *this;
}

XY XY::operator <<(int n) const
{
  // code at 0001:0003937c
  XY corr;

  corr.x = this->x << n;
  corr.y = this->y << n;
  return corr;
}

XY XY::operator >>(int n) const
{
  // code at 0001:000781c8
  XY corr;

  corr.x = this->x >> n;
  corr.y = this->y >> n;
  return corr;
}

XY XY::operator /(int n) const
{
  // code at 0001:00088fc4
  XY corr;

  corr.x = this->x / n;
  corr.y = this->y / n;
  return corr;
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

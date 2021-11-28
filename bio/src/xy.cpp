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
#include "bfmath.h"

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

BBOOL XY::IsPassable(UBYTE arg1, Building *bldng1, MovingThing *tng) const
{
  // code at 0001:00083ff8
  Building *bldng2;

  bldng2 = this->ExactBuildingAt(1);
  return !(arg1 & (1 << this->TerrainAt()))
    && (bldng2 == NULL || bldng2 == bldng1)
    && (this->GridtileAt()->ClutterRating(tng) < 10);
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
  UWORD tileX, tileY;

  tileX = (this->x >> 8) & 0x7F;
  tileY = (this->y >> 8) & 0x7F;
  return &bio.grid[tileY][tileX];
}

UBYTE XY::TerrainAt() const
{
  // code at 0001:00003630
  return this->GridtileAt()->GetTerrain(*this);
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
  this->x -= cor1.x;
  this->y -= cor1.y;
  return *this;
}

Normal XY::NormalAt() const
{
  // code at 0001:0008bc25
  Normal norr;
  SLONG tileX, tileY;
  SLONG subposX, subposY;
  GridTile *gtile;
  SWORD dir1, dir2, dir3, dir4, dir5, dir6;
  SWORD alt1, alt2, alt3;
  SLONG n4A, n4B, n4C, n4D, n4E, n4F;
  Normal n5;
  SLONG len;

  tileX = (this->x >> 8) & 0xFF;
  tileY = (this->y >> 8) & 0xFF;
  gtile = &bio.grid[(tileY) & 0x7F][(tileX) & 0x7F];
  alt1 = gtile->Alt >> 3;

  subposX = (this->x & 0xFF);
  subposY = (this->y & 0xFF);

  dir2 = 0;
  dir4 = 0;
  if (subposY <= subposX)
  {
    ++tileX;
    gtile = &bio.grid[(tileY) & 0x7F][(tileX) & 0x7F];
    dir1 = 256;
    dir3 = 0;
    alt2 = gtile->Alt >> 3;
    ++tileY;
    gtile = &bio.grid[(tileY) & 0x7F][(tileX) & 0x7F];
    dir5 = 256;
  }
  else
  {
    ++tileX;
    ++tileY;
    gtile = &bio.grid[(tileY) & 0x7F][(tileX) & 0x7F];
    dir1 = 256;
    dir3 = 256;
    alt2 = gtile->Alt >> 3;
    --tileX;
    gtile = &bio.grid[(tileY) & 0x7F][(tileX) & 0x7F];
    dir5 = 0;
  }
  dir6 = 256;
  alt3 = gtile->Alt >> 3;

  n4F = dir1 - dir2;
  n4B = dir3 - dir4;
  n4D = alt2 - alt1;
  n4E = dir5 - dir1;
  n4C = dir6 - dir3;
  n4A = alt3 - alt2;
  len = LbSqrL(n4D * n4D + n4B * n4B + n4F * n4F);
  if ( !len )
    len = 1;
  n4F = (n4F << 8) / len;
  n4B = (n4B << 8) / len;
  n4D = (n4D << 8) / len;
  len = LbSqrL(n4E * n4E + n4C * n4C + n4A * n4A);
  if ( !len )
    len = 1;
  n4E = (n4E << 8) / len;
  n4C = (n4C << 8) / len;
  n4A = (n4A << 8) / len;
  // Finally compute the normal vector
  n5.NX = (n4A * n4B - n4C * n4D) >> 8;
  n5.NY = (n4E * n4D - n4A * n4F) >> 8;
  n5.NZ = (n4C * n4F - n4E * n4B) >> 8;
  // Normalize the normal vector
  len = LbSqrL(n5.NY * n5.NY + n5.NX * n5.NX + n5.NZ * n5.NZ);
  if ( !len )
    len = 1;
  norr.NX = (n5.NX << 8) / len;
  norr.NY = (n5.NY << 8) / len;
  norr.NZ = (n5.NZ << 8) / len;
  return norr;
}

ULONG XY::SquareRangeTo(XY cor1) const
{
  // code at 0001:0008bfe6
  SLONG dx, dy;
  cor1 <<= 1;
  dx = ((SLONG)cor1.x - 2 * (SLONG)this->x) >> 1;
  dy = ((SLONG)cor1.y - 2 * (SLONG)this->y) >> 1;
  return dx * dx + dy * dy;
}

ULONG XY::SquareTrueRangeTo(XY cor1) const
{
  // code at 0001:0008c057
  return this->SquareTrueRangeTo(cor1, this->AltAt(), cor1.AltAt());
}

ULONG XY::SquareTrueRangeTo(XY cor1, SLONG arg2, SLONG arg3) const
{
  // code at 0001:0008c0eb
  SLONG dx, dy, dz;
  dz = ((arg3 - arg2) >> 3);
  cor1 <<= 1;
  dx = ((SLONG)cor1.x - 2 * (SLONG)this->x) >> 1;
  dy = ((SLONG)cor1.y - 2 * (SLONG)this->y) >> 1;
  return dx * dx + dy * dy + dz * dz;
}

ULONG XY::RangeTo(XY cor1) const
{
  // code at 0001:0008c173
  return LbSqrL(this->SquareRangeTo(cor1));
}

ULONG XY::TrueRangeTo(XY cor1) const
{
  // code at 0001:0008c1e7
  return LbSqrL(this->SquareTrueRangeTo(cor1));
}

ULONG XY::TrueRangeTo(XY cor1, SLONG arg2, SLONG arg3) const
{
  // code at 0001:0008c27e
  return LbSqrL(this->SquareTrueRangeTo(cor1, arg2, arg3));
}

/** Returns angular direction towards given XY.
 */
SWORD XY::DirTo(XY cor1) const
{
  // code at 0001:0008c309
  cor1 <<= 1;
  return LbArcTanAngle((SLONG)cor1.x - 2 * (SLONG)this->x, (SLONG)cor1.y - 2 * (SLONG)this->y);
}

void XY::AngleVectorTo(XY arg1, Vector &arg2) const
{
// code at 0001:0008c365
}

/** Sets angular coords in given vector to point towards given XY.
 */
void XY::AngleVectorTo(XY cor1, Vector &corTo, SLONG alt1, SLONG alt2) const
{
  // code at 0001:0008c405
  SWORD toX, toY, distXY;

  toX = 2 * cor1.x - 2 * this->x;
  toY = 2 * cor1.y - 2 * this->y;
  corTo.angle = LbArcTanAngle(toX, toY);
  distXY = LbSqrL((toX >> 1) * (toX >> 1) + (toY >> 1) * (toY >> 1));
  corTo.angleZ = LbArcTanAngle(distXY, (alt1 - alt2) >> 3);
}

XY XY::RangeTargetXYTo(XY cor1, UWORD dist, SWORD angle)
{
  // code at 0001:0008c49a
  SLONG mag;
  SWORD angX, angY;
  XY range;
  mag = dist;
  if (angle == -1)
    angle = this->DirTo(cor1);
  angle = (angle + LbFPMath_PI) & LbFPMath_AngleMask;
  mag *= 2;
  range = cor1 << 1;
  if ( angle < LbFPMath_PI/2 )
    angY = angle + 3*LbFPMath_PI/2;
  else
    angY = angle - LbFPMath_PI/2;
  if ( angle < LbFPMath_PI/2 )
    angX = angle + 3*LbFPMath_PI/2;
  else
    angX = angle - LbFPMath_PI/2;
  range.Add(mag * lbSinTable[angX + 512] >> 16, mag * lbSinTable[angY] >> 16);
  range >>= 1;
  return range & 0x7FFF;
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
  return !(arg1 & (1 << this->TerrainAt()))
    && (this->GridtileAt()->ClutterRating(tng) < 10);
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

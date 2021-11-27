/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file scan.cpp
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
#include "scan.hpp"

#include <cstring>

/*ScanRecord::ScanRecord()
{
// code at 0001:00088d70
}*/

int ScanRecord::Hash(XY cor1)
{
// code at 0001:00088d34
}

void ScanRecord::Add(XY cor1)
{
// code at 0001:000857e9
}

BBOOL ScanRecord::IsRecorded(XY cor1)
{
// code at 0001:0008584c
}

RangeScan::RangeScan(XY cor1, ULONG arg2, BBOOL arg3)
{
  // code at 0001:00004ad8
  this->Init(cor1, arg2, arg3);
}

void BaseScan::Reset()
{
// code at 0001:00027a86
}

void RangeScan::Init(XY cor1, ULONG arg2, BBOOL arg3)
{
// code at 0001:0005d721
}

RangeScanner::RangeScanner(XY cor1, ULONG range)
    : RangeScan(cor1, range, true) // verify params
{
  // code at 0001:00004a74
  this->maxRange = range;
  this->squareMaxRange = range * range;
  this->foundAThing = false;
}

void RangeScanner::Do()
{
// code at 0001:0005d926
}

PolarRangeScan::PolarRangeScan(XY cor1, ULONG range, UBYTE foundtSize)
    : RangeScan(cor1, range, 0)
{
  // code at 0001:000371ac
  this->maxRange = range;
  this->squareMaxRange = range * range;
  this->foundAThing = 0;
  this->tileRange = (range >> 8);
  this->foundationSize = foundtSize;
  this->satisfied = 0;
}

void PolarRangeScan::Do()
{
// code at 0001:00026334
}

void PolarRangeScan::displayDebug(XY cor1, ULONG &arg2)
{
// code at 0001:0002678c
}

WeightedRangeScanner::WeightedRangeScanner(XY cor1, ULONG arg2)
    : RangeScanner(cor1, arg2)
{
  // code at 0001:00078154
  memset(this->dirWeights, 0, sizeof(this->dirWeights));
}

WeightedRangeScanner::WeightedRangeScanner(XY cor1, ULONG arg2, XY *arg3, SLONG arg4)
    : RangeScanner(cor1, arg2) // verify params
{
// code at 0001:00084770
}

void WeightedRangeScanner::Do()
{
// code at 0001:0005d9f1
}

WeightedTgtRangeScanner::WeightedTgtRangeScanner(XY cor1, ULONG arg2)
    : WeightedRangeScanner(cor1, arg2) // verify params
{
// code at 0001:00084708
}

WeightedTgtRangeScanner::WeightedTgtRangeScanner(XY cor1, ULONG arg2, XY *arg3, SLONG arg4)
    : WeightedRangeScanner(cor1, arg2, arg3, arg4) // verify params
{
// code at 0001:00084698
}

void WeightedTgtRangeScanner::Do()
{
// code at 0001:0005dbb7
}

PolarSliceScan::PolarSliceScan(XY cor1, ULONG range, UBYTE foundtSize, UBYTE nslices)
    : RangeScan(cor1, range, 0)
{
  // code at 0001:00037124
  this->slices = nslices;
  this->maxRange = range;
  this->squareMaxRange = range * range;
  this->foundAThing = 0;
  this->tileRange = (range >> 8);
  this->foundationSize = foundtSize;
  this->satisfied = 0;
}

void PolarSliceScan::displayDebug(XY cor1, UBYTE arg2, ULONG &arg3)
{
// code at 0001:000267ef
}

void PolarSliceScan::Do()
{
// code at 0001:00026923
}

PolarEverythingScan::PolarEverythingScan(XY cor1, ULONG range, ULONG arg3, UBYTE foundtSize, UBYTE nslices, BBOOL frCenter)
    : RangeScan(cor1, range, 0)
{
  // code at 0001:00037088
  this->slices = nslices;
  this->maxRange = range;
  this->squareMaxRange = range * range;
  this->foundAThing = 0;
  this->tileRange = (range >> 8);
  this->innerTileRange = (range & 0xff);
  this->foundationSize = foundtSize;
  this->satisfied = 0;
  this->fromCenter = frCenter;
}

void PolarEverythingScan::displayDebug(XY cor1, UBYTE arg2, ULONG &arg3)
{
// code at 0001:00026889
}

BBOOL PolarEverythingScan::Scan(UBYTE arg1)
{
// code at 0001:00036664
}

void PolarEverythingScan::Do()
{
// code at 0001:00026dc0
}

TimeSliceScan::TimeSliceScan(BaseScan &bs, XY cor2, ULONG arg3)
    : RangeScan(cor2, arg3, 0), bs(bs)
{
  // code at 0001:00036fec
  this->maxRange = this->bs.rng;
  this->squareMaxRange = this->bs.rng * this->bs.rng;
  this->middle = this->bs.middle;
  this->tgt = this->bs.xy;
  this->tileNo = 0;
}

BBOOL TimeSliceScan::Do()
{
// code at 0001:0002729e
}

/******************************************************************************/

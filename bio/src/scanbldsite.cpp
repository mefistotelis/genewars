/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file scanbldsite.cpp
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
#include "scanbldsite.hpp"

FindHighestBuildingSite::FindHighestBuildingSite(XY arg1, ULONG arg2, UBYTE arg3)
    : RangeScanner(arg1, arg2) // verify params
{
// code at 0001:00036f98
}

void FindHighestBuildingSite::PerGrid()
{
// code at 0001:000273ff
}

void FindLowestBuildingSite::PerGrid()
{
// code at 0001:000274aa
}

/*char unsigned NearestBuildingSite::__defarg()
{
// code at 0001:00036ce8
}*/

NearestBuildingSite::NearestBuildingSite(XY arg1, ULONG arg2, ULONG arg3, UBYTE arg4, UBYTE arg5)
    : PolarEverythingScan(arg1, arg2, arg3, arg4, arg5, 0) // verify params
{
// code at 0001:00036c7c
}

void NearestBuildingSite::PerGrid()
{
// code at 0001:00027fa8
}

NearestPoweredBuildingSite::NearestPoweredBuildingSite(XY arg1, ULONG arg2, UBYTE arg3, UBYTE arg4)
    : PolarRangeScan(arg1, arg2, 0) // verify params
{
// code at 0001:00036504
}

void NearestPoweredBuildingSite::PerGrid()
{
// code at 0001:0002804d
}




/******************************************************************************/

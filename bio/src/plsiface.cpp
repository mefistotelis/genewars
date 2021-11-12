/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file plsiface.cpp
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
#include "plsiface.hpp"

MyAnimBank * PlSpecLoader::Load(PlayerRace arg1, SpecialistClass arg2)
{
// code at 0001:0007000c
}

char unsigned PlSpecLoader::Load(PlSpec *arg1)
{
// code at 0001:00070089
}

void PlSpecLoader::Free( PlayerRace, SpecialistClass, MyAnimBank * )
{
// code at 0001:00070289
}

void PlSpecLoader::Free(PlSpec *arg1)
{
// code at 0001:00070307
}

/******************************************************************************/

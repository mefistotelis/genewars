/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ifccomputer.cpp
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
#include "ifccomputer.hpp"


IFCComputer::IFCComputer(MyGadget *gads)
    : IFCBase(), gad(gads)
{
  // code at 0001:0005e75c
  this->drawPowerRange = 0;
  this->drawCenters = 1;
  this->fromCenter = 0;
  this->creatureDebugStuff = 1;
  this->cPlayer = 0;
  this->gPointType = 0;
 }

char unsigned IFCComputer::BuildingAllowed( char unsigned, char unsigned )
{
// code at 0001:00034678
}

void IFCComputer::PlugIn()
{
// code at 0001:0002d54a
}

void IFCComputer::PullOut()
{
// code at 0001:0002d613
}

void IFCComputer::Update()
{
// code at 0001:0002d687
}

void IFCComputer::Draw()
{
// code at 0001:0002e65f
}

char signed IFCComputer::FirstFreeGuardPoint( char unsigned )
{
// code at 0001:000303de
}

/******************************************************************************/

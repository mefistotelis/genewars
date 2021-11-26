/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ifcoptions.cpp
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
#include "ifcoptions.hpp"

IFCOptions::IFCOptions(MyGadget *gads)
    : IFCBase(), gad(gads)
{
  // code at 0001:0005e5bc, ignored internal flag to skip super ct
  this->mMs.delta = 1;
  this->canPause = 1;
}

void IFCOptions::PlugIn()
{
// code at 0001:00018358
}

void IFCOptions::PullOut()
{
// code at 0001:000184f4
}

void IFCOptions::Draw()
{
// code at 0001:000185d1
}

void IFCOptions::Update()
{
// code at 0001:00018a29
}

void IFCOptions::FindWhichSlotsAreUsed()
{
// code at 0001:00018fb2
}


/******************************************************************************/

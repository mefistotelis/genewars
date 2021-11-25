/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file comppersonal.cpp
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
#include "comppersonal.hpp"

Trigger::Trigger()
{
  // code at 0001:0002cea1
  this->type = MAX_TRIGGER_TYPE;
  this->doneThis = 0;
}

BBOOL Trigger::Valid()
{
// code at 0001:00034234
}

BBOOL Trigger::Update(UBYTE arg1)
{
// code at 0001:00033d80
}

Personality::Personality()
    // for triggers[], default ct will call automatically
{
  // code at 0001:0002cdd4
  this->changingBase = 0;
  for (int i = 0; i < 5; i++)
    this->preferredCreatures[i] = 0;
}


/******************************************************************************/

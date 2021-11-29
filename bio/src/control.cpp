/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file control.cpp
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
#include "control.hpp"

#include "bfkeybd.h"

BBOOL forceAllowRouteThroughStuff(void)
{
    //TODO Instead of reading the key directly, we should go through packets
    return lbKeyOn[KC_Z];
}

void control_game()
{
// code at 0001:00089010
}

void setup_controller()
{
// code at 0001:000893b8
}

char * MakeScreenShotName( char * )
{
// code at 0001:000899ad
}

void ResetAllInputs()
{
// code at 0001:00089a4a
}


/******************************************************************************/

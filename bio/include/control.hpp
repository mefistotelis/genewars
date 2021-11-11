/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file control.hpp
 *     Header file for control.cpp.
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
#ifndef BIO_CONTROL_HPP_
#define BIO_CONTROL_HPP_

#include "bftypes.h"

void control_game();
void setup_controller();
char * MakeScreenShotName( char * );
void ResetAllInputs();

#endif // BIO_CONTROL_HPP_
/******************************************************************************/

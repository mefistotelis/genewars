/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file probe.hpp
 *     MovingThing class.
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
#ifndef PROBE_HPP_
#define PROBE_HPP_

#include "bftypes.h"
#include "xy.hpp"
#include "thing.hpp"
#include "smvthing.hpp"

class Computer;

class Probe : public SmartMovingThing { // sizeof=491
    Computer *computer; // offset=85
    UBYTE idx; // offset=89
    UBYTE points; // offset=90
    XY path[100]; // offset=91
//internal:
    //void (**__vfptr)(); // offset=35
public:
    //Probe(); -- generate default no-args constructor
    BBOOL IsDead();
    void Resync();
    UBYTE Update();
    //Probe(Probe const &arg1); -- generate default copy constructor
    Probe & operator =(Probe const &arg1);
};

#endif // PROBE_HPP_
/******************************************************************************/

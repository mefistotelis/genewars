/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file thingidx.hpp
 *     ThingIDX class.
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
#ifndef THINGIDX_HPP_
#define THINGIDX_HPP_

#include "bftypes.h"

class Ethereal;
class Drone;
class Event;
class Effect;
class Building;
class PlSpec;
class Plant;
class Creature;
class Thing;

enum ThingType { // type=int8_t
    TT_INVALID = 0,
    TT_CREATURE,
    TT_PLANT,
    TT_PLS,
    TT_BUILDING,
    TT_EFFECT, // 5
    TT_EVENT,
    TT_DRONE,
    TT_ETHEREAL,
    TT_PROBE,
};

class ThingIDX { // sizeof=3
public:
    SWORD idx; // offset=0
    ThingType ttype; // offset=2
public:
    BBOOL Valid();
    void Invalidate();
    SWORD operator =(Thing *tng1);
    Thing * operator &();
    BBOOL operator ==(Thing const *tng1);
    Creature * IsCreature();
    Plant * IsPlant();
    PlSpec * IsPls();
    Building * IsBuilding();
    Effect * IsEffect();
    Event * IsEvent();
    Drone * IsDrone();
    Ethereal * IsEthereal();
    ThingIDX & operator =(ThingIDX const &tidx1);
    //ThingIDX(ThingIDX const &tidx1); -- generate default copy constructor
};

#endif // THINGIDX_HPP_
/******************************************************************************/

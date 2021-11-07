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

class ThingIDX { // sizeof=3
    class ThingIDX * ThingIDX(class ThingIDX *arg1);
    class ThingIDX * operator=(class ThingIDX *arg1);
    Ethereal * IsEthereal();
    Drone * IsDrone();
    Event * IsEvent();
    Effect * IsEffect();
    Building * IsBuilding();
    PlSpec * IsPls();
    Plant * IsPlant();
    Creature * IsCreature();
    BBOOL operator==(Thing *arg1);
    Thing * operator&();
    SWORD operator=(Thing *arg1);
    void Invalidate();
    BBOOL Valid();
    SWORD idx; // offset=0
    ThingType ttype; // offset=2
};

Effect * ThingIDX::IsEffect();
Event * ThingIDX::IsEvent();
Creature * ThingIDX::IsCreature();
Plant * ThingIDX::IsPlant();
ThingIDX & ThingIDX::operator =( ThingIDX const & );
char unsigned ThingIDX::Valid();
void ThingIDX::Invalidate();
short ThingIDX::operator =( Thing * );
PlSpec * ThingIDX::IsPls();
Building * ThingIDX::IsBuilding();
Ethereal * ThingIDX::IsEthereal();
char unsigned ThingIDX::operator ==( Thing * );
Thing * ThingIDX::operator &();


#endif // THINGIDX_HPP_
/******************************************************************************/

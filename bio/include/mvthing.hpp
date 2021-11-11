/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file mvthing.hpp
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
#ifndef MVTHING_HPP_
#define MVTHING_HPP_

#include "bftypes.h"
#include "thing.hpp"

class MovingThing : public Thing { // sizeof=69
public:
    MovingThing * operator=(MovingThing *arg1);
    //MovingThing(MovingThing *arg1); -- generate default copy constructor
    MovingThing();
    void SetSpeedHandler(Normal &arg1, SWORD arg2);
    void BindItWith(MovingThing &arg1);
    void TransportIt(XY arg1, BBOOL arg2);
    void Physics();
    void VectorAwayFrom(Thing &arg1, SLONG arg2, BBOOL arg3);
    SBYTE HugToIgnoringBuildings(XY arg1, UBYTE arg2, UBYTE arg3, BBOOL arg4);
    SBYTE HugTo(XY arg1, UBYTE arg2, UBYTE arg3, BBOOL arg4, Building *arg5);
    BBOOL IsFacingWithinArc(Thing *arg1, SWORD arg2);
    XY ProjectNextMove(SLONG &arg1);
    XY UnwindLastMove(SLONG &arg1);
    BBOOL IsMoving(SWORD arg1);
    BBOOL IsMoving();
    void ChangeMove(SWORD arg1);
    void ChangeMove(ComponentVector const &arg1);
    void ChangeMove(Vector const &arg1);
    BBOOL IsASplasher();
    BBOOL NeedToAvoid(GridTile *arg1);
    void NewGridUpdate(GridTile *arg1);
    void StopMoving();
    SWORD MaxMoveSpeed();
    UBYTE ShapeFacing();
    void Init(ThingType arg1, XY arg2, UBYTE arg3, SWORD arg4, SLONG arg5, Vector const &arg6);
    BBOOL IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    UBYTE Update();
    void DrawOnMap(SWORD arg1, SWORD arg2);
    BBOOL IsVectorable();
    BBOOL IsMovingThing();
    BBOOL IsStaticallyDrawn();
    BBOOL IsMovable();
    SLONG AltAboveGround();
    SLONG Altitude();
    /* void (**__vfptr)(); */
    UBYTE fracY;
    UBYTE fracX;
    SLONG altitude; // offset=39
    UWORD mass; // offset=43
    ComponentVector vel; // offset=45
    ComponentVector acc; // offset=51
    Vector vec; // offset=57
    SWORD setSpeed; // offset=63
    SWORD momentumSpeed; // offset=65
};

#endif // MVTHING_HPP_
/******************************************************************************/

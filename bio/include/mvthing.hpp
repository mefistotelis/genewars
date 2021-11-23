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
    SLONG altitude; // offset=39
    UWORD mass; // offset=43
    ComponentVector vel; // offset=45
    ComponentVector acc; // offset=51
    Vector vec; // offset=57
    SWORD setSpeed; // offset=63
    SWORD momentumSpeed; // offset=65
protected:
    UBYTE fracX; // offset=67
    UBYTE fracY; // offset=68
//internal:
    //void (**__vfptr)(); // offset=35
public:
    virtual SLONG Altitude();
    virtual SLONG AltAboveGround();
    virtual BBOOL IsMovable();
    virtual BBOOL IsStaticallyDrawn();
    virtual BBOOL IsMovingThing();
    virtual BBOOL IsVectorable();
    virtual void DrawOnMap(SWORD arg1, SWORD arg2);
    virtual UBYTE Update();
    virtual BBOOL IsScreenPointInside(SWORD arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    virtual void Init(ThingType arg1, XY arg2, UBYTE arg3, SWORD arg4, SLONG arg5, Vector const &arg6);
    virtual UBYTE ShapeFacing();
    virtual SWORD MaxMoveSpeed();
    virtual void StopMoving();
    virtual void NewGridUpdate(GridTile *arg1);
    virtual BBOOL NeedToAvoid(GridTile *arg1);
    virtual BBOOL IsASplasher();
    void ChangeMove(const Vector &arg1);
    void ChangeMove(const ComponentVector &arg1);
    void ChangeMove(SWORD arg1);
    BBOOL IsMoving();
    BBOOL IsMoving(SWORD arg1);
    XY UnwindLastMove(SLONG &arg1);
    XY ProjectNextMove(SLONG &arg1);
    BBOOL IsFacingWithinArc(Thing *tng1, SWORD arg2);
    SBYTE HugTo(XY arg1, UBYTE arg2, UBYTE arg3, BBOOL arg4, Building *arg5);
    SBYTE HugToIgnoringBuildings(XY arg1, UBYTE arg2, UBYTE arg3, BBOOL arg4);
    void VectorAwayFrom(Thing &arg1, SLONG arg2, BBOOL arg3);
    virtual void Physics();
    virtual void TransportIt(XY arg1, BBOOL arg2);
    virtual void BindItWith(MovingThing &arg1);
protected:
    virtual void SetSpeedHandler(Normal &arg1, SWORD arg2);
public:
    MovingThing();
    //MovingThing(MovingThing &arg1); -- generate default copy constructor
    MovingThing & operator =(MovingThing &arg1);
};

#endif // MVTHING_HPP_
/******************************************************************************/

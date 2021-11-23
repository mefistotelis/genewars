/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file smvthing.hpp
 *     SmartMovingThing class.
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
#ifndef SMVTHING_HPP_
#define SMVTHING_HPP_

#include "bftypes.h"
#include "mvthing.hpp"

class SmartMovingThing : public MovingThing { // sizeof=85
public:
  union {
    XY avoid; // offset=69
    SLONG desiredAngleZ; // offset=69
  };
    UWORD mflags; // offset=73
    SWORD desiredAngle; // offset=75
    ThingIDX tgtBuilding; // offset=77
    ThingIDX moveTgt; // offset=80
    UBYTE impassableBits; // offset=83
    UBYTE routeTries; // offset=84
//internal:
    //void (**__vfptr)(); // offset=35
public:
    virtual void Init(ThingType arg1, XY arg2, UBYTE arg3, SWORD arg4, SLONG arg5, Vector const &arg6);
    virtual void StartAMove(XY arg1);
    virtual void Physics();
    virtual void StopMoving();
    virtual BBOOL IsDoneMovingToTgt();
    virtual BBOOL IsStuck();
    virtual BBOOL IsFlying();
    void PreMoveSituationCheck();
    BBOOL IsAvoidActive();
    BBOOL IsAvoidWaiting();
    BBOOL IsRescanNeeded();
    BBOOL IsMovingToTgt();
    BBOOL IsStoppedOn(XY arg1);
    BBOOL IsMovingToBuilding();
    virtual BBOOL IsIgnoreClutter();
    BBOOL IsMovingToAlt();
    BBOOL WasStuck();
    BBOOL WasDoneMoving();
    BBOOL IsAvoidLooping();
    void ClearWasStuck();
    void ClearWasDoneMoving();
    void ClearAvoidActive();
    void ClearRescanPath();
    void ClearIsFlying();
    void ClearIgnoreClutter();
    void ClearAvoidLooping();
    void SetIsFlying();
    void SetRescanPath();
    void SetAvoidLooping();
    void SetMoveToTgt(XY arg1);
    BBOOL SetMoveToTgtTest(XY arg1);
    void SetMoveToTgtWithDir(XY arg1);
    void SetMoveToThing(Thing *arg1);
    void SetMoveToBuilding(Building *arg1);
    void SetMoveToInsideBuilding(Building *arg1, XY arg2);
    void SetMoveToAlt(SLONG arg1);
    void SetIgnoreClutter();
    void ClearMoveToTgt();
    BBOOL SetMoveInDir(SWORD arg1, SWORD arg2, BBOOL arg3);
protected:
    virtual void SetSpeedHandler(Normal &arg1, SWORD arg2);
    virtual void TurnToDesiredAngle();
    virtual SLONG SquareTrueRangeToWhereGoingTo();
    virtual void VectorToWhereGoingTo(Vector &arg1);
    UBYTE ScanAroundObstacle(XY arg1, BBOOL arg2, XY &arg3, UBYTE arg4);
    UBYTE ScanAroundObstacleIgnoringBuildings(XY arg1, BBOOL arg2, XY &arg3, UBYTE arg4);
private:
    BBOOL IsMovingToBuildingInsides();
public:
    SmartMovingThing();
    //SmartMovingThing(SmartMovingThing const &tng1); -- generate default copy constructor
    SmartMovingThing & operator =(SmartMovingThing &arg1);
};

#endif // SMVTHING_HPP_
/******************************************************************************/

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

class SmartMovingThing : MovingThing { // sizeof=85
public:
    SmartMovingThing * operator =(SmartMovingThing *arg1);
    //SmartMovingThing(class SmartMovingThing *arg1); -- generate default copy constructor
    SmartMovingThing();
    BBOOL IsMovingToBuildingInsides();
    UBYTE ScanAroundObstacleIgnoringBuildings(XY arg1, BBOOL arg2, XY &arg3, UBYTE arg4);
    UBYTE ScanAroundObstacle(XY arg1, BBOOL arg2, XY &arg3, UBYTE arg4);
    void VectorToWhereGoingTo(Vector &arg1);
    SLONG SquareTrueRangeToWhereGoingTo();
    void TurnToDesiredAngle();
    void SetSpeedHandler(Normal &arg1, SWORD arg2);
    BBOOL SetMoveInDir(SWORD arg1, SWORD arg2, BBOOL arg3);
    void ClearMoveToTgt();
    void SetIgnoreClutter();
    void SetMoveToAlt(SLONG arg1);
    void SetMoveToInsideBuilding(Building *obj1, XY cor1);
    void SetMoveToBuilding(Building *obj1);
    void SetMoveToThing(::Thing *tng1);
    void SetMoveToTgtWithDir(XY cor1);
    BBOOL SetMoveToTgtTest(XY cor1);
    void SetMoveToTgt(XY cor1);
    void SetAvoidLooping();
    void SetRescanPath();
    void SetIsFlying();
    void ClearAvoidLooping();
    void ClearIgnoreClutter();
    void ClearIsFlying();
    void ClearRescanPath();
    void ClearAvoidActive();
    void ClearWasDoneMoving();
    void ClearWasStuck();
    BBOOL IsAvoidLooping();
    BBOOL WasDoneMoving();
    BBOOL WasStuck();
    BBOOL IsMovingToAlt();
    BBOOL IsIgnoreClutter();
    BBOOL IsMovingToBuilding();
    BBOOL IsStoppedOn(XY arg1);
    BBOOL IsMovingToTgt();
    BBOOL IsRescanNeeded();
    BBOOL IsAvoidWaiting();
    BBOOL IsAvoidActive();
    void PreMoveSituationCheck();
    BBOOL IsFlying();
    BBOOL IsStuck();
    BBOOL IsDoneMovingToTgt();
    void StopMoving();
    void Physics();
    void StartAMove(XY arg1);
    void Init(ThingType arg1, XY arg2, UBYTE arg3, SWORD arg4, SLONG arg5, Vector const &arg6);
    //void (**__vfptr)();
    SLONG desiredAngleZ; // offset=69
    XY avoid; // offset=70
    UWORD mflags; // offset=73
    SWORD desiredAngle; // offset=75
    ThingIDX tgtBuilding; // offset=77
    ThingIDX moveTgt; // offset=80
    UBYTE impassableBits; // offset=83
    UBYTE routeTries; // offset=84
};

#endif // SMVTHING_HPP_
/******************************************************************************/

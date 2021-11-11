/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file gupoint.hpp
 *     Header file for gupoint.cpp.
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
#ifndef BIO_GUPOINT_HPP_
#define BIO_GUPOINT_HPP_

#include "bftypes.h"
#include "xy.hpp"

class EtherealZone;
class Computer;
class Creature;

enum TgtType { // type=int8_t
    CL_TGT_CR = 0,
    CL_TGT_BLD,
    CL_TGT_PLS,
    CL_TGT_MAX,
};

class GPointFlags { // sizeof=1
public:
    GPointFlags * operator =(GPointFlags *arg1);
    //GPointFlags(GPointFlags *arg1);
    GPointFlags & operator =(GPointFlags const &arg1);
    //GPointFlags();
    uint8_t specOnHisWay; // offset=0
    uint8_t noSuitableCreatures; // offset=1
    uint8_t pointClosed; // offset=2
    uint8_t defendGetsPriority; // offset=3
    uint8_t triggerOnEnemies; // offset=4
    uint8_t canWalkTo; // offset=5
};

class CompTarget { // sizeof=4
public:
    //~CompTarget();
    //CompTarget(class CompTarget *arg1);
    void StopHuntingThis();
    void AssignCreatureToThis(SWORD arg1);
    void NewTarget(SWORD arg1);
    void Update();
    void Invalidate();
    BBOOL Valid();
    //CompTarget();
    SWORD crNo; // offset=0
    UBYTE creaturesOnThis; // offset=2
    TgtType targetType; // offset=3
};

class GuardPoint { // sizeof=38
public:
    //~GuardPoint();
    GuardPoint * operator =(GuardPoint *arg1);
    //GuardPoint(GuardPoint *arg1);
    Computer * Comp();
    EtherealZone * EZone();
    SWORD FindImportance();
    void MovePoint(XY arg1);
    void RemoveCreature(SWORD arg1);
    void AddCreature(SWORD arg1);
    void ShutDownPoint();
    void SetupPoint(XY &arg1, UBYTE arg2, UBYTE arg3, SBYTE arg4, GPointFlags *arg5);
    SLONG TreesHere();
    UBYTE HungryCreaturesHere(UBYTE arg1);
    BBOOL IsHere(SWORD arg1);
    BBOOL IsCreatureRightType(Creature &crtr);
    BBOOL IsTarget(SWORD arg1, TgtType tgt); // last arg unconfirmed (has default val?)
    UBYTE BestTargetType(UBYTE arg1, SBYTE arg2);
    SLONG ChooseTarget(TgtType *tgt);
    void DropCloakedTargets();
    void DropDeadTargets();
    void DropTargetsOutsideRange();
    UBYTE ScanForTargets(SBYTE arg1);
    UBYTE TargetsHere();
    void Update();
    void Invalidate();
    BBOOL Valid();
    //GuardPoint();
    XY loc; // offset=0
    SWORD creaturesHere; // offset=4
    SWORD importance; // offset=6
    SBYTE player; // offset=8
    UBYTE type; // offset=9
    UBYTE base; // offset=10
    UBYTE pointNo; // offset=11
    UBYTE effectNumber; // offset=12
    GPointFlags flags; // offset=13
    CompTarget targets[5]; // offset=14
    SBYTE linkToPoint; // offset=15
    SBYTE zoneNumber; // offset=16
};

#endif // BIO_GUPOINT_HPP_
/******************************************************************************/

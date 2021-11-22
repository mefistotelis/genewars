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
    uint8_t canWalkTo:1; // offset=0 bit=0
    uint8_t triggerOnEnemies:1; // offset=0 bit=1
    uint8_t defendGetsPriority:1; // offset=0 bit=2
    uint8_t pointClosed:1; // offset=0 bit=3
    uint8_t noSuitableCreatures:1; // offset=0 bit=4
    uint8_t specOnHisWay:1; // offset=0 bit=5
public:
    //GPointFlags();
    GPointFlags * operator =(GPointFlags *arg1); // return type uncertain
    //GPointFlags(GPointFlags &arg1);
    GPointFlags & operator =(GPointFlags const &arg1);
};

class CompTarget { // sizeof=4
    SWORD crNo; // offset=0
    UBYTE creaturesOnThis; // offset=2
    TgtType targetType; // offset=3
public:
    //CompTarget(); -- generate default no-args constructor
    BBOOL Valid();
    void Invalidate();
    void Update();
    void NewTarget(SWORD arg1, TgtType arg2); // last arg uncertain
    void AssignCreatureToThis(SWORD arg1);
    void StopHuntingThis();
    //CompTarget(CompTarget &arg1); -- generate default copy constructor
    //~CompTarget();
};

class GuardPoint { // sizeof=38
    XY loc; // offset=0
    SWORD creaturesHere; // offset=4
    SWORD importance; // offset=6
    SBYTE player; // offset=8
    UBYTE type; // offset=9
    UBYTE base; // offset=10
    UBYTE pointNo; // offset=11
  union {
    SBYTE zoneNumber; // offset=12
    SBYTE linkToPoint; // offset=12
    UBYTE effectNumber; // offset=12
  };
    GPointFlags flags; // offset=13
    CompTarget targets[6]; // offset=14
public:
    //GuardPoint(); -- generate default no-args constructor
    BBOOL Valid();
    void Invalidate();
    void Update();
    UBYTE TargetsHere();
    UBYTE ScanForTargets(SBYTE arg1);
    void DropTargetsOutsideRange();
    void DropDeadTargets();
    void DropCloakedTargets();
    SLONG ChooseTarget(TgtType *arg1);
    UBYTE BestTargetType(UBYTE arg1, SBYTE arg2);
    BBOOL IsTarget(SWORD arg1, TgtType tgt); // last arg unconfirmed (has default val?)
    BBOOL IsCreatureRightType(Creature &crtr1);
    BBOOL IsHere(SWORD arg1);
    UBYTE HungryCreaturesHere(UBYTE arg1);
    SLONG TreesHere();
    void SetupPoint(XY &arg1, UBYTE arg2, UBYTE arg3, SBYTE arg4, GPointFlags *arg5);
    void ShutDownPoint();
    void AddCreature(SWORD arg1);
    void RemoveCreature(SWORD arg1);
    void MovePoint(XY arg1);
    SWORD FindImportance();
    EtherealZone * EZone();
    Computer * Comp();
    //GuardPoint(GuardPoint &arg1); -- generate default copy constructor
    GuardPoint & operator =(GuardPoint &arg1);
    //~GuardPoint();
};

#endif // BIO_GUPOINT_HPP_
/******************************************************************************/

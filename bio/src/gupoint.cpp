/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file gupoint.cpp
 *     Implementation of related functions.
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
#include "gupoint.hpp"

CompTarget::CompTarget()
{
  // code at 0001:0003742c
  this->crNo = -1;
}

char unsigned CompTarget::Valid()
{
// code at 0001:0003429c
}

void CompTarget::Invalidate()
{
// code at 0001:00034270
}

void CompTarget::NewTarget(SWORD arg1, TgtType arg2)
{
// code at 0001:00033bb3
}

void CompTarget::AssignCreatureToThis(SWORD arg1)
{
// code at 0001:00033be8
}

GPointFlags::GPointFlags()
{
  // code at 0001:00033fd8
  this->canWalkTo = 1;
  this->triggerOnEnemies = 0;
  this->defendGetsPriority = 0;
  this->pointClosed = 0;
  this->noSuitableCreatures = 0;
  this->specOnHisWay = 0;
}

GPointFlags & GPointFlags::operator =(GPointFlags const &arg1)
{
// code at 0001:0003401f
}

GuardPoint::GuardPoint()
    : flags() // for targets[], ct will call automatically
{
  // code at 0001:0002ce3b
  this->importance = -1;
  this->type = MAX_GPOINT_TYPES;
  this->zoneNumber = -1;
}

BBOOL GuardPoint::Valid()
{
// code at 0001:000321f9
}

void GuardPoint::Invalidate()
{
// code at 0001:00032231
}

void GuardPoint::Update()
{
// code at 0001:00032262
}

UBYTE GuardPoint::ScanForTargets(SBYTE arg1)
{
// code at 0001:00032d01
}

UBYTE GuardPoint::TargetsHere()
{
// code at 0001:000343a0
}

UBYTE GuardPoint::BestTargetType(UBYTE arg1, SBYTE arg2)
{
// code at 0001:00032fa6
}

BBOOL GuardPoint::IsCreatureRightType(Creature &crtr)
{
// code at 0001:00033226
}

void GuardPoint::DropDeadTargets()
{
// code at 0001:00033440
}

void GuardPoint::DropTargetsOutsideRange()
{
// code at 0001:000334c9
}

void GuardPoint::DropCloakedTargets()
{
// code at 0001:0003354d
}

BBOOL GuardPoint::IsTarget(SWORD arg1, TgtType tgt)
{
// code at 0001:00034334
}

BBOOL GuardPoint::IsHere(SWORD arg1)
{
// code at 0001:000342d4
}

SLONG GuardPoint::ChooseTarget(TgtType *tgt)
{
// code at 0001:00033616
}

UBYTE GuardPoint::HungryCreaturesHere(UBYTE arg1)
{
// code at 0001:000336bf
}

SLONG GuardPoint::TreesHere()
{
// code at 0001:00033766
}

void GuardPoint::SetupPoint(XY &arg1, UBYTE arg2, UBYTE arg3, SBYTE arg4, GPointFlags *arg5)
{
// code at 0001:000337a3
}

void GuardPoint::ShutDownPoint()
{
// code at 0001:0003391f
}

void GuardPoint::AddCreature(SWORD arg1)
{
// code at 0001:00033977
}

void GuardPoint::RemoveCreature(SWORD arg1)
{
// code at 0001:00033a4c
}

void GuardPoint::MovePoint(XY arg1)
{
// code at 0001:00033aa4
}

short GuardPoint::FindImportance()
{
// code at 0001:00033b76
}

EtherealZone * GuardPoint::EZone()
{
// code at 0001:000366ec
}

Computer * GuardPoint::Comp()
{
// code at 0001:000366b8
}

/*char signed GuardPoint::__defarg()
{
// code at 0001:000373d4
}*/

/*char signed GuardPoint::__defarg()
{
// code at 0001:000373b4
}*/

/*GPointFlags * GuardPoint::__defarg()
{
// code at 0001:00037390
}*/

/******************************************************************************/

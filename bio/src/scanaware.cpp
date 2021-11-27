/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file scanaware.cpp
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
#include "scanaware.hpp"

#include "data.hpp"

BaseAwarenessScan::BaseAwarenessScan(BaseScan &arg1, XY cor2, ULONG arg3, UBYTE plyrNo)
    : TimeSliceScan(arg1, cor2, arg3)
{
  // code at 0001:000365b4
  this->baseNo = arg1.baseNo;
  this->player = &bio.players[plyrNo];
  this->comp = &computers[plyrNo];
  this->aware = &this->comp->baseAwareness[this->baseNo];
  this->center = cor2;
}

UBYTE BaseAwarenessScan::PointInSector(XY cor1, XY cor2)
{
// code at 0001:00036574
}

void BaseAwarenessScan::PerGrid()
{
// code at 0001:000275a8
}

void BaseAwareness::Reset()
{
// code at 0001:00027995
}

AwarenessScan::AwarenessScan(Creature &crtr)
    : RangeScanner(crtr.loc, crtr.Species().smarts + 512),
      c(crtr), speci(crtr.Species())
{
  // code at 0001:00083c1c
  memset(this->threats, 0, 64);
  memset(this->enemies, 0, 64);
  memset(this->food, 0, 64);
  memset(this->mates, 0, 64);
  memset(this->friends, 0, 64);
  memset(this->terrain, 0, 64);
  this->foundThreats = 0;
  this->foundMates = 0;
  this->foundFood = 0;
  this->foundFriends = 0;
  this->foundEnemies = 0;
  // Sort foods
  int food[4];
  for (int i = 0; i < 3; i++)
    food[i+1] = this->speci.food[i];
  for (int i = 1; i < 3; i++)
  {
    for (; (i > 0) && (food[i+1] < food[i]); i--)
    {
      food[0] = food[i+1];
      food[i+1] = food[i];
      food[i] = food[0];
    }
  }
  //TODO Overcomplicated clearing food rankings - probably an inlined call
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (this->speci.food[j] == food[i+1])
      {
        this->foodRankings[i] = 0;
        food[i+1] = -1;
      }
    }
  }

  this->bestRanking = -268435455;
  this->bestMateRanking = -268435455;
  this->bestEnemyRanking = -268435455;
  this->bestThreatRanking = -268435455;
  this->bestThing = 0;
  this->bestMate = 0;
  this->bestEnemy = 0;
  this->bestThreat = 0;
}

void AwarenessScan::PerGrid()
{
// code at 0001:00083440
}

void AwarenessScan::Do()
{
// code at 0001:00083208
}

/******************************************************************************/

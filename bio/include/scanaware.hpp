/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file scanaware.hpp
 *     *Scan classes.
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
#ifndef SCANAWARE_HPP_
#define SCANAWARE_HPP_

#include "bftypes.h"
#include "xy.hpp"
#include "scan.hpp"
#include "creature.hpp"

class BaseAwareness;
class Player;
class Computer;

class BaseAwareness { // sizeof=83
    void Reset();
    ULONG finishedTurn; // offset=0
    UBYTE enemySpec; // offset=4
    UWORD enemyBuildings; // offset=5
    UWORD enemyCreatures; // offset=7
    UWORD friendlyCreatures; // offset=9
    ULONG enemyAttack; // offset=11
    ULONG enemyDefence; // offset=15
    ULONG myAttack; // offset=19
    ULONG myDefence; // offset=23
    ULONG myWork; // offset=27
    ULONG myBuild; // offset=31
    ULONG buildingThreat; // offset=35
    UWORD specThreat; // offset=39
    ULONG treesInForest; // offset=41
    UWORD forestDir[7]; // offset=45
    ULONG meat; // offset=61
    ULONG bones; // offset=65
    ULONG vegi; // offset=69
    ULONG foodInBase; // offset=73
    ULONG baseScore; // offset=77
    SWORD danger; // offset=81
};

class BaseAwarenessScan : public TimeSliceScan { // sizeof=64
public:
    //BaseAwarenessScan(BaseAwarenessScan *arg1);
    UBYTE PointInSector(XY arg1, XY arg2);
    void PerGrid();
    BaseAwarenessScan(BaseScan &arg1, XY arg2, ULONG arg3, UBYTE arg4);
    //void (**__vfptr)();
    UBYTE baseNo; // offset=47
    BaseAwareness *aware; // offset=48
    Player *player; // offset=52
    Computer *comp; // offset=56
    XY center; // offset=60
};

class AwarenessScan : public RangeScanner { // sizeof=228
public:
    //AwarenessScan(AwarenessScan *arg1);
    void Do();
    void PerGrid();
    AwarenessScan(Creature &arg1);
    //void (**__vfptr)();
    ASpecies speci;
    Creature c;
    int mates[15]; // offset=45
    int threats[15]; // offset=46
    int terrain[15]; // offset=109
    int enemies[15]; // offset=110
    SWORD foundEnemies; // offset=173
    int friends[15]; // offset=174
    SWORD foundThreats; // offset=175
    SWORD foundFriends; // offset=177
    SWORD foundFood; // offset=179
    SWORD foundMates; // offset=181
    UBYTE bestEnemies; // offset=183
    UBYTE bestFriends; // offset=184
    UBYTE bestFood; // offset=185
    UBYTE bestMates; // offset=186
    UBYTE bestTerrain; // offset=187
    UBYTE bestThreats; // offset=188
    UBYTE foodRankings[2]; // offset=189
    Thing *bestThing; // offset=192
    Creature *bestMate; // offset=196
    Thing *bestEnemy; // offset=200
    Thing *bestThreat; // offset=204
    SLONG bestRanking; // offset=208
    SLONG bestMateRanking; // offset=212
    SLONG bestEnemyRanking; // offset=216
    SLONG bestThreatRanking; // offset=220
    int food[15]; // offset=237
};

#endif // SCANAWARE_HPP_
/******************************************************************************/

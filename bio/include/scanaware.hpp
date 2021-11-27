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
public:
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
    UWORD forestDir[8]; // offset=45
    ULONG meat; // offset=61
    ULONG bones; // offset=65
    ULONG vegi; // offset=69
    ULONG foodInBase; // offset=73
    ULONG baseScore; // offset=77
    SWORD danger; // offset=81
public:
    void Reset();
};

class BaseAwarenessScan : public TimeSliceScan { // sizeof=64
public:
    UBYTE baseNo; // offset=47
    BaseAwareness *aware; // offset=48
    Player *player; // offset=52
    Computer *comp; // offset=56
    XY center; // offset=60
//internal:
    //void (**__vfptr)(); // offset=43
public:
    BaseAwarenessScan(BaseScan &arg1, XY cor2, ULONG arg3, UBYTE arg4);
    virtual void PerGrid();
    UBYTE PointInSector(XY cor1, XY cor2);
    //BaseAwarenessScan(BaseAwarenessScan const &rscan1); -- generate default copy constructor
};

class AwarenessScan : RangeScanner { // sizeof=484
public:
    Creature &c;
    int threats[16]; // offset=45
    int enemies[16]; // offset=109
    int friends[16]; // offset=173
    int food[16]; // offset=237
    int mates[16]; // offset=301
    int terrain[16]; // offset=365
    SWORD foundEnemies; // offset=429
    SWORD foundThreats; // offset=431
    SWORD foundFriends; // offset=433
    SWORD foundFood; // offset=435
    SWORD foundMates; // offset=437
    UBYTE bestEnemies; // offset=439
    UBYTE bestFriends; // offset=440
    UBYTE bestFood; // offset=441
    UBYTE bestMates; // offset=442
    UBYTE bestTerrain; // offset=443
    UBYTE bestThreats; // offset=444
    UBYTE foodRankings[3]; // offset=445
    Thing *bestThing; // offset=448
    Creature *bestMate; // offset=452
    Thing *bestEnemy; // offset=456
    Thing *bestThreat; // offset=460
    SLONG bestRanking; // offset=464
    SLONG bestMateRanking; // offset=468
    SLONG bestEnemyRanking; // offset=472
    SLONG bestThreatRanking; // offset=476
private:
    ASpecies &speci;
//internal:
    //void (**__vfptr)(); // offset=37
public:
    AwarenessScan(Creature &crtr);
    virtual void PerGrid();
    void Do();
    //AwarenessScan(AwarenessScan const &rscan1); -- generate default copy constructor
};

#endif // SCANAWARE_HPP_
/******************************************************************************/

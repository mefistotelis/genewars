/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file comppersonal.hpp
 *     Header file for comppersonal.cpp.
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
#ifndef BIO_COMPPERSONAL_HPP_
#define BIO_COMPPERSONAL_HPP_

#include "bftypes.h"

enum { // type=int8_t
    TRIGGER_BUILDINGS = 0,
    TRIGGER_CREATURES,
    TRIGGER_TIME,
    TRIGGER_POINTS,
    MAX_TRIGGER_TYPE,
};

class Trigger { // sizeof=7
    UBYTE type; // offset=0
  union {
    UBYTE species; // offset=1
    UBYTE turn; // offset=1
  };
    UBYTE thisPlayer; // offset=2
    UBYTE otherPlayer; // offset=3
    UWORD amount; // offset=4
    BBOOL doneThis; // offset=6
public:
    Trigger();
    BBOOL Update(UBYTE arg1);
    BBOOL Valid();
    void Invalidate();
    //Trigger(Trigger const &trgr1); -- generate default copy constructor
    //virtual ~Trigger();
};

class Personality { // sizeof=142
public:
    char name[20]; // offset=0
    UBYTE advancedOptions; // offset=20
    UBYTE pwrWanted; // offset=21
    UBYTE idealNoBases; // offset=22
    SBYTE upgrade; // offset=23
    UBYTE aggressive; // offset=24
    UBYTE defensive; // offset=25
    ULONG freeSpace[2]; // offset=26
    UBYTE locationAwareness; // offset=34
    UBYTE distanceFromEnemyBases; // offset=35
    UBYTE distanceBetweenBases; // offset=36
    ULONG timeInBase; // offset=37
    UBYTE changingBase; // offset=41
    UWORD baseChangeThreshold; // offset=42
    UBYTE minResolve; // offset=44
    UBYTE criticalStrength; // offset=45
    UBYTE maxProbeSteps; // offset=46
    UBYTE buildStyle; // offset=47
    UBYTE favBuildingToAttack; // offset=48
    UBYTE favSpecToAttack; // offset=49
    UBYTE delayBetweenAttacks; // offset=50
    UBYTE padding; // offset=51
    UBYTE defence; // offset=52
    UBYTE criticalNumTrees; // offset=53
    SBYTE techLevel; // offset=54
    SBYTE preferredCreatures[5]; // offset=55
    SLONG minGoopForCreatures; // offset=60
    UWORD maxAgeForBaseScan; // offset=64
    SBYTE creaturePercentage; // offset=66
    UBYTE creatureRatios[3]; // offset=67
    UBYTE creaturePerception; // offset=70
    UBYTE newBaseScoreRange; // offset=71
    UBYTE newBaseLookPoints; // offset=72
    UBYTE attackVolume; // offset=73
    UBYTE wantedSpecTypes[4]; // offset=74
    UBYTE attackAfterTurn; // offset=78
    UBYTE creaturesPerGuardPoint; // offset=79
    UWORD delayBetweenCreatures; // offset=80
    UWORD maxCreatures; // offset=82
    SBYTE goForScore; // offset=84
    UBYTE delayBetweenBuildings; // offset=85
    Trigger triggers[8]; // offset=86
public:
    Personality();
    //Personality(Personality const &arg1); -- generate default copy constructor
};


#endif // BIO_COMPPERSONAL_HPP_
/******************************************************************************/

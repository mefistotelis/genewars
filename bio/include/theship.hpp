/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file theship.hpp
 *     TheShip class.
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
#ifndef THESHIP_HPP_
#define THESHIP_HPP_

#include "bftypes.h"
#include "thingidx.hpp"
#include "spec.hpp"
#include "playerstat.hpp"

class Building;
class Player;

class TheShip { // sizeof=140
public:
    UBYTE numCrew; // offset=0
    Specialist crew[32]; // offset=1
    ThingIDX rocket; // offset=1153
    ULONG rocketCounter; // offset=1156
    ULONG rocketLandings; // offset=1160
public:
    void Reset();
    BBOOL AddASpecialist(Specialist &arg1);
    void RemoveASpecialist(SWORD arg1);
    Specialist ** CrewClassList(UBYTE arg1, UBYTE &arg2);
    BBOOL CallRocketDown(Player &arg1);
    BBOOL CallRocketDown(Building *arg1);
    void Update();
    SLONG RocketReadyInTMinus();
    void RocketToOrbit();
    void ClearCrew();
    void MakeInitialCrew(UBYTE arg1);
    void MakeNewSpecialist(Specialist &arg1, PlayerRace arg2, SpecialistClass arg3, UBYTE arg4);
    void GetMoreSpecialists(PlayerRace arg1, int); // last argument uncertain
    int SpecsInTeamBelongingToRace(PlayerRace arg1);
    TheShip & operator =(const TheShip &arg1);
};

#endif // THESHIP_HPP_
/******************************************************************************/

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
    TheShip & operator=(TheShip const &ship1);
    int SpecsInTeamBelongingToRace(PlayerRace arg1);
    void GetMoreSpecialists(PlayerRace arg1, int); // not sure if 2nd arg exists
    void MakeNewSpecialist(Specialist &spcl, PlayerRace arg2, SpecialistClass arg3, UBYTE arg4);
    void MakeInitialCrew(UBYTE arg1);
    void ClearCrew();
    void RocketToOrbit();
    SLONG RocketReadyInTMinus();
    void Update();
    BBOOL CallRocketDown(Building *arg1);
    BBOOL CallRocketDown(Player &arg1);
    Specialist ** CrewClassList(UBYTE arg1, UBYTE &arg2);
    void RemoveASpecialist(SWORD arg1);
    BBOOL AddASpecialist(Specialist &arg1);
    void Reset();
    UBYTE numCrew; // offset=0
    Specialist crew[31]; // offset=1
    ThingIDX rocket; // offset=129
    ULONG rocketCounter; // offset=132
    ULONG rocketLandings; // offset=136
};

#endif // THESHIP_HPP_
/******************************************************************************/

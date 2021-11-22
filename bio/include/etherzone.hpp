/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file etherzone.hpp
 *     EtherealZone class.
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
#ifndef BIO_ETHERZONE_HPP_
#define BIO_ETHERZONE_HPP_

#include "bftypes.h"
#include "xy.hpp"
#include "plantstat.hpp"
#include "creaturestat.hpp"

class Planet;
class Thing;

class EtherealZone { // sizeof=19
    XY loc; // offset=0
    UBYTE type; // offset=4
    SBYTE linkTo; // offset=5
    SLONG range; // offset=6
    SLONG totalPoints; // offset=10
    SLONG pointsRemaining; // offset=14
    SBYTE etherealsWatching; // offset=18
public:
    BBOOL Valid();
    void Invalidate();
    BBOOL IsActive();
    void Deactivate();
    void Exhaust();
    BBOOL IsExhausted();
    void Activate();
    void Score();
    void Shade(BBOOL arg1);
    void Draw();
    void FreeEffectMarker();
private:
    BBOOL ScoreToPlayer(SLONG arg1, UBYTE arg2, Thing *tng3);
    void ScoreCreatures(CreatureBaseSpecies arg1);
    void ScorePlants(PlantSpecies arg1);
    void ScoreTemples();
};

class EtherealZoneHandler { // sizeof=1218
    EtherealZone eZones[64]; // offset=0
    UBYTE numZones; // offset=1216
    UBYTE zonesDone; // offset=1217
public:
    void InitFromPlanet(Planet &planet);
    void Update();
    void Draw();
    void LightAllActive();
    BBOOL IsZonesScoredOut();
};

#endif // BIO_ETHERZONE_HPP_
/******************************************************************************/

/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file etherealz.hpp
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
#ifndef BIO_ETHEREALZ_HPP_
#define BIO_ETHEREALZ_HPP_

class EtherealZone { // sizeof=19
    void ScoreTemples();
    void ScorePlants(PlantSpecies arg1);
    void ScoreCreatures(CreatureBaseSpecies arg1);
    BBOOL ScoreToPlayer(SLONG arg1, UBYTE arg2, Thing *arg3);
    void FreeEffectMarker();
    void Draw();
    void Shade(BBOOL arg1);
    void Score();
    void Activate();
    BBOOL IsExhausted();
    void Exhaust();
    void Deactivate();
    BBOOL IsActive();
    void Invalidate();
    BBOOL Valid();
    XY loc; // offset=0
    UBYTE type; // offset=4
    SBYTE linkTo; // offset=5
    SLONG range; // offset=6
    SLONG totalPoints; // offset=10
    SLONG pointsRemaining; // offset=14
    SBYTE etherealsWatching; // offset=18
};

class EtherealZoneHandler { // sizeof=194
    BBOOL IsZonesScoredOut();
    void LightAllActive();
    void Draw();
    void Update();
    void InitFromPlanet(Planet *arg1);
    EtherealZone eZones[63]; // offset=0
    UBYTE numZones; // offset=192
    UBYTE zonesDone; // offset=193
};

#endif // BIO_ETHEREALZ_HPP_
/******************************************************************************/

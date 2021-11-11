/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file level.hpp
 *     Header file for level.cpp.
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
#ifndef BIO_LEVEL_HPP_
#define BIO_LEVEL_HPP_

#include "bftypes.h"
#include "planet.hpp"

enum LevelDrawPhase { // type=int8_t
    LDP_FADEUP = 0,
    LDP_LINES,
    LDP_SYSTEM,
    LDP_EXPANDBOX,
    LDP_EXPANDBOXLINES,
    LDP_TARGETACQUIRE, // 5
    LDP_TARGETLOCK,
    LDP_EXPANDPLANET,
    LDP_ZOOMIN,
    LDP_ORBIT,
};

struct PlanetBody { // sizeof=14
    UBYTE size; // offset=0
    UBYTE type; // offset=1
    SLONG angle; // offset=2
    SLONG distance; // offset=6
    SLONG speed; // offset=10
};

struct cPoint { // sizeof=12
    SLONG X; // offset=0
    SLONG Y; // offset=4
    SLONG Z; // offset=8
};

struct Info { // sizeof=56
    SLONG WindowX1; // offset=0
    SLONG WindowY1; // offset=4
    SLONG WindowX2; // offset=8
    SLONG WindowY2; // offset=12
    SLONG ClipX1; // offset=16
    SLONG ClipY1; // offset=20
    SLONG ClipX2; // offset=24
    SLONG ClipY2; // offset=28
    SLONG ScreenClipX1; // offset=32
    SLONG ScreenClipY1; // offset=36
    SLONG ScreenClipX2; // offset=40
    SLONG ScreenClipY2; // offset=44
    SLONG WindowCentreX; // offset=48
    SLONG WindowCentreY; // offset=52
};

struct SpaceBody { // sizeof=33
    UWORD centreRef; // offset=0
    UWORD size; // offset=2
    UBYTE type; // offset=4
    UWORD hostObject; // offset=5
    UWORD angleToSun; // offset=7
    SLONG distanceFromSun; // offset=9
    SWORD orbitSpeed; // offset=13
    SWORD zOffset; // offset=15
    UWORD rotateAngle; // offset=17
    SWORD freeSpeed; // offset=19
    cPoint moveVector; // offset=21
};

class LevelHeader { // sizeof=187
public:
    void TranslatePlanet();
    BBOOL LoadHeader(UBYTE arg1, UBYTE arg2);
    BBOOL SaveHeader(UBYTE arg1, UBYTE arg2);
    UBYTE compPlayers[2]; // offset=0
    UBYTE valid; // offset=3
    UBYTE date[11]; // offset=4
    UBYTE time[11]; // offset=16
    ULONG version; // offset=28
    Planet planet; // offset=32
    ULONG roomForMoreStuff[6]; // offset=159
};

struct ScreenPoint { // sizeof=20
    SLONG SX; // offset=0
    SLONG SY; // offset=4
    SLONG SIZEX; // offset=8
    SLONG SIZEY; // offset=12
    UBYTE LessThanZeroZ; // offset=16
    UBYTE OnScreen; // offset=17
    UBYTE Extra1; // offset=18
    UBYTE Extra2; // offset=19
};

struct Axes { // sizeof=36
    cPoint vector[2]; // offset=0
};

struct Viewer { // sizeof=173
    Axes axes[3]; // offset=0
    cPoint velocity; // offset=144
    cPoint position; // offset=156
    SLONG speed; // offset=168
    UBYTE thrust; // offset=172
};

struct AutoPilot { // sizeof=33
    UBYTE flightstate; // offset=0
    ULONG currentplanet; // offset=1
    SLONG targetdistance; // offset=5
    SLONG relx; // offset=9
    SLONG rely; // offset=13
    SLONG relz; // offset=17
    SLONG retx; // offset=21
    SLONG rety; // offset=25
    SLONG retz; // offset=29
};


#endif // BIO_LEVEL_HPP_
/******************************************************************************/

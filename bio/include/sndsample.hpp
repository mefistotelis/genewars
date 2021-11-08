/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file sndsample.hpp
 *     Sound samples declaration.
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
#ifndef SNDSAMPLE_HPP_
#define SNDSAMPLE_HPP_

#include "bftypes.h"
#include "listsamp.h"

enum SampleID { // type=int16_t
    S_INVALID = 0,
    S_B1OUTERSPACE,
    S_B1FADEUP,
    S_B1LINES,
    S_B1SMALLSYSTEMSCALEUP,
    S_B1SYSTEMSCALEUP, // 5
    S_B1EXPANDBOX,
    S_B1SMALLSYSTEMFLASH,
    S_B1LINES2,
    S_B1TARGETLOCK,
    S_B1TEXTSOUND1, // 10
    S_B1TEXTSOUND2,
    S_B1HYPERSPACE,
    S_LASERSHIELD,
    S_LASERDOWN,
    S_SPEECH, // 15
    S_EAT1,
    S_EAT2,
    S_EAT3,
    S_BLOCK,
    S_BUTTON1, // 20
    S_BUTTON2,
    S_BUTTON3,
    S_BUTTON4,
    S_BUTTON5,
    S_BUTTON6, // 25
    S_POPGUN,
    S_BURP,
    S_GROAN1,
    S_GROAN2,
    S_GROAN3, // 30
    S_SCREAM1,
    S_LASERUP,
    S_STUNSHOT,
    S_CREAK2,
    S_MOTOR, // 35
    S_MOTOREND,
    S_SHIPINT,
    S_CHEAT,
    S_LAUNCHER,
    S_FALL, // 40
    S_EARTHMOV,
    S_TREESHAKE,
    S_FIRE,
    S_LAUNCHNO,
    S_EXPSMALL2, // 45
    S_EXPLARGE2,
    S_MOTORON,
    S_MOTOROFF,
    S_SAWMILL,
    S_DRILL, // 50
    S_CHAINSAW,
    S_PUMPFILL,
    S_WINOPEN,
    S_WINEND,
    S_RADIO, // 55
    S_SPACESHIP,
    S_STUNNED,
    S_WARNING,
    S_SPLASH,
    S_DRIP, // 60
    S_SPARK,
    S_SHIELDARC,
    S_PELLETPOOF,
    S_STATIC,
    S_NOISE1, // 65
    S_NOISE2,
    S_NOISE3,
    S_BIRTH,
    S_DINOYES,
    S_CRABYES, // 70
    S_FROGYES,
    S_BIRDYES,
    S_MULEYES,
    S_HAMMER,
    S_SKID, // 75
    S_SWITCH,
    S_POWERON,
    S_POWEROFF,
    S_ALARM,
    S_LANDING, // 80
    S_DOCKING,
    S_BLASTOFF,
    S_DRONE,
    S_2001,
    S_GENELAB, // 85
    S_RESEARCHBEAM,
    S_HEALBEAM,
    S_HITBUILDING,
    S_BIRDATTACK,
    S_FROGATTACK, // 90
    S_MULEATTACK,
    S_CRABATTACK,
    S_DINOATTACK,
    S_MAXSAMPLES,
    S_TREEHIT, // 95
    S_AXECHOP,
    S_LASLARGE,
    S_LASMED,
    S_LASSMALL,
    S_HITSPLAT, // 100
    S_EXPLARGE,
    S_EXPMED,
    S_EXPSMALL,
    S_BARREN,
    S_DESERT, // 105
    S_LUSH,
    S_WAVES,
};

struct SampleInfo { // sizeof=25
    HSAMPLE SampleHandle; // offset=0
    SLONG SampleVolume; // offset=4
    UWORD SamplePitch; // offset=8
    UWORD SamplePan; // offset=10
    UWORD FadeToVolume; // offset=12
    ULONG SourceID; // offset=14
    SWORD SampleNumber; // offset=18
    UBYTE FadeState; // offset=20
    UBYTE FadeStopFlag; // offset=21
    UBYTE FadeStep; // offset=22
    UBYTE UserFlag; // offset=23
    UBYTE SampleType; // offset=24
};

#endif // SNDSAMPLE_HPP_
/******************************************************************************/

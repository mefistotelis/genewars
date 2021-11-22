/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file control.hpp
 *     Header file for control.cpp.
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
#ifndef BIO_CONTROL_HPP_
#define BIO_CONTROL_HPP_

#include "bftypes.h"

class ControllerInfo { // sizeof=13
    SWORD PointerX; // offset=0
    SWORD PointerY; // offset=2
    SWORD PointerXClicked; // offset=4
    SWORD PointerYClicked; // offset=6
    uint8_t LeftPressed:1; // offset=8 bit=0
    uint8_t LeftReleased:1; // offset=8 bit=1
    uint8_t LeftHeld:1; // offset=8 bit=2
    uint8_t MiddlePressed:1; // offset=8 bit=3
    uint8_t MiddleReleased:1; // offset=8 bit=4
    uint8_t MiddleHeld:1; // offset=8 bit=5
    uint8_t RightPressed:1; // offset=8 bit=6
    uint8_t RightReleased:1; // offset=8 bit=7
    uint8_t RightHeld:1; // offset=9 bit=0
    uint8_t LeftClicked:1; // offset=9 bit=1
    uint8_t MiddleClicked:1; // offset=9 bit=2
    uint8_t RightClicked:1; // offset=9 bit=3
    uint8_t ButtonOnePressed:1; // offset=9 bit=4
    uint8_t ButtonOneReleased:1; // offset=9 bit=5
    uint8_t ButtonOneHeld:1; // offset=9 bit=6
    uint8_t ButtonTwoPressed:1; // offset=9 bit=7
    uint8_t ButtonTwoReleased:1; // offset=10 bit=0
    uint8_t ButtonTwoHeld:1; // offset=10 bit=1
    uint8_t ButtonThreePressed:1; // offset=10 bit=2
    uint8_t ButtonThreeReleased:1; // offset=10 bit=3
    uint8_t ButtonThreeHeld:1; // offset=10 bit=4
    uint8_t ButtonFourPressed:1; // offset=10 bit=5
    uint8_t ButtonFourReleased:1; // offset=10 bit=6
    uint8_t ButtonFourHeld:1; // offset=10 bit=7
    uint8_t ButtonLeftPressed:1; // offset=11 bit=0
    uint8_t ButtonLeftReleased:1; // offset=11 bit=1
    uint8_t ButtonLeftHeld:1; // offset=11 bit=2
    uint8_t ButtonRightPressed:1; // offset=11 bit=3
    uint8_t ButtonRightReleased:1; // offset=11 bit=4
    uint8_t ButtonRightHeld:1; // offset=11 bit=5
    uint8_t ButtonUpPressed:1; // offset=11 bit=6
    uint8_t ButtonUpReleased:1; // offset=11 bit=7
    uint8_t ButtonUpHeld:1; // offset=12 bit=0
    uint8_t ButtonDownPressed:1; // offset=12 bit=1
    uint8_t ButtonDownReleased:1; // offset=12 bit=2
    uint8_t ButtonDownHeld:1; // offset=12 bit=3
};

struct GameFlags { // sizeof=1
    uint8_t QuitGame:1; // offset=0 bit=0
    uint8_t WorldGenerated:1; // offset=0 bit=1
    uint8_t GameStart:1; // offset=0 bit=2
    uint8_t SoundOn:1; // offset=0 bit=3
    uint8_t MusicOn:1; // offset=0 bit=4
    uint8_t Conquest:1; // offset=0 bit=5
    uint8_t WonLevel:1; // offset=0 bit=6
    uint8_t LostLevel:1; // offset=0 bit=7
};

struct RunTimeGameFlags { // sizeof=2
    uint8_t Network:1; // offset=0 bit=0
    uint8_t Paused:1; // offset=0 bit=1
    uint8_t Tester:1; // offset=0 bit=2
    uint8_t Debug:1; // offset=0 bit=3
    uint8_t OutOfSync:1; // offset=0 bit=4
    uint8_t AlreadyOutOfSync:1; // offset=0 bit=5
    uint8_t RecorderActive:1; // offset=0 bit=6
    uint8_t DebugKeyboard:1; // offset=0 bit=7
    uint8_t TesterAutosave:1; // offset=1 bit=0
    uint8_t HiSoundsActive:1; // offset=1 bit=1
    uint8_t NewVersion:1; // offset=1 bit=2
    uint8_t ScreenShots:1; // offset=1 bit=3
    uint8_t GameScreenOpen:1; // offset=1 bit=4
};

struct GameControl { // sizeof=52
    GameFlags Flags; // offset=0
    ControllerInfo Controller; // offset=1
    ULONG Turn; // offset=14
    ULONG RndCount; // offset=18
    ULONG Checksum; // offset=22
    UWORD Seed; // offset=26
    UBYTE NoPlayers; // offset=28
    UBYTE PlayerNo; // offset=29
    UBYTE PlayersReady; // offset=30
    UBYTE pad; // offset=31
    char SessionName[20]; // offset=32
};

void control_game();
void setup_controller();
char * MakeScreenShotName( char * );
void ResetAllInputs();

#endif // BIO_CONTROL_HPP_
/******************************************************************************/

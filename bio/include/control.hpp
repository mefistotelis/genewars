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

struct ControllerInfo { // sizeof=13
    SWORD PointerX; // offset=0
    SWORD PointerY; // offset=2
    SWORD PointerXClicked; // offset=4
    SWORD PointerYClicked; // offset=6
    uint8_t RightReleased; // offset=8
    uint8_t ButtonTwoPressed; // offset=9
    uint8_t ButtonFourHeld; // offset=10
    uint8_t ButtonUpReleased; // offset=11
    uint8_t ButtonDownHeld; // offset=12
    uint8_t ButtonDownReleased; // offset=13
    uint8_t ButtonDownPressed; // offset=14
    uint8_t ButtonUpHeld; // offset=15
    uint8_t ButtonUpPressed; // offset=16
    uint8_t ButtonRightHeld; // offset=17
    uint8_t ButtonRightReleased; // offset=18
    uint8_t ButtonRightPressed; // offset=19
    uint8_t ButtonLeftHeld; // offset=20
    uint8_t ButtonLeftReleased; // offset=21
    uint8_t ButtonLeftPressed; // offset=22
    uint8_t ButtonFourReleased; // offset=23
    uint8_t ButtonFourPressed; // offset=24
    uint8_t ButtonThreeHeld; // offset=25
    uint8_t ButtonThreeReleased; // offset=26
    uint8_t ButtonThreePressed; // offset=27
    uint8_t ButtonTwoHeld; // offset=28
    uint8_t ButtonTwoReleased; // offset=29
    uint8_t ButtonOneHeld; // offset=30
    uint8_t ButtonOneReleased; // offset=31
    uint8_t ButtonOnePressed; // offset=32
    uint8_t RightClicked; // offset=33
    uint8_t MiddleClicked; // offset=34
    uint8_t LeftClicked; // offset=35
    uint8_t RightHeld; // offset=36
    uint8_t RightPressed; // offset=37
    uint8_t MiddleHeld; // offset=38
    uint8_t MiddleReleased; // offset=39
    uint8_t MiddlePressed; // offset=40
    uint8_t LeftHeld; // offset=41
    uint8_t LeftReleased; // offset=42
    uint8_t LeftPressed; // offset=43
};

class GameFlags { // sizeof=1
    uint8_t LostLevel; // offset=0
    uint8_t WonLevel; // offset=1
    uint8_t Conquest; // offset=2
    uint8_t MusicOn; // offset=3
    uint8_t SoundOn; // offset=4
    uint8_t GameStart; // offset=5
    uint8_t WorldGenerated; // offset=6
    uint8_t QuitGame; // offset=7
};

struct RunTimeGameFlags { // sizeof=2
    uint8_t DebugKeyboard; // offset=0
    uint8_t GameScreenOpen; // offset=1
    uint8_t ScreenShots; // offset=2
    uint8_t NewVersion; // offset=3
    uint8_t HiSoundsActive; // offset=4
    uint8_t TesterAutosave; // offset=5
    uint8_t RecorderActive; // offset=6
    uint8_t AlreadyOutOfSync; // offset=7
    uint8_t OutOfSync; // offset=8
    uint8_t Debug; // offset=9
    uint8_t Tester; // offset=10
    uint8_t Paused; // offset=11
    uint8_t Network; // offset=12
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
    char SessionName[19]; // offset=32
};

void control_game();
void setup_controller();
char * MakeScreenShotName( char * );
void ResetAllInputs();

#endif // BIO_CONTROL_HPP_
/******************************************************************************/

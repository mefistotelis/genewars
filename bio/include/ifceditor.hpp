/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ifceditor.hpp
 *     Header file for ifceditor.cpp.
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
#ifndef BIO_IFCEDITOR_HPP_
#define BIO_IFCEDITOR_HPP_

#include "bftypes.h"
#include "myspr.h"
#include "spec.hpp"
#include "xy.hpp"
#include "iface.hpp"
#include "creaturestat.hpp"
#include "level.hpp"
#include "map.hpp"

class MyGadget;

enum VictoryCondition { // type=int8_t
    VICTORY_SUMMON_ETHEREALS = 0,
    VICTORY_CURE_DISEASE,
    VICTORY_LEVEL1_SPECIAL_CASE,
    VICTORY_MAX,
};

class IFCEditor : IFCBase { // sizeof=18
    //IFCEditor(IFCEditor *arg1);
    void GoPlanet();
    BBOOL IsCircular(UBYTE arg1);
    BBOOL IsMouseOnMap();
    void TranslateAllHeaders();
    void UpdateAllLevels();
    void PrintHeadersToFile();
    void UpdateLevel(LevelHeader *arg1);
    void UpdateHeader(LevelHeader *arg1);
    BBOOL LoadMap();
    BBOOL SaveMap();
    void LoadLevel();
    void SaveLevel();
    void SpecialistFuncHelp(MyGadget *arg1);
    void SpecialistTypeHelp(MyGadget *arg1);
    void VictoryHelp(MyGadget *arg1);
    int FindSpecFunctionNumber(BBOOL &arg1);
    SpecialistClass FindSpecialistClass(BBOOL &arg1);
    VictoryCondition FindVictoryCondition(BBOOL &arg1);
    int TotalNumberOfSpecs();
    void FindClosestStuff();
    void RemoveStuff();
    void ReadCompPlayer(UBYTE arg1, UBYTE arg2);
    void DrawKeyboardHelp();
    void DrawLimits();
    void DrawBuilding(XY arg1, UBYTE arg2, UBYTE arg3);
    void DrawStuff();
    void DrawDropSites();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    IFCEditor(MyGadget *arg1);
    //void (**__vfptr)();
    //unsigned int *__vbptr;
    MyGadget *gad; // offset=4
    MyAnimBank *anb; // offset=8
    MySprite *spr; // offset=12
    TbSprite *sprites; // offset=16
    char levelName[15]; // offset=20
    UBYTE levelNumber; // offset=36
    UBYTE closestStuff; // offset=37
    UBYTE mapType; // offset=38
    UBYTE compPlayers[2]; // offset=39
    UBYTE compValid; // offset=42
    FlatMap map; // offset=43
    CreatureSpecies currentSpecies; // offset=49
    UBYTE generated; // offset=50
    UBYTE currentlyDragging; // offset=51
    BBOOL draggedLastTurn; // offset=52
    BBOOL drawZoneInfo; // offset=53
    UBYTE editStuffMode; // offset=54
    BBOOL circularWarning; // offset=55
    SBYTE stuffBeingEdited; // offset=56
    UBYTE ePlayer; // offset=57
    UBYTE gPointType; // offset=58
    LevelHeader header; // offset=59
    Stuff newStuff; // offset=246
    UBYTE enteringName; // offset=254
};

#endif // BIO_IFCEDITOR_HPP_
/******************************************************************************/

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

enum { // type=int8_t
    EDIT_NAME = 0,
    EDIT_CLASS_DOWN,
    EDIT_CLASS_UP,
    EDIT_SIZE_DOWN,
    EDIT_SIZE_UP,
    EDIT_ORBIT_DOWN, // 5
    EDIT_ORBIT_UP,
    EDIT_GRAVITY_DOWN,
    EDIT_GRAVITY_UP,
    EDIT_SOLAR_DOWN,
    EDIT_SOLAR_UP, // 10
    EDIT_TEMP_DOWN,
    EDIT_TEMP_UP,
    EDIT_SEA_LEVEL_DOWN,
    EDIT_SEA_LEVEL_UP,
    EDIT_FLAGS_1, // 15
    EDIT_FLAGS_2,
    EDIT_FLAGS_3,
    EDIT_FLAGS_4,
    EDIT_FLAGS_5,
    EDIT_FLAGS_6, // 20
    EDIT_FLAGS_7,
    EDIT_FLAGS_8,
    EDIT_PAYMENT_DOWN,
    EDIT_PAYMENT_UP,
    EDIT_SEED_DOWN, // 25
    EDIT_SEED_UP,
    EDIT_START_ALT_DOWN,
    EDIT_START_ALT_UP,
    EDIT_FRAC_DEV_DOWN,
    EDIT_FRAC_DEV_UP, // 30
    EDIT_WEATHER_DOWN,
    EDIT_WEATHER_UP,
    EDIT_TECTONICS_DOWN,
    EDIT_TECTONICS_UP,
    EDIT_GAS_1_DOWN, // 35
    EDIT_GAS_1_UP,
    EDIT_GAS_2_DOWN,
    EDIT_GAS_2_UP,
    EDIT_GAS_3_DOWN,
    EDIT_GAS_3_UP, // 40
    EDIT_GAS_4_DOWN,
    EDIT_GAS_4_UP,
    EDIT_GAS_5_DOWN,
    EDIT_GAS_5_UP,
    EDIT_GAS_6_DOWN, // 45
    EDIT_GAS_6_UP,
    EDIT_LEVEL_DOWN,
    EDIT_LEVEL_UP,
    EDIT_LEVEL_SAVE,
    EDIT_LEVEL_LOAD, // 50
    EDIT_LEVEL_GO,
    EDIT_VICTORY_GOOP_DOWN,
    EDIT_VICTORY_GOOP_UP,
    EDIT_VICTORY_BUILDINGS_DOWN,
    EDIT_VICTORY_BUILDINGS_UP, // 55
    EDIT_VICTORY_BIOMASS_DOWN,
    EDIT_VICTORY_BIOMASS_UP,
    EDIT_PREV_CREATURE,
    EDIT_NEXT_CREATURE,
    EDIT_PREV_COMPUTER_ONE, // 60
    EDIT_NEXT_COMPUTER_ONE,
    EDIT_PREV_COMPUTER_TWO,
    EDIT_NEXT_COMPUTER_TWO,
    EDIT_PREV_COMPUTER_THREE,
    EDIT_NEXT_COMPUTER_THREE, // 65
    EDIT_BAD_DOWN,
    EDIT_BAD_UP,
    EDIT_VISIT_UP,
    EDIT_VISIT_DOWN,
    EDIT_LENGTH_UP, // 70
    EDIT_LENGTH_DOWN,
    EDIT_CREATURES_UP,
    EDIT_CREATURES_DOWN,
    EDIT_STRICTNESS_UP,
    EDIT_STRICTNESS_DOWN, // 75
    EDIT_STUFF_TYPE_UP,
    EDIT_STUFF_TYPE_DOWN,
    EDIT_STUFF_SPECIES_UP,
    EDIT_STUFF_SPECIES_DOWN,
    EDIT_STUFF_SIZE_UP, // 80
    EDIT_STUFF_SIZE_DOWN,
    EDIT_STUFF_SCORE_UP,
    EDIT_STUFF_SCORE_DOWN,
    EDIT_STUFF_EDIT,
    EDIT_STUFF_NEW, // 85
    EDIT_STUFF_PLS,
    EDIT_COMP_START_1_DOWN,
    EDIT_COMP_START_2_DOWN,
    EDIT_COMP_START_3_DOWN,
    EDIT_COMP_START_1_UP, // 90
    EDIT_COMP_START_2_UP,
    EDIT_COMP_START_3_UP,
    EDIT_ARCHITECT_UP,
    EDIT_FARMER_UP,
    EDIT_SCIENTIST_UP, // 95
    EDIT_SHEPHERD_UP,
    EDIT_ARCHITECT_DOWN,
    EDIT_FARMER_DOWN,
    EDIT_SCIENTIST_DOWN,
    EDIT_SHEPHERD_DOWN, // 100
    EDIT_SPECIALIST_FUNCTIONS_ALLOWED,
    EDIT_SPECIALIST_TYPES_ALLOWED,
    EDIT_RESCUED_ON_TURN_UP,
    EDIT_RESCUED_ON_TURN_DOWN,
    EDIT_VICTORY_FLAGS, // 105
    EDIT_CREATURE_PLAYER_UP,
    EDIT_CREATURE_PLAYER_DOWN,
};

enum VictoryCondition { // type=int8_t
    VICTORY_SUMMON_ETHEREALS = 0,
    VICTORY_CURE_DISEASE,
    VICTORY_LEVEL1_SPECIAL_CASE,
    VICTORY_MAX,
};

class IFCEditor : public IFCBase { // sizeof=786
    MyGadget *gad; // offset=4
    MyAnimBank *anb; // offset=8
    MySprite *spr; // offset=12
    TbSprite *sprites; // offset=16
    char levelName[16]; // offset=20
    UBYTE levelNumber; // offset=36
    UBYTE closestStuff; // offset=37
    UBYTE mapType; // offset=38
    UBYTE compPlayers[3]; // offset=39
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
    Stuff newStuff; // offset=758
    UBYTE enteringName; // offset=766
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=767
public:
    IFCEditor(MyGadget *arg1);
    void PlugIn();
    void PullOut();
    void Draw();
    void Update();
    void DrawDropSites();
    void DrawStuff();
    void DrawBuilding(XY arg1, UBYTE arg2, UBYTE arg3);
    void DrawLimits();
    void DrawKeyboardHelp();
    void ReadCompPlayer(UBYTE arg1, UBYTE arg2);
    void RemoveStuff();
    void FindClosestStuff();
    int TotalNumberOfSpecs();
    VictoryCondition FindVictoryCondition(BBOOL &arg1);
    SpecialistClass FindSpecialistClass(BBOOL &arg1);
    int FindSpecFunctionNumber(BBOOL &arg1);
    void VictoryHelp(MyGadget *arg1);
    void SpecialistTypeHelp(MyGadget *arg1);
    void SpecialistFuncHelp(MyGadget *arg1);
    void SaveLevel();
    void LoadLevel();
    BBOOL SaveMap();
    BBOOL LoadMap();
    void UpdateHeader(LevelHeader *arg1);
    void UpdateLevel(LevelHeader *arg1);
    void PrintHeadersToFile();
    void UpdateAllLevels();
    void TranslateAllHeaders();
    BBOOL IsMouseOnMap();
    BBOOL IsCircular(UBYTE arg1);
    void GoPlanet();
    //IFCEditor(IFCEditor &arg1); -- generate default copy constructor
};

#endif // BIO_IFCEDITOR_HPP_
/******************************************************************************/

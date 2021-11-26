/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file data.cpp
 *     Implementation of related functions.
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
#include "data.hpp"

char unsigned * block_ptrs[2]; // array size TBD

char unsigned * block_mem;

char unsigned * aBlockMem;

TbSprite * pointers_sprites;

TbSprite * end_pointers_sprites;

Player * end_players;

char unsigned * palette;

char unsigned * shipPalette;

char unsigned * b_screen;

char * game_text;

char unsigned * scratch;

char * strings[2]; // array size TBD

FontInfo * menu_font;

TbSprite * gad_spr;

MyAnimBank * bones_anb;

MySprite * bones_spr;

MyAnimBank * plgbl_anb;

MySprite * plgbl_spr;

TbSprite * plSpr;

MyAnimBank * ifcLab_anb;

MySprite * ifcLab_spr;

TbSprite * ifcLabSpr;

MyAnimBank * iface_anb;

MySprite * iface_spr;

TbSprite * ifcSpr;

MyAnimBank * effect_anb;

MySprite * effect_spr;

MyAnimBank * ethereal_anb;

MySprite * ethereal_spr;

MyAnimBank * building_anb[2]; // array size TBD

MySprite * building_spr[2]; // array size TBD

MyAnimBank * ani_anb[2]; // array size TBD

MySprite * ani_spr[2]; // array size TBD

MyAnimBank * plant_anb[2]; // array size TBD

MySprite * plant_spr[2]; // array size TBD

IFCBase * currentIFC;

void * Packet::dataBlast;

long unsigned pointers_data;

long unsigned planets_data;

long unsigned sparkle_data;

long unsigned tubemask_data;

long unsigned ifclvs_data;

long unsigned globalOptions;

long unsigned playerVictory[2]; // array size TBD

short unsigned localRndSeed;

short boundMinX;

short boundMinY;

short boundMaxX;

short boundMaxY;

short realX;

short realY;

int mouseDebug;

char unsigned cyanTables[2][256]; // first array size TBD

char unsigned redTables[2][256]; // first array size TBD

char unsigned iceTables[2][256]; // first array size TBD

char unsigned globalDebug;

char unsigned thingProcessing;

char const * debugFile[2]; // array size TBD

long unsigned debugLine[2]; // array size TBD

long unsigned debugTurn[2]; // array size TBD

char unsigned debugIndex;

long unsigned pktTotalTime;

long unsigned gameStartTime;

long unsigned gameEndTime;

char unsigned replace_display;

char unsigned runSimulation;

char signed centerCtr;

char signed visX;

char signed visY;

char signed ptrX;

char signed ptrY;

char signed playerProcessed;

char unsigned localPlayer;


char unsigned equipmentStore[2][52]; // first array size TBD

char unsigned editorMode;

char unsigned mapGrid;

char unsigned dropSiteTaken;

char unsigned localRace;

char unsigned localVictory;

char unsigned localEtherealStrictness;

GameControl control;

Config config;

RunTimeGameFlags runFlags;

XY oldMouseXY;

ControllerInfo * controller;

Colour savePalette[2]; // array size TBD

TbSpriteData font_sprites[7];

Packet packets[8];

BioGame bio;

GridTile defaultGridTile;

ScreenLockHandler screenLock;

tm mainMapTime;

MapDisplay mapDisplay;

SoundManager snd(mapDisplay.center);

PlSpecLoader plsLoader;

HelpDraw helper;

Recorder recorder;

InfoRequester request;

Computer computers[4];


long unsigned buildingsAllowed;

char unsigned shadeMethod;

Planet defaultPlanet = {
    {.name = "Exceland"}, //TODO the braces are due to GCC bug, to be removed later (https://gcc.gnu.org/bugzilla/show_bug.cgi?id=55227)
    .levelNumber = 1,
    .planetClass = 2,
    .orbit = 0,
    .gravity = 1024,
    .solarEnergy = 6,
    .meanTemp = 140,
    .seaLevel = 816,
    .flags = 0x01,
    .payment = 2000,
    .seed = 0x0CF6,
    .startAlt = 592,
    .scaler = 0x2400,
    .nothing = 0,
    .biomass = 0,
    .initialBad = 0,
    .victoryCreatures = 0,
    .etherealBadLimit = 100,
    .etherealVisit = 16000,
    .etherealBonusMono = 1000,
    .dropSites = {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
    .stuff = {0},
    .boundaries = {{0,0},{0,0}},
    .victoryGoop = 0,
    .victoryEnemyBuildings = 0,
    .victoryEPoints = 0,
    .etherealStrictness = 0,
    .terraformXY = {0,0},
    .computerStartOnTurn = {0,0,0},
    .specialistsAllowed = 0,
    .rescuedOnTurn = 0,
    .victoryFlags = 0,
};

MyGadget ifcPls_gads[2]; // array size TBD

MyGadget ifcPanel_gads[2]; // array size TBD

MyGadget ifcPalette_gads[2]; // array size TBD

MyGadget ifcLab_gads[2]; // array size TBD


MyAnimBank * tubespec_anb;

MyGadget ifcOptions_gads[2]; // array size TBD

MyGadget ifcLvS_gads[2]; // array size TBD

MyGadget ifcTitle_gads[2]; // array size TBD

MyGadget ifcCustom_gads[2]; // array size TBD

MyGadget ifcEditor_gads[2]; // array size TBD

MyGadget ifcComp_gads[2]; // array size TBD

char const * triggerType[2]; // array size TBD

char const * stuffTypes[2]; // array size TBD

char * ceditor_help[2]; // array size TBD

MyGadget ifcCompEditor_gads[2]; // array size TBD

MyGadget ifcClone_gads[2]; // array size TBD

short const buildScores[][3] = {
    { 75,125,200}, { 30, 70,120},
    { 40,100,125}, {150,250,350},
    { 60,100,150}, { 20, 40, 60},
    { 20, 35, 50}, { 60,100,125},
    { 25, 40, 55}, { 75,110,150},
    { 75,150,225}, { 90,140,170},
    { 70,100,150}, { 20, 40, 60},
};

short const buildThreatScores[][3] = {
    {150,300,450}, {100,175,225},
    { 40, 70,100}, {150,200,250},
    { 60,100,150}, { 20, 40, 60},
    { 20, 30, 40}, { 30, 50, 70},
    { 20, 30, 40}, { 75,100,125},
    { 75,150,225}, {100,150,200},
    {100,150,200}, { 20, 40, 60},
};

MySprite * tubespec_spr;

TbSprite * tubespec_sprites;

MyAnimBank * sequip_anb;

MySprite * sequip_spr;

TbSprite * sequip_sprites;

TextEntry textEntry;

CreatureInfo creatureInfo[300];

GEngine Engine;

IFCTitle ifcTitle(ifcTitle_gads);

IFCCustom ifcCustom(ifcCustom_gads);

IFCPlanetside ifcPls(ifcPls_gads);

IFCStartNetwork ifcStartNetwork;

IFCGeneratePlanet ifcGeneratePlanet;

IFCJoiningPlayer ifcJoiningPlayer;

IFCWinLevel ifcWinLevel;

IFCLoseLevel ifcLoseLevel;

IFCStatScreen ifcStatScreen;

IFCComputer ifcComputer(ifcComp_gads);

IFCOptions ifcOptions(ifcOptions_gads);

IFCLevel ifcLevel;

IFCEditor ifcEditor(ifcEditor_gads);

IFCCompEditor ifcCompEditor(ifcCompEditor_gads);

unsigned char colour_lookup[2]; // array size TBD

unsigned char const upgradeScores[][3] = {
    {160, 80,100}, { 50, 50, 20},
    {140, 40, 30}, {  0,  0,  0},
    {170, 50, 40}, { 50,  0,  0},
    {  0,150,120}, { 30,120,110},
    {  0,150,140}, {  0,140,110},
    {40,   0,  0}, {250,  0,  0},
    {30, 200,130}, {  0,  0,  0},
};

unsigned char const specTgtScores[] = {50, 20, 35, 40,};

unsigned char const specThreatScores[] = {40, 5, 35, 75,};

unsigned char const creatureThreatScores[] = {
    4, 3, 1, 2, 1, 4, 2, 3, 2, 2, 2, 2, 1, 1, 1, 4, 2, 2, 3, 3, 2, 2, 2, 1, 1, 0, 0, 0
};

unsigned char const cInfo[][5] = {
    { 0, 0,80,55,80}, { 0,70,30,70,45},
    { 0, 0,15,55,25}, { 0, 0,40,30,50},
    {70, 0, 2,17,15}, { 0,20,80,67,70},
    { 0, 0,60,47,70}, { 0, 0,55,42,58},
    { 5, 0,62,44,45}, { 0,25,12,63,30},
    { 0,35,15,52,35}, {20,80, 4,68,27},
    { 0, 0,10,60,38}, { 1, 0, 5,18,14},
    {25, 0, 8, 8, 8}, { 0,45,45,80,67},
    { 0, 0,22,63,45}, { 0, 0,18,58,43},
    { 0, 0,36,26,62}, { 0,15,33,29,49},
    { 0, 0,28, 6,35}, {40, 0, 5,49,26},
    {85,50, 3,60,22}, {35, 0, 2,20,18},
    {75, 0, 1,14,15},
};

signed char const sectorDirs[][2] = {
    {1,-1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1},
};

FontInfo font_info[2]; // array size TBD

/******************************************************************************/

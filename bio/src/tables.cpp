/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file tables.cpp
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
#include "tables.hpp"

#if 0 // fill values and enable
TbLoadFiles startup_files[];

TbLoadFiles installedData[];
#endif

const char * creatureAnbs[] = {
    "dino.anb",
    "crab.anb",
    "frog.anb",
    "bird.anb",
    "mule.anb",
    "dinocrab.anb",
    "dinofrog.anb",
    "dinobird.anb",
    "dinomule.anb",
    "crabfrog.anb",
    "crabbird.anb",
    "crabmule.anb",
    "frogbird.anb",
    "frogmule.anb",
    "birdmule.anb",
    "crabdino.anb",
    "frogdino.anb",
    "frogcrab.anb",
    "birddino.anb",
    "birdcrab.anb",
    "birdfrog.anb",
    "muledino.anb",
    "mulecrab.anb",
    "mulefrog.anb",
    "mulebird.anb",
};

const char project_date[] = "Jul 19 1996";
const char project_time[] = "03:32:58";
const char project_name[] = "Bio";
const char * project_builder = "RReed";

char signed const terrainPointVals[][8] = {
    {0, 0, 25, -70,  10,  0, -70, 100},
    {0, 0, 25, -10, 100, 75, -10, -10},
    {0, 0, 25,  75,   0, 10, 100, -70},
};

short const terrainFriction[] = {512, 704, 448, 320, 384, 384, 256, 320};

short const terrainBounce[] = {16, 1, 32, 50, 64, 40, 25, 60};

const XY dxy[] = { {0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, };

const XY hdxy[] = { {0, -256}, {256, -256}, {256, 0}, {256, 256}, {0, 256}, {-256, 256}, {-256, 0}, {-256, -256}, {0, 0}, };

const XY hdxy2[] = { {0, -128}, {128, -128}, {128, 0}, {128, 128}, {0, 128}, {-128, 128}, {-128, 0}, {-128, -128}, {0, 0}, };

const XY flatDxy[] = { {0, -12}, {24, -6}, {24, 6}, {0, 12}, {-24, 6}, {-24, -6}, };

const XY cMassXY[] = { {1024, -1773}, {2048, 0}, {1024, 1773}, {-1024, 1773}, {-2048, 0}, {-1024, -1773}, };

const unsigned char flipDir[] = {3, 4, 5, 0, 1, 2, 0, 0,};

const unsigned char teColor[] = {0x3C, 0x34, 0x64, 0x78, 0x6D, 0x71, 0x7E, 0x65};

const EqRange eq_range[] = { {0, 6}, {6, 3}, {9, 4}, {13, 4}, {17, 3}, {20, 3}, {23, 4}, {27, 4}, {31, 3}, {34, 4}, {38, 4}, {42, 3}, {45, 4}, {49, 3}, };

const unsigned char eq_catBase[] = {0, 6, 9, 13, 20, 23, 27, 34, 38, 45, 52, 0,};

const unsigned char specActionBases[] = {0, 5, 8, 10,};

const unsigned short specActionPointers[] = {2, 0, 0, 0, 14, 10, 11, 9, 3, 4, 7, 5, 8, 0, 15,};

const unsigned short creatureActionPointers[] = {0, 5, 6, 12, 13, 9, 2,};

#if 0 // fill values and enable
ASpecies aSpecies[];
#endif

Gene genes[] = {
    {CRB_DINO, CRB_DINO}, {CRB_CRAB, CRB_CRAB}, {CRB_FROG, CRB_FROG}, {CRB_BIRD, CRB_BIRD}, {CRB_MULE, CRB_MULE},
    {CRB_DINO, CRB_CRAB}, {CRB_DINO, CRB_FROG}, {CRB_DINO, CRB_BIRD}, {CRB_DINO, CRB_MULE},
    {CRB_CRAB, CRB_FROG}, {CRB_CRAB, CRB_BIRD}, {CRB_CRAB, CRB_MULE},
    {CRB_FROG, CRB_BIRD}, {CRB_FROG, CRB_MULE},
    {CRB_BIRD, CRB_MULE}, {CRB_CRAB, CRB_DINO},
    {CRB_FROG, CRB_DINO}, {CRB_FROG, CRB_CRAB},
    {CRB_BIRD, CRB_DINO}, {CRB_BIRD, CRB_CRAB}, {CRB_BIRD, CRB_FROG},
    {CRB_MULE, CRB_DINO}, {CRB_MULE, CRB_CRAB}, {CRB_MULE, CRB_FROG}, {CRB_MULE, CRB_BIRD},
};

const CreatureSpecies speciesLookup[][5] = {
    {CRS_DINO, CRS_DINOCRAB, CRS_DINOFROG, CRS_DINOBIRD, CRS_DINOMULE},
    {CRS_CRABBOSAUR, CRS_CRAB, CRS_CRABBOFROG, CRS_CRABBOBIRD, CRS_CRABBOMULE},
    {CRS_FROGGOSAUR, CRS_FROGGOCRAB, CRS_FROG, CRS_FROGGOBIRD, CRS_FROGGOMULE},
    {CRS_BIRDDOSAUR, CRS_BIRDDOCRAB, CRS_BIRDDOFROG, CRS_BIRD, CRS_BIRDDOMULE},
    {CRS_MULEOSAUR, CRS_MULEOCRAB, CRS_MULEOFROG, CRS_MULEOBIRD, CRS_MULE},
};

#if 0 // fill values and enable
GunSpec gunSpec[];
#endif

SpecRaceData specRaceData[] = {
    { 960, 1792, 100,  70},
    { 576, 1024,  75, 100},
    {1088, 1280,  75,  65},
    { 832, 1024,  75,  90},
};

XY topoProgOffset[] = {
    {-256, -256}, {-512, -512}, {-1024, -1024}, {-1024, -1024},
};

short topoProgWidth[] = {256, 512, 1024, 1024,};

unsigned char topoProgDimensions[] = {3, 5, 9, 0,};

unsigned char topoCrater1Blocks[][3] = { {32, 34, 33}, {34, 7, 34}, {33, 34, 33}, {0, 0, 0}, };

unsigned char topoCrater1Orients[][3] = { {0, 0, 16}, {64, 0, 80}, {32, 32, 48}, {0, 0, 0}, };

XY topoFlatOffset[] = {
    {0, 0},
    {-256, -256},
    {-256, -256},
};

unsigned char topoFlatDimensions[] = {2, 3, 4, 0,};

short topoFlatWidth[] = {0x100, 0x200, 0x300};

unsigned short noPlayerIcon[] = {288, 224, 320, 224, 288, 240, 320, 240, 0,};

unsigned char playerDitherTables[][2] = {
    {0xC0, 0xD0}, {0xD0, 0xE0}, {0xE0, 0xF0}, {0xC0, 0xF0}, {0xE0, 0xF0}, {0x0, 0x0},
};

#if 0 // fill values and enable
const PSpecies pSpecies[];
#endif

BuildingType const buildingDisplayList[] = {
    BCID_MINE, BCID_POWERSTATION, BCID_SOLAR, BCID_FARM,
    BCID_GENELAB, BCID_GOOPVAT, BCID_LAUNCHER, BCID_SAWMILL,
    BCID_OPERATIONS, BCID_WIND, BCID_NUCLEAR, BCID_TURRET,
    BCID_SHIELD, BCID_OBSERVATORY,
};

const unsigned char buildingPower[] = {0, 2, 1, 0, 1, 1, 0, 1, 0, 0, 2, 1, 1, 1,};

const short buildingBMax[][3] = {
    {280, 600, 1000}, {120, 280, 480}, {160, 400, 600}, {240, 480, 800},
    {240, 480, 800}, {160, 320, 640}, {80, 200, 360}, {240, 480, 800},
    {150, 280, 350}, {240, 480, 600}, {400, 800, 1200}, {280, 560, 840},
    {140, 280, 400}, {80, 160, 240},
};

const unsigned char buildingDestroyedIndices[] = {31, 27, 12, 2, 15, 35, 5, 24, 10, 19, 18, 1, 21, 30,};

const unsigned char turretHeight[] = {100, 100, 130,};

const unsigned char buildingTech[][3] = {
    {1, 4, 14}, {9, 17, 25}, {4, 8, 12}, {0, 7, 15},
    {2, 5, 12}, {3, 30, 30}, {0, 5, 9}, {10, 14, 24},
    {6, 11, 13}, {12, 18, 24}, {5, 30, 30}, {0, 30, 30},
    {6, 12, 19}, {2, 30, 30},
};

EventHelpType const buildingHelp[][3] = {
    {EVH_GENE_POD, EVH_GENE_MACHINE, EVH_GENE_LAB}, {EVH_STUNNER_TURRET, EVH_ZAP_TURRET, EVH_BLASTER_TURRET}, {EVH_PULPER, EVH_PULVERISER, EVH_MASS_PULVERISER}, {EVH_FIRST_STAGE_DISTRIBUTOR, EVH_SECOND_STAGE_DISTRIBUTOR, EVH_THIRD_STAGE_DISTRIBUTOR},
    {EVH_RECYCLING_PLANT, EVH_RECYCLOTRON, EVH_GOOP_FACTORY}, {EVH_LANDING_PAD, EVH_NULL, EVH_NULL}, {EVH_PHOTON_PROCESSOR, EVH_SPECTRAL_SPONGE, EVH_EM_TRAP}, {EVH_ETHEREAL_DETECTOR, EVH_ETHEREAL_SCOPE, EVH_ETHEREAL_OBSERVATORY},
    {EVH_ROTATOR, EVH_WIND_PROCESSOR, EVH_ATMOSPHERIC_GENERATOR}, {EVH_FUSION_BATTERY, EVH_FUSION_GENERATOR, EVH_NULL}, {EVH_TECH_FACILITY, EVH_NULL, EVH_NULL}, {EVH_EXTRACTOR, EVH_NULL, EVH_NULL},
    {EVH_SHIELD_GENERATOR, EVH_SANCTUARY_GENERATOR, EVH_DENIAL_DOME}, {EVH_GOOP_VAT, EVH_NULL, EVH_NULL},
};

const unsigned char foundationSizes[] = {3, 1, 2, 3, 2, 2, 1, 2, 1, 2, 3, 3, 2, 1, 0, 0,};

const unsigned char foundationArea[] = {0, 1, 4, 9,};

char signed const foundationTravel[][8] = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {6, 0, 2, 0, 0, 0, 0, 0},
    {0, 6, 4, 4, 2, 2, 0, 0},
};

const short foundationRadii[] = {90, 200, 298,};

const long buildingGoopCost[] = {600, 750, 400, 400, 300, 600, 250, 1000, 300, 500, 900, 750, 600, 300,};

const short lzBlockTypes[] = {150, 149, 148, 149, 148, 149, 148, 149, 148,};

const unsigned char lzBlockOrientations[] = {0x0, 0x0, 0x0, 0x40, 0x20, 0x20, 0x30, 0x50, 0x10, 0x0, 0x0, 0x0,};

unsigned char dropLabHD[] = {0, 6, 7, 8,};

const unsigned char buildingNeeds[] = {
    3, 10, 0, 11, 0, 0, 3, 12, 6, 10, 5, 255, 10, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

const unsigned char solarPower[] = {1, 0, 5, 3, 4, 6, 4, 1,};

const unsigned char mineralsPerTileType[] = {0, 0, 0, 0, 0, 0, 50, 65,};

const unsigned short idealAtmosphere[][3] = {
    {2047, 2047, 2047}, {2047, 2047, 2047}, {2047, 2047, 2047}, {2047, 2047, 2047},
};

const unsigned short idealDensities[] = {6141, 6141, 6141, 6141,};

const unsigned char plantProduction[] = {0, 2, 4, 2,};

EffectStats const effectStats[] = {
    {ET_PLAYONCE,	0, 6, EF_NULL, false, false},
    {ET_PLAYONCE,	0, 5, EF_NULL, false, false},
    {ET_PLAYONCE,	0, 4, EF_NULL, false, false},
    {ET_PLAYONCE,	0, 3, EF_NULL, false, false},
    {ET_PLAYONCE,	0, 2, EF_NULL, false, false},
    {ET_PLAYONCE,	0, 1, EF_NULL, false, false},
    {ET_PLAYONCE,	0, 27, EF_NULL, true, false},
    {ET_PLAYONCE,	0, 21, EF_NULL, false, false},
    {ET_PLAYONCE,	0, 22, EF_NULL, false, false},
    {ET_PLAYONCE,	0, 15, EF_NULL, false, false},
    {ET_PLAYONCE,	0, 25, EF_NULL, false, false},
    {ET_COLLIDE,	0, 14, EF_EXPLOSION_6, true, true},
    {ET_PLAYONCE,	0, 28, EF_NULL, true, true},
    {ET_COLLIDE,	0, 14, EF_EXPLOSION_6, true, true},
    {ET_COLLIDE,	1, 30, EF_NULL, true, true},
    {ET_COLLIDE,	1, 30, EF_NULL, true, true},
    {ET_COLLIDE,	1, 30, EF_NULL, true, true},
    {ET_TIMED,		0, 13, EF_NULL, false, false},
    {ET_TIMED,		1, 11, EF_EXPLOSION_6, true, true},
    {ET_COLLIDE,	 0, 10, EF_BOLT_BLAST, true, true},
    {ET_PLAYONCE,	0, 12, EF_NULL, true, true},
    {ET_BUBBLE, 	0, 19, EF_RIPPLE, false, false},
    {ET_PLAYONCE,	0, 20, EF_NULL, false, false},
    {ET_COLLIDETIMED, 0, 9, EF_BOLT_BLAST, true, true},
    {ET_COLLIDETIMED, 0, 8, EF_EXPLOSION_3, true, true},
    {ET_COLLIDETIMED, 0, 7, EF_EXPLOSION_6, true, true},
    {ET_PLAYONCE,	0, 35, EF_NULL, false, false},
    {ET_TIMED,		1, 18, EF_NULL, true, true},
    {ET_TIMED,		1, 18, EF_NULL, true, true},
    {ET_TIMED,		1, 18, EF_NULL, true, true},
    {ET_TIMED,		1, 18, EF_NULL, true, true},
    {ET_TIMED,		1, 18, EF_NULL, true, true},
    {ET_PLAYONCE,	1, 42, EF_NULL, false, false},
    {ET_PERMANENT,	0, 1, EF_NULL, false, false},
    {ET_PLAYONCE,	0, 8, EF_NULL, true, false},
    {ET_TIMED,		0, 19, EF_NULL, false, true},
    {ET_PERMANENT,	1, 1, EF_NULL, true, true},
    {ET_COLLIDETIMED, 0, 9, EF_EXPLOSION_1, true, true},
    {ET_COLLIDETIMED, 0, 9, EF_EXPLOSION_2, true, true},
    {ET_COLLIDETIMED, 0, 9, EF_EXPLOSION_3, true, true},
    {ET_COLLIDETIMED, 0, 9, EF_EXPLOSION_4, true, true},
    {ET_COLLIDETIMED, 0, 9, EF_BOLT_BLAST, true, true},
    {ET_COLLIDETIMED, 0, 9, EF_BOLT_BLAST, true, true},
    {ET_COLLIDETIMED, 0, 9, EF_BOLT_BLAST, true, true},
    {ET_PLAYONCE,	0, 5, EF_NULL, false, false},
    {ET_TIMED,		1, 12, EF_NULL, true, true},
    {ET_TIMED,		0, 20, EF_NULL, true, false},
    {ET_PLAYONCE,	0, 35, EF_NULL, false, false},
    {ET_PLAYONCE,	0, 20, EF_NULL, false, false},
    {ET_INDEFINITE, 0, 1, EF_NULL, false, true},
    {ET_INDEFINITE, 0, 1, EF_NULL, false, true},
    {ET_PLAYONCE,	0, 2, EF_NULL, false, false},
    {ET_COLLIDETIMED, 0, 9, EF_SPIT_HIT, true, true},
    {ET_PLAYONCE,	0, 9, EF_NULL, false, false},
    {ET_TIMED,		0, 16, EF_NULL, false, false},
    {ET_COLLIDE,	1, 30, EF_BLOOD, true, true},
    {ET_COLLIDE,	1, 30, EF_BLOOD, true, true},
    {ET_COLLIDE,	1, 30, EF_BLOOD, true, true},
    {ET_COLLIDE,	1, 30, EF_BLOOD, true, true},
    {ET_INDEFINITE, 0, 1, EF_NULL, false, false},
    {ET_PLAYONCE,	0, 11, EF_NULL, false, false},
    {ET_PLAYONCE,	0, 11, EF_NULL, false, false},
    {ET_COLLIDETIMED, 0, 9, EF_NULL, true, true},
    {ET_INDEFINITE,	0, 9, EF_FIRE, true, true},
    {ET_INDEFINITE,	0, 10, EF_NULL, false, false},
    {ET_INDEFINITE,	0, 10, EF_NULL, false, false},
    {ET_INDEFINITE,	0, 11, EF_NULL, false, false},
    {ET_INDEFINITE,	1, 1, EF_NULL, true, true},
    {ET_INDEFINITE,	1, 1, EF_NULL, true, true},
    {ET_INDEFINITE,	1, 1, EF_NULL, true, true},
    {ET_INDEFINITE,	0, 3, EF_NULL, false, false},
};

const unsigned long project_version = 12383;

const XY landingPadDevFromBuilding = {-128, 640};

Corners corners[] = {
    {0, 0, 0, 0}, {1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3},
    {4, 4, 4, 4}, {5, 5, 5, 5}, {6, 6, 6, 6}, {7, 7, 7, 7},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {0, 1, 1, 1}, {1, 0, 1, 0}, {1, 0, 0, 0}, {1, 1, 0, 0},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {6, 0, 7, 4},
    {7, 7, 0, 0}, {7, 0, 0, 0}, {7, 0, 7, 0}, {0, 7, 7, 7},
    {6, 6, 4, 4}, {6, 4, 6, 4}, {6, 4, 6, 6}, {4, 6, 4, 4},
    {4, 4, 0, 0}, {4, 0, 0, 0}, {0, 4, 4, 4}, {0, 4, 0, 4},
    {7, 3, 3, 3}, {7, 3, 7, 3}, {3, 7, 7, 7}, {7, 7, 3, 3},
    {5, 7, 7, 7}, {7, 7, 5, 5}, {7, 5, 7, 5}, {7, 5, 5, 5},
    {2, 5, 2, 5}, {5, 2, 2, 2}, {2, 5, 5, 5}, {5, 5, 2, 2},
    {4, 4, 3, 3}, {4, 3, 3, 3}, {3, 4, 3, 4}, {3, 4, 4, 4},
    {4, 5, 5, 5}, {5, 4, 4, 4}, {5, 4, 5, 4}, {4, 4, 5, 5},
    {7, 2, 7, 2}, {2, 7, 7, 7}, {7, 2, 2, 2}, {7, 7, 2, 2},
    {4, 7, 7, 7}, {7, 4, 7, 4}, {7, 4, 4, 4}, {7, 7, 4, 4},
    {7, 6, 7, 7}, {6, 6, 7, 7}, {6, 7, 6, 7}, {6, 7, 6, 6},
    {6, 6, 0, 0}, {6, 0, 6, 0}, {6, 0, 6, 6}, {0, 6, 0, 0},
    {2, 7, 5, 7}, {7, 7, 5, 2}, {5, 7, 5, 2}, {2, 7, 2, 5},
    {2, 2, 7, 5}, {5, 5, 7, 2}, {3, 3, 4, 7}, {4, 3, 4, 7},
    {7, 7, 4, 3}, {7, 4, 4, 3}, {3, 4, 3, 7}, {7, 3, 7, 4},
    {7, 6, 4, 6}, {7, 6, 7, 4}, {7, 6, 6, 4}, {7, 4, 6, 4},
    {7, 6, 4, 7}, {7, 6, 4, 4}, {6, 4, 0, 4}, {0, 4, 6, 6},
    {0, 4, 0, 6}, {0, 0, 4, 6}, {0, 6, 4, 4}, {6, 0, 6, 4},
    {6, 0, 6, 7}, {7, 0, 6, 0}, {7, 6, 0, 0}, {7, 6, 6, 0},
    {7, 6, 7, 0}, {7, 7, 0, 6}, {7, 0, 4, 0}, {7, 4, 0, 4},
    {7, 4, 0, 0}, {7, 7, 4, 0}, {4, 7, 0, 4}, {7, 4, 7, 0},
    {7, 5, 5, 4}, {4, 5, 4, 7}, {7, 7, 4, 5}, {7, 5, 4, 5},
    {7, 4, 7, 5}, {7, 4, 4, 5}, {7, 6, 0, 4}, {6, 7, 0, 4},
    {6, 6, 5, 5}, {6, 5, 6, 5}, {6, 5, 6, 6}, {5, 6, 5, 5},
    {6, 6, 3, 3}, {6, 3, 6, 3}, {6, 3, 6, 6}, {3, 6, 3, 3},
    {7, 5, 5, 6}, {6, 5, 6, 7}, {7, 7, 6, 5}, {7, 5, 6, 5},
    {7, 6, 7, 5}, {7, 6, 6, 5}, {7, 3, 3, 6}, {6, 3, 6, 7},
    {7, 7, 6, 3}, {7, 3, 6, 3}, {7, 6, 7, 3}, {7, 6, 6, 3},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
    {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1}, {-1, -1, -1, -1},
};

const XY zeroXY = {0,0};

const Vector zeroVector = {0,0,0};

ComponentVector const zeroComponentVector = {0,0,0};

VMod v_how[4096];

/******************************************************************************/

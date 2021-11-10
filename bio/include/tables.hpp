/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file tables.hpp
 *     Header file for tables.cpp.
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
#ifndef BIO_TABLES_HPP_
#define BIO_TABLES_HPP_

class EqRange { // sizeof=2
    UBYTE base; // offset=0
    UBYTE range; // offset=1
};

typedef class EqRange EqRange;

class SpecRaceData { // sizeof=16
    SLONG speed; // offset=0
    SLONG discoverRange; // offset=4
    SLONG maxAbility; // offset=8
    SLONG maxStrength; // offset=12
};

typedef class SpecRaceData SpecRaceData;

struct Corners { // sizeof=4
    SBYTE Cnw; // offset=0
    SBYTE Cne; // offset=1
    SBYTE Cse; // offset=2
    SBYTE Csw; // offset=3
};

typedef struct Corners Corners;

struct VMod { // sizeof=2
    UBYTE Block; // offset=0
    UBYTE Orient; // offset=1
};

typedef struct VMod VMod;


extern TbLoadFiles startup_files[];
extern TbLoadFiles installedData[];
extern char const * creatureAnbs[];
extern char unsigned const project_date[];
extern char unsigned const project_time[];
extern char unsigned const project_name[];
extern char const * project_builder;
extern char signed const terrainPointVals[][8];
extern short const terrainFriction[];
extern short const terrainBounce[];
extern XY const dxy[];
extern XY const hdxy[];
extern XY const hdxy2[];
extern XY const flatDxy[];
extern XY const cMassXY[];
extern char unsigned const flipDir[];
extern char unsigned const teColor[];
extern EqRange const eq_range[];
extern char unsigned const eq_catBase[];
extern char unsigned const specActionBases[];
extern short unsigned const specActionPointers[];
extern short unsigned const creatureActionPointers[];
extern ASpecies aSpecies[];
extern Gene genes[];
extern CreatureSpecies const speciesLookup[][5];
extern GunSpec gunSpec[];
extern SpecRaceData specRaceData[];
extern XY topoProgOffset[];
extern short topoProgWidth[];
extern char unsigned topoProgDimensions[];
extern char unsigned topoCrater1Blocks[][3];
extern char unsigned topoCrater1Orients[][3];
extern XY topoFlatOffset[];
extern char unsigned topoFlatDimensions[];
extern short topoFlatWidth[];
extern short unsigned noPlayerIcon[];
extern char unsigned playerDitherTables[][2];
extern PSpecies const pSpecies[];
extern BuildingType const buildingDisplayList[];
extern char unsigned const buildingPower[];
extern short const buildingBMax[][3];
extern char unsigned const buildingDestroyedIndices[];
extern char unsigned const turretHeight[];
extern char unsigned const buildingTech[][3];
extern EventHelpType const buildingHelp[][3];
extern char unsigned const foundationSizes[];
extern char unsigned const foundationArea[];
extern char signed const foundationTravel[][8];
extern short const foundationRadii[];
extern long const buildingGoopCost[];
extern short const lzBlockTypes[];
extern char unsigned const lzBlockOrientations[];
extern char unsigned dropLabHD[];
extern char unsigned const buildingNeeds[];
extern char unsigned const solarPower[];
extern char unsigned const mineralsPerTileType[];
extern short unsigned const idealAtmosphere[][3];
extern short unsigned const idealDensities[];
extern char unsigned const plantProduction[];
extern EffectStats const effectStats[];
extern long unsigned const project_version;
extern XY const landingPadDevFromBuilding;
extern Corners corners[];
extern XY const zeroXY;
extern Vector const zeroVector;
extern ComponentVector const zeroComponentVector;
extern VMod v_how[];

#endif // BIO_TABLES_HPP_
/******************************************************************************/

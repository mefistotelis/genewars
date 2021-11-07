/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file plant.hpp
 *     Header file for plant.cpp.
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
#ifndef BIO_PLANT_HPP_
#define BIO_PLANT_HPP_

#include "bftypes.h"
#include "xy.hpp"

class BioGame;

enum PlantSpecies { // type=int8_t
    PSP_BULB = 0,
    PSP_ROOT,
    PSP_WAXLEAF,
    PSP_BLOOM,
    PSP_BRALM,
    PSP_PALM, // 5
    PSP_SNOWDROP,
    PSP_KELPIE,
    PSP_SPIKEY,
    PSP_FUNGUS,
    PSP_SPIRAL, // 10
    PSP_CONE,
    MAX_PSPECIES,
};

class PSpecies { // sizeof=32
    char name[15]; // offset=0
    SBYTE terrain[7]; // offset=16
    UBYTE seedTime; // offset=24
    UBYTE range; // offset=25
    UBYTE maxNeighbours; // offset=26
    UBYTE lifeSpan; // offset=27
    UBYTE food; // offset=28
    UBYTE wood; // offset=29
    UBYTE seeds; // offset=30
    UBYTE density; // offset=31
};

class Plant : StaticThing { // sizeof=49
    class Plant * operator=(class Plant *arg1);
    Plant(class Plant *arg1);
    Plant();
    BBOOL operator ==(Plant *arg1);
    SLONG WriteBuffer(Plant **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    SLONG ReadBuffer(Plant **arg1, SLONG arg2, SLONG arg3, BioGame *arg4);
    void UpdateAll();
    Plant * Create(UBYTE arg1, UBYTE arg2, XY arg3);
    void InitArray();
    void Draw(SWORD arg1, SWORD arg2);
    void ChopDown();
    void Die();
    PSpecies * Species();
    void Free();
    void ClearBeingEaten();
    BBOOL IsBeingEaten();
    BBOOL IsFallen();
    BBOOL IsDead();
    void SetBeingEaten();
    UBYTE Update();
    BBOOL Damage(SWORD arg1, Thing *arg2);
    void Resync();
    void Write(SLONG &arg1);
    void Read(SLONG &arg1);
    /* void (**__vfptr)(); */
    PlantSpecies species; // offset=43
    SWORD health; // offset=44
    UBYTE flags; // offset=46
    UBYTE age; // offset=47
    UBYTE wood; // offset=48
};

#endif // BIO_PLANT_HPP_
/******************************************************************************/

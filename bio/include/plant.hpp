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
#include "thing.hpp"
#include "plantstat.hpp"

class BioGame;

class Plant : public StaticThing { // sizeof=49
public:
    Plant * operator=(Plant * plnt1);
    //Plant(Plant *arg1); -- generate default copy constructor
    //Plant(); -- generate default no-args constructor
    BBOOL operator ==(Plant * plnt1);
    SLONG WriteBuffer(Plant **plnt1, SLONG arg2, SLONG arg3, BioGame &game);
    SLONG ReadBuffer(Plant **plnt1, SLONG arg2, SLONG arg3, BioGame &game);
    void UpdateAll();
    Plant * Create(UBYTE arg1, UBYTE arg2, XY arg3);
    void InitArray();
    void Draw(SWORD arg1, SWORD arg2);
    void ChopDown();
    void Die();
    PSpecies const & Species();
    void Free();
    void ClearBeingEaten();
    BBOOL IsBeingEaten();
    BBOOL IsFallen();
    BBOOL IsDead();
    void SetBeingEaten();
    UBYTE Update();
    BBOOL Damage(SWORD arg1, ::Thing *tng2);
    void Resync();
    void Write(SLONG &arg1);
    void Read(SLONG &arg1);
    //void (**__vfptr)();
    PlantSpecies species; // offset=43
    SWORD health; // offset=44
    UBYTE flags; // offset=46
    UBYTE age; // offset=47
    UBYTE wood; // offset=48
};

#endif // BIO_PLANT_HPP_
/******************************************************************************/

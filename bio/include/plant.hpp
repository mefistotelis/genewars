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
    PlantSpecies species; // offset=43
    SWORD health; // offset=44
    UBYTE flags; // offset=46
    UBYTE age; // offset=47
    UBYTE wood; // offset=48
//internal:
    //void (**__vfptr)(); // offset=35
public:
    void Read(SLONG &arg1);
    void Write(SLONG &arg1);
    void Resync();
    BBOOL Damage(SWORD arg1, Thing *tng2);
    UBYTE Update();
    void SetBeingEaten();
    BBOOL IsDead();
    BBOOL IsFallen();
    BBOOL IsBeingEaten();
    void ClearBeingEaten();
    void Free();
    PSpecies const & Species();
    void Die();
    void ChopDown();
    void Draw(SWORD arg1, SWORD arg2);
    void InitArray();
    Plant * Create(UBYTE arg1, UBYTE arg2, XY arg3);
    void UpdateAll();
    SLONG ReadBuffer(Plant **arg1, SLONG arg2, SLONG arg3, BioGame &game);
    SLONG WriteBuffer(Plant **arg1, SLONG arg2, SLONG arg3, BioGame &game);
    BBOOL operator ==(Plant *arg1);
    //Plant(); -- generate default no-args constructor
    //Plant(class Plant &arg1); -- generate default copy constructor
    Plant & operator =(Plant &arg1);
};

#endif // BIO_PLANT_HPP_
/******************************************************************************/

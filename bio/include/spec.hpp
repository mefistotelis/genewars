/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file spec.hpp
 *     Header file for spec.cpp.
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
#ifndef BIO_SPEC_HPP_
#define BIO_SPEC_HPP_

#include "bftypes.h"
#include "playerstat.hpp"

enum SpecialistClass { // type=int8_t
    CLASS_ARCHITECT = 0,
    CLASS_FARMER,
    CLASS_SCIENTIST,
    CLASS_SHEPHERD,
    MAX_SPEC_CLASS,
};

class Specialist { // sizeof=36
public:
    char name[20]; // offset=0
    UBYTE sex; // offset=20
    PlayerRace race; // offset=21
    SpecialistClass specClass; // offset=22
    SBYTE ability; // offset=23
    SBYTE resolve; // offset=24
    SBYTE strength; // offset=25
    SBYTE currentStrength; // offset=26
    SBYTE currentResolve; // offset=27
    ULONG landings; // offset=28
    ULONG flags; // offset=32
public:
    BBOOL Valid();
    void Invalidate();
    char * Name(char *arg1);
    BBOOL IsOnTeam();
    void SetOnTeam();
    void ClearOnTeam();
    BBOOL IsPlanetside();
    void SetPlanetside();
    void ClearPlanetside();
};

#endif // BIO_SPEC_HPP_
/******************************************************************************/

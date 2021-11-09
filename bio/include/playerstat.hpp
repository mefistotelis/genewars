/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file playerstat.hpp
 *     Player related defines and structures.
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
#ifndef BIO_PLAYERSTAT_HPP_
#define BIO_PLAYERSTAT_HPP_

#include "bftypes.h"

enum PlayerRace { // type=int8_t
    RACE_HUMAN = 0,
    RACE_SAURIAN,
    RACE_BOHEMIAN,
    RACE_SCHNOZZOID,
    MAX_PLAYER_RACE,
};

#endif // BIO_PLAYERSTAT_HPP_
/******************************************************************************/

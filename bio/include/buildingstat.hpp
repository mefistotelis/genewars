/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file buildingstat.hpp
 *     Header file for buildingstat.cpp.
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
#ifndef BIO_BUILDINGSTAT_HPP_
#define BIO_BUILDINGSTAT_HPP_

enum BuildingType { // type=int8_t
    BCID_GENELAB = 0,
    BCID_TURRET,
    BCID_SAWMILL,
    BCID_POWERSTATION,
    BCID_FARM,
    BCID_LAUNCHER, // 5
    BCID_SOLAR,
    BCID_OBSERVATORY,
    BCID_WIND,
    BCID_NUCLEAR,
    BCID_OPERATIONS, // 10
    BCID_MINE,
    BCID_SHIELD,
    BCID_GOOPVAT,
    MAX_BUILDINGTYPES,
};


#endif // BIO_BUILDINGSTAT_HPP_
/******************************************************************************/

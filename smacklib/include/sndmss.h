/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file sndmss.h
 *     Header file for sndmss.
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
#ifndef SNDMSS_H_
#define SNDMSS_H_

#ifdef __cplusplus
extern "C" {
#endif

extern int junkmsstimer;

int SMACKSOUNDUSEMSS();
int SMACKSOUNDMSSLITEINIT();
int SMACKSOUNDMSSLITEDONE();

#ifdef __cplusplus
};
#endif

#endif // SNDMSS_H_
/******************************************************************************/

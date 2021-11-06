/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file unsmack.h
 *     Header file for unsmack.
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
#ifndef UNSMACK_H_
#define UNSMACK_H_

#ifdef __cplusplus
extern "C" {
#endif

int _SmackGetRect();
int _Unsmack();
int _SmackDoPCM();
int _SmackRemapTables();
int _SmackDoTables();
int _SmackGetSizeTables();
int _SmackGetSizeDeltas();

#ifdef __cplusplus
};
#endif

#endif // UNSMACK_H_
/******************************************************************************/

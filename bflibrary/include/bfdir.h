/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file bfdir.h
 *     Header file for sdir.cpp.
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
#ifndef BFLIBRARY_SDIR_H_
#define BFLIBRARY_SDIR_H_

#include "bftypes.h"

#ifdef __cplusplus
extern "C" {
#endif

int LbDirectoryChange();
int LbDirectoryCreate();
int LbDirectoryCurrent();
int LbDirectoryExists();
int LbDirectoryRemove();

#ifdef __cplusplus
};
#endif

#endif // BFLIBRARY_SDIR_H_
/******************************************************************************/

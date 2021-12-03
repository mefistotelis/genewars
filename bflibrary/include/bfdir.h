/******************************************************************************/
// Bullfrog Engine Emulation Library - for use to remake classic games like
// Syndicate Wars, Magic Carpet, Genewars or Dungeon Keeper.
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
#ifndef BFLIBRARY_BFDIR_H_
#define BFLIBRARY_BFDIR_H_

#include "bftypes.h"

#ifdef __cplusplus
extern "C" {
#endif

TbResult LbDirectoryChange(const char *path);
TbResult LbDirectoryCreate(const char *path);
TbResult LbDirectoryCurrent(char *buf, unsigned long buflen);
TbBool LbDirectoryExists(const char *dirname);
TbResult LbDirectoryRemove(const char *path);

#ifdef __cplusplus
};
#endif

#endif // BFLIBRARY_BFDIR_H_
/******************************************************************************/

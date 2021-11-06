/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file dllload.h
 *     Header file for dllload.c.
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
#ifndef BFSOUNDLIB_DLLLOAD_H_
#define BFSOUNDLIB_DLLLOAD_H_

#ifdef __cplusplus
extern "C" {
#endif

int _MEM_use_malloc();
int _MEM_use_free();
int _MEM_alloc_lock();
int _MEM_free_lock();
int _MEM_alloc_DOS();
int _MEM_free_DOS();
int _VMM_lock_range();
int _VMM_unlock_range();
int _VMM_lock();
int _VMM_unlock();
int _DLL_size();
int _DLL_load();
int _FILE_error();
int _FILE_size();
int _FILE_read();
int _FILE_write();
int _FILE_append();

extern int MEM_alloc;
extern int MEM_free;

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_DLLLOAD_H_
/******************************************************************************/

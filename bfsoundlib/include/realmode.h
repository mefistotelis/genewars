/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file realmode.hpp
 *     Header file for realmode.cpp.
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
#ifndef BFSOUNDLIB_REALMODE_H_
#define BFSOUNDLIB_REALMODE_H_

#ifdef __cplusplus
extern "C" {
#endif

unsigned short EAL_init_realmode_mem();
unsigned short EAL_alloc_dos_mem( unsigned short );
unsigned short EAL_free_dos_mem( unsigned short );

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_REALMODE_H_
/******************************************************************************/

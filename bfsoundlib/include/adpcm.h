/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file adpcm.hpp
 *     Header file for adpcm.cpp.
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
#ifndef BFSOUNDLIB_ADPCM_H_
#define BFSOUNDLIB_ADPCM_H_

#ifdef __cplusplus
extern "C" {
#endif

int open_adpcm_file();
int close_adpcm_file();
int get_adpcm_block();

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_ADPCM_H_
/******************************************************************************/

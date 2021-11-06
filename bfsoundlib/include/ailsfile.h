/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ailsfile.h
 *     Header file for ailsfile.c.
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
#ifndef BFSOUNDLIB_AILSFILE_H_
#define BFSOUNDLIB_AILSFILE_H_

#ifdef __cplusplus
extern "C" {
#endif

int AILSFILE_start();
int _AIL_API_allocate_file_sample();
int _AIL_API_set_sample_file();
int _AIL_API_register_EOF_callback();
int AILSFILE_end();

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_AILSFILE_H_
/******************************************************************************/

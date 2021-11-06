/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file dossmk.h
 *     Header file for dossmk.
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
#ifndef DOSSMK_H_
#define DOSSMK_H_

#ifdef __cplusplus
extern "C" {
#endif

int play_smk();
int RADMALLOC();
int RADFREE();
extern int smack_malloc;
extern int smack_free;
extern int smack_draw_callback;

#ifdef __cplusplus
};
#endif

#endif // DOSSMK_H_
/******************************************************************************/

/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file rfile.h
 *     Header file for rfile.
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
#ifndef RFILE_H_
#define RFILE_H_

#ifdef __cplusplus
extern "C" {
#endif

int _radopen();
int _radcreate();
int _radread();
int _radwrite();
int _radseekbegin();
int _radseekcur();
int _radseekend();
int _radclose();
int _IsRemote();
int _radgetfiletime();
int _radsetfiletime();
int _raderase();

#ifdef __cplusplus
};
#endif

#endif // RFILE_H_
/******************************************************************************/

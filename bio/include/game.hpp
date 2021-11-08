/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file game.hpp
 *     Header file for game.cpp.
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
#ifndef BIO_GAME_HPP_
#define BIO_GAME_HPP_

extern short unsigned persecond;
extern char unsigned fullUpdate;

void game();
void PlayIntro();
void PlaySmacker( char *arg1, unsigned char arg2, unsigned char arg3);

#endif // BIO_GAME_HPP_
/******************************************************************************/

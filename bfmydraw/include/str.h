/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file STR.hpp
 *     Header file for STR.cpp.
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
#ifndef BFMYDRAW_STR_HPP_
#define BFMYDRAW_STR_HPP_

#ifdef __cplusplus
extern "C" {
#endif

char * strins( char *, char const * );
void strdel( char *, short );
char * strfchr( char *, char );
int stcgfe( char *, char const * );
void strmfe( char *, char const *, char const * );
void strmfn( char *, char const *, char const * );

#ifdef __cplusplus
};
#endif

#endif // BFMYDRAW_STR_HPP_
/******************************************************************************/

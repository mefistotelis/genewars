/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file editor.hpp
 *     Header file for editor.cpp.
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
#ifndef BIO_EDITOR_HPP_
#define BIO_EDITOR_HPP_

#include "myspr.h"


enum ConfigLanguage { // type=int8_t
    CFL_ENGLISH = 0,
    CFL_FRENCH,
    CFL_GERMAN,
    CFL_SPANISH,
    CFL_SWEDISH,
    CFL_ITALIAN, // 5
};

class ScreenLockHandler { // sizeof=2
public:
    SLONG UnlockForSwap();
    SLONG LockForSwap();
    SLONG NestUnlock();
    SLONG NestLock();
    BBOOL screenLocked;
    SBYTE nestScreenLockLevel;
};

extern char * victCondTypes[];
extern char * specFuncTxt[][7];

#endif // BIO_EDITOR_HPP_
/******************************************************************************/

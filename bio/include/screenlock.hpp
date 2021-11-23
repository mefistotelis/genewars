/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file screenlock.hpp
 *     Header file for screenlock.cpp.
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
#ifndef BIO_SCREENLOCK_HPP_
#define BIO_SCREENLOCK_HPP_

#include "bftypes.h"

class ScreenLockHandler { // sizeof=2
public:
    SBYTE nestScreenLockLevel;
    BBOOL screenLocked; // offset=1
public:
    SLONG NestLock();
    SLONG NestUnlock();
    SLONG LockForSwap();
    SLONG UnlockForSwap();
};

#endif // BIO_SCREENLOCK_HPP_
/******************************************************************************/

/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file bflog.h
 *     Header file for glog.cpp, gerrorlg.cpp.
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
#ifndef BFLIBRARY_GLOG_H_
#define BFLIBRARY_GLOG_H_

#include "bftypes.h"

#ifdef __cplusplus
extern "C" {
#endif

enum Header { // type=int8_t
    NONE = 0,
    CREATE,
    APPEND,
};

typedef enum Header Header;

struct TbLog { // sizeof=194
    CBYTE Filename[144]; // offset=0
    CBYTE Prefix[32]; // offset=145
    ULONG Flags; // offset=178
    BOOL Initialised; // offset=182
    BOOL Created; // offset=186
    BOOL Suspended; // offset=190
};

typedef struct TbLog TbLog;

struct TbDate { // sizeof=5
    UBYTE Day; // offset=0
    UBYTE Month; // offset=1
    UWORD Year; // offset=2
    UBYTE DayOfWeek; // offset=4
};

typedef struct TbDate TbDate;

struct TbTime { // sizeof=4
    UBYTE Hour; // offset=0
    UBYTE Minute; // offset=1
    UBYTE Second; // offset=2
    UBYTE HSecond; // offset=3
};

typedef struct TbTime TbTime;

int LbLogSetup();
int LbLog();
int LbLogClose();
int LbLogSetPrefix();
int LbLogDelete();
int LbLogSuspend();
int LbLogRestart();

int LbErrorLogSetup();
int LbErrorLogReset();
int LbErrorLog();

#ifdef __cplusplus
};
#endif

#endif // BFLIBRARY_GLOG_H_
/******************************************************************************/

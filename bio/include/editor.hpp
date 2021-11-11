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

typedef enum ConfigLanguage ConfigLanguage;

typedef enum ConfigInstall ConfigInstall;

typedef class Player Player;


typedef struct MyGadget MyGadget;

class HelpDraw { // sizeof=26
    void GenericHelpDraw(MyGadget *arg1, char *arg2);
    void Draw(MyGadget *arg1, char *arg2);
    void SetColors(UBYTE arg1, UBYTE arg2, UBYTE arg3, UBYTE arg4);
    void DislodgeAndReset();
    void Dislodge();
    SWORD hx; // offset=0
    SWORD hy; // offset=2
    SWORD hWidth; // offset=4
    SLONG turn; // offset=6
    SLONG length; // offset=10
    ULONG id; // offset=14
    UBYTE pen; // offset=18
    UBYTE outline; // offset=19
    UBYTE fill; // offset=20
    UBYTE boxOutline; // offset=21
    MyGadget *gad; // offset=22
};



class ScreenLockHandler { // sizeof=2
    SLONG UnlockForSwap();
    SLONG LockForSwap();
    SLONG NestUnlock();
    SLONG NestLock();
    BBOOL screenLocked;
    SBYTE nestScreenLockLevel;
};



class Trigger { // sizeof=7
    class Trigger * Trigger(class Trigger *arg1);
    void Invalidate();
    BBOOL Valid();
    BBOOL Update(UBYTE arg1);
    class Trigger * Trigger();
    UBYTE type; // offset=0
    UBYTE turn; // offset=1
    UBYTE thisPlayer; // offset=2
    UBYTE otherPlayer; // offset=3
    UWORD amount; // offset=4
    UBYTE species; // offset=5
    BBOOL doneThis; // offset=6
};

typedef class Trigger Trigger;


struct __iobuf { // sizeof=26
    uint8_t *_ptr; // offset=0
    int _cnt; // offset=4
    uint8_t *_base; // offset=8
    unsigned int _flag; // offset=12
    int _handle; // offset=16
    unsigned int _bufsize; // offset=20
    uint8_t _ungotten; // offset=24
    uint8_t _tmpfchar; // offset=25
};

typedef struct __iobuf FILE;

extern char * victCondTypes[];
extern char * specFuncTxt[][7];

#endif // BIO_EDITOR_HPP_
/******************************************************************************/

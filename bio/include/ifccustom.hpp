/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ifccustom.hpp
 *     Header file for ifccustom.cpp.
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
#ifndef BIO_IFCCUSTOM_HPP_
#define BIO_IFCCUSTOM_HPP_

#include "bftypes.h"
#include "myspr.h"
#include "netserv.h"
#include "iface.hpp"
#include "level.hpp"

class MyGadget;
class SessionInfo;

class IFCCustom : public IFCBase { // sizeof=192
public:
    //IFCCustom(class IFCCustom *arg1);
    void ScrollChatString(UBYTE arg1);
    void DrawChatStrings();
    void DrawAvailableSessions(SessionInfo *arg1);
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    IFCCustom(MyGadget *arg1);
    //void (**__vfptr)();
    //unsigned int *__vbptr;
    MyGadget *gad; // offset=4
    TbNetworkSessionList session_list; // offset=7
    MyAnimBank *anb; // offset=8
    MySprite *spr; // offset=12
    TbSprite *sprites; // offset=16
    UBYTE level; // offset=20
    UBYTE victory; // offset=21
    UBYTE race; // offset=22
    UBYTE etherealStrictness; // offset=23
    UBYTE networkActive; // offset=24
    UBYTE networkSlot; // offset=25
    LevelHeader currentLevel; // offset=26
    UBYTE session_index; // offset=171
    BBOOL canEnterGame; // offset=172
    TbNetworkService service; // offset=213
    char chatString[3][63]; // offset=214
    TbNetworkSession session; // offset=223
    SessionInfo t_session[9]; // offset=225
};

#endif // BIO_IFCCUSTOM_HPP_
/******************************************************************************/

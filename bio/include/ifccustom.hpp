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

enum { // type=int8_t
    CUSTOM_NETWORK = 0,
    CUSTOM_SLOT_1,
    CUSTOM_SLOT_2,
    CUSTOM_SLOT_3,
    CUSTOM_SLOT_4,
    CUSTOM_SLOT_5, // 5
    CUSTOM_SLOT_6,
    CUSTOM_SLOT_7,
    CUSTOM_SLOT_8,
    CUSTOM_SLOT_9,
    CUSTOM_PREV_LEVEL, // 10
    CUSTOM_NEXT_LEVEL,
    CUSTOM_PREV_VICTORY,
    CUSTOM_NEXT_VICTORY,
    CUSTOM_ETHEREAL_1,
    CUSTOM_ETHEREAL_2, // 15
    CUSTOM_ETHEREAL_3,
    CUSTOM_ETHEREAL_4,
    CUSTOM_RACE_1,
    CUSTOM_RACE_2,
    CUSTOM_RACE_3, // 20
    CUSTOM_RACE_4,
    CUSTOM_GO,
    CUSTOM_CREATE,
    CUSTOM_JOIN,
    CUSTOM_LEAVE, // 25
    CUSTOM_CANCEL,
};

enum { // type=int8_t
    CUSTOM_VICTORY_TOTHEDEATH = 0,
    CUSTOM_VICTORY_RATING,
    CUSTOM_VICTORY_GOOP,
    CUSTOM_ENDVICTORY,
};

class IFCCustom : public IFCBase { // sizeof=3520
    MyGadget *gad; // offset=4
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
    char chatString[4][64]; // offset=725
    TbNetworkService service; // offset=981
    TbNetworkSession session; // offset=991
    TbNetworkSessionList session_list; // offset=1031
    SessionInfo t_session[10]; // offset=1249
    UBYTE session_index; // offset=3499
    BBOOL canEnterGame; // offset=3500
//internal:
    //unsigned int *__vbptr;
    //void (**__vfptr)(); // offset=3501
public:
    IFCCustom(MyGadget *arg1);
    void PlugIn();
    void PullOut();
    void Draw();
    void Update();
    void DrawAvailableSessions(SessionInfo *arg1);
    void DrawChatStrings();
    void ScrollChatString(UBYTE arg1);
    //IFCCustom(IFCCustom &arg1); -- generate default copy constructor
};

#endif // BIO_IFCCUSTOM_HPP_
/******************************************************************************/

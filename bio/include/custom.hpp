/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file custom.hpp
 *     Header file for custom.cpp.
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
#ifndef BIO_CUSTOM_HPP_
#define BIO_CUSTOM_HPP_

typedef class Player Player;



class LevelHeader { // sizeof=187
    void TranslatePlanet();
    BBOOL LoadHeader(UBYTE arg1, UBYTE arg2);
    BBOOL SaveHeader(UBYTE arg1, UBYTE arg2);
    UBYTE compPlayers[2]; // offset=0
    UBYTE valid; // offset=3
    UBYTE date[11]; // offset=4
    UBYTE time[11]; // offset=16
    ULONG version; // offset=28
    Planet planet; // offset=32
    ULONG roomForMoreStuff[6]; // offset=159
};

typedef class LevelHeader LevelHeader;

typedef struct SessionInfo SessionInfo;

class IFCCustom : IFCBase { // sizeof=192
    class IFCCustom * IFCCustom(class IFCCustom *arg1);
    void ScrollChatString(UBYTE arg1);
    void DrawChatStrings();
    void DrawAvailableSessions(SessionInfo *arg1);
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    class IFCCustom * IFCCustom(MyGadget *arg1);
    void (**__vfptr)();
    unsigned int *__vbptr;
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

void IFCBase::SetupPacket( Packet * );
void IFCCustom::PlugIn();
void IFCCustom::PullOut();
void IFCCustom::Update();
void IFCCustom::Draw();
void IFCCustom::DrawAvailableSessions( SessionInfo * );
void IFCCustom::DrawChatStrings();
void IFCCustom::ScrollChatString( char unsigned );

#endif // BIO_CUSTOM_HPP_
/******************************************************************************/

/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file options.hpp
 *     Header file for options.cpp.
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
#ifndef BIO_OPTIONS_HPP_
#define BIO_OPTIONS_HPP_


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


class TextEntry { // sizeof=73
    class TextEntry * TextEntry(class TextEntry *arg1);
    BBOOL ValidChar(UBYTE arg1);
    class TextEntry * TextEntry();
    BBOOL PressedEscape();
    BBOOL PressedReturn();
    BBOOL IsEnteringText();
    BBOOL IsActive();
    UBYTE EnterText();
    void SetupText(CBYTE *arg1, UBYTE arg2, UBYTE arg3);
    CBYTE oldText[64];
    BBOOL alNum;
    TextEntryStatus status;
    UBYTE maxlen;
    UBYTE ucase;
    CBYTE *text;
};

class IFCOptions : IFCBase { // sizeof=59
    class IFCOptions * IFCOptions(class IFCOptions *arg1);
    void FindWhichSlotsAreUsed();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    class IFCOptions * IFCOptions(MyGadget *arg1);
    void (**__vfptr)();
    unsigned int *__vbptr;
    BBOOL savePausedState;
    SBYTE saveTextEntrySlot;
    MyMinSprite mMs;
    char slotNames[7][31];
    BBOOL slotUsed[7];
    TbSprite *sprites;
    MySprite *spr;
    MyGadget *gad;
    SBYTE selectedSlot; // offset=4
    MyAnimBank *anb; // offset=5
    IFCBase *previousIFC; // offset=9
};

char unsigned SoundManager::IsCDPlaying();
char * Config::InsertInstallDir( char * );
char unsigned Config::IsCurrentDriveCDROM();
void IFCOptions::PlugIn();
void IFCOptions::PullOut();
void IFCOptions::Draw();
void IFCOptions::Update();
void IFCOptions::FindWhichSlotsAreUsed();

#endif // BIO_OPTIONS_HPP_
/******************************************************************************/

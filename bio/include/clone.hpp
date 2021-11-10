/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file clone.hpp
 *     Header file for clone.cpp.
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
#ifndef BIO_CLONE_HPP_
#define BIO_CLONE_HPP_

class ClonePad : MainInterfacePad { // sizeof=175
    class ClonePad * ClonePad(class ClonePad *arg1);
    void RemoveSpecialist(UBYTE arg1);
    void AddSpecialist(UBYTE arg1, UBYTE arg2);
    SBYTE FindBestSpecialist(UBYTE arg1, UBYTE arg2);
    void TeamHelp(MyGadget *arg1);
    void CrewHelp(MyGadget *arg1);
    SBYTE FindTeamNum();
    SBYTE FindCrewType(SBYTE *arg1);
    void DrawAnim();
    void DrawCrew();
    void DrawTeam();
    void Close();
    void Draw(SBYTE arg1);
    void DrawMainPanelEdge();
    BBOOL Update(SWORD arg1);
    void Init(Thing *arg1);
    class ClonePad * ClonePad();
    void (**__vfptr)();
    unsigned int *__vbptr;
    BBOOL launchButtonActive;
    BBOOL closeButtonActive;
    MyMinSprite mMs;
    Building *clone; // offset=4
    MyAnimBank *anb; // offset=8
    MySprite *mSpr; // offset=12
    TbSprite *spr; // offset=16
    SBYTE pointerOverSpec; // offset=20
    SBYTE specType; // offset=21
    MyAnimBank *specAnb[3][3]; // offset=22
    MySprite *specSpr[3][3]; // offset=86
};

#endif // BIO_CLONE_HPP_
/******************************************************************************/

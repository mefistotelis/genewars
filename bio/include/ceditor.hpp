/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ceditor.hpp
 *     Header file for ceditor.cpp.
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
#ifndef BIO_CEDITOR_HPP_
#define BIO_CEDITOR_HPP_

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

class Trigger { // sizeof=7
    //Trigger(Trigger *arg1); -- generate default copy constructor
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

class Personality { // sizeof=142
    class Personality * Personality(class Personality *arg1);
    class Personality * Personality();
    char name[19]; // offset=0
    UBYTE advancedOptions; // offset=20
    UBYTE pwrWanted; // offset=21
    UBYTE idealNoBases; // offset=22
    SBYTE upgrade; // offset=23
    UBYTE aggressive; // offset=24
    UBYTE defensive; // offset=25
    ULONG freeSpace[1]; // offset=26
    UBYTE locationAwareness; // offset=34
    UBYTE distanceFromEnemyBases; // offset=35
    UBYTE distanceBetweenBases; // offset=36
    ULONG timeInBase; // offset=37
    UBYTE changingBase; // offset=41
    UWORD baseChangeThreshold; // offset=42
    UBYTE minResolve; // offset=44
    UBYTE criticalStrength; // offset=45
    UBYTE maxProbeSteps; // offset=46
    UBYTE buildStyle; // offset=47
    UBYTE favBuildingToAttack; // offset=48
    UBYTE favSpecToAttack; // offset=49
    UBYTE delayBetweenAttacks; // offset=50
    UBYTE padding; // offset=51
    UBYTE defence; // offset=52
    UBYTE criticalNumTrees; // offset=53
    SBYTE techLevel; // offset=54
    SBYTE preferredCreatures[4]; // offset=55
    SLONG minGoopForCreatures; // offset=60
    UWORD maxAgeForBaseScan; // offset=64
    SBYTE creaturePercentage; // offset=66
    UBYTE creatureRatios[2]; // offset=67
    UBYTE creaturePerception; // offset=70
    UBYTE newBaseScoreRange; // offset=71
    UBYTE newBaseLookPoints; // offset=72
    UBYTE attackVolume; // offset=73
    UBYTE wantedSpecTypes[3]; // offset=74
    UBYTE attackAfterTurn; // offset=78
    UBYTE creaturesPerGuardPoint; // offset=79
    UWORD delayBetweenCreatures; // offset=80
    UWORD maxCreatures; // offset=82
    SBYTE goForScore; // offset=84
    UBYTE delayBetweenBuildings; // offset=85
    Trigger triggers[7]; // offset=86
};

typedef class Personality Personality;

class IFCCompEditor : IFCBase { // sizeof=193
    class IFCCompEditor * IFCCompEditor(class IFCCompEditor *arg1);
    void PrintCompPlayersToFile();
    void UpdateColumnGadget(SWORD arg1, UBYTE *arg2, SLONG arg3, SLONG arg4);
    void UpdateColumnGadget(SWORD arg1, SBYTE *arg2, SLONG arg3, SLONG arg4);
    void UpdateColumnGadget(SWORD arg1, UWORD *arg2, SLONG arg3, SLONG arg4);
    void UpdateColumnGadget(SWORD arg1, SWORD *arg2, SLONG arg3, SLONG arg4);
    void UpdateColumnGadget(SWORD arg1, ULONG *arg2, ULONG arg3, ULONG arg4);
    void UpdateColumnGadget(SWORD arg1, SLONG *arg2, SLONG arg3, SLONG arg4);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, UBYTE arg4, SLONG arg5, SLONG arg6, UBYTE arg7, BBOOL arg8);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, SBYTE arg4, SLONG arg5, SLONG arg6, UBYTE arg7, BBOOL arg8);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, UWORD arg4, SLONG arg5, SLONG arg6, UBYTE arg7, BBOOL arg8);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, SWORD arg4, SLONG arg5, SLONG arg6, UBYTE arg7, BBOOL arg8);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, UBYTE arg7, BBOOL arg8);
    void DrawColumnGadget(SWORD arg1, SWORD arg2, ULONG arg3, SLONG arg4, SLONG arg5, SLONG arg6, UBYTE arg7, BBOOL arg8);
    void UpdateCreatureBar();
    void UpdateCreatureValues();
    void DrawCreatureBar();
    BBOOL Write();
    BBOOL Read();
    void Update();
    UBYTE WantedSpecialists();
    void Draw();
    void PullOut();
    void PlugIn();
    class IFCCompEditor * IFCCompEditor(MyGadget *arg1);
    void (**__vfptr)();
    unsigned int *__vbptr;
    IFCBase *saveIFC; // offset=4
    MyGadget *gad; // offset=8
    MyAnimBank *anb; // offset=12
    MySprite *spr; // offset=16
    TbSprite *sprites; // offset=20
    UBYTE playerNumber; // offset=24
    Personality cPersonality; // offset=25
    UWORD leftNotch; // offset=167
    UWORD rightNotch; // offset=169
    UWORD testing; // offset=171
    UBYTE triggerNo; // offset=173
};


#endif // BIO_CEDITOR_HPP_
/******************************************************************************/

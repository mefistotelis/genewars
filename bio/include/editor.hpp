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

typedef enum VictoryCondition VictoryCondition;

enum TextEntryStatus { // type=int8_t
    TXT_NOT_ACTIVE = 0,
    TXT_ENTERING,
    TXT_RETURN,
    TXT_ESCAPE,
};

typedef enum TextEntryStatus TextEntryStatus;

enum ConfigLanguage { // type=int8_t
    CFL_ENGLISH = 0,
    CFL_FRENCH,
    CFL_GERMAN,
    CFL_SPANISH,
    CFL_SWEDISH,
    CFL_ITALIAN, // 5
};

typedef enum ConfigLanguage ConfigLanguage;

enum ConfigInstall { // type=int8_t
    CFI_INTRO = 0,
    CFI_ANIMS,
    CFI_SOUNDS,
    CFI_LEVELS,
    CFI_DATA,
    MAX_CFI, // 5
};

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

class Config { // sizeof=184
    void CDToSegment(ConfigInstall arg1);
    BBOOL IsCurrentDriveInstallDrive();
    BBOOL IsCurrentDriveCDROM();
    void SetToInstallDrive();
    void SetToCDROM();
    char * InstalledFile(char *arg1);
    char * InsertInstallDir(char *arg1);
    BBOOL GetConfigs();
    char cdROMDir[31];
    BBOOL installedSegments[4];
    char installDir[127];
    unsigned int installDriveNum;
    unsigned int cdDriveNum;
    ConfigLanguage language; // offset=0
    SoundConfig sound; // offset=1
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

class IFCEditor : IFCBase { // sizeof=18
    class IFCEditor * IFCEditor(class IFCEditor *arg1);
    void GoPlanet();
    BBOOL IsCircular(UBYTE arg1);
    BBOOL IsMouseOnMap();
    void TranslateAllHeaders();
    void UpdateAllLevels();
    void PrintHeadersToFile();
    void UpdateLevel(LevelHeader *arg1);
    void UpdateHeader(LevelHeader *arg1);
    BBOOL LoadMap();
    BBOOL SaveMap();
    void LoadLevel();
    void SaveLevel();
    void SpecialistFuncHelp(MyGadget *arg1);
    void SpecialistTypeHelp(MyGadget *arg1);
    void VictoryHelp(MyGadget *arg1);
    int FindSpecFunctionNumber(BBOOL *arg1);
    SpecialistClass FindSpecialistClass(BBOOL *arg1);
    VictoryCondition FindVictoryCondition(BBOOL *arg1);
    int TotalNumberOfSpecs();
    void FindClosestStuff();
    void RemoveStuff();
    void ReadCompPlayer(UBYTE arg1, UBYTE arg2);
    void DrawKeyboardHelp();
    void DrawLimits();
    void DrawBuilding(XY arg1, UBYTE arg2, UBYTE arg3);
    void DrawStuff();
    void DrawDropSites();
    void Update();
    void Draw();
    void PullOut();
    void PlugIn();
    class IFCEditor * IFCEditor(MyGadget *arg1);
    void (**__vfptr)();
    unsigned int *__vbptr;
    MyGadget *gad; // offset=4
    MyAnimBank *anb; // offset=8
    MySprite *spr; // offset=12
    TbSprite *sprites; // offset=16
    char levelName[15]; // offset=20
    UBYTE levelNumber; // offset=36
    UBYTE closestStuff; // offset=37
    UBYTE mapType; // offset=38
    UBYTE compPlayers[2]; // offset=39
    UBYTE compValid; // offset=42
    FlatMap map; // offset=43
    CreatureSpecies currentSpecies; // offset=49
    UBYTE generated; // offset=50
    UBYTE currentlyDragging; // offset=51
    BBOOL draggedLastTurn; // offset=52
    BBOOL drawZoneInfo; // offset=53
    UBYTE editStuffMode; // offset=54
    BBOOL circularWarning; // offset=55
    SBYTE stuffBeingEdited; // offset=56
    UBYTE ePlayer; // offset=57
    UBYTE gPointType; // offset=58
    LevelHeader header; // offset=59
    Stuff newStuff; // offset=246
    UBYTE enteringName; // offset=254
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

char unsigned Stuff::IsEZone();
char unsigned Planet::__defarg();
char unsigned Planet::__defarg();
void HelpDraw::SetColors( char unsigned, char unsigned, char unsigned, char unsigned );
char unsigned FlatMap::__defarg();
char unsigned FlatMap::__defarg();
char unsigned FlatMap::__defarg();
void FlatMap::FreeMe();
void FlatMap::Draw( char unsigned );
void IFCBase::NewInterface( IFCBase & );
char unsigned BioGame::__defarg();
char unsigned BioGame::__defarg();
char signed BioGame::__defarg();
Player * BioGame::__defarg();
long ScreenLockHandler::NestLock();
long ScreenLockHandler::NestUnlock();
long ScreenLockHandler::UnlockForSwap();
long ScreenLockHandler::LockForSwap();
void Config::SetToCDROM();
void Config::SetToInstallDrive();
void Config::CDToSegment( ConfigInstall );
char unsigned TextEntry::IsActive();
char unsigned TextEntry::PressedReturn();
char unsigned TextEntry::PressedEscape();
void IFCEditor::PlugIn();
void IFCEditor::PullOut();
void IFCEditor::Update();
void IFCEditor::Draw();
void IFCEditor::DrawDropSites();
void IFCEditor::DrawLimits();
void IFCEditor::DrawKeyboardHelp();
void IFCEditor::ReadCompPlayer( char unsigned, char unsigned );
void IFCEditor::RemoveStuff();
void IFCEditor::FindClosestStuff();
void IFCEditor::DrawStuff();
void IFCEditor::DrawBuilding( XY, char unsigned, char unsigned );
char unsigned IFCEditor::IsMouseOnMap();
char unsigned IFCEditor::IsCircular( char unsigned );
int IFCEditor::TotalNumberOfSpecs();
VictoryCondition IFCEditor::FindVictoryCondition( char unsigned & );
SpecialistClass IFCEditor::FindSpecialistClass( char unsigned & );
int IFCEditor::FindSpecFunctionNumber( char unsigned & );
void IFCEditor::VictoryHelp( MyGadget * );
void IFCEditor::SpecialistTypeHelp( MyGadget * );
void IFCEditor::SpecialistFuncHelp( MyGadget * );
void IFCEditor::SaveLevel();
char unsigned IFCEditor::SaveMap();
char unsigned IFCEditor::LoadMap();
void IFCEditor::LoadLevel();
void IFCEditor::UpdateHeader( LevelHeader * );
void IFCEditor::GoPlanet();
void IFCEditor::UpdateLevel( LevelHeader * );
void IFCEditor::TranslateAllHeaders();
void IFCEditor::PrintHeadersToFile();
void IFCEditor::UpdateAllLevels();
char unsigned LevelHeader::SaveHeader( char unsigned, char unsigned );
extern char * victCondTypes[];
extern char * specFuncTxt[][7];
void LevelHeader::TranslatePlanet();
char unsigned LevelHeader::LoadHeader( char unsigned, char unsigned );
char unsigned TextEntry::EnterText();
void TextEntry::SetupText( char *, char unsigned, char unsigned );
near TextEntry::TextEntry();

#endif // BIO_EDITOR_HPP_
/******************************************************************************/

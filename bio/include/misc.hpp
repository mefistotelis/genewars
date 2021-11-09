/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file misc.hpp
 *     Header file for misc.cpp.
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
#ifndef BIO_MISC_HPP_
#define BIO_MISC_HPP_

enum TopoType { // type=int8_t
    TOPO_MOUNTAIN = 0,
    TOPO_CRATER,
};

typedef enum TopoType TopoType;

typedef class Player Player;

struct OriBlock { // sizeof=9
    UBYTE Count; // offset=0
    UBYTE Block[3]; // offset=1
    UBYTE Orient[3]; // offset=5
};

typedef struct OriBlock OriBlock;




class EventHelp { // sizeof=150
    BBOOL IsForceDisplay();
    void Log(EventHelpType arg1, BBOOL arg2);
    BBOOL eventLog[149]; // offset=0
};

typedef class EventHelp EventHelp;


class SoundConfig { // sizeof=10
    void Set();
    void Write(char *arg1);
    void Read(char *arg1);
    SLONG sfxVolume; // offset=0
    SLONG musicVolume; // offset=4
    BBOOL sfxOn; // offset=8
    BBOOL musicOn; // offset=9
};

typedef class SoundConfig SoundConfig;


class MapBucketThing { // sizeof=10
    SWORD next; // offset=0
    SWORD x; // offset=2
    SWORD yDev; // offset=4
    Thing *thing; // offset=6
};

typedef class MapBucketThing MapBucketThing;

class CreatureInfo { // sizeof=2
    class CreatureInfo * CreatureInfo(class CreatureInfo *arg1);
    void Invalidate();
    class CreatureInfo * CreatureInfo();
    uint8_t baseNo; // offset=0
    SBYTE guardPoint; // offset=1
    uint8_t space; // offset=2
    uint8_t movingToPoint; // offset=3
    uint8_t job; // offset=4
};

struct SinglePoint { // sizeof=7
    SWORD X; // offset=0
    SWORD Y; // offset=2
    SWORD Z; // offset=4
    UBYTE Flags; // offset=6
};

typedef struct SinglePoint SinglePoint;

class Recording { // sizeof=6
    void Decode();
    void Encode();
    XY mouse; // offset=0
    uint8_t keyDown; // offset=4
    UBYTE key; // offset=5
    uint8_t alt; // offset=6
    uint8_t ctrl; // offset=7
    uint8_t shift; // offset=8
    uint8_t mRight; // offset=9
    uint8_t mLeft; // offset=10
};

typedef class Recording Recording;

class Recorder { // sizeof=17
    void Playback();
    void Store();
    void ReadBuffer();
    void Flush();
    void Close();
    BBOOL Init(char *arg1, BBOOL arg2);
    Recording *records; // offset=0
    ULONG activeRecord; // offset=4
    TbFileHandle fileHandle; // offset=8
    BBOOL playback; // offset=12
    SLONG bufferSize; // offset=13
};

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

short FindShortDist( char unsigned, char unsigned, char unsigned );
long FindShortDistance( long, long, long );
void SetRefreshZones( long, long, long, long, char unsigned );
char unsigned ActiveRefreshZoneHit( long, long, TbSprite * );
char unsigned ActiveRefreshZoneHit( long, long, MyFrame * );
void SetFrameRefreshZones( long, long, MyFrame *, char unsigned );
void DrawLineHR( short, short, short, short, char unsigned );
char * ComposeAndLowerCaseString( char *, char *, char * );
char * MakeHelpActionString( char *, char unsigned, Thing * );
void MemDump( char unsigned *, long unsigned );
void global_x_rotate_points( Point *, Point *, long, long, long unsigned );
void global_y_rotate_points( Point *, Point *, long, long, long unsigned );
void global_z_rotate_points( Point *, Point *, long, long, long unsigned );
MyFrame * UpdateMyMinSprite2( MySprite *, MyMinSprite * );
void SetPointerAndHotpoint( TbSprite *, long unsigned, long unsigned );

#endif // BIO_MISC_HPP_
/******************************************************************************/

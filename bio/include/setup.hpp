/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file setup.hpp
 *     Header file for setup.cpp.
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
#ifndef BIO_SETUP_HPP_
#define BIO_SETUP_HPP_

struct AudioInitOptions { // sizeof=30
    CBYTE *IniPath; // offset=0
    CBYTE *SoundDriverPath; // offset=4
    CBYTE *SoundDataPath; // offset=8
    UWORD SoundType; // offset=12
    UWORD AbleFlags; // offset=14
    WORD SelectedWin95MidiDevice; // offset=16
    WORD SelectedWin95WaveDevice; // offset=18
    UBYTE MaxSamples; // offset=20
    UBYTE StereoOption; // offset=21
    UBYTE AutoScan; // offset=22
    UBYTE DisableDangerMusic; // offset=23
    UBYTE DisableLoadSounds; // offset=24
    UBYTE DisableLoadMusic; // offset=25
    UBYTE UseCurrentAwe32Soundfont; // offset=26
    UBYTE UseMultiMediaExtensions; // offset=27
    UBYTE InitStreamedSound; // offset=28
    UBYTE InitRedbookAudio; // offset=29
};

typedef struct AudioInitOptions AudioInitOptions;


typedef class Player Player;



void Creature::Init( ThingType, XY, char unsigned, short, long, Vector const & );
char unsigned Creature::IsDead();
char unsigned Creature::IsStasis();
char unsigned Creature::IsDoneMovingToTgt();
char unsigned Creature::IsStuck();
void Creature::Undiscover();
char unsigned Effect::IsDead();
char unsigned Event::IsStaticallyDrawn();
char unsigned Event::IsDead();
char unsigned Drone::IsDead();
short Drone::MaxMoveSpeed();
char unsigned Drone::ShapeFacing();
void Drone::StartAMove( XY );
void Drone::Discover();
char unsigned Ethereal::IsDead();
char unsigned Ethereal::IsFlying();
char unsigned Ethereal::IsVectorable();
short Ethereal::MaxMoveSpeed();
void Ethereal::StartAMove( XY );
void Ethereal::Discover();
char unsigned Effect::IsMovable();
char unsigned Effect::IsASplasher();
void start_game();
near Ethereal::Ethereal();
near Drone::Drone();
near Event::Event();
near Effect::Effect();
near Creature::Creature();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern void (near * const __vftbl[])();
extern char unsigned const __typesig[];
extern char unsigned const __typesig[];
extern char unsigned const __typesig[];
extern char unsigned const __typesig[];
extern char unsigned const __typesig[];
extern char unsigned const __typesig[];
extern char unsigned const __typesig[];
extern char unsigned const __typesig[];
void setup_game();
void reset_game();
void setup_map();
void setup_strings( char *, char * *, long );
near BioGame::BioGame();
extern char unsigned const __typesig[];

#endif // BIO_SETUP_HPP_
/******************************************************************************/

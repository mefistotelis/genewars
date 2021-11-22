/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file iface.hpp
 *     Header file for iface.cpp.
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
#ifndef BIO_IFACE_HPP_
#define BIO_IFACE_HPP_

#include "bftypes.h"

class Packet;

enum IFCPaletteSetMode { // type=int8_t
    IFCP_NOAUTOSET = 0,
    IFCP_INSTANT,
    IFCP_FADE,
};

class IFCBase { // sizeof=11
    IFCPaletteSetMode paletteSetMode; // offset=0
    BBOOL paletteSet; // offset=1
    UBYTE *palette; // offset=2
    uint8_t canPause:1; // offset=6 bit=0
public:
    static IFCBase *plugIn;
    static IFCBase *pullOut;
    static BBOOL fullCopyToVRAM;
protected:
    static SWORD gadID;
private:
    static Packet *packet;
//internal:
    //void (**__vfptr)(); // offset=7
public:
    void PlugIn();
    void PullOut();
    void Update();
    void Draw();
    void SetPacket(UBYTE arg1);
    void SetPacket(UBYTE arg1, SWORD arg2);
    void SetPacket(UBYTE arg1, SWORD arg2, SWORD arg3);
    void SetPacket(UBYTE arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    void SetPacket(UBYTE arg1, SWORD arg2, SWORD arg3, SWORD arg4, SWORD arg5);
    void SetPacket(UBYTE arg1, SWORD arg2, SWORD arg3, SWORD arg4, SWORD arg5, SWORD arg6);
    void SetPacketDataBlast(void *arg1);
    UBYTE PacketAction();
    Packet * GetPacket();
    void SetupPacket(Packet *arg1);
    void NewInterface(IFCBase &arg1);
    BBOOL IsCurrent();
    void SetupColorLookups();
    void ClearMousePointer();
    //IFCBase(); -- generate default no-args constructor
    //IFCBase(IFCBase &arg1); -- generate default copy constructor
};

#endif // BIO_IFACE_HPP_
/******************************************************************************/

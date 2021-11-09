/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file packets.hpp
 *     Header file for packets.cpp.
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
#ifndef BIO_PACKETS_HPP_
#define BIO_PACKETS_HPP_

#include "bftypes.h"
#include "paletsel.hpp"

class Packet { // sizeof=19
public:
    void SetPacketDataBlast(void *arg1);
    void SetPacket(UBYTE arg1, SWORD arg2, SWORD arg3, SWORD arg4, SWORD arg5, SWORD arg6);
    void SetPacket(UBYTE arg1, SWORD arg2, SWORD arg3, SWORD arg4, SWORD arg5);
    void SetPacket(UBYTE arg1, SWORD arg2, SWORD arg3, SWORD arg4);
    void SetPacket(UBYTE arg1, SWORD arg2, SWORD arg3);
    void SetPacket(UBYTE arg1, SWORD arg2);
    void SetPacket(UBYTE arg1);
    void ExchangeDataBlast(void *arg1, ULONG arg2, UBYTE arg3, uint8_t arg4, PaletteSelectorMode arg5); // last 2 args uncertain
    void *dataBlast;
    SWORD X; // offset=0
    SWORD Y; // offset=2
    SWORD Z; // offset=4
    SWORD A; // offset=6
    SWORD B; // offset=8
    UBYTE Action; // offset=10
    UWORD seed; // offset=11
    ULONG turn; // offset=13
    UWORD rndCount; // offset=17
};

void process_packets();

#endif // BIO_PACKETS_HPP_
/******************************************************************************/

/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file record.hpp
 *     Header file for record.cpp.
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
#ifndef BIO_RECORD_HPP_
#define BIO_RECORD_HPP_

#include "bftypes.h"
#include "bffile.h"
#include "xy.hpp"

class Recording { // sizeof=6
    XY mouse; // offset=0
    uint8_t mLeft:1; // offset=4 bit=0
    uint8_t mRight:1; // offset=4 bit=1
    uint8_t shift:1; // offset=4 bit=2
    uint8_t ctrl:1; // offset=4 bit=3
    uint8_t alt:1; // offset=4 bit=4
    uint8_t keyDown:1; // offset=4 bit=5
    UBYTE key; // offset=5
public:
    void Encode();
    void Decode();
};

class Recorder { // sizeof=17
    Recording *records; // offset=0
    ULONG activeRecord; // offset=4
    TbFileHandle fileHandle; // offset=8
    BBOOL playback; // offset=12
    SLONG bufferSize; // offset=13
public:
    BBOOL Init(char *arg1, BBOOL arg2);
    void Close();
    void Flush();
    void ReadBuffer();
    void Store();
    void Playback();
};

#endif // BIO_RECORD_HPP_
/******************************************************************************/

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

#endif // BIO_RECORD_HPP_
/******************************************************************************/

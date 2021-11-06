/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file bffile.h
 *     Header file for gfile.cpp, sfile.cpp.
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
#ifndef BFLIBRARY_GFILE_H_
#define BFLIBRARY_GFILE_H_

#include "bftypes.h"
#include "bftime.h"

#ifdef __cplusplus
extern "C" {
#endif

enum TbFileMode { // type=int8_t
    Lb_FILE_MODE_NEW = 0,
    Lb_FILE_MODE_OLD,
    Lb_FILE_MODE_READ_ONLY,
};

typedef enum TbFileMode TbFileMode;

enum TbFileSeekMode { // type=int8_t
    Lb_FILE_SEEK_BEGINNING = 0,
    Lb_FILE_SEEK_CURRENT,
    Lb_FILE_SEEK_END,
};

typedef enum TbFileSeekMode TbFileSeekMode;

typedef int32_t TbFileHandle;

struct find_t { // sizeof=43
    char reserved[20]; // offset=0
    char attrib; // offset=21
    uint16_t wr_time; // offset=22
    uint16_t wr_date; // offset=24
    uint32_t size; // offset=26
    char name[12]; // offset=30
};

typedef struct find_t TbFILE_FIND;

struct TbFileFind { // sizeof=227
    CBYTE Filename[143]; // offset=0
    CBYTE AlternateFilename[13]; // offset=144
    ULONG Attributes; // offset=158
    ULONG Length; // offset=162
    TbDate CreationDate; // offset=166
    TbTime CreationTime; // offset=171
    TbDate LastWriteDate; // offset=175
    TbTime LastWriteTime; // offset=180
    TbFILE_FIND Reserved; // offset=184
};

typedef struct TbFileFind TbFileFind;

int LbFileExists();
int LbFilePosition();
int LbFileOpen();
int LbFileClose();
int LbFileSeek();
int LbFileRead();
int LbFileWrite();
int LbFileLength();
int LbFileFindFirst();
int LbFileFindNext();
int LbFileFindEnd();
int LbFileRename();
int LbFileDelete();

int LbFileLengthRnc();
int LbFileLoadAt();
int LbFileSaveAt();
int LbFileStringSearch();
int LbFileMakeFullPath();
int LbFileCopy();

#ifdef __cplusplus
};
#endif

#endif // BFLIBRARY_GFILE_H_
/******************************************************************************/

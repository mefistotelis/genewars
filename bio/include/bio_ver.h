/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file bio_ver.h
 *     Project name, version, copyrights and global definitions.
 * @par Purpose:
 *     Header file for global names and defines used by resource compiler.
 * @par Comment:
 *     Can only contain commands which resource compiler can understand.
 * @author   Tomasz Lis
 * @date     10 Oct 2012 - 13 Oct 2021
 * @par  Copying and copyrights:
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 */
/******************************************************************************/
#ifndef BIO_VER_H
#define BIO_VER_H

/* Version definitions */
#include "../obj/ver_defs.h"
//#define VER_MAJOR         1
//#define VER_MINOR         2
//#define VER_RELEASE       3
//#define VER_BUILD         4
//#define VER_STRING        "1.2.3.4"

/* Program name, copyrights and file names */
#define PROGRAM_NAME      "Open GeneWars"
#define PROGRAM_FULL_NAME "Open-source reimplementation of GeneWars game"
#define PROGRAM_AUTHORS   "Tomasz Lis"
#define COMPANY_NAME      "Community based"
#define INTERNAL_NAME     "genewars"
#define LEGAL_COPYRIGHT   "GNU General Public License"
#define LEGAL_TRADEMARKS  ""
#define FILE_VERSION VER_STRING
#define FILE_DESCRIPTION PROGRAM_NAME
#define ORIGINAL_FILENAME INTERNAL_NAME".exe"
#define PRODUCT_NAME PROGRAM_FULL_NAME
#define PRODUCT_VERSION    VER_STRING
#define DEFAULT_LOG_FILENAME INTERNAL_NAME".log"

#endif /*BIO_VER_H*/
/******************************************************************************/

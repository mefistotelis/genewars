/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file bftypes.h
 *     Header with basic type definitions.
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
#ifndef BFLIBRARY_GTYPES_H_
#define BFLIBRARY_GTYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

typedef char CBYTE;
typedef uint8_t UBYTE;
typedef int8_t SBYTE;

typedef uint16_t UWORD;
typedef int16_t SWORD;

typedef int32_t SLONG;
typedef uint32_t ULONG;

typedef uint8_t BBOOL;
typedef uint32_t BOOL;

typedef SLONG *PSLONG;

typedef ULONG *PULONG;
typedef UWORD *PUWORD;
typedef UBYTE *PUBYTE;

#ifdef __cplusplus
};
#endif

#endif // BFLIBRARY_GTYPES_H_
/******************************************************************************/

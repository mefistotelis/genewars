/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file awe32.hpp
 *     Header file for awe32.cpp.
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
#ifndef BFSOUNDLIB_AWE32_H_
#define BFSOUNDLIB_AWE32_H_

#ifdef __cplusplus
extern "C" {
#endif

extern long sbkHandle;
extern char unsigned * buffer;
extern char unsigned * preset;

int AllocDOSmem();
int FreeDOSmem();
int CreateSelector();
int GetDOSseg();
int AWEGetTotalRAM();
int AWEDefMemMap();
int AWEGetSFInfo();
int AWEStreamSample();
int AWELoadPreset();
int AWEFreeMem();
int LoadAwe32Soundfont();
int FreeAwe32Soundfont();
extern int CurrentAwe32SoundfontPrefix;

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_AWE32_H_
/******************************************************************************/

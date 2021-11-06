/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file smackinp.h
 *     Header file for smackinp.
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
#ifndef SMACKINP_H_
#define SMACKINP_H_

#ifdef __cplusplus
extern "C" {
#endif

int SMACKOPEN();
int SMACKSIMULATE();
int SMACKFRAMERATE();
int SMACKSOUNDONOFF();
int SMACKCLOSE();
int SMACKDOFRAME();
int SMACKSUMMARY();
int SMACKNEXTFRAME();
int SMACKTOSCREEN();
int SMACKTOBUFFER();
int SMACKCOLORTRANS();
int SMACKCOLORREMAP();
int SMACKGETTRACKDATA();
int SMACKGOTO();
int SMACKTOBUFFERRECT();
int SMACKSOUNDINTRACK();
int SMACKVOLUMEPAN();
int SMACKSOUNDCHECK();
int SMACKWAIT();

extern int LowSoundOpenAddr;
extern int LowSoundOffAddr;
extern int LowSoundOnAddr;
extern int LowSoundVolPanAddr;
extern int LowSoundPurgeAddr;
extern int LowSoundCheckAddr;
extern int LowSoundPlayedAddr;
extern int LowSoundCloseAddr;
int SMACKWRAPCOPY();

#ifdef __cplusplus
};
#endif

#endif // SMACKINP_H_
/******************************************************************************/

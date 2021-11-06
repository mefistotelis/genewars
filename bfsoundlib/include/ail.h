/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ail.h
 *     Header file for ail.c.
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
#ifndef BFSOUNDLIB_AIL_H_
#define BFSOUNDLIB_AIL_H_

#ifdef __cplusplus
extern "C" {
#endif

extern int AIL_driver;
extern int AIL_error;
extern int AIL_last_IO_attempt;
int AIL_start();
int _AIL_API_read_INI();
int _AIL_API_set_preference();
int _AIL_API_install_driver();
int _AIL_API_uninstall_driver();
int _AIL_API_get_IO_environment();
int _AIL_API_startup();
int _AIL_API_shutdown();
int AIL_end();
extern int AIL_preference;

#ifdef __cplusplus
};
#endif

#endif // BFSOUNDLIB_AIL_H_
/******************************************************************************/

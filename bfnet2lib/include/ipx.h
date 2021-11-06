/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file ipx.h
 *     Header file for ipx.c.
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
#ifndef BFNETWORK2_IPX_H_
#define BFNETWORK2_IPX_H_

#ifdef __cplusplus
extern "C" {
#endif

extern int IPXHandler;
extern int IPXPlayerHeader;
extern int loggon_header;
extern unsigned char player_loggon;

int CallIPX();
int CallRealModeInterrupt();
int setup_bullfrog_header();
int ipx_create_session();
int ipx_join_session();
int ipx_session_list();
int ipx_update();
int ipx_log_on_new_players();
int ipx_add_new_player();
int ipx_send_packet();
int ipx_get_packet();
int ipx_exchange_packets();
int ipx_get_players_packets();
int ipx_send_packet_to_all();
int ipx_backup_last_packet();
int ipx_send_last_packet();
int ipx_send_packet_to_player();
int ipx_send_and_get_packet();
int ipx_get_host_packet();
int ipx_get_player_number();
int ipx_get_host_player_number();
int ipx_get_player_name();
int ipx_add_player_to_session();
int ipx_store_players_details();
int ipx_shutdown_listeners();
int ipx_openup_listeners();
int ipx_stop_network();
int clear_ipx_info();
int ipx_send_packet_to_player_wait();
int ipx_receive_packet_from_player_wait();
int ipx_network_send();
int ipx_network_receive();
int ipx_send_packet_to_player_nowait();
int ipx_receive_packet_from_player_nowait();
int is_header_valid();
long run_create_function();
long run_exchange_function();
long run_join_function();

#ifdef __cplusplus
};
#endif

#endif // BFNETWORK2_IPX_H_
/******************************************************************************/

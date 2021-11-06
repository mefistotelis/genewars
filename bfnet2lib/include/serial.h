/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file serial.hpp
 *     Header file for serial.cpp.
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
#ifndef BFNETWORK2_SERIAL_H_
#define BFNETWORK2_SERIAL_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

struct ComHandlerInfo {
    int a1; // Type size and fields unknown
};

typedef struct ComHandlerInfo ComHandlerInfo;

struct TbSerialDev {
    int a1; // Type size and fields unknown
};

typedef struct TbSerialDev TbSerialDev;

struct ModemResponse {
  unsigned char field_0[8];
  unsigned char field_8[8];
  unsigned char field_10[8];
  unsigned char field_18[8];
  unsigned char field_20[8];
  unsigned char field_28[8];
  unsigned char field_30[8];
  unsigned char field_38[8];
};

typedef struct ModemResponse ModemResponse;

struct BackupSerialPacket {
    int a1; // Type size and fields unknown
};

typedef struct BackupSerialPacket BackupSerialPacket;

extern ComHandlerInfo com_dev[];
extern ModemResponse modem_response[];
extern char modem_str_init[];
extern char modem_str_dial[];
extern char modem_str_hangup[];
extern char modem_str_answer[];
extern char ModemResponseString[];
extern unsigned long g_count;
extern BackupSerialPacket com_last_packet[];

int LbCommInit();
int LbCommSetBaud();
int LbCommDeInit();
void backup_serial_int_vectors( TbSerialDev * );
void setup_serial_int_vectors( TbSerialDev * );
void init_com_port( TbSerialDev * );
int read_packet();
int write_packet();
long LbCommSend( TbSerialDev *, char *, long, char * );
int LbCommExchange();
int LbCommStopExchange();
long read_host_packet( TbSerialDev *, char *, long, char * );
void backup_packet( TbSerialDev *, void *, long );
void write_last_packet( TbSerialDev * );
int read_byte();
int write_char();
void write_char_no_buff( TbSerialDev *, unsigned char );
void lock_code_start();
void com_handler0();
void com_handler1();
void com_handler2();
void com_handler3();
void handle_com( TbSerialDev * );
void lock_code_end();
long SetBps( TbSerialDev *, long );
void SetDtr( TbSerialDev *, unsigned char );
void SetRts( TbSerialDev *, unsigned char );
void read_a_line( FILE *, char * );
int LbModemReadConfig();
int LbModemInit();
int LbModemDial();
int LbModemAnswer();
int LbModemHangUp();
int LbModemRingType();
long get_modem_response( TbSerialDev * );
void send_string( TbSerialDev *, char * );
void * AllocDosMem( unsigned long, unsigned short * );
long run_exchange_func();

#ifdef __cplusplus
};
#endif

#endif // BFNETWORK2_SERIAL_H_
/******************************************************************************/

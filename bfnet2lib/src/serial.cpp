/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file serial.cpp
 *     Implementation of related functions.
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
#include "serial.h"

int LbCommInit()
{
// code at 0001:000c3b80
}

int LbCommSetBaud()
{
// code at 0001:000c3dac
}

int LbCommDeInit()
{
// code at 0001:000c3e64
}

void backup_serial_int_vectors( TbSerialDev * )
{
// code at 0001:000c3f88
}

void setup_serial_int_vectors( TbSerialDev * )
{
// code at 0001:000c401c
}

void init_com_port( TbSerialDev * )
{
// code at 0001:000c413c
}

int read_packet()
{
// code at 0001:000c42ac
}

int write_packet()
{
// code at 0001:000c4418
}

long LbCommSend( TbSerialDev *, char *, long, char * )
{
// code at 0001:000c44e0
}

int LbCommExchange()
{
// code at 0001:000c4604
}

int LbCommStopExchange()
{
// code at 0001:000c4750
}

long read_host_packet( TbSerialDev *, char *, long, char * )
{
// code at 0001:000c4800
}

void backup_packet( TbSerialDev *, void *, long )
{
// code at 0001:000c4a74
}

void write_last_packet( TbSerialDev * )
{
// code at 0001:000c4ad4
}

int read_byte()
{
// code at 0001:000c4b2c
}

int write_char()
{
// code at 0001:000c4b5c
}

void write_char_no_buff( TbSerialDev *, unsigned char )
{
// code at 0001:000c4bd8
}

void lock_code_start()
{
// code at 0001:000c4bfc
}

void com_handler0()
{
// code at 0001:000c4c00
}

void com_handler1()
{
// code at 0001:000c4c2c
}

void com_handler2()
{
// code at 0001:000c4c58
}

void com_handler3()
{
// code at 0001:000c4c84
}

void handle_com( TbSerialDev * )
{
// code at 0001:000c4cb0
}

void lock_code_end()
{
// code at 0001:000c4d9c
}

long SetBps( TbSerialDev *, long )
{
// code at 0001:000c4da0
}

void SetDtr( TbSerialDev *, unsigned char )
{
// code at 0001:000c4e1c
}

void SetRts( TbSerialDev *, unsigned char )
{
// code at 0001:000c4e54
}

void read_a_line( FILE *, char * )
{
// code at 0001:000c4e8c
}

int LbModemReadConfig()
{
// code at 0001:000c4eb0
}

int LbModemInit()
{
// code at 0001:000c5098
}

int LbModemDial()
{
// code at 0001:000c5124
}

int LbModemAnswer()
{
// code at 0001:000c526c
}

int LbModemHangUp()
{
// code at 0001:000c5328
}

int LbModemRingType()
{
// code at 0001:000c5450
}

long get_modem_response( TbSerialDev * )
{
// code at 0001:000c547c
}

void send_string( TbSerialDev *, char * )
{
// code at 0001:000c5610
}

void * AllocDosMem( unsigned long, unsigned short * )
{
// code at 0001:000c5658
}

long run_exchange_func()
{
// code at 0001:000c56a8
}

ComHandlerInfo com_dev[2]; // array size uncertain

ModemResponse modem_response[2]; // array size uncertain

char modem_str_init[2]; // array size uncertain

char modem_str_dial[2]; // array size uncertain

char modem_str_hangup[2]; // array size uncertain

char modem_str_answer[2]; // array size uncertain

char ModemResponseString[2]; // array size uncertain

unsigned long g_count;

BackupSerialPacket com_last_packet[2]; // array size uncertain


/******************************************************************************/

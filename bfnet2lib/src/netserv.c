/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file netserv.c
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
#include "netserv.h"

int LbNetworkUpdate()
{
// code at 0001:000b0490
}

int LbNetworkSessionList()
{
// code at 0001:000b04b0
}

int LbNetworkServiceList()
{
// code at 0001:000b0788
}

int LbNetworkServiceStart()
{
// code at 0001:000b07b4
}

int LbNetworkExchange()
{
// code at 0001:000b0858
}

int LbNetworkSessionStop()
{
// code at 0001:000b08a0
}

int LbNetworkReset()
{
// code at 0001:000b08e8
}

int LbNetworkSessionActive()
{
// code at 0001:000b092c
}

int LbNetworkShutDownListeners()
{
// code at 0001:000b0954
}

int LbNetworkOpenUpListeners()
{
// code at 0001:000b0974
}

int LbNetworkSessionCreate()
{
// code at 0001:000b0994
}

int LbNetworkSessionJoin()
{
// code at 0001:000b0a28
}

int LbNetworkHostPlayerNumber()
{
// code at 0001:000b0b58
}

int LbNetworkPlayerNumber()
{
// code at 0001:000b0bd0
}

int LbNetworkPlayerName()
{
// code at 0001:000b0c08
}

int LbNetworkSetupIPXAddress(ULONG nAddress)
{
// code at 0001:000b0c94
}

int LbNetworkSessionNumberPlayers()
{
// code at 0001:000b0cac
}

int LbNetworkSend()
{
// code at 0001:000b0ccc
}

int LbNetworkReceive()
{
// code at 0001:000b0cf0
}

int LbNetworkMessageSend()
{
// code at 0001:000b0d14
}

int LbNetworkMessageReceive()
{
// code at 0001:000b0d38
}

int LbNetworkSendNoWait()
{
// code at 0001:000b0d5c
}

int LbNetworkReceiveNoWait()
{
// code at 0001:000b0d80
}

int LbNetworkInit()
{
// code at 0001:000b0da4
}

int LbNetworkDial()
{
// code at 0001:000b0ddc
}

int LbNetworkAnswer()
{
// code at 0001:000b0e1c
}

int LbNetworkHangUp()
{
// code at 0001:000b0e54
}

int LbNetworkReadConfig()
{
// code at 0001:000b0e8c
}

int LbNetworkSetBaud()
{
// code at 0001:000b0ec0
}

int LbNetworkSetSessionCreateFunction()
{
// code at 0001:000b0efc
}

int LbNetworkSetSessionJoinFunction()
{
// code at 0001:000b0f08
}

int LbNetworkSetSessionExchangeFunction()
{
// code at 0001:000b0f14
}

int LbNetworkSetSessionInitFunction()
{
// code at 0001:000b0f20
}

int LbNetworkSetSessionDialFunction()
{
// code at 0001:000b0f2c
}

int LbNetworkSetSessionAnswerFunction()
{
// code at 0001:000b0f38
}

int LbNetworkSetSessionHangUpFunction()
{
// code at 0001:000b0f44
}

TbNetworkService Network_Service_List[];

unsigned char session_active;

TbNetworkService NetworkServicePtr;

TbNetworkServiceFunction NetworkServiceFunction;


/******************************************************************************/

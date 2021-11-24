/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file netserv.h
 *     Header file for netserv.c.
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
#ifndef BFNETWORK2_NETSERV_H_
#define BFNETWORK2_NETSERV_H_

#include "bftypes.h"

#ifdef __cplusplus
extern "C" {
#endif

#include <time.h>

typedef SLONG (*NET_SERV_FUNC)();

typedef SWORD NPLYR_HANDLE;

typedef SWORD NSESS_HANDLE;

typedef void *NSERV_HANDLE;

struct TbNetworkService { // sizeof=10
    NSERV_HANDLE Id; // offset=0
    UWORD GameId; // offset=4
    UWORD Type; // offset=6
    UWORD Flags; // offset=8
};

typedef struct TbNetworkService TbNetworkService;

struct TbNetworkSession { // sizeof=40
    NSESS_HANDLE Id; // offset=0
    ULONG GameId; // offset=2
    CBYTE Name[8]; // offset=6
    SWORD HostPlayerNumber; // offset=14
    SWORD MaxPlayers; // offset=16
    SWORD Flags; // offset=18
    UBYTE Reserved[20]; // offset=20
};

typedef struct TbNetworkSession TbNetworkSession;

struct TbNetworkPlayer { // sizeof=22
    NPLYR_HANDLE Id; // offset=0
    ULONG PlayerNumber; // offset=2
    CBYTE Name[16]; // offset=6
};

typedef struct TbNetworkPlayer TbNetworkPlayer;

struct TbNetworkSessionList { // sizeof=218
    TbNetworkSession Session; // offset=0
    TbNetworkPlayer Player[8]; // offset=40
    SWORD NumberOfPlayers; // offset=216
};

typedef struct TbNetworkSessionList TbNetworkSessionList;

struct SessionInfo { // sizeof=225
    clock_t StartTime; // offset=0
    clock_t EndTime; // offset=4
    TbNetworkSession Session; // offset=8
    TbNetworkPlayer Players[8]; // offset=48
    UBYTE Selected; // offset=224
};

int LbNetworkUpdate();
int LbNetworkSessionList();
int LbNetworkServiceList();
int LbNetworkServiceStart();
int LbNetworkExchange();
int LbNetworkSessionStop();
int LbNetworkReset();
int LbNetworkSessionActive();
int LbNetworkShutDownListeners();
int LbNetworkOpenUpListeners();
int LbNetworkSessionCreate();
int LbNetworkSessionJoin();
int LbNetworkHostPlayerNumber();
int LbNetworkPlayerNumber();
int LbNetworkPlayerName();
int LbNetworkSetupIPXAddress();
int LbNetworkSessionNumberPlayers();
int LbNetworkSend();
int LbNetworkReceive();
int LbNetworkMessageSend();
int LbNetworkMessageReceive();
int LbNetworkSendNoWait();
int LbNetworkReceiveNoWait();
int LbNetworkInit();
int LbNetworkDial();
int LbNetworkAnswer();
int LbNetworkHangUp();
int LbNetworkReadConfig();
int LbNetworkSetBaud();
int LbNetworkSetSessionCreateFunction();
int LbNetworkSetSessionJoinFunction();
int LbNetworkSetSessionExchangeFunction();
int LbNetworkSetSessionInitFunction();
int LbNetworkSetSessionDialFunction();
int LbNetworkSetSessionAnswerFunction();
int LbNetworkSetSessionHangUpFunction();

extern TbNetworkService Network_Service_List[];
extern unsigned char session_active;
extern TbNetworkService NetworkServicePtr;
extern int NetworkServiceFunction;

#ifdef __cplusplus
};
#endif

#endif // BFNETWORK2_NETSERV_H_
/******************************************************************************/

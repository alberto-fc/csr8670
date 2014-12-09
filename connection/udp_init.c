/****************************************************************************
Copyright (C) Cambridge Silicon Radio Limited 2004-2014
Part of ADK 3.5

FILE NAME
    udp_init.c        

DESCRIPTION
    This file contains the functions to initialise the UDP component of 
    the connection library    

NOTES

*/

/****************************************************************************
    Header files
*/
#include    "connection.h"
#include    "connection_private.h"
#include    "udp_init.h"

#include    <vm.h>


/****************************************************************************
NAME
connectionUdpInit

DESCRIPTION
This Function is called to initialise UDP

RETURNS

*/
void connectionUdpInit(void)
{
     /* TODO B-4408 For now just confirm object has been initialised */
    connectionSendInternalInitCfm(connectionInitUdp);
}
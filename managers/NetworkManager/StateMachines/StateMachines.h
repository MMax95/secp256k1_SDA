#ifndef SECP251K1_SANDBOX_NETWORKMANAGER_SM_H
#define SECP251K1_SANDBOX_NETWORKMANAGER_SM_H

#include "../NetworkManager.h"

#include "ClientSM/ClientSM.h"
#include "ClientHandlerSM/ClientHandlerSM.h"
#include "SatelliteSM/SatelliteSM.h"
#include "SatelliteHandlerSM/SatelliteHandlerSM.h"
#include "ServerFrontendSM/ServerFrontendSM.h"

unsigned int startClientSM(/**protocol**/);
unsigned int startClientHandlerSM(/**protocol**/);
unsigned int startSatelliteSM(/**protocol**/);
unsigned int startSatelliteHandlerSM(/**protocol**/);
unsigned int startServerFrontendSM(/**protocol**/);

#endif
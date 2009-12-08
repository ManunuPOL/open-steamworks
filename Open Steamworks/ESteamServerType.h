//==========================  Open Steamworks  ================================
//
// This file is part of the Open Steamworks project. All individuals associated
// with this project do not claim ownership of the contents
// 
// The code, comments, and all related files, projects, resources,
// redistributables included with this project are Copyright Valve Corporation.
// Additionally, Valve, the Valve logo, Half-Life, the Half-Life logo, the
// Lambda logo, Steam, the Steam logo, Team Fortress, the Team Fortress logo,
// Opposing Force, Day of Defeat, the Day of Defeat logo, Counter-Strike, the
// Counter-Strike logo, Source, the Source logo, and Counter-Strike Condition
// Zero are trademarks and or registered trademarks of Valve Corporation.
// All other trademarks are property of their respective owners.
//
//=============================================================================

#ifndef ESTEAMSERVERTYPE_H
#define ESTEAMSERVERTYPE_H
#ifdef _WIN32
#pragma once
#endif

#include "EnumString.h"

enum ESteamServerType
{
	eSteamValveCDKeyValidationServer = 0,
	eSteamHalfLifeMasterServer = 1,
	eSteamFriendsServer = 2,
	eSteamCSERServer = 3,
	eSteamHalfLife2MasterServer = 4,
	eSteamRDKFMasterServer = 5,
	eMaxServerTypes = 6,
};

Begin_Enum_String( ESteamServerType )
{
	Enum_String( eSteamValveCDKeyValidationServer );
	Enum_String( eSteamHalfLifeMasterServer );
	Enum_String( eSteamFriendsServer );
	Enum_String( eSteamCSERServer );
	Enum_String( eSteamHalfLife2MasterServer );
	Enum_String( eSteamRDKFMasterServer );
	Enum_String( eMaxServerTypes );
}
End_Enum_String;


#endif // ESTEAMSERVERTYPE_H

#pragma once 
#include <OnlineSubsystemSteam_Structs.h>
 
 
 
// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// Size: 0x28(Inherited: 0x28)
struct USteamAuthComponentModuleInterface : UHandlerComponentFactory
{


}; 
 
 


// Class OnlineSubsystemSteam.SteamNetConnection
// Size: 0x33A0(Inherited: 0x33A0)
struct USteamNetConnection : UIpConnection
{
	char pad_13216_1 : 7;  // 0x33A0 (0x33A0)
	bool bIsPassthrough : 1;  // 0x3398 (0x3398)


}; 
 
 


// Class OnlineSubsystemSteam.SteamNetDriver
// Size: 0x848(Inherited: 0x840)
struct USteamNetDriver : UIpNetDriver
{
	char pad_2112[8];  // 0x840 (0x840)


}; 
 
 



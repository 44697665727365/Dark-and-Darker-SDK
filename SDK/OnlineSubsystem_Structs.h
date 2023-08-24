#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
struct FOnMatchReceivedTurn
{
	struct FString Match;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bDidBecomeActive : 1;  // 0x10 (0x10)
	char pad_17[7];  // [x11 ([x11)


}; 
 
 // ScriptStruct OnlineSubsystem.NamedInterface
struct FNamedInterface
{
	struct FName InterfaceName;  // 0x0 (0x0)
	struct UObject* InterfaceObject;  // 0x8 (0x8)


}; 
 
 // ScriptStruct OnlineSubsystem.NamedInterfaceDef
struct FNamedInterfaceDef
{
	struct FName InterfaceName;  // 0x0 (0x0)
	struct FString InterfaceClassName;  // 0x8 (0x8)


}; 
 
 // Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
struct FOnMatchEnded
{
	struct FString Match;  // 0x0 (0x0)


}; 
 
 
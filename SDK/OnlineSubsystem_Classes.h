#pragma once 
#include <OnlineSubsystem_Structs.h>
 
 
 
// Class OnlineSubsystem.NamedInterfaces
// Size: 0x60(Inherited: 0x28)
struct UNamedInterfaces : UObject
{
	struct TArray<struct FNamedInterface> NamedInterfaces;  // 0x28 (0x28)
	struct TArray<struct FNamedInterfaceDef> NamedInterfaceDefs;  // 0x38 (0x38)
	char pad_72[24];  // 0x48 (0x48)


}; 
 
 


// Class OnlineSubsystem.TurnBasedMatchInterface
// Size: 0x28(Inherited: 0x28)
struct UTurnBasedMatchInterface : UInterface
{


	void OnMatchReceivedTurn(struct FString Match, bool bDidBecomeActive); // Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
	void OnMatchEnded(struct FString Match); // Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
}; 
 
 



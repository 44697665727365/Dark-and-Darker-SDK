#pragma once 
#include <GA_PaviseInstallPassive_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_PaviseInstallPassive.GA_PaviseInstallPassive_C
// Size: 0x5D0(Inherited: 0x558)
struct UGA_PaviseInstallPassive_C : UGA_ActivateOnGranted_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct FText MovementErrorMsg;  // 0x560 (0x560)
	double FowardDistance;  // 0x578 (0x578)
	double GroundDistance;  // 0x580 (0x580)
	struct FText InstallErrorMsg_Pavise;  // 0x588 (0x588)
	struct FText InstallErrorMsg_Character;  // 0x5A0 (0x5A0)
	struct FText InstallErrorMsg_Ground;  // 0x5B8 (0x5B8)


	void BroadcastSystemMessage(struct FText SystemMessage); // Function GA_PaviseInstallPassive.GA_PaviseInstallPassive_C.BroadcastSystemMessage
	void CheckGround(bool& Result); // Function GA_PaviseInstallPassive.GA_PaviseInstallPassive_C.CheckGround
	void EventReceived_78022699479DE1103E04748305A25585(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_PaviseInstallPassive.GA_PaviseInstallPassive_C.EventReceived_78022699479DE1103E04748305A25585
	void K2_ActivateAbility(); // Function GA_PaviseInstallPassive.GA_PaviseInstallPassive_C.K2_ActivateAbility
	void ExecuteUbergraph_GA_PaviseInstallPassive(int32_t EntryPoint); // Function GA_PaviseInstallPassive.GA_PaviseInstallPassive_C.ExecuteUbergraph_GA_PaviseInstallPassive
}; 
 
 



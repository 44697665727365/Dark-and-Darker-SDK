#pragma once 
#include <GA_GhostKing_EarthQuake_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C
// Size: 0x5A8(Inherited: 0x580)
struct UGA_GhostKing_EarthQuake_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct ABP_GhostKing_Common_C* As BP Ghost King;  // 0x588 (0x588)
	struct ABP_GameSpawner_C* Spawner;  // 0x590 (0x590)
	struct FPrimaryAssetId In Monster Id;  // 0x598 (0x598)


	void EventReceived_A76EDFB5460926AE7B38D69A78D29398(struct FGameplayEventData Payload); // Function GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C.EventReceived_A76EDFB5460926AE7B38D69A78D29398
	void EventReceived_A902270D42A9465CE85A55A3BFA70716(struct FGameplayEventData Payload); // Function GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C.EventReceived_A902270D42A9465CE85A55A3BFA70716
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GhostKing_EarthQuake(int32_t EntryPoint); // Function GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C.ExecuteUbergraph_GA_GhostKing_EarthQuake
}; 
 
 



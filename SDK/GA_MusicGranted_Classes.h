#pragma once 
#include <GA_MusicGranted_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_MusicGranted.GA_MusicGranted_C
// Size: 0x570(Inherited: 0x558)
struct UGA_MusicGranted_C : UGA_ActivateOnGranted_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct FGameplayTag GrantedBuffTag;  // 0x560 (0x560)
	struct FGameplayTag BuffTag;  // 0x568 (0x568)


	void Removed_80134EFF47A63FEC32078584C2E78FA3(); // Function GA_MusicGranted.GA_MusicGranted_C.Removed_80134EFF47A63FEC32078584C2E78FA3
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_MusicGranted.GA_MusicGranted_C.K2_ActivateAbilityFromEvent
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_MusicGranted.GA_MusicGranted_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_MusicGranted(int32_t EntryPoint); // Function GA_MusicGranted.GA_MusicGranted_C.ExecuteUbergraph_GA_MusicGranted
}; 
 
 



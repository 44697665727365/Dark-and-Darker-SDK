#pragma once 
#include <GA_MusicGranted_Gradual_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_MusicGranted_Gradual.GA_MusicGranted_Gradual_C
// Size: 0x5C8(Inherited: 0x570)
struct UGA_MusicGranted_Gradual_C : UGA_MusicGranted_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x570 (0x570)
	struct FGameplayTag PerfectStateTag;  // 0x578 (0x578)
	struct FGameplayTag GoodStateTag;  // 0x580 (0x580)
	struct FGameplayTag BadStateTag;  // 0x588 (0x588)
	struct TArray<struct FPrimaryAssetId> PerfectAssetId;  // 0x590 (0x590)
	struct TArray<struct FPrimaryAssetId> GoodAssetId;  // 0x5A0 (0x5A0)
	struct TArray<struct FPrimaryAssetId> BadAssetId;  // 0x5B0 (0x5B0)
	int32_t Total Action Count;  // 0x5C0 (0x5C0)
	float Time Between Actions;  // 0x5C4 (0x5C4)


	void OnFinished_66648D634759F8326498DBBB3733D3C9(int32_t ActionNumber); // Function GA_MusicGranted_Gradual.GA_MusicGranted_Gradual_C.OnFinished_66648D634759F8326498DBBB3733D3C9
	void OnPerformAction_66648D634759F8326498DBBB3733D3C9(int32_t ActionNumber); // Function GA_MusicGranted_Gradual.GA_MusicGranted_Gradual_C.OnPerformAction_66648D634759F8326498DBBB3733D3C9
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_MusicGranted_Gradual.GA_MusicGranted_Gradual_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_MusicGranted_Gradual(int32_t EntryPoint); // Function GA_MusicGranted_Gradual.GA_MusicGranted_Gradual_C.ExecuteUbergraph_GA_MusicGranted_Gradual
}; 
 
 



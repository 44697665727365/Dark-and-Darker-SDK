#pragma once 
#include <GA_ChoraleOfClarityGranted_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_ChoraleOfClarityGranted.GA_ChoraleOfClarityGranted_C
// Size: 0x598(Inherited: 0x570)
struct UGA_ChoraleOfClarityGranted_C : UGA_MusicGranted_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x570 (0x570)
	struct FPrimaryAssetId SpellRechargeConst;  // 0x578 (0x578)
	struct FPrimaryAssetId SpellRechargeIntervalConst;  // 0x588 (0x588)


	void OnFinished_C8B6EBF246016F8671F1C59CA8233EB0(int32_t ActionNumber); // Function GA_ChoraleOfClarityGranted.GA_ChoraleOfClarityGranted_C.OnFinished_C8B6EBF246016F8671F1C59CA8233EB0
	void OnPerformAction_C8B6EBF246016F8671F1C59CA8233EB0(int32_t ActionNumber); // Function GA_ChoraleOfClarityGranted.GA_ChoraleOfClarityGranted_C.OnPerformAction_C8B6EBF246016F8671F1C59CA8233EB0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_ChoraleOfClarityGranted.GA_ChoraleOfClarityGranted_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_ChoraleOfClarityGranted(int32_t EntryPoint); // Function GA_ChoraleOfClarityGranted.GA_ChoraleOfClarityGranted_C.ExecuteUbergraph_GA_ChoraleOfClarityGranted
}; 
 
 



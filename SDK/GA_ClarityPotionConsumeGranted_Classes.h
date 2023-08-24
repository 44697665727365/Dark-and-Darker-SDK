#pragma once 
#include <GA_ClarityPotionConsumeGranted_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_ClarityPotionConsumeGranted.GA_ClarityPotionConsumeGranted_C
// Size: 0x580(Inherited: 0x558)
struct UGA_ClarityPotionConsumeGranted_C : UGA_ActivateOnGranted_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct FPrimaryAssetId SpellRechargeConst;  // 0x560 (0x560)
	struct FPrimaryAssetId RechargeIntervalConst;  // 0x570 (0x570)


	void OnFinished_58D70B5D48ED8FE1457C9690A8734640(int32_t ActionNumber); // Function GA_ClarityPotionConsumeGranted.GA_ClarityPotionConsumeGranted_C.OnFinished_58D70B5D48ED8FE1457C9690A8734640
	void OnPerformAction_58D70B5D48ED8FE1457C9690A8734640(int32_t ActionNumber); // Function GA_ClarityPotionConsumeGranted.GA_ClarityPotionConsumeGranted_C.OnPerformAction_58D70B5D48ED8FE1457C9690A8734640
	void K2_ActivateAbility(); // Function GA_ClarityPotionConsumeGranted.GA_ClarityPotionConsumeGranted_C.K2_ActivateAbility
	void ExecuteUbergraph_GA_ClarityPotionConsumeGranted(int32_t EntryPoint); // Function GA_ClarityPotionConsumeGranted.GA_ClarityPotionConsumeGranted_C.ExecuteUbergraph_GA_ClarityPotionConsumeGranted
}; 
 
 



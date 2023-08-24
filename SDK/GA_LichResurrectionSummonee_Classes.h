#pragma once 
#include <GA_LichResurrectionSummonee_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LichResurrectionSummonee.GA_LichResurrectionSummonee_C
// Size: 0x5C0(Inherited: 0x580)
struct UGA_LichResurrectionSummonee_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct TArray<struct FPrimaryAssetId> StanceEffect;  // 0x588 (0x588)
	int32_t Max Summonee Count;  // 0x598 (0x598)
	int32_t Archer Count;  // 0x59C (0x59C)
	int32_t Guardman Count;  // 0x5A0 (0x5A0)
	int32_t Player Count;  // 0x5A4 (0x5A4)
	struct TArray<struct ADCCharacterBase*> Player Array;  // 0x5A8 (0x5A8)
	struct ABP_Lich_Common_C* As BP Lich;  // 0x5B8 (0x5B8)


	void EventReceived_58B125304190401C7A5614A1C0047ACB(struct FGameplayEventData Payload); // Function GA_LichResurrectionSummonee.GA_LichResurrectionSummonee_C.EventReceived_58B125304190401C7A5614A1C0047ACB
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_LichResurrectionSummonee.GA_LichResurrectionSummonee_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_LichResurrectionSummonee.GA_LichResurrectionSummonee_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_LichResurrectionSummonee(int32_t EntryPoint); // Function GA_LichResurrectionSummonee.GA_LichResurrectionSummonee_C.ExecuteUbergraph_GA_LichResurrectionSummonee
}; 
 
 



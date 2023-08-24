#pragma once 
#include <GA_ItemInstallPassiveBase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C
// Size: 0x5A8(Inherited: 0x580)
struct UGA_ItemInstallPassiveBase_C : UGA_StoppablePassive_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	AGameplayAbilityWorldReticle* ReticleActorClass;  // 0x588 (0x588)
	struct UAbilityTask_WaitTargetData* WaitTargetDataTask;  // 0x590 (0x590)
	struct FPrimaryAssetId ConstantAssetId;  // 0x598 (0x598)


	void Cancelled_4B7FDAA9405950C400722898D559C59E(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.Cancelled_4B7FDAA9405950C400722898D559C59E
	void ValidData_4B7FDAA9405950C400722898D559C59E(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.ValidData_4B7FDAA9405950C400722898D559C59E
	void EventReceived_85952FD14FE8538A2FA00EA4FDA1DE72(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.EventReceived_85952FD14FE8538A2FA00EA4FDA1DE72
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.K2_ActivateAbilityFromEvent
	void OnPassiveStart(); // Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.OnPassiveStart
	void OnPassiveStop(); // Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.OnPassiveStop
	void ExecuteUbergraph_GA_ItemInstallPassiveBase(int32_t EntryPoint); // Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.ExecuteUbergraph_GA_ItemInstallPassiveBase
}; 
 
 



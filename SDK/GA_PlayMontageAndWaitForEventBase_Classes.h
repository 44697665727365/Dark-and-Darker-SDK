#pragma once 
#include <GA_PlayMontageAndWaitForEventBase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C
// Size: 0x580(Inherited: 0x560)
struct UGA_PlayMontageAndWaitForEventBase_C : UGA_PlayMontageAndWaitForEvent
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x560 (0x560)
	float Rotation Speed;  // 0x568 (0x568)
	char pad_1388[4];  // 0x56C (0x56C)
	struct UDCAT_RotateToActor* Async Task;  // 0x570 (0x570)
	struct FGameplayTag Rotation Event Tag;  // 0x578 (0x578)


	void GetBBTargetActorToMonsterBase(bool& Result, struct ABP_DCMonsterBaseWithOptions_C*& DCMonsterBaseWithOptions); // Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.GetBBTargetActorToMonsterBase
	void GetBBTargetActorToCharacterBase(bool& Result, struct ADCCharacterBase*& As DCCharacter Base); // Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.GetBBTargetActorToCharacterBase
	void GetBBTargetActor(bool& Result, struct UObject*& Return Value); // Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.GetBBTargetActor
	void EventReceived_7713E05F4EC00D3256E30A95AF21E3A0(struct FGameplayEventData Payload); // Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.EventReceived_7713E05F4EC00D3256E30A95AF21E3A0
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.AbilityActivated
	void ExecuteUbergraph_GA_PlayMontageAndWaitForEventBase(int32_t EntryPoint); // Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.ExecuteUbergraph_GA_PlayMontageAndWaitForEventBase
}; 
 
 



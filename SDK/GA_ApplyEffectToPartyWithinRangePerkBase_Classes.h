#pragma once 
#include <GA_ApplyEffectToPartyWithinRangePerkBase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C
// Size: 0x728(Inherited: 0x558)
struct UGA_ApplyEffectToPartyWithinRangePerkBase_C : UGA_ActivateOnGranted_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct FPrimaryAssetId PerkId;  // 0x560 (0x560)
	struct USphereComponent* AuraCollision;  // 0x570 (0x570)
	char pad_1400_1 : 7;  // 0x578 (0x578)
	bool bIsExceptForOwner : 1;  // 0x578 (0x578)
	char pad_1401[3];  // 0x579 (0x579)
	struct FGameplayTag PerkStateTag;  // 0x57C (0x57C)
	char pad_1412[4];  // 0x584 (0x584)
	struct FGameplayEffectQuery PerkStateQuery;  // 0x588 (0x588)
	struct FGameplayTag GrantedAbilityTag;  // 0x6D8 (0x6D8)
	struct FPrimaryAssetId GrantingAbilityId;  // 0x6E0 (0x6E0)
	struct FDCGameplayAbilityData Out Gameplay Ability Data;  // 0x6F0 (0x6F0)
	struct TArray<struct ADCPlayerCharacterBase*> OverlapActors;  // 0x718 (0x718)


	void GrantAbility(struct AActor* Target); // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.GrantAbility
	void CreateAndAttachCollisionToOwner(struct USphereComponent*& Output_Get); // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.CreateAndAttachCollisionToOwner
	void RemoveEffect(struct ADCPlayerCharacterBase* Character); // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.RemoveEffect
	void ApplyEffect(struct ADCPlayerCharacterBase* Target); // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.ApplyEffect
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.K2_ActivateAbilityFromEvent
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.K2_OnEndAbility
	void OnComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.OnComponentBeginOverlap
	void OnComponentEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.OnComponentEndOverlap
	void ExecuteUbergraph_GA_ApplyEffectToPartyWithinRangePerkBase(int32_t EntryPoint); // Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.ExecuteUbergraph_GA_ApplyEffectToPartyWithinRangePerkBase
}; 
 
 



#include "pch.h"
#include "SDK.h"

void UGA_ApplyEffectToPartyWithinRangePerkBase_C::GrantAbility(struct AActor* Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.GrantAbility");

	FGrantAbility parms{};	
	parms.Target = Target;

	ProcessEvent(fn, &parms);
}

void UGA_ApplyEffectToPartyWithinRangePerkBase_C::CreateAndAttachCollisionToOwner(struct USphereComponent*& Output_Get){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.CreateAndAttachCollisionToOwner");

	FCreateAndAttachCollisionToOwner parms{};	
	parms.Output_Get = Output_Get;

	ProcessEvent(fn, &parms);
}

void UGA_ApplyEffectToPartyWithinRangePerkBase_C::RemoveEffect(struct ADCPlayerCharacterBase* Character){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.RemoveEffect");

	FRemoveEffect parms{};	
	parms.Character = Character;

	ProcessEvent(fn, &parms);
}

void UGA_ApplyEffectToPartyWithinRangePerkBase_C::ApplyEffect(struct ADCPlayerCharacterBase* Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.ApplyEffect");

	FApplyEffect parms{};	
	parms.Target = Target;

	ProcessEvent(fn, &parms);
}

void UGA_ApplyEffectToPartyWithinRangePerkBase_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ApplyEffectToPartyWithinRangePerkBase_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_ApplyEffectToPartyWithinRangePerkBase_C::OnComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.OnComponentBeginOverlap");

	FOnComponentBeginOverlap parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void UGA_ApplyEffectToPartyWithinRangePerkBase_C::OnComponentEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.OnComponentEndOverlap");

	FOnComponentEndOverlap parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(fn, &parms);
}

void UGA_ApplyEffectToPartyWithinRangePerkBase_C::ExecuteUbergraph_GA_ApplyEffectToPartyWithinRangePerkBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ApplyEffectToPartyWithinRangePerkBase.GA_ApplyEffectToPartyWithinRangePerkBase_C.ExecuteUbergraph_GA_ApplyEffectToPartyWithinRangePerkBase");

	FExecuteUbergraph_GA_ApplyEffectToPartyWithinRangePerkBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


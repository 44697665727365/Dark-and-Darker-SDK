#include "pch.h"
#include "SDK.h"

void UGA_GhostKing_Eating_C::Removed_701844FA4EED4533E0BF9B854F204ECB(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.Removed_701844FA4EED4533E0BF9B854F204ECB");

	FRemoved_701844FA4EED4533E0BF9B854F204ECB parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_Eating_C::EventReceived_AA4AB67146876402F8EBA39BF04EDC2D(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.EventReceived_AA4AB67146876402F8EBA39BF04EDC2D");

	FEventReceived_AA4AB67146876402F8EBA39BF04EDC2D parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_Eating_C::Added_96D0CB504ECC5D3FD581698258C98FCB(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.Added_96D0CB504ECC5D3FD581698258C98FCB");

	FAdded_96D0CB504ECC5D3FD581698258C98FCB parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_Eating_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_Eating_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_Eating_C::OnDestroyedEvent(struct AActor* DestroyedActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.OnDestroyedEvent");

	FOnDestroyedEvent parms{};	
	parms.DestroyedActor = DestroyedActor;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_Eating_C::ExecuteUbergraph_GA_GhostKing_Eating(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.ExecuteUbergraph_GA_GhostKing_Eating");

	FExecuteUbergraph_GA_GhostKing_Eating parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


#include "pch.h"
#include "SDK.h"

void UGA_Earthquake_C::EndSpell(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Earthquake.GA_Earthquake_C.EndSpell");

	FEndSpell parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Earthquake_C::RemoveEffect(struct AActor* OutActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Earthquake.GA_Earthquake_C.RemoveEffect");

	FRemoveEffect parms{};	
	parms.OutActor = OutActor;

	ProcessEvent(fn, &parms);
}

void UGA_Earthquake_C::SpawnAoe(struct FHitResult HtResult, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Earthquake.GA_Earthquake_C.SpawnAoe");

	FSpawnAoe parms{};	
	parms.HtResult = HtResult;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_Earthquake_C::Cancelled_1D8A04C140FE58B0FC6293AA01E7D7B3(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Earthquake.GA_Earthquake_C.Cancelled_1D8A04C140FE58B0FC6293AA01E7D7B3");

	FCancelled_1D8A04C140FE58B0FC6293AA01E7D7B3 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Earthquake_C::ValidData_1D8A04C140FE58B0FC6293AA01E7D7B3(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Earthquake.GA_Earthquake_C.ValidData_1D8A04C140FE58B0FC6293AA01E7D7B3");

	FValidData_1D8A04C140FE58B0FC6293AA01E7D7B3 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Earthquake_C::EventReceived_60A5E2014E7F780EFC926787A0E05711(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Earthquake.GA_Earthquake_C.EventReceived_60A5E2014E7F780EFC926787A0E05711");

	FEventReceived_60A5E2014E7F780EFC926787A0E05711 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Earthquake_C::OnDirectionChanged_28F6193A43CDDA6F2BCC3880F32F6CB5(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Earthquake.GA_Earthquake_C.OnDirectionChanged_28F6193A43CDDA6F2BCC3880F32F6CB5");

	FOnDirectionChanged_28F6193A43CDDA6F2BCC3880F32F6CB5 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Earthquake_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Earthquake.GA_Earthquake_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_Earthquake_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Earthquake.GA_Earthquake_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_Earthquake_C::ExecuteUbergraph_GA_Earthquake(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Earthquake.GA_Earthquake_C.ExecuteUbergraph_GA_Earthquake");

	FExecuteUbergraph_GA_Earthquake parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


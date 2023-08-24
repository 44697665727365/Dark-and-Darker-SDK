#include "pch.h"
#include "SDK.h"

void UGA_Looting_C::GetMaximumDistance(double HitResultDistance, double& MaximumDistance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.GetMaximumDistance");

	FGetMaximumDistance parms{};	
	parms.HitResultDistance = HitResultDistance;
	parms.MaximumDistance = MaximumDistance;

	ProcessEvent(fn, &parms);
}

void UGA_Looting_C::OnDirectionChanged_8612F3F6419CAA8FDE79C7BC68BCA52B(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.OnDirectionChanged_8612F3F6419CAA8FDE79C7BC68BCA52B");

	FOnDirectionChanged_8612F3F6419CAA8FDE79C7BC68BCA52B parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Looting_C::OnDistanceChange_EB1E959F469D1BDF00923DAC43E68B6D(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.OnDistanceChange_EB1E959F469D1BDF00923DAC43E68B6D");

	FOnDistanceChange_EB1E959F469D1BDF00923DAC43E68B6D parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Looting_C::OnDistanceChange_FD7D3E9F4BED7CD5EDE79ABC64F9FA5B(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.OnDistanceChange_FD7D3E9F4BED7CD5EDE79ABC64F9FA5B");

	FOnDistanceChange_FD7D3E9F4BED7CD5EDE79ABC64F9FA5B parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Looting_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Looting_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_Looting_C::OnRemoveLootTarget_Event(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.OnRemoveLootTarget_Event");

	FOnRemoveLootTarget_Event parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Looting_C::ExecuteUbergraph_GA_Looting(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.ExecuteUbergraph_GA_Looting");

	FExecuteUbergraph_GA_Looting parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


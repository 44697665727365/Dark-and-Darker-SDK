#include "pch.h"
#include "SDK.h"

void UGA_MusicGranted_Gradual_C::OnFinished_66648D634759F8326498DBBB3733D3C9(int32_t ActionNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicGranted_Gradual.GA_MusicGranted_Gradual_C.OnFinished_66648D634759F8326498DBBB3733D3C9");

	FOnFinished_66648D634759F8326498DBBB3733D3C9 parms{};	
	parms.ActionNumber = ActionNumber;

	ProcessEvent(fn, &parms);
}

void UGA_MusicGranted_Gradual_C::OnPerformAction_66648D634759F8326498DBBB3733D3C9(int32_t ActionNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicGranted_Gradual.GA_MusicGranted_Gradual_C.OnPerformAction_66648D634759F8326498DBBB3733D3C9");

	FOnPerformAction_66648D634759F8326498DBBB3733D3C9 parms{};	
	parms.ActionNumber = ActionNumber;

	ProcessEvent(fn, &parms);
}

void UGA_MusicGranted_Gradual_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicGranted_Gradual.GA_MusicGranted_Gradual_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MusicGranted_Gradual_C::ExecuteUbergraph_GA_MusicGranted_Gradual(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicGranted_Gradual.GA_MusicGranted_Gradual_C.ExecuteUbergraph_GA_MusicGranted_Gradual");

	FExecuteUbergraph_GA_MusicGranted_Gradual parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


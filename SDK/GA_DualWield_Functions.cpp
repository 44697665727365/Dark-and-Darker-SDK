#include "pch.h"
#include "SDK.h"

void UGA_DualWield_C::Removed_E7DAE38A4964DF8EED1204AF3A2217C4(int32_t TagCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DualWield.GA_DualWield_C.Removed_E7DAE38A4964DF8EED1204AF3A2217C4");

	FRemoved_E7DAE38A4964DF8EED1204AF3A2217C4 parms{};	
	parms.TagCount = TagCount;

	ProcessEvent(fn, &parms);
}

void UGA_DualWield_C::OnCountChanged_E7DAE38A4964DF8EED1204AF3A2217C4(int32_t TagCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DualWield.GA_DualWield_C.OnCountChanged_E7DAE38A4964DF8EED1204AF3A2217C4");

	FOnCountChanged_E7DAE38A4964DF8EED1204AF3A2217C4 parms{};	
	parms.TagCount = TagCount;

	ProcessEvent(fn, &parms);
}

void UGA_DualWield_C::Added_E7DAE38A4964DF8EED1204AF3A2217C4(int32_t TagCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DualWield.GA_DualWield_C.Added_E7DAE38A4964DF8EED1204AF3A2217C4");

	FAdded_E7DAE38A4964DF8EED1204AF3A2217C4 parms{};	
	parms.TagCount = TagCount;

	ProcessEvent(fn, &parms);
}

void UGA_DualWield_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DualWield.GA_DualWield_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DualWield_C::ExecuteUbergraph_GA_DualWield(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DualWield.GA_DualWield_C.ExecuteUbergraph_GA_DualWield");

	FExecuteUbergraph_GA_DualWield parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


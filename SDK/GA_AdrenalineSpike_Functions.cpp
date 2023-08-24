#include "pch.h"
#include "SDK.h"

void UGA_AdrenalineSpike_C::CheckHealthBelowCertainPer(double CurrentHealth, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AdrenalineSpike.GA_AdrenalineSpike_C.CheckHealthBelowCertainPer");

	FCheckHealthBelowCertainPer parms{};	
	parms.CurrentHealth = CurrentHealth;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_AdrenalineSpike_C::OnChange_15B3EBAC461BE5313FFA019C63C0FA1F(float OldValue, float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AdrenalineSpike.GA_AdrenalineSpike_C.OnChange_15B3EBAC461BE5313FFA019C63C0FA1F");

	FOnChange_15B3EBAC461BE5313FFA019C63C0FA1F parms{};	
	parms.OldValue = OldValue;
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UGA_AdrenalineSpike_C::OnFinish_254A5E03472F5D7D8E4F218B424166D4(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AdrenalineSpike.GA_AdrenalineSpike_C.OnFinish_254A5E03472F5D7D8E4F218B424166D4");

	FOnFinish_254A5E03472F5D7D8E4F218B424166D4 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AdrenalineSpike_C::Removed_CBACE4974B9430A96188D89A17A89481(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AdrenalineSpike.GA_AdrenalineSpike_C.Removed_CBACE4974B9430A96188D89A17A89481");

	FRemoved_CBACE4974B9430A96188D89A17A89481 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AdrenalineSpike_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AdrenalineSpike.GA_AdrenalineSpike_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AdrenalineSpike_C::ExecuteUbergraph_GA_AdrenalineSpike(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AdrenalineSpike.GA_AdrenalineSpike_C.ExecuteUbergraph_GA_AdrenalineSpike");

	FExecuteUbergraph_GA_AdrenalineSpike parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


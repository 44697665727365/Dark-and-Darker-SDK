#include "pch.h"
#include "SDK.h"

void UGA_Slayer_C::Removed_A6ACC65E49785454FF743EA5D4B43272(int32_t TagCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Slayer.GA_Slayer_C.Removed_A6ACC65E49785454FF743EA5D4B43272");

	FRemoved_A6ACC65E49785454FF743EA5D4B43272 parms{};	
	parms.TagCount = TagCount;

	ProcessEvent(fn, &parms);
}

void UGA_Slayer_C::OnCountChanged_A6ACC65E49785454FF743EA5D4B43272(int32_t TagCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Slayer.GA_Slayer_C.OnCountChanged_A6ACC65E49785454FF743EA5D4B43272");

	FOnCountChanged_A6ACC65E49785454FF743EA5D4B43272 parms{};	
	parms.TagCount = TagCount;

	ProcessEvent(fn, &parms);
}

void UGA_Slayer_C::Added_A6ACC65E49785454FF743EA5D4B43272(int32_t TagCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Slayer.GA_Slayer_C.Added_A6ACC65E49785454FF743EA5D4B43272");

	FAdded_A6ACC65E49785454FF743EA5D4B43272 parms{};	
	parms.TagCount = TagCount;

	ProcessEvent(fn, &parms);
}

void UGA_Slayer_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Slayer.GA_Slayer_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Slayer_C::ExecuteUbergraph_GA_Slayer(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Slayer.GA_Slayer_C.ExecuteUbergraph_GA_Slayer");

	FExecuteUbergraph_GA_Slayer parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


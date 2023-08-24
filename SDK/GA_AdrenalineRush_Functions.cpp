#include "pch.h"
#include "SDK.h"

void UGA_AdrenalineRush_C::ServerBuffRemoved(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AdrenalineRush.GA_AdrenalineRush_C.ServerBuffRemoved");

	FServerBuffRemoved parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AdrenalineRush_C::ExecuteUbergraph_GA_AdrenalineRush(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AdrenalineRush.GA_AdrenalineRush_C.ExecuteUbergraph_GA_AdrenalineRush");

	FExecuteUbergraph_GA_AdrenalineRush parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


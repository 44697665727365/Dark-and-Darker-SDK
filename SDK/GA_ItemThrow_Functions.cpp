#include "pch.h"
#include "SDK.h"

void UGA_ItemThrow_C::ProjectileFired(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ItemThrow.GA_ItemThrow_C.ProjectileFired");

	FProjectileFired parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ItemThrow_C::ExecuteUbergraph_GA_ItemThrow(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ItemThrow.GA_ItemThrow_C.ExecuteUbergraph_GA_ItemThrow");

	FExecuteUbergraph_GA_ItemThrow parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


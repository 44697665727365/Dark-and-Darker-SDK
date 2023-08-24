#include "pch.h"
#include "SDK.h"

void UObject::ExecuteUbergraph(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CoreUObject.Object.ExecuteUbergraph");

	FExecuteUbergraph parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


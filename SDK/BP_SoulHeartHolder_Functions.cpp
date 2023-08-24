#include "pch.h"
#include "SDK.h"

void ABP_SoulHeartHolder_C::InteractTargetInfoName(struct FText& Name){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SoulHeartHolder.BP_SoulHeartHolder_C.InteractTargetInfoName");

	FInteractTargetInfoName parms{};	
	parms.Name = Name;

	ProcessEvent(fn, &parms);
}


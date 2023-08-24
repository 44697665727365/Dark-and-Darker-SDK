#include "pch.h"
#include "SDK.h"

void ABP_SurvivalBow_Unique_C::UserConstructionScript(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SurvivalBow_Unique.BP_SurvivalBow_Unique_C.UserConstructionScript");

	FUserConstructionScript parms{};	

	ProcessEvent(fn, &parms);
}


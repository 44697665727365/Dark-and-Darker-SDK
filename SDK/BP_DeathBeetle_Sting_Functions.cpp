#include "pch.h"
#include "SDK.h"

void ABP_DeathBeetle_Sting_C::UserConstructionScript(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathBeetle_Sting.BP_DeathBeetle_Sting_C.UserConstructionScript");

	FUserConstructionScript parms{};	

	ProcessEvent(fn, &parms);
}


#include "pch.h"
#include "SDK.h"

void ABlockoutToolsParent::RerunConstructionScript(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BlockoutToolsPlugin.BlockoutToolsParent.RerunConstructionScript");

	FRerunConstructionScript parms{};	

	ProcessEvent(fn, &parms);
}

void ABlockoutToolsParent::BlockoutSetMaterial(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BlockoutToolsPlugin.BlockoutToolsParent.BlockoutSetMaterial");

	FBlockoutSetMaterial parms{};	

	ProcessEvent(fn, &parms);
}


#include "pch.h"
#include "SDK.h"

void UWB_LoadingScreen_C::UpdateImage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_LoadingScreen.WB_LoadingScreen_C.UpdateImage");

	FUpdateImage parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_LoadingScreen_C::UpdateDesc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_LoadingScreen.WB_LoadingScreen_C.UpdateDesc");

	FUpdateDesc parms{};	

	ProcessEvent(fn, &parms);
}

int32_t UWB_LoadingScreen_C::GetNumImages(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_LoadingScreen.WB_LoadingScreen_C.GetNumImages");

	FGetNumImages parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UWB_LoadingScreen_C::GetNumDescs(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_LoadingScreen.WB_LoadingScreen_C.GetNumDescs");

	FGetNumDescs parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_LoadingScreen_C::OnUpdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_LoadingScreen.WB_LoadingScreen_C.OnUpdated");

	FOnUpdated parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_LoadingScreen_C::ExecuteUbergraph_WB_LoadingScreen(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_LoadingScreen.WB_LoadingScreen_C.ExecuteUbergraph_WB_LoadingScreen");

	FExecuteUbergraph_WB_LoadingScreen parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


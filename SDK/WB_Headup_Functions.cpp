#include "pch.h"
#include "SDK.h"

struct FSlateBrush UWB_Headup_C::GetCharacterClassIconTexture(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Headup.WB_Headup_C.GetCharacterClassIconTexture");

	FGetCharacterClassIconTexture parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWB_Headup_C::Get Visibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Headup.WB_Headup_C.Get Visibility");

	FGet Visibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_Headup_C::OnRefreshNickname(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Headup.WB_Headup_C.OnRefreshNickname");

	FOnRefreshNickname parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_Headup_C::ExecuteUbergraph_WB_Headup(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Headup.WB_Headup_C.ExecuteUbergraph_WB_Headup");

	FExecuteUbergraph_WB_Headup parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


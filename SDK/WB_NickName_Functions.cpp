#include "pch.h"
#include "SDK.h"

void UWB_NickName_C::OnNickNameStr(struct FString NewValue, struct FString OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_NickName.WB_NickName_C.OnNickNameStr");

	FOnNickNameStr parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UWB_NickName_C::SetNickNameFormat(struct FText FormatText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_NickName.WB_NickName_C.SetNickNameFormat");

	FSetNickNameFormat parms{};	
	parms.FormatText = FormatText;

	ProcessEvent(fn, &parms);
}

void UWB_NickName_C::ExecuteUbergraph_WB_NickName(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_NickName.WB_NickName_C.ExecuteUbergraph_WB_NickName");

	FExecuteUbergraph_WB_NickName parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


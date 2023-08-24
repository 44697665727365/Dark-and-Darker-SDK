#include "pch.h"
#include "SDK.h"

void UWB_GameSystemMessage_C::GetLocalizedString(struct FString Text, struct FString Namespace, struct FString Key, struct FString& LocalizedString){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_GameSystemMessage.WB_GameSystemMessage_C.GetLocalizedString");

	FGetLocalizedString parms{};	
	parms.Text = Text;
	parms.Namespace = Namespace;
	parms.Key = Key;
	parms.LocalizedString = LocalizedString;

	ProcessEvent(fn, &parms);
}

void UWB_GameSystemMessage_C::OnAnnounceEnd(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_GameSystemMessage.WB_GameSystemMessage_C.OnAnnounceEnd");

	FOnAnnounceEnd parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_GameSystemMessage_C::ShowMessage(struct FText Text, double Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_GameSystemMessage.WB_GameSystemMessage_C.ShowMessage");

	FShowMessage parms{};	
	parms.Text = Text;
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);
}

void UWB_GameSystemMessage_C::ExecuteUbergraph_WB_GameSystemMessage(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_GameSystemMessage.WB_GameSystemMessage_C.ExecuteUbergraph_WB_GameSystemMessage");

	FExecuteUbergraph_WB_GameSystemMessage parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


#include "pch.h"
#include "SDK.h"

void UWB_QuickVoiceSetting_C::PreConstruct(bool IsDesignTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.PreConstruct");

	FPreConstruct parms{};	
	parms.IsDesignTime = IsDesignTime;

	ProcessEvent(fn, &parms);
}

void UWB_QuickVoiceSetting_C::BndEvt__WB_QuickVoiceSetting_Proximity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.BndEvt__WB_QuickVoiceSetting_Proximity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	FBndEvt__WB_QuickVoiceSetting_Proximity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_QuickVoiceSetting_C::BndEvt__WB_QuickVoiceSetting_PartyOnly_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.BndEvt__WB_QuickVoiceSetting_PartyOnly_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	FBndEvt__WB_QuickVoiceSetting_PartyOnly_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_QuickVoiceSetting_C::OnbVoipGlobal(bool NewValue, bool OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.OnbVoipGlobal");

	FOnbVoipGlobal parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UWB_QuickVoiceSetting_C::ExecuteUbergraph_WB_QuickVoiceSetting(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.ExecuteUbergraph_WB_QuickVoiceSetting");

	FExecuteUbergraph_WB_QuickVoiceSetting parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


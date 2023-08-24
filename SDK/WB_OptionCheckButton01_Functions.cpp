#include "pch.h"
#include "SDK.h"

void UWB_OptionCheckButton01_C::UpdateButtonSize(double Scale X, double Scale Y){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.UpdateButtonSize");

	FUpdateButtonSize parms{};	
	parms.Scale X = Scale X;
	parms.Scale Y = Scale Y;

	ProcessEvent(fn, &parms);
}

void UWB_OptionCheckButton01_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_OptionCheckButton01_C::BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	FBndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_OptionCheckButton01_C::BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.BndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	FBndEvt__WB_OptionCheckButton01_Btn_Check_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_OptionCheckButton01_C::Init(struct UGameMenuOptionSlotWidget* InGameMenuOptionSlotWidget, int32_t InSlotIdx){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.Init");

	FInit parms{};	
	parms.InGameMenuOptionSlotWidget = InGameMenuOptionSlotWidget;
	parms.InSlotIdx = InSlotIdx;

	ProcessEvent(fn, &parms);
}

void UWB_OptionCheckButton01_C::OnClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.OnClicked");

	FOnClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_OptionCheckButton01_C::ExecuteUbergraph_WB_OptionCheckButton01(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_OptionCheckButton01.WB_OptionCheckButton01_C.ExecuteUbergraph_WB_OptionCheckButton01");

	FExecuteUbergraph_WB_OptionCheckButton01 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


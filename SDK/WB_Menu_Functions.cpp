#include "pch.h"
#include "SDK.h"

struct UWidget* UWB_Menu_C::BP_GetDesiredFocusTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Menu.WB_Menu_C.BP_GetDesiredFocusTarget");

	FBP_GetDesiredFocusTarget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_Menu_C::OnSendMsgVideoDisplayApplyNotify(bool IsApplyed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Menu.WB_Menu_C.OnSendMsgVideoDisplayApplyNotify");

	FOnSendMsgVideoDisplayApplyNotify parms{};	
	parms.IsApplyed = IsApplyed;

	ProcessEvent(fn, &parms);
}

void UWB_Menu_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Menu.WB_Menu_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_Menu_C::OnMenuPop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Menu.WB_Menu_C.OnMenuPop");

	FOnMenuPop parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_Menu_C::BndEvt__WB_Menu_OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Menu.WB_Menu_C.BndEvt__WB_Menu_OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	FBndEvt__WB_Menu_OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_Menu_C::OnApplyClicked(bool IsApply){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Menu.WB_Menu_C.OnApplyClicked");

	FOnApplyClicked parms{};	
	parms.IsApply = IsApply;

	ProcessEvent(fn, &parms);
}

void UWB_Menu_C::OnDisplayOptionApplyPopup(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Menu.WB_Menu_C.OnDisplayOptionApplyPopup");

	FOnDisplayOptionApplyPopup parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_Menu_C::UpdatePopupText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Menu.WB_Menu_C.UpdatePopupText");

	FUpdatePopupText parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_Menu_C::BndEvt__WB_Menu_CreditButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Menu.WB_Menu_C.BndEvt__WB_Menu_CreditButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	FBndEvt__WB_Menu_CreditButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_Menu_C::BP_OnActivated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Menu.WB_Menu_C.BP_OnActivated");

	FBP_OnActivated parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_Menu_C::BP_OnDeactivated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Menu.WB_Menu_C.BP_OnDeactivated");

	FBP_OnDeactivated parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_Menu_C::ExecuteUbergraph_WB_Menu(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_Menu.WB_Menu_C.ExecuteUbergraph_WB_Menu");

	FExecuteUbergraph_WB_Menu parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


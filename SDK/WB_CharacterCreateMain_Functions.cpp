#include "pch.h"
#include "SDK.h"

uint8_t UWB_CharacterCreateMain_C::Get_WB_Btn_LaunchShopURL_Visibility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.Get_WB_Btn_LaunchShopURL_Visibility");

	FGet_WB_Btn_LaunchShopURL_Visibility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UWB_CharacterCreateMain_C::DoCustomNavigation(uint8_t Navigation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.DoCustomNavigation");

	FDoCustomNavigation parms{};	
	parms.Navigation = Navigation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UWB_CharacterCreateMain_C::BP_GetDesiredFocusTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.BP_GetDesiredFocusTarget");

	FBP_GetDesiredFocusTarget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UWB_CharacterCreateMain_C::Get_ClassName_FirstLetter(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.Get_ClassName_FirstLetter");

	FGet_ClassName_FirstLetter parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_CharacterCreateMain_C::GetDescript(struct FPrimaryAssetId ID, struct FText& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.GetDescript");

	FGetDescript parms{};	
	parms.ID = ID;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterCreateMain_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CharacterCreateMain_C::BndEvt__WB_CharacterCreate_Btn_Gender_Man_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.BndEvt__WB_CharacterCreate_Btn_Gender_Man_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	FBndEvt__WB_CharacterCreate_Btn_Gender_Man_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CharacterCreateMain_C::BndEvt__WB_CharacterCreate_Btn_Gender_Woman_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.BndEvt__WB_CharacterCreate_Btn_Gender_Woman_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	FBndEvt__WB_CharacterCreate_Btn_Gender_Woman_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CharacterCreateMain_C::BndEvt__WB_CharacterCreateMain_WB_Btn_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.BndEvt__WB_CharacterCreateMain_WB_Btn_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	FBndEvt__WB_CharacterCreateMain_WB_Btn_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CharacterCreateMain_C::BndEvt__WB_CharacterCreateMain_WB_Btn_Confirm_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.BndEvt__WB_CharacterCreateMain_WB_Btn_Confirm_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	FBndEvt__WB_CharacterCreateMain_WB_Btn_Confirm_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CharacterCreateMain_C::ExecuteUbergraph_WB_CharacterCreateMain(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreateMain.WB_CharacterCreateMain_C.ExecuteUbergraph_WB_CharacterCreateMain");

	FExecuteUbergraph_WB_CharacterCreateMain parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


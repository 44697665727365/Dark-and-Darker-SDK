#include "pch.h"
#include "SDK.h"

struct UWidget* UWB_CharacterSelect_CharacterList_C::BP_GetDesiredFocusTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.BP_GetDesiredFocusTarget");

	FBP_GetDesiredFocusTarget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_CharacterSelect_CharacterList_C::OnMessageReceived_4E9C9CDB4FAD9424B435B5BAC35B9390(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.OnMessageReceived_4E9C9CDB4FAD9424B435B5BAC35B9390");

	FOnMessageReceived_4E9C9CDB4FAD9424B435B5BAC35B9390 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_CharacterList_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_CharacterList_C::OnPageNumber(int32_t CurrentPage, int32_t MaxPage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.OnPageNumber");

	FOnPageNumber parms{};	
	parms.CurrentPage = CurrentPage;
	parms.MaxPage = MaxPage;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_CharacterList_C::EventCharacterDeleteClicked(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.EventCharacterDeleteClicked");

	FEventCharacterDeleteClicked parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_CharacterList_C::BndEvt__WB_CharacterSelect_CharacterList_WB_CommonBtn_Arrow_K2Node_ComponentBoundEvent_2_OnVisibilityChangedEvent__DelegateSignature(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.BndEvt__WB_CharacterSelect_CharacterList_WB_CommonBtn_Arrow_K2Node_ComponentBoundEvent_2_OnVisibilityChangedEvent__DelegateSignature");

	FBndEvt__WB_CharacterSelect_CharacterList_WB_CommonBtn_Arrow_K2Node_ComponentBoundEvent_2_OnVisibilityChangedEvent__DelegateSignature parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_CharacterList_C::BndEvt__WB_CharacterSelect_CharacterList_WB_CommonBtn_Arrow_201_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature(uint8_t Invisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.BndEvt__WB_CharacterSelect_CharacterList_WB_CommonBtn_Arrow_201_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature");

	FBndEvt__WB_CharacterSelect_CharacterList_WB_CommonBtn_Arrow_201_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature parms{};	
	parms.Invisibility = Invisibility;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_CharacterList_C::CharacterListLeftButtonClicked(struct UCommonButtonBase* Button){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.CharacterListLeftButtonClicked");

	FCharacterListLeftButtonClicked parms{};	
	parms.Button = Button;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_CharacterList_C::CharacterListRightButtonClicked(struct UCommonButtonBase* Button){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.CharacterListRightButtonClicked");

	FCharacterListRightButtonClicked parms{};	
	parms.Button = Button;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_CharacterList_C::CharacterCreateButtonClicked(struct UCommonButtonBase* Button){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.CharacterCreateButtonClicked");

	FCharacterCreateButtonClicked parms{};	
	parms.Button = Button;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_CharacterList_C::_1(struct UCommonButtonBase* Button){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C._1");

	F_1 parms{};	
	parms.Button = Button;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterSelect_CharacterList_C::ExecuteUbergraph_WB_CharacterSelect_CharacterList(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.ExecuteUbergraph_WB_CharacterSelect_CharacterList");

	FExecuteUbergraph_WB_CharacterSelect_CharacterList parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


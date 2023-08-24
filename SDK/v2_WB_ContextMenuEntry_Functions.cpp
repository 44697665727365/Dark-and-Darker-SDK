#include "pch.h"
#include "SDK.h"

struct FText Uv2_WB_ContextMenuEntry_C::Get Text(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.Get Text");

	FGet Text parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void Uv2_WB_ContextMenuEntry_C::BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	FBndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void Uv2_WB_ContextMenuEntry_C::BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	FBndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void Uv2_WB_ContextMenuEntry_C::BndEvt__v2_WB_ContextMenuEntry_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.BndEvt__v2_WB_ContextMenuEntry_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	FBndEvt__v2_WB_ContextMenuEntry_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void Uv2_WB_ContextMenuEntry_C::ExecuteUbergraph_v2_WB_ContextMenuEntry(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.ExecuteUbergraph_v2_WB_ContextMenuEntry");

	FExecuteUbergraph_v2_WB_ContextMenuEntry parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


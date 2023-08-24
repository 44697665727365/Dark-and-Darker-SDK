#include "pch.h"
#include "SDK.h"

struct FEventReply UWB_ContextMenu_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_ContextMenu.WB_ContextMenu_C.OnMouseButtonDown");

	FOnMouseButtonDown parms{};	
	parms.MyGeometry = MyGeometry;
	parms.MouseEvent = MouseEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_ContextMenu_C::BndEvt__WB_ContextMenu_ListView_ContextOptions_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(struct UObject* Item, struct UUserWidget* Widget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_ContextMenu.WB_ContextMenu_C.BndEvt__WB_ContextMenu_ListView_ContextOptions_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature");

	FBndEvt__WB_ContextMenu_ListView_ContextOptions_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature parms{};	
	parms.Item = Item;
	parms.Widget = Widget;

	ProcessEvent(fn, &parms);
}

void UWB_ContextMenu_C::ExecuteUbergraph_WB_ContextMenu(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_ContextMenu.WB_ContextMenu_C.ExecuteUbergraph_WB_ContextMenu");

	FExecuteUbergraph_WB_ContextMenu parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


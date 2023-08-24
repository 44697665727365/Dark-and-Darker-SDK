#include "pch.h"
#include "SDK.h"

struct UWidget* UWB_MenuOptionSlot_ComboBox_C::GetPrimaryGamepadFocusWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.GetPrimaryGamepadFocusWidget");

	FGetPrimaryGamepadFocusWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_MenuOptionSlot_ComboBox_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionSlot_ComboBox_C::OnSelectedChanged(struct FString SelectedItem, enum class ESelectInfo SelectionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.OnSelectedChanged");

	FOnSelectedChanged parms{};	
	parms.SelectedItem = SelectedItem;
	parms.SelectionType = SelectionType;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionSlot_ComboBox_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.OnMouseEnter");

	FOnMouseEnter parms{};	
	parms.MyGeometry = MyGeometry;
	parms.MouseEvent = MouseEvent;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionSlot_ComboBox_C::ExecuteUbergraph_WB_MenuOptionSlot_ComboBox(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.ExecuteUbergraph_WB_MenuOptionSlot_ComboBox");

	FExecuteUbergraph_WB_MenuOptionSlot_ComboBox parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


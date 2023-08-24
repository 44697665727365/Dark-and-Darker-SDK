#include "pch.h"
#include "SDK.h"

struct UWidget* UWB_MenuOptionSlot_Slider_C::GetPrimaryGamepadFocusWidget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.GetPrimaryGamepadFocusWidget");

	FGetPrimaryGamepadFocusWidget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_MenuOptionSlot_Slider_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionSlot_Slider_C::UpdateSliderValue(float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.UpdateSliderValue");

	FUpdateSliderValue parms{};	
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionSlot_Slider_C::GetCurrentOptionValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.GetCurrentOptionValue");

	FGetCurrentOptionValue parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionSlot_Slider_C::GetCurrentOptionValueByPercent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.GetCurrentOptionValueByPercent");

	FGetCurrentOptionValueByPercent parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionSlot_Slider_C::OnChangeSliderValue(float Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.OnChangeSliderValue");

	FOnChangeSliderValue parms{};	
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionSlot_Slider_C::UpdateSliderMinMaxValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.UpdateSliderMinMaxValue");

	FUpdateSliderMinMaxValue parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionSlot_Slider_C::OnTextCommited(struct FText& Text, enum class ETextCommit CommitMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.OnTextCommited");

	FOnTextCommited parms{};	
	parms.Text = Text;
	parms.CommitMethod = CommitMethod;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionSlot_Slider_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.OnMouseEnter");

	FOnMouseEnter parms{};	
	parms.MyGeometry = MyGeometry;
	parms.MouseEvent = MouseEvent;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionSlot_Slider_C::ExecuteUbergraph_WB_MenuOptionSlot_Slider(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionSlot_Slider.WB_MenuOptionSlot_Slider_C.ExecuteUbergraph_WB_MenuOptionSlot_Slider");

	FExecuteUbergraph_WB_MenuOptionSlot_Slider parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


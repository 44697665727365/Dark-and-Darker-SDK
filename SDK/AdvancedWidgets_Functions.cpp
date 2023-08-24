#include "pch.h"
#include "SDK.h"

void URadialSlider::SetValueTags(struct TArray<float>& InValueTags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetValueTags");

	FSetValueTags parms{};	
	parms.InValueTags = InValueTags;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetValue(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetValue");

	FSetValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetUseVerticalDrag(bool InUseVerticalDrag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetUseVerticalDrag");

	FSetUseVerticalDrag parms{};	
	parms.InUseVerticalDrag = InUseVerticalDrag;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetStepSize(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetStepSize");

	FSetStepSize parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetSliderRange(struct FRuntimeFloatCurve& InSliderRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetSliderRange");

	FSetSliderRange parms{};	
	parms.InSliderRange = InSliderRange;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetSliderProgressColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetSliderProgressColor");

	FSetSliderProgressColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetSliderHandleStartAngle(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle");

	FSetSliderHandleStartAngle parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetSliderHandleEndAngle(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle");

	FSetSliderHandleEndAngle parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetSliderHandleColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetSliderHandleColor");

	FSetSliderHandleColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetSliderBarColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetSliderBarColor");

	FSetSliderBarColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetShowSliderHandle(bool InShowSliderHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetShowSliderHandle");

	FSetShowSliderHandle parms{};	
	parms.InShowSliderHandle = InShowSliderHandle;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetShowSliderHand(bool InShowSliderHand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetShowSliderHand");

	FSetShowSliderHand parms{};	
	parms.InShowSliderHand = InShowSliderHand;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetLocked(bool InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetLocked");

	FSetLocked parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetHandStartEndRatio(struct FVector2D InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetHandStartEndRatio");

	FSetHandStartEndRatio parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetCustomDefaultValue(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetCustomDefaultValue");

	FSetCustomDefaultValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetCenterBackgroundColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetCenterBackgroundColor");

	FSetCenterBackgroundColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void URadialSlider::SetAngularOffset(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.SetAngularOffset");

	FSetAngularOffset parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

float URadialSlider::GetValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.GetValue");

	FGetValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float URadialSlider::GetNormalizedSliderHandlePosition(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition");

	FGetNormalizedSliderHandlePosition parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float URadialSlider::GetCustomDefaultValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AdvancedWidgets.RadialSlider.GetCustomDefaultValue");

	FGetCustomDefaultValue parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


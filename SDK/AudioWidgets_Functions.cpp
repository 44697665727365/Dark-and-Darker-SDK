#include "pch.h"
#include "SDK.h"

void UAudioMeter::SetMeterValueColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetMeterValueColor");

	FSetMeterValueColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioMeter::SetMeterScaleLabelColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetMeterScaleLabelColor");

	FSetMeterScaleLabelColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioMeter::SetMeterScaleColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetMeterScaleColor");

	FSetMeterScaleColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioMeter::SetMeterPeakColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetMeterPeakColor");

	FSetMeterPeakColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioMeter::SetMeterClippingColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetMeterClippingColor");

	FSetMeterClippingColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioMeter::SetMeterChannelInfo(struct TArray<struct FMeterChannelInfo>& InMeterChannelInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetMeterChannelInfo");

	FSetMeterChannelInfo parms{};	
	parms.InMeterChannelInfo = InMeterChannelInfo;

	ProcessEvent(fn, &parms);
}

void UAudioMeter::SetMeterBackgroundColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetMeterBackgroundColor");

	FSetMeterBackgroundColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioMeter::SetBackgroundColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetBackgroundColor");

	FSetBackgroundColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FMeterChannelInfo> UAudioMeter::GetMeterChannelInfo__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature");

	FGetMeterChannelInfo__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FMeterChannelInfo> UAudioMeter::GetMeterChannelInfo(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.GetMeterChannelInfo");

	FGetMeterChannelInfo parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAudioRadialSlider::SetWidgetLayout(enum class EAudioRadialSliderLayout InLayout){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetWidgetLayout");

	FSetWidgetLayout parms{};	
	parms.InLayout = InLayout;

	ProcessEvent(fn, &parms);
}

void UAudioRadialSlider::SetValueTextReadOnly(bool bIsReadOnly){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetValueTextReadOnly");

	FSetValueTextReadOnly parms{};	
	parms.bIsReadOnly = bIsReadOnly;

	ProcessEvent(fn, &parms);
}

void UAudioRadialSlider::SetUnitsTextReadOnly(bool bIsReadOnly){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly");

	FSetUnitsTextReadOnly parms{};	
	parms.bIsReadOnly = bIsReadOnly;

	ProcessEvent(fn, &parms);
}

void UAudioRadialSlider::SetUnitsText(struct FText Units){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetUnitsText");

	FSetUnitsText parms{};	
	parms.Units = Units;

	ProcessEvent(fn, &parms);
}

void UAudioRadialSlider::SetTextLabelBackgroundColor(struct FSlateColor InColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor");

	FSetTextLabelBackgroundColor parms{};	
	parms.InColor = InColor;

	ProcessEvent(fn, &parms);
}

void UAudioRadialSlider::SetSliderThickness(float InThickness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetSliderThickness");

	FSetSliderThickness parms{};	
	parms.InThickness = InThickness;

	ProcessEvent(fn, &parms);
}

void UAudioRadialSlider::SetSliderProgressColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetSliderProgressColor");

	FSetSliderProgressColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioRadialSlider::SetSliderBarColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetSliderBarColor");

	FSetSliderBarColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioRadialSlider::SetShowUnitsText(bool bShowUnitsText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetShowUnitsText");

	FSetShowUnitsText parms{};	
	parms.bShowUnitsText = bShowUnitsText;

	ProcessEvent(fn, &parms);
}

void UAudioRadialSlider::SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover");

	FSetShowLabelOnlyOnHover parms{};	
	parms.bShowLabelOnlyOnHover = bShowLabelOnlyOnHover;

	ProcessEvent(fn, &parms);
}

void UAudioRadialSlider::SetOutputRange(struct FVector2D InOutputRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetOutputRange");

	FSetOutputRange parms{};	
	parms.InOutputRange = InOutputRange;

	ProcessEvent(fn, &parms);
}

void UAudioRadialSlider::SetHandStartEndRatio(struct FVector2D InHandStartEndRatio){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetHandStartEndRatio");

	FSetHandStartEndRatio parms{};	
	parms.InHandStartEndRatio = InHandStartEndRatio;

	ProcessEvent(fn, &parms);
}

void UAudioRadialSlider::SetCenterBackgroundColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor");

	FSetCenterBackgroundColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

float UAudioRadialSlider::GetSliderValue(float OutputValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.GetSliderValue");

	FGetSliderValue parms{};	
	parms.OutputValue = OutputValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAudioRadialSlider::GetOutputValue(float InSliderValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.GetOutputValue");

	FGetOutputValue parms{};	
	parms.InSliderValue = InSliderValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAudioSliderBase::SetWidgetBackgroundColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor");

	FSetWidgetBackgroundColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioSliderBase::SetValueTextReadOnly(bool bIsReadOnly){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetValueTextReadOnly");

	FSetValueTextReadOnly parms{};	
	parms.bIsReadOnly = bIsReadOnly;

	ProcessEvent(fn, &parms);
}

void UAudioSliderBase::SetUnitsTextReadOnly(bool bIsReadOnly){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly");

	FSetUnitsTextReadOnly parms{};	
	parms.bIsReadOnly = bIsReadOnly;

	ProcessEvent(fn, &parms);
}

void UAudioSliderBase::SetUnitsText(struct FText Units){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetUnitsText");

	FSetUnitsText parms{};	
	parms.Units = Units;

	ProcessEvent(fn, &parms);
}

void UAudioSliderBase::SetTextLabelBackgroundColor(struct FSlateColor InColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor");

	FSetTextLabelBackgroundColor parms{};	
	parms.InColor = InColor;

	ProcessEvent(fn, &parms);
}

void UAudioSliderBase::SetSliderThumbColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetSliderThumbColor");

	FSetSliderThumbColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioSliderBase::SetSliderBarColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetSliderBarColor");

	FSetSliderBarColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioSliderBase::SetSliderBackgroundColor(struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetSliderBackgroundColor");

	FSetSliderBackgroundColor parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioSliderBase::SetShowUnitsText(bool bShowUnitsText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetShowUnitsText");

	FSetShowUnitsText parms{};	
	parms.bShowUnitsText = bShowUnitsText;

	ProcessEvent(fn, &parms);
}

void UAudioSliderBase::SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover");

	FSetShowLabelOnlyOnHover parms{};	
	parms.bShowLabelOnlyOnHover = bShowLabelOnlyOnHover;

	ProcessEvent(fn, &parms);
}

float UAudioSliderBase::GetSliderValue(float OutputValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.GetSliderValue");

	FGetSliderValue parms{};	
	parms.OutputValue = OutputValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAudioSliderBase::GetOutputValue(float InSliderValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.GetOutputValue");

	FGetOutputValue parms{};	
	parms.InSliderValue = InSliderValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAudioSliderBase::GetLinValue(float OutputValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.GetLinValue");

	FGetLinValue parms{};	
	parms.OutputValue = OutputValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


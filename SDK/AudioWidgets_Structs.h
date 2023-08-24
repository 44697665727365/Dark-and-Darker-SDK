#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function AudioWidgets.AudioMeter.SetBackgroundColor
struct FSetBackgroundColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AudioWidgets.OnAudioRadialSliderValueChangedEvent__DelegateSignature
struct FOnAudioRadialSliderValueChangedEvent__DelegateSignature
{
	float Value;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioMeter.SetMeterValueColor
struct FSetMeterValueColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AudioWidgets.OnFloatValueChangedEvent__DelegateSignature
struct FOnFloatValueChangedEvent__DelegateSignature
{
	float Value;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
struct FGetMeterChannelInfo__DelegateSignature
{
	struct TArray<struct FMeterChannelInfo> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioMeter.SetMeterBackgroundColor
struct FSetMeterBackgroundColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioSliderBase.GetLinValue
struct FGetLinValue
{
	float OutputValue;  // 0x0 (0x0)
	float ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function AudioWidgets.AudioRadialSlider.SetOutputRange
struct FSetOutputRange
{
	struct FVector2D InOutputRange;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioMeter.GetMeterChannelInfo
struct FGetMeterChannelInfo
{
	struct TArray<struct FMeterChannelInfo> ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AudioWidgets.MeterChannelInfo
struct FMeterChannelInfo
{
	float MeterValue;  // 0x0 (0x0)
	float PeakValue;  // 0x4 (0x4)
	float ClippingValue;  // 0x8 (0x8)


}; 
 
 // Function AudioWidgets.AudioMeter.SetMeterChannelInfo
struct FSetMeterChannelInfo
{
	struct TArray<struct FMeterChannelInfo> InMeterChannelInfo;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioMeter.SetMeterClippingColor
struct FSetMeterClippingColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
struct FSetHandStartEndRatio
{
	struct FVector2D InHandStartEndRatio;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioMeter.SetMeterPeakColor
struct FSetMeterPeakColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioSliderBase.SetValueTextReadOnly
struct FSetValueTextReadOnly
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsReadOnly : 1;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioMeter.SetMeterScaleColor
struct FSetMeterScaleColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
struct FSetShowLabelOnlyOnHover
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bShowLabelOnlyOnHover : 1;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioMeter.SetMeterScaleLabelColor
struct FSetMeterScaleLabelColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AudioWidgets.AudioMeterStyle
// Size: 0x4D0(Inherited: 0x8)
struct FAudioMeterStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush MeterValueImage;  // 0x10 (0x10)
	struct FSlateBrush BackgroundImage;  // 0xE0 (0xE0)
	struct FSlateBrush MeterBackgroundImage;  // 0x1B0 (0x1B0)
	struct FSlateBrush MeterValueBackgroundImage;  // 0x280 (0x280)
	struct FSlateBrush MeterPeakImage;  // 0x350 (0x350)
	struct FVector2D MeterSize;  // 0x420 (0x420)
	struct FVector2D MeterPadding;  // 0x430 (0x430)
	float MeterValuePadding;  // 0x440 (0x440)
	float PeakValueWidth;  // 0x444 (0x444)
	struct FVector2D ValueRangeDb;  // 0x448 (0x448)
	char pad_1112_1 : 7;  // 0x458 (0x458)
	bool bShowScale : 1;  // 0x458 (0x458)
	char pad_1113_1 : 7;  // 0x459 (0x459)
	bool bScaleSide : 1;  // 0x459 (0x459)
	char pad_1114[2];  // 0x45A (0x45A)
	float ScaleHashOffset;  // 0x45C (0x45C)
	float ScaleHashWidth;  // 0x460 (0x460)
	float ScaleHashHeight;  // 0x464 (0x464)
	int32_t DecibelsPerHash;  // 0x468 (0x468)
	char pad_1132[4];  // 0x46C (0x46C)
	struct FSlateFontInfo Font;  // 0x470 (0x470)
	char pad_1224[8];  // 0x4C8 (0x4C8)


}; 
 
 // ScriptStruct AudioWidgets.AudioTextBoxStyle
// Size: 0x100(Inherited: 0x8)
struct FAudioTextBoxStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush BackgroundImage;  // 0x10 (0x10)
	struct FSlateColor BackgroundColor;  // 0xE0 (0xE0)
	char pad_244[12];  // 0xF4 (0xF4)


}; 
 
 // ScriptStruct AudioWidgets.AudioSliderStyle
// Size: 0x750(Inherited: 0x8)
struct FAudioSliderStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSliderStyle SliderStyle;  // 0x10 (0x10)
	struct FAudioTextBoxStyle TextBoxStyle;  // 0x510 (0x510)
	struct FSlateBrush WidgetBackgroundImage;  // 0x610 (0x610)
	struct FSlateColor SliderBackgroundColor;  // 0x6E0 (0x6E0)
	char pad_1780[4];  // 0x6F4 (0x6F4)
	struct FVector2D SliderBackgroundSize;  // 0x6F8 (0x6F8)
	float LabelPadding;  // 0x708 (0x708)
	struct FSlateColor SliderBarColor;  // 0x70C (0x70C)
	struct FSlateColor SliderThumbColor;  // 0x720 (0x720)
	struct FSlateColor WidgetBackgroundColor;  // 0x734 (0x734)
	char pad_1864[8];  // 0x748 (0x748)


}; 
 
 // ScriptStruct AudioWidgets.AudioRadialSliderStyle
// Size: 0x160(Inherited: 0x8)
struct FAudioRadialSliderStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FAudioTextBoxStyle TextBoxStyle;  // 0x10 (0x10)
	struct FSlateColor CenterBackgroundColor;  // 0x110 (0x110)
	struct FSlateColor SliderBarColor;  // 0x124 (0x124)
	struct FSlateColor SliderProgressColor;  // 0x138 (0x138)
	float LabelPadding;  // 0x14C (0x14C)
	float DefaultSliderRadius;  // 0x150 (0x150)
	char pad_340[12];  // 0x154 (0x154)


}; 
 
 // Function AudioWidgets.AudioSliderBase.GetOutputValue
struct FGetOutputValue
{
	float InSliderValue;  // 0x0 (0x0)
	float ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function AudioWidgets.AudioSliderBase.GetSliderValue
struct FGetSliderValue
{
	float OutputValue;  // 0x0 (0x0)
	float ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
struct FSetCenterBackgroundColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioSliderBase.SetShowUnitsText
struct FSetShowUnitsText
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bShowUnitsText : 1;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioSliderBase.SetSliderBarColor
struct FSetSliderBarColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioRadialSlider.SetSliderProgressColor
struct FSetSliderProgressColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioRadialSlider.SetSliderThickness
struct FSetSliderThickness
{
	float InThickness;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioSliderBase.SetUnitsText
struct FSetUnitsText
{
	struct FText Units;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
struct FSetTextLabelBackgroundColor
{
	struct FSlateColor InColor;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
struct FSetUnitsTextReadOnly
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsReadOnly : 1;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioRadialSlider.SetWidgetLayout
struct FSetWidgetLayout
{
	enum class EAudioRadialSliderLayout InLayout;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
struct FSetSliderBackgroundColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioSliderBase.SetSliderThumbColor
struct FSetSliderThumbColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 // Function AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
struct FSetWidgetBackgroundColor
{
	struct FLinearColor InValue;  // 0x0 (0x0)


}; 
 
 
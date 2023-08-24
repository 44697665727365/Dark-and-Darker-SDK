#pragma once 
#include <AudioWidgets_Structs.h>
 
 
 
// Class AudioWidgets.AudioFrequencySlider
// Size: 0x9B0(Inherited: 0x9A0)
struct UAudioFrequencySlider : UAudioSliderBase
{
	struct FVector2D OutputRange;  // 0x9A0 (0x9A0)


}; 
 
 


// Class AudioWidgets.AudioMeter
// Size: 0x6D0(Inherited: 0x150)
struct UAudioMeter : UWidget
{
	struct TArray<struct FMeterChannelInfo> MeterChannelInfo;  // 0x150 (0x150)
	struct FDelegate MeterChannelInfoDelegate;  // 0x160 (0x160)
	struct FAudioMeterStyle WidgetStyle;  // 0x170 (0x170)
	enum class EOrientation Orientation;  // 0x640 (0x640)
	char pad_1601[3];  // 0x641 (0x641)
	struct FLinearColor BackgroundColor;  // 0x644 (0x644)
	struct FLinearColor MeterBackgroundColor;  // 0x654 (0x654)
	struct FLinearColor MeterValueColor;  // 0x664 (0x664)
	struct FLinearColor MeterPeakColor;  // 0x674 (0x674)
	struct FLinearColor MeterClippingColor;  // 0x684 (0x684)
	struct FLinearColor MeterScaleColor;  // 0x694 (0x694)
	struct FLinearColor MeterScaleLabelColor;  // 0x6A4 (0x6A4)
	char pad_1716[28];  // 0x6B4 (0x6B4)


	void SetMeterValueColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterValueColor
	void SetMeterScaleLabelColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterScaleLabelColor
	void SetMeterScaleColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterScaleColor
	void SetMeterPeakColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterPeakColor
	void SetMeterClippingColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterClippingColor
	void SetMeterChannelInfo(struct TArray<struct FMeterChannelInfo>& InMeterChannelInfo); // Function AudioWidgets.AudioMeter.SetMeterChannelInfo
	void SetMeterBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterBackgroundColor
	void SetBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetBackgroundColor
	struct TArray<struct FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature(); // DelegateFunction AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
	struct TArray<struct FMeterChannelInfo> GetMeterChannelInfo(); // Function AudioWidgets.AudioMeter.GetMeterChannelInfo
}; 
 
 


// Class AudioWidgets.AudioFrequencyRadialSlider
// Size: 0x370(Inherited: 0x370)
struct UAudioFrequencyRadialSlider : UAudioRadialSlider
{


}; 
 
 


// Class AudioWidgets.AudioVolumeRadialSlider
// Size: 0x370(Inherited: 0x370)
struct UAudioVolumeRadialSlider : UAudioRadialSlider
{


}; 
 
 


// Class AudioWidgets.AudioRadialSlider
// Size: 0x370(Inherited: 0x150)
struct UAudioRadialSlider : UWidget
{
	float Value;  // 0x150 (0x150)
	struct FDelegate ValueDelegate;  // 0x154 (0x154)
	enum class EAudioRadialSliderLayout WidgetLayout;  // 0x164 (0x164)
	char pad_357[3];  // 0x165 (0x165)
	struct FLinearColor CenterBackgroundColor;  // 0x168 (0x168)
	struct FLinearColor SliderProgressColor;  // 0x178 (0x178)
	struct FLinearColor SliderBarColor;  // 0x188 (0x188)
	struct FVector2D HandStartEndRatio;  // 0x198 (0x198)
	struct FText UnitsText;  // 0x1A8 (0x1A8)
	struct FLinearColor TextLabelBackgroundColor;  // 0x1C0 (0x1C0)
	char pad_464_1 : 7;  // 0x1D0 (0x1D0)
	bool ShowLabelOnlyOnHover : 1;  // 0x1D0 (0x1D0)
	char pad_465_1 : 7;  // 0x1D1 (0x1D1)
	bool ShowUnitsText : 1;  // 0x1D1 (0x1D1)
	char pad_466_1 : 7;  // 0x1D2 (0x1D2)
	bool IsUnitsTextReadOnly : 1;  // 0x1D2 (0x1D2)
	char pad_467_1 : 7;  // 0x1D3 (0x1D3)
	bool IsValueTextReadOnly : 1;  // 0x1D3 (0x1D3)
	float SliderThickness;  // 0x1D4 (0x1D4)
	struct FVector2D OutputRange;  // 0x1D8 (0x1D8)
	struct FMulticastInlineDelegate OnValueChanged;  // 0x1E8 (0x1E8)
	char pad_504[376];  // 0x1F8 (0x1F8)


	void SetWidgetLayout(enum class EAudioRadialSliderLayout InLayout); // Function AudioWidgets.AudioRadialSlider.SetWidgetLayout
	void SetValueTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
	void SetUnitsTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
	void SetUnitsText(struct FText Units); // Function AudioWidgets.AudioRadialSlider.SetUnitsText
	void SetTextLabelBackgroundColor(struct FSlateColor InColor); // Function AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
	void SetSliderThickness(float InThickness); // Function AudioWidgets.AudioRadialSlider.SetSliderThickness
	void SetSliderProgressColor(struct FLinearColor InValue); // Function AudioWidgets.AudioRadialSlider.SetSliderProgressColor
	void SetSliderBarColor(struct FLinearColor InValue); // Function AudioWidgets.AudioRadialSlider.SetSliderBarColor
	void SetShowUnitsText(bool bShowUnitsText); // Function AudioWidgets.AudioRadialSlider.SetShowUnitsText
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover); // Function AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
	void SetOutputRange(struct FVector2D InOutputRange); // Function AudioWidgets.AudioRadialSlider.SetOutputRange
	void SetHandStartEndRatio(struct FVector2D InHandStartEndRatio); // Function AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
	void SetCenterBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
	float GetSliderValue(float OutputValue); // Function AudioWidgets.AudioRadialSlider.GetSliderValue
	float GetOutputValue(float InSliderValue); // Function AudioWidgets.AudioRadialSlider.GetOutputValue
}; 
 
 


// Class AudioWidgets.AudioVolumeSlider
// Size: 0x9B0(Inherited: 0x9B0)
struct UAudioVolumeSlider : UAudioSlider
{


}; 
 
 


// Class AudioWidgets.AudioSliderBase
// Size: 0x9A0(Inherited: 0x150)
struct UAudioSliderBase : UWidget
{
	float Value;  // 0x150 (0x150)
	char pad_340[4];  // 0x154 (0x154)
	struct FText UnitsText;  // 0x158 (0x158)
	struct FLinearColor TextLabelBackgroundColor;  // 0x170 (0x170)
	struct FDelegate TextLabelBackgroundColorDelegate;  // 0x180 (0x180)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool ShowLabelOnlyOnHover : 1;  // 0x190 (0x190)
	char pad_401_1 : 7;  // 0x191 (0x191)
	bool ShowUnitsText : 1;  // 0x191 (0x191)
	char pad_402_1 : 7;  // 0x192 (0x192)
	bool IsUnitsTextReadOnly : 1;  // 0x192 (0x192)
	char pad_403_1 : 7;  // 0x193 (0x193)
	bool IsValueTextReadOnly : 1;  // 0x193 (0x193)
	struct FDelegate ValueDelegate;  // 0x194 (0x194)
	struct FLinearColor SliderBackgroundColor;  // 0x1A4 (0x1A4)
	struct FDelegate SliderBackgroundColorDelegate;  // 0x1B4 (0x1B4)
	struct FLinearColor SliderBarColor;  // 0x1C4 (0x1C4)
	struct FDelegate SliderBarColorDelegate;  // 0x1D4 (0x1D4)
	struct FLinearColor SliderThumbColor;  // 0x1E4 (0x1E4)
	struct FDelegate SliderThumbColorDelegate;  // 0x1F4 (0x1F4)
	struct FLinearColor WidgetBackgroundColor;  // 0x204 (0x204)
	struct FDelegate WidgetBackgroundColorDelegate;  // 0x214 (0x214)
	enum class EOrientation Orientation;  // 0x224 (0x224)
	char pad_549[3];  // 0x225 (0x225)
	struct FMulticastInlineDelegate OnValueChanged;  // 0x228 (0x228)
	char pad_568[1896];  // 0x238 (0x238)


	void SetWidgetBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
	void SetValueTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioSliderBase.SetValueTextReadOnly
	void SetUnitsTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
	void SetUnitsText(struct FText Units); // Function AudioWidgets.AudioSliderBase.SetUnitsText
	void SetTextLabelBackgroundColor(struct FSlateColor InColor); // Function AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
	void SetSliderThumbColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetSliderThumbColor
	void SetSliderBarColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetSliderBarColor
	void SetSliderBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
	void SetShowUnitsText(bool bShowUnitsText); // Function AudioWidgets.AudioSliderBase.SetShowUnitsText
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover); // Function AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
	float GetSliderValue(float OutputValue); // Function AudioWidgets.AudioSliderBase.GetSliderValue
	float GetOutputValue(float InSliderValue); // Function AudioWidgets.AudioSliderBase.GetOutputValue
	float GetLinValue(float OutputValue); // Function AudioWidgets.AudioSliderBase.GetLinValue
}; 
 
 


// Class AudioWidgets.AudioSlider
// Size: 0x9B0(Inherited: 0x9A0)
struct UAudioSlider : UAudioSliderBase
{
	struct TWeakObjectPtr<UCurveFloat> LinToOutputCurve;  // 0x9A0 (0x9A0)
	struct TWeakObjectPtr<UCurveFloat> OutputToLinCurve;  // 0x9A8 (0x9A8)


}; 
 
 



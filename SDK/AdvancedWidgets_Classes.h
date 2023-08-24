#pragma once 
#include <AdvancedWidgets_Structs.h>
 
 
 
// Class AdvancedWidgets.RadialSlider
// Size: 0x7E0(Inherited: 0x150)
struct URadialSlider : UWidget
{
	float Value;  // 0x150 (0x150)
	struct FDelegate ValueDelegate;  // 0x154 (0x154)
	char pad_356_1 : 7;  // 0x164 (0x164)
	bool bUseCustomDefaultValue : 1;  // 0x164 (0x164)
	char pad_357[3];  // 0x165 (0x165)
	float CustomDefaultValue;  // 0x168 (0x168)
	char pad_364[4];  // 0x16C (0x16C)
	struct FRuntimeFloatCurve SliderRange;  // 0x170 (0x170)
	struct TArray<float> ValueTags;  // 0x1F8 (0x1F8)
	float SliderHandleStartAngle;  // 0x208 (0x208)
	float SliderHandleEndAngle;  // 0x20C (0x20C)
	float AngularOffset;  // 0x210 (0x210)
	char pad_532[4];  // 0x214 (0x214)
	struct FVector2D HandStartEndRatio;  // 0x218 (0x218)
	char pad_552[8];  // 0x228 (0x228)
	struct FSliderStyle WidgetStyle;  // 0x230 (0x230)
	struct FLinearColor SliderBarColor;  // 0x730 (0x730)
	struct FLinearColor SliderProgressColor;  // 0x740 (0x740)
	struct FLinearColor SliderHandleColor;  // 0x750 (0x750)
	struct FLinearColor CenterBackgroundColor;  // 0x760 (0x760)
	char pad_1904_1 : 7;  // 0x770 (0x770)
	bool Locked : 1;  // 0x770 (0x770)
	char pad_1905_1 : 7;  // 0x771 (0x771)
	bool MouseUsesStep : 1;  // 0x771 (0x771)
	char pad_1906_1 : 7;  // 0x772 (0x772)
	bool RequiresControllerLock : 1;  // 0x772 (0x772)
	char pad_1907[1];  // 0x773 (0x773)
	float StepSize;  // 0x774 (0x774)
	char pad_1912_1 : 7;  // 0x778 (0x778)
	bool IsFocusable : 1;  // 0x778 (0x778)
	char pad_1913_1 : 7;  // 0x779 (0x779)
	bool UseVerticalDrag : 1;  // 0x779 (0x779)
	char pad_1914_1 : 7;  // 0x77A (0x77A)
	bool ShowSliderHandle : 1;  // 0x77A (0x77A)
	char pad_1915_1 : 7;  // 0x77B (0x77B)
	bool ShowSliderHand : 1;  // 0x77B (0x77B)
	char pad_1916[4];  // 0x77C (0x77C)
	struct FMulticastInlineDelegate OnMouseCaptureBegin;  // 0x780 (0x780)
	struct FMulticastInlineDelegate OnMouseCaptureEnd;  // 0x790 (0x790)
	struct FMulticastInlineDelegate OnControllerCaptureBegin;  // 0x7A0 (0x7A0)
	struct FMulticastInlineDelegate OnControllerCaptureEnd;  // 0x7B0 (0x7B0)
	struct FMulticastInlineDelegate OnValueChanged;  // 0x7C0 (0x7C0)
	char pad_2000[16];  // 0x7D0 (0x7D0)


	void SetValueTags(struct TArray<float>& InValueTags); // Function AdvancedWidgets.RadialSlider.SetValueTags
	void SetValue(float InValue); // Function AdvancedWidgets.RadialSlider.SetValue
	void SetUseVerticalDrag(bool InUseVerticalDrag); // Function AdvancedWidgets.RadialSlider.SetUseVerticalDrag
	void SetStepSize(float InValue); // Function AdvancedWidgets.RadialSlider.SetStepSize
	void SetSliderRange(struct FRuntimeFloatCurve& InSliderRange); // Function AdvancedWidgets.RadialSlider.SetSliderRange
	void SetSliderProgressColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetSliderProgressColor
	void SetSliderHandleStartAngle(float InValue); // Function AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle
	void SetSliderHandleEndAngle(float InValue); // Function AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetSliderHandleColor
	void SetSliderBarColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetSliderBarColor
	void SetShowSliderHandle(bool InShowSliderHandle); // Function AdvancedWidgets.RadialSlider.SetShowSliderHandle
	void SetShowSliderHand(bool InShowSliderHand); // Function AdvancedWidgets.RadialSlider.SetShowSliderHand
	void SetLocked(bool InValue); // Function AdvancedWidgets.RadialSlider.SetLocked
	void SetHandStartEndRatio(struct FVector2D InValue); // Function AdvancedWidgets.RadialSlider.SetHandStartEndRatio
	void SetCustomDefaultValue(float InValue); // Function AdvancedWidgets.RadialSlider.SetCustomDefaultValue
	void SetCenterBackgroundColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetCenterBackgroundColor
	void SetAngularOffset(float InValue); // Function AdvancedWidgets.RadialSlider.SetAngularOffset
	float GetValue(); // Function AdvancedWidgets.RadialSlider.GetValue
	float GetNormalizedSliderHandlePosition(); // Function AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition
	float GetCustomDefaultValue(); // Function AdvancedWidgets.RadialSlider.GetCustomDefaultValue
}; 
 
 



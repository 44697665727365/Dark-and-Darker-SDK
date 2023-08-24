#include "pch.h"
#include "SDK.h"

struct UWidget* UWB_MenuOptionsControls_C::DoCustomNavigation_Language(uint8_t Navigation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.DoCustomNavigation_Language");

	FDoCustomNavigation_Language parms{};	
	parms.Navigation = Navigation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWidget* UWB_MenuOptionsControls_C::BP_GetDesiredFocusTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BP_GetDesiredFocusTarget");

	FBP_GetDesiredFocusTarget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_MenuOptionsControls_C::OnOptionWidgetHovered(struct UWidgetSwitcher* Btn Switcher){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnOptionWidgetHovered");

	FOnOptionWidgetHovered parms{};	
	parms.Btn Switcher = Btn Switcher;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::InitOptionWidgetBinding(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.InitOptionWidgetBinding");

	FInitOptionWidgetBinding parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::OnGameUserSettingControls(struct FGameUserSettingControls& NewValue, struct FGameUserSettingControls& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnGameUserSettingControls");

	FOnGameUserSettingControls parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	FBndEvt__WB_MenuOptionsControls_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");

	FBndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");

	FBndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	FBndEvt__WB_MenuOptionsControls_EnglishButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");

	FBndEvt__WB_MenuOptionsControls_KoreanButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::UpdateCultureButton(struct FString culture){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.UpdateCultureButton");

	FUpdateCultureButton parms{};	
	parms.culture = culture;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::OnMouseSenitivityHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnMouseSenitivityHovered");

	FOnMouseSenitivityHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::OnInvertMouseHorizontalAxisHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnInvertMouseHorizontalAxisHovered");

	FOnInvertMouseHorizontalAxisHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::OnInvertMouseVerticalHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnInvertMouseVerticalHovered");

	FOnInvertMouseVerticalHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::OnStreamingModeHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnStreamingModeHovered");

	FOnStreamingModeHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_JapaneseButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_JapaneseButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");

	FBndEvt__WB_MenuOptionsControls_JapaneseButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_JapaneseButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_JapaneseButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");

	FBndEvt__WB_MenuOptionsControls_JapaneseButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::OnSliderHovered(struct UWB_MenuOptionSlot_Slider_C* Slider){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnSliderHovered");

	FOnSliderHovered parms{};	
	parms.Slider = Slider;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::OnAutoFillUtilitySlotHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnAutoFillUtilitySlotHovered");

	FOnAutoFillUtilitySlotHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_TraditionalChineseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_TraditionalChineseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	FBndEvt__WB_MenuOptionsControls_TraditionalChineseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_TraditionalChineseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_TraditionalChineseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	FBndEvt__WB_MenuOptionsControls_TraditionalChineseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_SimplifiedChineseButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_SimplifiedChineseButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	FBndEvt__WB_MenuOptionsControls_SimplifiedChineseButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_SimplifiedChineseButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_SimplifiedChineseButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	FBndEvt__WB_MenuOptionsControls_SimplifiedChineseButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsControls_C::ExecuteUbergraph_WB_MenuOptionsControls(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.ExecuteUbergraph_WB_MenuOptionsControls");

	FExecuteUbergraph_WB_MenuOptionsControls parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


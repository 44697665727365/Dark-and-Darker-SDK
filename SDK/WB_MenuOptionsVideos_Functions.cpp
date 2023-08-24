#include "pch.h"
#include "SDK.h"

struct UWidget* UWB_MenuOptionsVideos_C::BP_GetDesiredFocusTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.BP_GetDesiredFocusTarget");

	FBP_GetDesiredFocusTarget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_MenuOptionsVideos_C::SetPopupText(int32_t RemainTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.SetPopupText");

	FSetPopupText parms{};	
	parms.RemainTime = RemainTime;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::SetActivateHover(struct UWidgetSwitcher* ActivateHoveer, struct FText Title, struct FText DetailDesc){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.SetActivateHover");

	FSetActivateHover parms{};	
	parms.ActivateHoveer = ActivateHoveer;
	parms.Title = Title;
	parms.DetailDesc = DetailDesc;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnDisplayOptionInitialized(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayOptionInitialized");

	FOnDisplayOptionInitialized parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnQualityLevelInitialized(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnQualityLevelInitialized");

	FOnQualityLevelInitialized parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnMessageReceived_E792FD8C4A9CB0949DDA36A51D3D5965(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnMessageReceived_E792FD8C4A9CB0949DDA36A51D3D5965");

	FOnMessageReceived_E792FD8C4A9CB0949DDA36A51D3D5965 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnEffectHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnEffectHovered");

	FOnEffectHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnTextureHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnTextureHovered");

	FOnTextureHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnShadowHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnShadowHovered");

	FOnShadowHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnPostProcessHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnPostProcessHovered");

	FOnPostProcessHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnDisplayModeHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayModeHovered");

	FOnDisplayModeHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnDisplayResolusionHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayResolusionHovered");

	FOnDisplayResolusionHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnFrameRateLimitHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnFrameRateLimitHovered");

	FOnFrameRateLimitHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnDisplayModeSelected(int32_t SelIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayModeSelected");

	FOnDisplayModeSelected parms{};	
	parms.SelIndex = SelIndex;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnDisplayOptionChangePopup(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnDisplayOptionChangePopup");

	FOnDisplayOptionChangePopup parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnBrighthnessHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnBrighthnessHovered");

	FOnBrighthnessHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnChangeGammaValue(float SliderValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnChangeGammaValue");

	FOnChangeGammaValue parms{};	
	parms.SliderValue = SliderValue;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::EventFMsgWidgetOptionVideoDisplayApplyedNotify(struct FMsgWidgetOptionVideoDisplayApplyedNotify Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.EventFMsgWidgetOptionVideoDisplayApplyedNotify");

	FEventFMsgWidgetOptionVideoDisplayApplyedNotify parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnRenderScaleHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnRenderScaleHovered");

	FOnRenderScaleHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnOptionHovered(struct UGameMenuOptionBaseWidget* InHoveredWidget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnOptionHovered");

	FOnOptionHovered parms{};	
	parms.InHoveredWidget = InHoveredWidget;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnSliderHovered(struct UWB_MenuOptionSlot_Slider_C* Slider){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnSliderHovered");

	FOnSliderHovered parms{};	
	parms.Slider = Slider;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnComboHovered(struct UWB_MenuOptionSlot_ComboBox_C* Combo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnComboHovered");

	FOnComboHovered parms{};	
	parms.Combo = Combo;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::OnFrameRateLimitLobbyHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.OnFrameRateLimitLobbyHovered");

	FOnFrameRateLimitLobbyHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsVideos_C::ExecuteUbergraph_WB_MenuOptionsVideos(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsVideos.WB_MenuOptionsVideos_C.ExecuteUbergraph_WB_MenuOptionsVideos");

	FExecuteUbergraph_WB_MenuOptionsVideos parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


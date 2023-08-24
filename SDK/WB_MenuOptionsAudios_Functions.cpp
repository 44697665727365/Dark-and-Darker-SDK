#include "pch.h"
#include "SDK.h"

void UWB_MenuOptionsAudios_C::InitOptionWidgetBinding(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.InitOptionWidgetBinding");

	FInitOptionWidgetBinding parms{};	

	ProcessEvent(fn, &parms);
}

struct UWidget* UWB_MenuOptionsAudios_C::BP_GetDesiredFocusTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.BP_GetDesiredFocusTarget");

	FBP_GetDesiredFocusTarget parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWB_MenuOptionsAudios_C::SetActivateSlotHoverDetailText(struct FText Title, struct FText Descript){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.SetActivateSlotHoverDetailText");

	FSetActivateSlotHoverDetailText parms{};	
	parms.Title = Title;
	parms.Descript = Descript;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsAudios_C::Set Activate Slot Hover(struct UWidgetSwitcher* ActivateSwitcherSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.Set Activate Slot Hover");

	FSet Activate Slot Hover parms{};	
	parms.ActivateSwitcherSelected = ActivateSwitcherSelected;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsAudios_C::OnTotalVolumeHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnTotalVolumeHovered");

	FOnTotalVolumeHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsAudios_C::OnEffectVolumeHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnEffectVolumeHovered");

	FOnEffectVolumeHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsAudios_C::OnMusicVolumeHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnMusicVolumeHovered");

	FOnMusicVolumeHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsAudios_C::OnBackgroundVolumeHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnBackgroundVolumeHovered");

	FOnBackgroundVolumeHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsAudios_C::UpdateWindowFocusChanged(bool IsFocus, bool IsBackgroundOption, float TotalVolume){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.UpdateWindowFocusChanged");

	FUpdateWindowFocusChanged parms{};	
	parms.IsFocus = IsFocus;
	parms.IsBackgroundOption = IsBackgroundOption;
	parms.TotalVolume = TotalVolume;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsAudios_C::OnVoipOnOffHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnVoipOnOffHovered");

	FOnVoipOnOffHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsAudios_C::OnVoipModeHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnVoipModeHovered");

	FOnVoipModeHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsAudios_C::OnVoipInputVolumeHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnVoipInputVolumeHovered");

	FOnVoipInputVolumeHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsAudios_C::OnVoipOutputVolumeHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnVoipOutputVolumeHovered");

	FOnVoipOutputVolumeHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsAudios_C::OnVoipSendModeHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnVoipSendModeHovered");

	FOnVoipSendModeHovered parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsAudios_C::Construct(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.Construct");

	FConstruct parms{};	

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsAudios_C::OnSliderHovered(struct UWB_MenuOptionSlot_Slider_C* Slider){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnSliderHovered");

	FOnSliderHovered parms{};	
	parms.Slider = Slider;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsAudios_C::OnGameUserSettingAudiosChanged(struct FGameUserSettingAudios& InGameUserSettingAudios, struct FGameUserSettingAudios& InOldGameUserSettingAudios, bool bInForce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnGameUserSettingAudiosChanged");

	FOnGameUserSettingAudiosChanged parms{};	
	parms.InGameUserSettingAudios = InGameUserSettingAudios;
	parms.InOldGameUserSettingAudios = InOldGameUserSettingAudios;
	parms.bInForce = bInForce;

	ProcessEvent(fn, &parms);
}

void UWB_MenuOptionsAudios_C::ExecuteUbergraph_WB_MenuOptionsAudios(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.ExecuteUbergraph_WB_MenuOptionsAudios");

	FExecuteUbergraph_WB_MenuOptionsAudios parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


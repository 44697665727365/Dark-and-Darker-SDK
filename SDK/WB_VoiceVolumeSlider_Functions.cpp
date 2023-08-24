#include "pch.h"
#include "SDK.h"

void UWB_VoiceVolumeSlider_C::OnVoipUserData(struct FVoipUserData& NewValue, struct FVoipUserData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.OnVoipUserData");

	FOnVoipUserData parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UWB_VoiceVolumeSlider_C::BndEvt__WB_VoiceVolumeSlider_Slider_VoiceVolume_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.BndEvt__WB_VoiceVolumeSlider_Slider_VoiceVolume_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	FBndEvt__WB_VoiceVolumeSlider_Slider_VoiceVolume_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature parms{};	
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UWB_VoiceVolumeSlider_C::OnVoipPartyData(struct FVoipPartyData& NewValue, struct FVoipPartyData& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.OnVoipPartyData");

	FOnVoipPartyData parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UWB_VoiceVolumeSlider_C::OnAccountId(struct FDCAccountId& NewValue, struct FDCAccountId& OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.OnAccountId");

	FOnAccountId parms{};	
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UWB_VoiceVolumeSlider_C::ExecuteUbergraph_WB_VoiceVolumeSlider(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.ExecuteUbergraph_WB_VoiceVolumeSlider");

	FExecuteUbergraph_WB_VoiceVolumeSlider parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


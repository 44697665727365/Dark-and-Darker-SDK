#pragma once 
#include <WB_VoiceVolumeSlider_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C
// Size: 0x378(Inherited: 0x340)
struct UWB_VoiceVolumeSlider_C : UVoipUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x340 (0x340)
	struct UWidgetSwitcher* OnOffWidgetSwitcher;  // 0x348 (0x348)
	struct USlider* Slider_VoiceVolume;  // 0x350 (0x350)
	struct USlider* Slider_VoiceVolume_Off;  // 0x358 (0x358)
	struct UTextBlock* VoiceVolume_Off;  // 0x360 (0x360)
	struct UTextBlock* VoiceVolume_On;  // 0x368 (0x368)
	struct UWB_Btn_VoiceOnOff_C* WB_Btn_VoiceOnOff;  // 0x370 (0x370)


	void OnVoipUserData(struct FVoipUserData& NewValue, struct FVoipUserData& OldValue); // Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.OnVoipUserData
	void BndEvt__WB_VoiceVolumeSlider_Slider_VoiceVolume_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.BndEvt__WB_VoiceVolumeSlider_Slider_VoiceVolume_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	void OnVoipPartyData(struct FVoipPartyData& NewValue, struct FVoipPartyData& OldValue); // Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.OnVoipPartyData
	void OnAccountId(struct FDCAccountId& NewValue, struct FDCAccountId& OldValue); // Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.OnAccountId
	void ExecuteUbergraph_WB_VoiceVolumeSlider(int32_t EntryPoint); // Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.ExecuteUbergraph_WB_VoiceVolumeSlider
}; 
 
 



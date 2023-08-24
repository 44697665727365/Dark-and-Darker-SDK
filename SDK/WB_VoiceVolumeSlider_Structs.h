#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.OnVoipUserData
// Size: 0x10(Inherited: 0x10)
struct FOnVoipUserData : FOnVoipUserData
{
	struct FVoipUserData NewValue;  // 0x0 (0x0)
	struct FVoipUserData OldValue;  // 0x8 (0x8)


}; 
 
 // Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.BndEvt__WB_VoiceVolumeSlider_Slider_VoiceVolume_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
struct FBndEvt__WB_VoiceVolumeSlider_Slider_VoiceVolume_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
{
	float Value;  // 0x0 (0x0)


}; 
 
 // Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.OnAccountId
// Size: 0x20(Inherited: 0x20)
struct FOnAccountId : FOnAccountId
{
	struct FDCAccountId NewValue;  // 0x0 (0x0)
	struct FDCAccountId OldValue;  // 0x10 (0x10)


}; 
 
 // Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.OnVoipPartyData
// Size: 0x40(Inherited: 0x40)
struct FOnVoipPartyData : FOnVoipPartyData
{
	struct FVoipPartyData NewValue;  // 0x0 (0x0)
	struct FVoipPartyData OldValue;  // 0x20 (0x20)


}; 
 
 // Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.ExecuteUbergraph_WB_VoiceVolumeSlider
struct FExecuteUbergraph_WB_VoiceVolumeSlider
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FDCAccountId K2Node_Event_NewValue;  // 0x8 (0x8)
	struct FDCAccountId K2Node_Event_OldValue;  // 0x18 (0x18)
	struct FVoipUserData K2Node_Event_NewValue_3;  // 0x28 (0x28)
	struct FVoipUserData K2Node_Event_OldValue_3;  // 0x30 (0x30)
	float K2Node_ComponentBoundEvent_Value;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct FText CallFunc_Conv_DoubleToText_ReturnValue;  // 0x40 (0x40)
	uint8_t CallFunc_GetVoipStatus_ReturnValue;  // 0x58 (0x58)
	char pad_89_1 : 7;  // 0x59 (0x59)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x59 (0x59)
	char pad_90[6];  // 0x5A (0x5A)
	struct FText CallFunc_Conv_DoubleToText_ReturnValue_2;  // 0x60 (0x60)
	struct FVoipPartyData K2Node_Event_NewValue_2;  // 0x78 (0x78)
	struct FVoipPartyData K2Node_Event_OldValue_2;  // 0x98 (0x98)
	double CallFunc_Conv_DoubleToText_Value_ImplicitCast;  // 0xB8 (0xB8)
	double CallFunc_Conv_DoubleToText_Value_ImplicitCast_2;  // 0xC0 (0xC0)


}; 
 
 
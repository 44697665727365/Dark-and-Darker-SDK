#pragma once 
#include <WB_Btn_VoiceOnOff_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_Btn_VoiceOnOff.WB_Btn_VoiceOnOff_C
// Size: 0x380(Inherited: 0x340)
struct UWB_Btn_VoiceOnOff_C : UVoipUserWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x340 (0x340)
	struct UButton* Btn_OnOff;  // 0x348 (0x348)
	struct UImage* Img_Hover;  // 0x350 (0x350)
	struct UImage* Img_Mine;  // 0x358 (0x358)
	struct UImage* Img_Mute;  // 0x360 (0x360)
	struct UImage* Img_On;  // 0x368 (0x368)
	struct UImage* Img_Press;  // 0x370 (0x370)
	struct UOverlay* Overlay_Speaking;  // 0x378 (0x378)


	void BndEvt__WB_Btn_VoiceOnOff_Btn_OnOff_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function WB_Btn_VoiceOnOff.WB_Btn_VoiceOnOff_C.BndEvt__WB_Btn_VoiceOnOff_Btn_OnOff_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	void BndEvt__WB_Btn_VoiceOnOff_Btn_OnOff_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature(); // Function WB_Btn_VoiceOnOff.WB_Btn_VoiceOnOff_C.BndEvt__WB_Btn_VoiceOnOff_Btn_OnOff_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	void BndEvt__WB_Btn_VoiceOnOff_Btn_OnOff_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WB_Btn_VoiceOnOff.WB_Btn_VoiceOnOff_C.BndEvt__WB_Btn_VoiceOnOff_Btn_OnOff_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__WB_Btn_VoiceOnOff_Btn_OnOff_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WB_Btn_VoiceOnOff.WB_Btn_VoiceOnOff_C.BndEvt__WB_Btn_VoiceOnOff_Btn_OnOff_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void BndEvt__WB_Btn_VoiceOnOff_Btn_OnOff_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WB_Btn_VoiceOnOff.WB_Btn_VoiceOnOff_C.BndEvt__WB_Btn_VoiceOnOff_Btn_OnOff_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	void OnVoipUserData(struct FVoipUserData& NewValue, struct FVoipUserData& OldValue); // Function WB_Btn_VoiceOnOff.WB_Btn_VoiceOnOff_C.OnVoipUserData
	void OnVoipPartyData(struct FVoipPartyData& NewValue, struct FVoipPartyData& OldValue); // Function WB_Btn_VoiceOnOff.WB_Btn_VoiceOnOff_C.OnVoipPartyData
	void ClearWidget(); // Function WB_Btn_VoiceOnOff.WB_Btn_VoiceOnOff_C.ClearWidget
	void ExecuteUbergraph_WB_Btn_VoiceOnOff(int32_t EntryPoint); // Function WB_Btn_VoiceOnOff.WB_Btn_VoiceOnOff_C.ExecuteUbergraph_WB_Btn_VoiceOnOff
}; 
 
 



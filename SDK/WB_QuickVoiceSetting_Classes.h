#pragma once 
#include <WB_QuickVoiceSetting_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_QuickVoiceSetting.WB_QuickVoiceSetting_C
// Size: 0x330(Inherited: 0x310)
struct UWB_QuickVoiceSetting_C : UVoipPartySettingWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x310 (0x310)
	struct UHorizontalBox* Hbox_PartyVoiceChannel;  // 0x318 (0x318)
	struct UWB_CommonBtn_Text_C* PartyOnly;  // 0x320 (0x320)
	struct UWB_CommonBtn_Text_C* Proximity;  // 0x328 (0x328)


	void PreConstruct(bool IsDesignTime); // Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.PreConstruct
	void BndEvt__WB_QuickVoiceSetting_Proximity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.BndEvt__WB_QuickVoiceSetting_Proximity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__WB_QuickVoiceSetting_PartyOnly_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.BndEvt__WB_QuickVoiceSetting_PartyOnly_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void OnbVoipGlobal(bool NewValue, bool OldValue); // Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.OnbVoipGlobal
	void ExecuteUbergraph_WB_QuickVoiceSetting(int32_t EntryPoint); // Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.ExecuteUbergraph_WB_QuickVoiceSetting
}; 
 
 



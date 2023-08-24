#pragma once 
#include <WB_QuickVoicePartyMemberSetting_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_QuickVoicePartyMemberSetting.WB_QuickVoicePartyMemberSetting_C
// Size: 0x320(Inherited: 0x308)
struct UWB_QuickVoicePartyMemberSetting_C : UVoipPartyMemberSettingWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x308 (0x308)
	struct UWB_VoiceVolumeSlider_C* VoiceVolumeSlider;  // 0x310 (0x310)
	struct UWB_NickName_C* WB_NickName;  // 0x318 (0x318)


	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WB_QuickVoicePartyMemberSetting.WB_QuickVoicePartyMemberSetting_C.OnListItemObjectSet
	void ExecuteUbergraph_WB_QuickVoicePartyMemberSetting(int32_t EntryPoint); // Function WB_QuickVoicePartyMemberSetting.WB_QuickVoicePartyMemberSetting_C.ExecuteUbergraph_WB_QuickVoicePartyMemberSetting
}; 
 
 



#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_QuickVoicePartyMemberSetting.WB_QuickVoicePartyMemberSetting_C.OnListItemObjectSet
// Size: 0x8(Inherited: 0x8)
struct FOnListItemObjectSet : FOnListItemObjectSet
{
	struct UObject* ListItemObject;  // 0x0 (0x0)


}; 
 
 // Function WB_QuickVoicePartyMemberSetting.WB_QuickVoicePartyMemberSetting_C.ExecuteUbergraph_WB_QuickVoicePartyMemberSetting
struct FExecuteUbergraph_WB_QuickVoicePartyMemberSetting
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UObject* K2Node_Event_ListItemObject;  // 0x8 (0x8)
	struct UVoipPartyMemberSettingWidgetData* K2Node_DynamicCast_AsVoip_Party_Member_Setting_Widget_Data;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)


}; 
 
 
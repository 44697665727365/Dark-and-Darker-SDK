#pragma once 
#include <WB_CharacterSelect_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CharacterSelect.WB_CharacterSelect_C
// Size: 0x340(Inherited: 0x300)
struct UWB_CharacterSelect_C : UDCWidgetBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x300 (0x300)
	struct UWB_CharacterCreateGroupMain_C* WB_CharacterCreateGroupMain;  // 0x308 (0x308)
	struct UWB_CharacterSelectGroupMain_C* WB_CharacterSelectGroupMain;  // 0x310 (0x310)
	struct UWB_CharacterSelectGroupMenu_C* WB_CharacterSelectMenu;  // 0x318 (0x318)
	struct UWB_Common_Popup_Manage_C* WB_Common_Popup_Manage;  // 0x320 (0x320)
	struct UWB_CommonPopup_S_C* WB_CommonPopup_S;  // 0x328 (0x328)
	struct UWB_GameSystemMessageGroup_C* WB_GameSystemMessageGroup;  // 0x330 (0x330)
	struct UWB_ShopPurchaseProcess_C* WB_ShopPurchaseProcess;  // 0x338 (0x338)


	void OnMessageReceived_DB58151943EC564859806EB851DC5E04(struct UMsgBaseNode* ProxyObject); // Function WB_CharacterSelect.WB_CharacterSelect_C.OnMessageReceived_DB58151943EC564859806EB851DC5E04
	void Construct(); // Function WB_CharacterSelect.WB_CharacterSelect_C.Construct
	void EventFMsgWidgetCreateCharacterErrorMessageNotify(struct FMsgWidgetCreateCharacterErrorMessageNotify Msg); // Function WB_CharacterSelect.WB_CharacterSelect_C.EventFMsgWidgetCreateCharacterErrorMessageNotify
	void ExecuteUbergraph_WB_CharacterSelect(int32_t EntryPoint); // Function WB_CharacterSelect.WB_CharacterSelect_C.ExecuteUbergraph_WB_CharacterSelect
}; 
 
 



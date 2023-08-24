#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_CharacterSelect.WB_CharacterSelect_C.ExecuteUbergraph_WB_CharacterSelect
struct FExecuteUbergraph_WB_CharacterSelect
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgWidgetCreateCharacterErrorMessageNotify Temp_struct_Variable;  // 0x8 (0x8)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x38 (0x38)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x40 (0x40)
	struct FMsgWidgetCreateCharacterErrorMessageNotify Temp_struct_Variable_2;  // 0x50 (0x50)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x80 (0x80)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x88 (0x88)
	char pad_137[7];  // 0x89 (0x89)
	struct FMsgWidgetCreateCharacterErrorMessageNotify K2Node_CustomEvent_Msg;  // 0x90 (0x90)
	UWB_CommonPopup_S_C* CallFunc_GetObjectClass_ReturnValue;  // 0xC0 (0xC0)
	struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue;  // 0xC8 (0xC8)
	struct UPopupDataSWidget* CallFunc_MakePopupDataSWidget_ReturnValue;  // 0xD0 (0xD0)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0xD8 (0xD8)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xE8 (0xE8)
	char pad_233[7];  // 0xE9 (0xE9)
	struct FMsgWidgetPopupMessageReqeust CallFunc_MakePopupMessageReqeust_ReturnValue;  // 0xF0 (0xF0)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0x120 (0x120)
	struct APlayerController* CallFunc_GetPlayerController_ReturnValue;  // 0x128 (0x128)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface_2;  // 0x130 (0x130)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x140 (0x140)
	char pad_321_1 : 7;  // 0x141 (0x141)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x141 (0x141)
	char pad_322[6];  // 0x142 (0x142)
	struct APlayerController* CallFunc_GetPlayerController_ReturnValue_2;  // 0x148 (0x148)
	struct ABP_MetaPlayerController_C* K2Node_DynamicCast_AsBP_Meta_Player_Controller;  // 0x150 (0x150)
	char pad_344_1 : 7;  // 0x158 (0x158)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x158 (0x158)
	char pad_345[7];  // 0x159 (0x159)
	struct APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2;  // 0x160 (0x160)


}; 
 
 // Function WB_CharacterSelect.WB_CharacterSelect_C.OnMessageReceived_DB58151943EC564859806EB851DC5E04
struct FOnMessageReceived_DB58151943EC564859806EB851DC5E04
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function WB_CharacterSelect.WB_CharacterSelect_C.EventFMsgWidgetCreateCharacterErrorMessageNotify
struct FEventFMsgWidgetCreateCharacterErrorMessageNotify
{
	struct FMsgWidgetCreateCharacterErrorMessageNotify Msg;  // 0x0 (0x0)


}; 
 
 
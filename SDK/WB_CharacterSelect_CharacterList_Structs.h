#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C._1
struct F_1
{
	struct UCommonButtonBase* Button;  // 0x0 (0x0)


}; 
 
 // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.OnPageNumber
// Size: 0x8(Inherited: 0x8)
struct FOnPageNumber : FOnPageNumber
{
	int32_t CurrentPage;  // 0x0 (0x0)
	int32_t MaxPage;  // 0x4 (0x4)


}; 
 
 // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.CharacterListLeftButtonClicked
struct FCharacterListLeftButtonClicked
{
	struct UCommonButtonBase* Button;  // 0x0 (0x0)


}; 
 
 // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.OnMessageReceived_4E9C9CDB4FAD9424B435B5BAC35B9390
struct FOnMessageReceived_4E9C9CDB4FAD9424B435B5BAC35B9390
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.ExecuteUbergraph_WB_CharacterSelect_CharacterList
struct FExecuteUbergraph_WB_CharacterSelect_CharacterList
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgWidgetPopupMessageResponse Temp_struct_Variable;  // 0x8 (0x8)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x38 (0x38)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x40 (0x40)
	struct FMsgWidgetPopupMessageResponse Temp_struct_Variable_2;  // 0x50 (0x50)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x80 (0x80)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x88 (0x88)
	char pad_137[7];  // 0x89 (0x89)
	struct UPopupDataSWidget* K2Node_DynamicCast_AsPopup_Data_SWidget;  // 0x90 (0x90)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x98 (0x98)
	char pad_153[3];  // 0x99 (0x99)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x9C (0x9C)
	char pad_172_1 : 7;  // 0xAC (0xAC)
	bool CallFunc_Cancel_ReturnValue : 1;  // 0xAC (0xAC)
	char pad_173_1 : 7;  // 0xAD (0xAD)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0xAD (0xAD)
	char pad_174[2];  // 0xAE (0xAE)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0xB0 (0xB0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0xC0 (0xC0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0xD0 (0xD0)
	struct FText Temp_text_Variable;  // 0xE0 (0xE0)
	int32_t K2Node_Event_CurrentPage;  // 0xF8 (0xF8)
	int32_t K2Node_Event_MaxPage;  // 0xFC (0xFC)
	struct FText CallFunc_Conv_IntToText_ReturnValue;  // 0x100 (0x100)
	struct FText CallFunc_Conv_IntToText_ReturnValue_2;  // 0x118 (0x118)
	struct UCharacterSelectCharacterSlotWidgetData* CallFunc_GetSelectedCharacterWidgetData_ReturnValue;  // 0x130 (0x130)
	struct TScriptInterface<IBaseInterface> CallFunc_GetOwningBaseInterfaceBlueprint_ReturnValue;  // 0x138 (0x138)
	struct UBroadcastMsgNode* CallFunc_BroadcastMsgNode_ReturnValue;  // 0x148 (0x148)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x150 (0x150)
	char pad_360_1 : 7;  // 0x168 (0x168)
	bool CallFunc_EqualEqual_StrStr_ReturnValue : 1;  // 0x168 (0x168)
	char pad_361[7];  // 0x169 (0x169)
	struct FText CallFunc_MakeTextwithParam1_ReturnValue;  // 0x170 (0x170)
	struct FMsgSystemMessageNotify K2Node_MakeStruct_MsgSystemMessageNotify;  // 0x188 (0x188)
	char pad_448_1 : 7;  // 0x1C0 (0x1C0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1C0 (0x1C0)
	char pad_449[7];  // 0x1C1 (0x1C1)
	struct UObject* CallFunc_Conv_InterfaceToObject_ReturnValue;  // 0x1C8 (0x1C8)
	uint8_t K2Node_ComponentBoundEvent_InVisibility_2;  // 0x1D0 (0x1D0)
	char pad_465_1 : 7;  // 0x1D1 (0x1D1)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x1D1 (0x1D1)
	uint8_t K2Node_ComponentBoundEvent_InVisibility;  // 0x1D2 (0x1D2)
	char pad_467[5];  // 0x1D3 (0x1D3)
	struct UPopupDataSWidget* CallFunc_MakePopupDataSWidget_ReturnValue;  // 0x1D8 (0x1D8)
	struct FMsgSystemMessageNotify K2Node_MakeStruct_MsgSystemMessageNotify_2;  // 0x1E0 (0x1E0)
	struct FMsgWidgetPopupMessageReqeust CallFunc_MakePopupMessageReqeust_ReturnValue;  // 0x218 (0x218)
	struct UCommonButtonBase* K2Node_CustomEvent_Button_4;  // 0x248 (0x248)
	struct UCommonButtonBase* K2Node_CustomEvent_Button_3;  // 0x250 (0x250)
	struct UCommonButtonBase* K2Node_CustomEvent_Button_2;  // 0x258 (0x258)
	struct UCommonButtonBase* K2Node_CustomEvent_Button;  // 0x260 (0x260)


}; 
 
 // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.BP_GetDesiredFocusTarget
struct FBP_GetDesiredFocusTarget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.CharacterListRightButtonClicked
struct FCharacterListRightButtonClicked
{
	struct UCommonButtonBase* Button;  // 0x0 (0x0)


}; 
 
 // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.CharacterCreateButtonClicked
struct FCharacterCreateButtonClicked
{
	struct UCommonButtonBase* Button;  // 0x0 (0x0)


}; 
 
 // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.BndEvt__WB_CharacterSelect_CharacterList_WB_CommonBtn_Arrow_K2Node_ComponentBoundEvent_2_OnVisibilityChangedEvent__DelegateSignature
struct FBndEvt__WB_CharacterSelect_CharacterList_WB_CommonBtn_Arrow_K2Node_ComponentBoundEvent_2_OnVisibilityChangedEvent__DelegateSignature
{
	uint8_t Invisibility;  // 0x0 (0x0)


}; 
 
 // Function WB_CharacterSelect_CharacterList.WB_CharacterSelect_CharacterList_C.BndEvt__WB_CharacterSelect_CharacterList_WB_CommonBtn_Arrow_201_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature
struct FBndEvt__WB_CharacterSelect_CharacterList_WB_CommonBtn_Arrow_201_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature
{
	uint8_t Invisibility;  // 0x0 (0x0)


}; 
 
 
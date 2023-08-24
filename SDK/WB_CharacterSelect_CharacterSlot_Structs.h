#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C.OnCharacterSlot
// Size: 0x130(Inherited: 0x130)
struct FOnCharacterSlot : FOnCharacterSlot
{
	struct FCharacterSlot NewValue;  // 0x0 (0x0)
	struct FCharacterSlot OldValue;  // 0x98 (0x98)


}; 
 
 // Function WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C.OnLoadArtData
struct FOnLoadArtData
{
	struct UObject* InObjectLoaded;  // 0x0 (0x0)


}; 
 
 // Function WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C.OnFMsgWidgetStreamingModeNotifyBlueprint
// Size: 0x20(Inherited: 0x20)
struct FOnFMsgWidgetStreamingModeNotifyBlueprint : FOnFMsgWidgetStreamingModeNotifyBlueprint
{
	struct FMsgWidgetStreamingModeNotify InMsg;  // 0x0 (0x0)


}; 
 
 // Function WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C.ExecuteUbergraph_WB_CharacterSelect_CharacterSlot
struct FExecuteUbergraph_WB_CharacterSelect_CharacterSlot
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FCharacterSlot K2Node_Event_NewValue;  // 0x8 (0x8)
	struct FCharacterSlot K2Node_Event_OldValue;  // 0xA0 (0xA0)
	struct FText CallFunc_Conv_IntToText_ReturnValue;  // 0x138 (0x138)
	struct FPrimaryAssetId CallFunc_MakePrimaryAssetId_ReturnValue;  // 0x150 (0x150)
	struct FLinearColor CallFunc_GetViewNicknameColor_ReturnValue;  // 0x160 (0x160)
	struct FDesignDataPlayerCharacter CallFunc_GetDesignDataPlayerCharacter_ReturnValue;  // 0x170 (0x170)
	struct FSlateColor K2Node_MakeStruct_SlateColor;  // 0x288 (0x288)
	char pad_668[4];  // 0x29C (0x29C)
	struct FString CallFunc_GetViewNickName_ReturnValue;  // 0x2A0 (0x2A0)
	struct FText CallFunc_Conv_NameToText_ReturnValue;  // 0x2B0 (0x2B0)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x2C8 (0x2C8)
	struct UObject* K2Node_CustomEvent_InObjectLoaded;  // 0x2E0 (0x2E0)
	struct UArtDataPlayerCharacter* K2Node_DynamicCast_AsArt_Data_Player_Character;  // 0x2E8 (0x2E8)
	char pad_752_1 : 7;  // 0x2F0 (0x2F0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x2F0 (0x2F0)
	char pad_753[3];  // 0x2F1 (0x2F1)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x2F4 (0x2F4)
	char pad_772[4];  // 0x304 (0x304)
	struct FMsgWidgetStreamingModeNotify K2Node_Event_InMsg;  // 0x308 (0x308)


}; 
 
 // Function WB_CharacterSelect_CharacterSlot.WB_CharacterSelect_CharacterSlot_C.GetCannotSelectableVisibility
struct FGetCannotSelectableVisibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_CanSelect_ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 
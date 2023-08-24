#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_MetaPlayerController.BP_MetaPlayerController_C.ReceiveEndPlay
// Size: 0x1(Inherited: 0x1)
struct FReceiveEndPlay : FReceiveEndPlay
{
	enum class EEndPlayReason EndPlayReason;  // 0x0 (0x0)


}; 
 
 // Function BP_MetaPlayerController.BP_MetaPlayerController_C.UpdateGameState
// Size: 0x8(Inherited: 0x8)
struct FUpdateGameState : FUpdateGameState
{
	struct FGameStateData InGameStateData;  // 0x0 (0x0)


}; 
 
 // Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2
struct FOnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnLoadSoundData
struct FOnLoadSoundData
{
	struct UObject* Object;  // 0x0 (0x0)
	struct FDelegate Temp_delegate_Variable;  // 0x8 (0x8)
	struct USoundData* K2Node_DynamicCast_AsSound_Data;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	struct FDelegate Temp_delegate_Variable_2;  // 0x24 (0x24)
	struct FGameplayTag Temp_struct_Variable;  // 0x34 (0x34)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x3C (0x3C)
	char pad_68[4];  // 0x44 (0x44)
	struct UAkAudioEvent* CallFunc_Map_Find_Value;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_Map_Find_ReturnValue : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct UAkAudioEvent* CallFunc_Map_Find_Value_2;  // 0x58 (0x58)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool CallFunc_Map_Find_ReturnValue_2 : 1;  // 0x60 (0x60)
	char pad_97[3];  // 0x61 (0x61)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x64 (0x64)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0x68 (0x68)
	char pad_108_1 : 7;  // 0x6C (0x6C)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x6C (0x6C)


}; 
 
 // Function BP_MetaPlayerController.BP_MetaPlayerController_C.ExecuteUbergraph_BP_MetaPlayerController
struct FExecuteUbergraph_BP_MetaPlayerController
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgSucceedWidgetMoveItem Temp_struct_Variable;  // 0x8 (0x8)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x30 (0x30)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x38 (0x38)
	struct FMsgSucceedWidgetMoveItem Temp_struct_Variable_2;  // 0x48 (0x48)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	struct FDelegate Temp_delegate_Variable;  // 0x7C (0x7C)
	struct FDelegate Temp_delegate_Variable_2;  // 0x8C (0x8C)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x9C (0x9C)
	struct FDelegate Temp_delegate_Variable_3;  // 0xA0 (0xA0)
	struct FDelegate Temp_delegate_Variable_4;  // 0xB0 (0xB0)
	int32_t Temp_int_Array_Index_Variable;  // 0xC0 (0xC0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0xC4 (0xC4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xC8 (0xC8)
	char pad_204[4];  // 0xCC (0xCC)
	struct FMsgSucceedWidgetMoveItem K2Node_CustomEvent_Msg;  // 0xD0 (0xD0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0xF8 (0xF8)
	struct FItemData CallFunc_Array_Get_Item;  // 0x108 (0x108)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput;  // 0x1A8 (0x1A8)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0x1B8 (0x1B8)
	char CallFunc_Conv_IntToByte_ReturnValue;  // 0x1C0 (0x1C0)
	char pad_449[7];  // 0x1C1 (0x1C1)
	struct FDesignDataItem CallFunc_GetDesignDataItem_ReturnValue;  // 0x1C8 (0x1C8)
	char CallFunc_GetValidValue_ReturnValue;  // 0x350 (0x350)
	char pad_849_1 : 7;  // 0x351 (0x351)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x351 (0x351)
	char pad_850[2];  // 0x352 (0x352)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x354 (0x354)
	char pad_856_1 : 7;  // 0x358 (0x358)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x358 (0x358)
	enum class EEndPlayReason K2Node_Event_EndPlayReason;  // 0x359 (0x359)
	char pad_858[2];  // 0x35A (0x35A)
	struct FGameStateData K2Node_Event_InGameStateData;  // 0x35C (0x35C)
	char pad_868_1 : 7;  // 0x364 (0x364)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x364 (0x364)
	char pad_869[3];  // 0x365 (0x365)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0x368 (0x368)
	int32_t CallFunc_PostAkEvent_ReturnValue_3;  // 0x36C (0x36C)
	int32_t CallFunc_PostAkEvent_ReturnValue_4;  // 0x370 (0x370)


}; 
 
 // Function BP_MetaPlayerController.BP_MetaPlayerController_C.EventFMsgSucceedWidgetMoveItem
struct FEventFMsgSucceedWidgetMoveItem
{
	struct FMsgSucceedWidgetMoveItem Msg;  // 0x0 (0x0)


}; 
 
 
#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.SetNextIndex
struct FSetNextIndex
{
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x0 (0x0)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x8 (0x8)


}; 
 
 // Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.OnMessageReceived_4934A8F44FB5D389A11568A9ECAB4816
struct FOnMessageReceived_4934A8F44FB5D389A11568A9ECAB4816
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.ExecuteUbergraph_WB_GameSystemMessageGroup
struct FExecuteUbergraph_WB_GameSystemMessageGroup
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TScriptInterface<IBaseInterface> CallFunc_GetOwningBaseInterfaceBlueprint_ReturnValue;  // 0x8 (0x8)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0x18 (0x18)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x20 (0x20)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct UObject* CallFunc_Conv_InterfaceToObject_ReturnValue;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x48 (0x48)
	struct FMsgSystemMessageNotify Temp_struct_Variable;  // 0x50 (0x50)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x88 (0x88)
	int32_t Temp_int_Array_Index_Variable;  // 0x90 (0x90)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x94 (0x94)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x98 (0x98)
	char pad_156[4];  // 0x9C (0x9C)
	struct FMsgSystemMessageNotify K2Node_CustomEvent_Msg;  // 0xA0 (0xA0)
	struct TArray<struct UWidget*> CallFunc_GetAllChildren_ReturnValue;  // 0xD8 (0xD8)
	struct UWidget* CallFunc_Array_Get_Item;  // 0xE8 (0xE8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xF0 (0xF0)
	char pad_244[4];  // 0xF4 (0xF4)
	struct UWB_GameSystemMessage_C* K2Node_DynamicCast_AsWB_Game_System_Message;  // 0xF8 (0xF8)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x100 (0x100)
	char pad_257_1 : 7;  // 0x101 (0x101)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x101 (0x101)
	char pad_258[2];  // 0x102 (0x102)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x104 (0x104)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool CallFunc_Array_IsValidIndex_ReturnValue : 1;  // 0x108 (0x108)
	char pad_265[7];  // 0x109 (0x109)
	struct FMsgSystemMessageNotify Temp_struct_Variable_2;  // 0x110 (0x110)
	char pad_328_1 : 7;  // 0x148 (0x148)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x148 (0x148)
	char pad_329[7];  // 0x149 (0x149)
	struct UWB_GameSystemMessage_C* CallFunc_Array_Get_Item_2;  // 0x150 (0x150)
	double CallFunc_ShowMessage_Duration_ImplicitCast;  // 0x158 (0x158)


}; 
 
 // Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.EventFMsgSystemMessageNotify
struct FEventFMsgSystemMessageNotify
{
	struct FMsgSystemMessageNotify Msg;  // 0x0 (0x0)


}; 
 
 
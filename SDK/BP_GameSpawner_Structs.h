#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_GameSpawner.BP_GameSpawner_C.UpdateGameState
// Size: 0x8(Inherited: 0x8)
struct FUpdateGameState : FUpdateGameState
{
	struct FGameStateData InGameStateData;  // 0x0 (0x0)


}; 
 
 // Function BP_GameSpawner.BP_GameSpawner_C.EventFMsgGASActorDieNotify
struct FEventFMsgGASActorDieNotify
{
	struct FMsgGASActorDieNotify Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_GameSpawner.BP_GameSpawner_C.OnMessageReceived_D5B41047432D7764436CC8ABA9E57D22
struct FOnMessageReceived_D5B41047432D7764436CC8ABA9E57D22
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function BP_GameSpawner.BP_GameSpawner_C.OnMessageReceived_7BD037A94378DC6DC7ED5E9029A4A824
struct FOnMessageReceived_7BD037A94378DC6DC7ED5E9029A4A824
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function BP_GameSpawner.BP_GameSpawner_C.ExecuteUbergraph_BP_GameSpawner
struct FExecuteUbergraph_BP_GameSpawner
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x10 (0x10)
	struct FMsgGASActorDieNotify Temp_struct_Variable;  // 0x20 (0x20)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x220 (0x220)
	char pad_552_1 : 7;  // 0x228 (0x228)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x228 (0x228)
	char pad_553[3];  // 0x229 (0x229)
	struct FGameStateData K2Node_Event_InGameStateData;  // 0x22C (0x22C)
	char pad_564_1 : 7;  // 0x234 (0x234)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x234 (0x234)
	char pad_565[3];  // 0x235 (0x235)
	struct APropsActorBase* CallFunc_SpawnProps_ReturnValue;  // 0x238 (0x238)
	struct AItemHolderActorBase* CallFunc_SpawnItemHolder_ReturnValue;  // 0x240 (0x240)
	struct ADCMonsterBase* CallFunc_SpawnMonster_ReturnValue;  // 0x248 (0x248)
	struct FMsgGASActorDieNotify Temp_struct_Variable_2;  // 0x250 (0x250)
	char pad_1104_1 : 7;  // 0x450 (0x450)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x450 (0x450)
	char pad_1105_1 : 7;  // 0x451 (0x451)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x451 (0x451)
	char pad_1106[2];  // 0x452 (0x452)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x454 (0x454)
	char pad_1124[4];  // 0x464 (0x464)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x468 (0x468)
	char pad_1136_1 : 7;  // 0x470 (0x470)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x470 (0x470)
	char pad_1137[7];  // 0x471 (0x471)
	struct ADCMonsterBase* CallFunc_SpawnMonster_ReturnValue_2;  // 0x478 (0x478)
	struct FMsgGASActorDieNotify K2Node_CustomEvent_Msg;  // 0x480 (0x480)
	char pad_1664_1 : 7;  // 0x680 (0x680)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x680 (0x680)
	char pad_1665[7];  // 0x681 (0x681)
	struct UMsgBaseNode* Temp_object_Variable_2;  // 0x688 (0x688)
	struct FMsgGASActorDieNotify Temp_struct_Variable_3;  // 0x690 (0x690)
	char pad_2192_1 : 7;  // 0x890 (0x890)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x890 (0x890)
	char pad_2193[7];  // 0x891 (0x891)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject_2;  // 0x898 (0x898)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x8A0 (0x8A0)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput;  // 0x8B0 (0x8B0)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0x8C0 (0x8C0)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput_2;  // 0x8C8 (0x8C8)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue_2;  // 0x8D8 (0x8D8)
	char pad_2272_1 : 7;  // 0x8E0 (0x8E0)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x8E0 (0x8E0)
	char pad_2273_1 : 7;  // 0x8E1 (0x8E1)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x8E1 (0x8E1)
	char pad_2274_1 : 7;  // 0x8E2 (0x8E2)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x8E2 (0x8E2)
	char pad_2275[5];  // 0x8E3 (0x8E3)
	struct FMsgGASActorDieNotify Temp_struct_Variable_4;  // 0x8E8 (0x8E8)
	struct ADCMonsterBase* K2Node_Event_Monster;  // 0xAE8 (0xAE8)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0xAF0 (0xAF0)
	char pad_2808_1 : 7;  // 0xAF8 (0xAF8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xAF8 (0xAF8)
	char pad_2809_1 : 7;  // 0xAF9 (0xAF9)
	bool CallFunc_GetPayload_ReturnValue_2 : 1;  // 0xAF9 (0xAF9)
	char pad_2810_1 : 7;  // 0xAFA (0xAFA)
	bool K2Node_SwitchEnum_CmpSuccess_2 : 1;  // 0xAFA (0xAFA)
	char pad_2811_1 : 7;  // 0xAFB (0xAFB)
	bool K2Node_SwitchEnum_CmpSuccess_3 : 1;  // 0xAFB (0xAFB)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0xAFC (0xAFC)


}; 
 
 // Function BP_GameSpawner.BP_GameSpawner_C.OnSetMonsterPeaceAction
// Size: 0x8(Inherited: 0x8)
struct FOnSetMonsterPeaceAction : FOnSetMonsterPeaceAction
{
	struct ADCMonsterBase* Monster;  // 0x0 (0x0)


}; 
 
 
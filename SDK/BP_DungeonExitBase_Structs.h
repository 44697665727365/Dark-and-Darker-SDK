#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_DungeonExitBase.BP_DungeonExitBase_C.OnMessageReceived_D18DDADA4EFE928E7998E1A5730C06EE
struct FOnMessageReceived_D18DDADA4EFE928E7998E1A5730C06EE
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function BP_DungeonExitBase.BP_DungeonExitBase_C.BndEvt__BP_CaveExit_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct FBndEvt__BP_CaveExit_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bFromSweep : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FHitResult SweepResult;  // 0x20 (0x20)


}; 
 
 // Function BP_DungeonExitBase.BP_DungeonExitBase_C.EventOnFMsgGameFloorRuleNotify
struct FEventOnFMsgGameFloorRuleNotify
{
	struct FMsgGameFloorRuleNotify Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_DungeonExitBase.BP_DungeonExitBase_C.EventOnFMsgDungeonInfoNotify
struct FEventOnFMsgDungeonInfoNotify
{
	struct FMsgDungeonInfoNotify Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_DungeonExitBase.BP_DungeonExitBase_C.OnMessageReceived_40B3AB014AC456228E29568172E97769
struct FOnMessageReceived_40B3AB014AC456228E29568172E97769
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function BP_DungeonExitBase.BP_DungeonExitBase_C.ExecuteUbergraph_BP_DungeonExitBase
struct FExecuteUbergraph_BP_DungeonExitBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgGameFloorRuleNotify Temp_struct_Variable;  // 0x8 (0x8)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x80 (0x80)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x88 (0x88)
	struct FMsgGameFloorRuleNotify Temp_struct_Variable_2;  // 0x98 (0x98)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x110 (0x110)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x118 (0x118)
	char pad_281[7];  // 0x119 (0x119)
	struct FObjectLinkRequestEvent K2Node_MakeStruct_ObjectLinkRequestEvent;  // 0x120 (0x120)
	char pad_464_1 : 7;  // 0x1D0 (0x1D0)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x1D0 (0x1D0)
	char pad_465_1 : 7;  // 0x1D1 (0x1D1)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x1D1 (0x1D1)
	char pad_466[6];  // 0x1D2 (0x1D2)
	struct AGameStateBase* CallFunc_GetGameState_ReturnValue;  // 0x1D8 (0x1D8)
	struct FMsgDungeonInfoNotify Temp_struct_Variable_3;  // 0x1E0 (0x1E0)
	struct ADCGameStateBase* K2Node_DynamicCast_AsDCGame_State_Base;  // 0x1F8 (0x1F8)
	char pad_512_1 : 7;  // 0x200 (0x200)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x200 (0x200)
	char pad_513[7];  // 0x201 (0x201)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput;  // 0x208 (0x208)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0x218 (0x218)
	char pad_544_1 : 7;  // 0x220 (0x220)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue : 1;  // 0x220 (0x220)
	char pad_545_1 : 7;  // 0x221 (0x221)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x221 (0x221)
	char pad_546[6];  // 0x222 (0x222)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput_2;  // 0x228 (0x228)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue_2;  // 0x238 (0x238)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x240 (0x240)
	char pad_577[7];  // 0x241 (0x241)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;  // 0x248 (0x248)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x250 (0x250)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x258 (0x258)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex;  // 0x260 (0x260)
	char pad_612_1 : 7;  // 0x264 (0x264)
	bool K2Node_ComponentBoundEvent_bFromSweep : 1;  // 0x264 (0x264)
	char pad_613[3];  // 0x265 (0x265)
	struct FHitResult K2Node_ComponentBoundEvent_SweepResult;  // 0x268 (0x268)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0x350 (0x350)
	char pad_856_1 : 7;  // 0x358 (0x358)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x358 (0x358)
	char pad_857_1 : 7;  // 0x359 (0x359)
	bool CallFunc_OnDungeonExitOverlapped_bResult : 1;  // 0x359 (0x359)
	char pad_858[2];  // 0x35A (0x35A)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x35C (0x35C)
	struct UMsgBaseNode* Temp_object_Variable_2;  // 0x360 (0x360)
	char pad_872_1 : 7;  // 0x368 (0x368)
	bool CallFunc_GetPayload_ReturnValue_2 : 1;  // 0x368 (0x368)
	char pad_873[7];  // 0x369 (0x369)
	struct FMsgDungeonInfoNotify Temp_struct_Variable_4;  // 0x370 (0x370)
	struct FMsgDungeonInfoNotify K2Node_CustomEvent_Msg_2;  // 0x388 (0x388)
	struct AGameStateBase* CallFunc_GetGameState_ReturnValue_2;  // 0x3A0 (0x3A0)
	struct FMsgGameFloorRuleNotify K2Node_CustomEvent_Msg;  // 0x3A8 (0x3A8)
	struct ADCGameStateBase* K2Node_DynamicCast_AsDCGame_State_Base_2;  // 0x420 (0x420)
	char pad_1064_1 : 7;  // 0x428 (0x428)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x428 (0x428)
	char pad_1065[3];  // 0x429 (0x429)
	struct FDCDungeonInfo CallFunc_GetDungeonInfo_ReturnValue;  // 0x42C (0x42C)
	char pad_1080_1 : 7;  // 0x438 (0x438)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x438 (0x438)
	char pad_1081[3];  // 0x439 (0x439)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x43C (0x43C)
	char pad_1088_1 : 7;  // 0x440 (0x440)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x440 (0x440)
	char pad_1089[7];  // 0x441 (0x441)
	double CallFunc_Conv_IntToDouble_ReturnValue;  // 0x448 (0x448)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x450 (0x450)
	double CallFunc_Conv_IntToDouble_ReturnValue_2;  // 0x458 (0x458)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject_2;  // 0x460 (0x460)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_2;  // 0x468 (0x468)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x470 (0x470)
	char pad_1144_1 : 7;  // 0x478 (0x478)
	bool CallFunc_NotEqual_ByteByte_ReturnValue : 1;  // 0x478 (0x478)
	char pad_1145_1 : 7;  // 0x479 (0x479)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x479 (0x479)
	char pad_1146[2];  // 0x47A (0x47A)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x47C (0x47C)
	char pad_1164_1 : 7;  // 0x48C (0x48C)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x48C (0x48C)
	char pad_1165[3];  // 0x48D (0x48D)
	struct TArray<struct FObjectLinkResponeEvent> CallFunc_RequestToLinkers_ReturnValue;  // 0x490 (0x490)
	char pad_1184_1 : 7;  // 0x4A0 (0x4A0)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue_2 : 1;  // 0x4A0 (0x4A0)
	char pad_1185_1 : 7;  // 0x4A1 (0x4A1)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue_3 : 1;  // 0x4A1 (0x4A1)
	char pad_1186[2];  // 0x4A2 (0x4A2)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0x4A4 (0x4A4)


}; 
 
 // Function BP_DungeonExitBase.BP_DungeonExitBase_C.OnDungeonExitOverlapped
struct FOnDungeonExitOverlapped
{
	struct ADCPlayerCharacterBase* PlayerCharacter;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bResult : 1;  // 0x8 (0x8)


}; 
 
 
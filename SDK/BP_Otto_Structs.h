#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Otto.BP_Otto_C.EventFMsgInteractStarted
struct FEventFMsgInteractStarted
{
	struct FMsgInteractStarted Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_Otto.BP_Otto_C.OnMessageReceived_B39992A64B1101C700A945B3A442429D
struct FOnMessageReceived_B39992A64B1101C700A945B3A442429D
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function BP_Otto.BP_Otto_C.EventFMsgInteractFailed
struct FEventFMsgInteractFailed
{
	struct FMsgInteractFailed Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_Otto.BP_Otto_C.RandomActionFromLie
struct FRandomActionFromLie
{
	int32_t CallFunc_RandomIntegerInRange_ReturnValue;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FString CallFunc_Conv_IntToString_ReturnValue;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_SwitchString_CmpSuccess : 1;  // 0x18 (0x18)


}; 
 
 // Function BP_Otto.BP_Otto_C.ExecuteUbergraph_BP_Otto
struct FExecuteUbergraph_BP_Otto
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgInteractStarted Temp_struct_Variable;  // 0x8 (0x8)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject_2;  // 0x30 (0x30)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x38 (0x38)
	struct FMsgInteractStarted Temp_struct_Variable_2;  // 0x48 (0x48)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x78 (0x78)
	char pad_121[7];  // 0x79 (0x79)
	struct FMsgInteractFailed Temp_struct_Variable_3;  // 0x80 (0x80)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0xA8 (0xA8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0xB0 (0xB0)
	struct FMsgInteractFailed Temp_struct_Variable_4;  // 0xC0 (0xC0)
	struct UMsgBaseNode* Temp_object_Variable_2;  // 0xE8 (0xE8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool CallFunc_GetPayload_ReturnValue_2 : 1;  // 0xF0 (0xF0)
	char pad_241_1 : 7;  // 0xF1 (0xF1)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0xF1 (0xF1)
	char pad_242_1 : 7;  // 0xF2 (0xF2)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0xF2 (0xF2)
	char pad_243_1 : 7;  // 0xF3 (0xF3)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0xF3 (0xF3)
	char pad_244[4];  // 0xF4 (0xF4)
	struct FMsgInteractStarted K2Node_CustomEvent_Msg_2;  // 0xF8 (0xF8)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool CallFunc_HasAuthority_ReturnValue_3 : 1;  // 0x120 (0x120)
	char pad_289_1 : 7;  // 0x121 (0x121)
	bool CallFunc_Array_Contains_ReturnValue : 1;  // 0x121 (0x121)
	char pad_290_1 : 7;  // 0x122 (0x122)
	bool CallFunc_Array_RemoveItem_ReturnValue : 1;  // 0x122 (0x122)
	char pad_291[5];  // 0x123 (0x123)
	struct AActor* K2Node_Event_Interacter;  // 0x128 (0x128)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x130 (0x130)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x138 (0x138)
	struct FHitResult K2Node_Event_HitResult;  // 0x140 (0x140)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x228 (0x228)
	char pad_556[4];  // 0x22C (0x22C)
	struct FMsgInteractFailed K2Node_CustomEvent_Msg;  // 0x230 (0x230)
	struct UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue;  // 0x258 (0x258)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool CallFunc_Array_Contains_ReturnValue_2 : 1;  // 0x260 (0x260)
	char pad_609_1 : 7;  // 0x261 (0x261)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x261 (0x261)
	char pad_610_1 : 7;  // 0x262 (0x262)
	bool CallFunc_Array_RemoveItem_ReturnValue_2 : 1;  // 0x262 (0x262)
	char pad_611_1 : 7;  // 0x263 (0x263)
	bool CallFunc_AddGameplayTag_ReturnValue_2 : 1;  // 0x263 (0x263)
	char pad_612_1 : 7;  // 0x264 (0x264)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x264 (0x264)
	char pad_613_1 : 7;  // 0x265 (0x265)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0x265 (0x265)
	char pad_614_1 : 7;  // 0x266 (0x266)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_3 : 1;  // 00005 (000051876] rited: 0x11B8)
)
	char pad_615_1 : 7;  // 0x267 (0x267)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_4 : 1;  // 0x267 (0x267)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_5 : 1;  // 0x268 (0x268)
	char pad_617_1 : 7;  // 0x269 (0x269)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_6 : 1;  // 0x269 (0x269)
	char pad_618_1 : 7;  // 0x26A (0x26A)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_7 : 1;  // 0x26A (0x26A)
	char pad_619_1 : 7;  // 0x26B (0x26B)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_8 : 1;  // 0x26B (0x26B)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x26C (0x26C)
	char pad_636[4];  // 0x27C (0x27C)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput;  // 0x280 (0x280)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0x290 (0x290)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput_2;  // 0x298 (0x298)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue_2;  // 0x2A8 (0x2A8)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x2B0 (0x2B0)
	char pad_689_1 : 7;  // 0x2B1 (0x2B1)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x2B1 (0x2B1)


}; 
 
 // Function BP_Otto.BP_Otto_C.RandomActionFromStand
struct FRandomActionFromStand
{
	int32_t CallFunc_RandomIntegerInRange_ReturnValue;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FString CallFunc_Conv_IntToString_ReturnValue;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_SwitchString_CmpSuccess : 1;  // 0x18 (0x18)


}; 
 
 // Function BP_Otto.BP_Otto_C.OnMessageReceived_C089C7A74477A8F15E2C599BA276E0B8
struct FOnMessageReceived_C089C7A74477A8F15E2C599BA276E0B8
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function BP_Otto.BP_Otto_C.RandomActionFromSit
struct FRandomActionFromSit
{
	int32_t CallFunc_RandomIntegerInRange_ReturnValue;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FString CallFunc_Conv_IntToString_ReturnValue;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_SwitchString_CmpSuccess : 1;  // 0x18 (0x18)


}; 
 
 // Function BP_Otto.BP_Otto_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 
#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_MusicMemory2.GA_MusicMemory2_C.EventReceived_A6938EA84B242FA56C6C0A8CBDD74F2C
struct FEventReceived_A6938EA84B242FA56C6C0A8CBDD74F2C
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_MusicMemory2.GA_MusicMemory2_C.ExecuteUbergraph_GA_MusicMemory2
struct FExecuteUbergraph_GA_MusicMemory2
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x178 (0x178)
	struct FGameplayAbilityActorInfo CallFunc_GetActorInfo_ReturnValue;  // 0x228 (0x228)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x270 (0x270)
	char pad_625[7];  // 0x271 (0x271)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x278 (0x278)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x288 (0x288)
	char pad_649_1 : 7;  // 0x289 (0x289)
	bool K2Node_Event_bWasCancelled : 1;  // 0x289 (0x289)
	char pad_650[6];  // 0x28A (0x28A)
	struct FGameplayAbilityActorInfo CallFunc_GetActorInfo_ReturnValue_2;  // 0x290 (0x290)
	char pad_728_1 : 7;  // 0x2D8 (0x2D8)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x2D8 (0x2D8)
	char pad_729_1 : 7;  // 0x2D9 (0x2D9)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x2D9 (0x2D9)
	char pad_730[6];  // 0x2DA (0x2DA)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface_2;  // 0x2E0 (0x2E0)
	char pad_752_1 : 7;  // 0x2F0 (0x2F0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x2F0 (0x2F0)
	char pad_753_1 : 7;  // 0x2F1 (0x2F1)
	bool CallFunc_HasTag_ReturnValue : 1;  // 0x2F1 (0x2F1)
	char pad_754_1 : 7;  // 0x2F2 (0x2F2)
	bool CallFunc_HasTag_ReturnValue_2 : 1;  // 0x2F2 (0x2F2)
	char pad_755[5];  // 0x2F3 (0x2F3)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x2F8 (0x2F8)
	struct FMsgWidgetGameGroupVisibilityRequest K2Node_MakeStruct_MsgWidgetGameGroupVisibilityRequest;  // 0x300 (0x300)
	char pad_800_1 : 7;  // 0x320 (0x320)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x320 (0x320)
	char pad_801[7];  // 0x321 (0x321)
	struct FMsgWidgetGameGroupVisibilityRequest K2Node_MakeStruct_MsgWidgetGameGroupVisibilityRequest_2;  // 0x328 (0x328)


}; 
 
 // Function GA_MusicMemory2.GA_MusicMemory2_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_MusicMemory2.GA_MusicMemory2_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 
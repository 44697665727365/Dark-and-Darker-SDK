#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SpellMemory2.GA_SpellMemory2_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_SpellMemory2.GA_SpellMemory2_C.EventReceived_B9E22EE640370E33E9B77B8AF925FD82
struct FEventReceived_B9E22EE640370E33E9B77B8AF925FD82
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SpellMemory2.GA_SpellMemory2_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SpellMemory2.GA_SpellMemory2_C.ExecuteUbergraph_GA_SpellMemory2
struct FExecuteUbergraph_GA_SpellMemory2
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgWidgetGameGroupVisibilityRequest K2Node_MakeStruct_MsgWidgetGameGroupVisibilityRequest;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x28 (0x28)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x38 (0x38)
	struct FGameplayEventData Temp_struct_Variable;  // 0xE8 (0xE8)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x198 (0x198)
	struct FGameplayAbilityActorInfo CallFunc_GetActorInfo_ReturnValue;  // 0x248 (0x248)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x290 (0x290)
	char pad_657[7];  // 0x291 (0x291)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface;  // 0x298 (0x298)
	char pad_680_1 : 7;  // 0x2A8 (0x2A8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x2A8 (0x2A8)
	char pad_681_1 : 7;  // 0x2A9 (0x2A9)
	bool K2Node_Event_bWasCancelled : 1;  // 0x2A9 (0x2A9)
	char pad_682[6];  // 0x2AA (0x2AA)
	struct FGameplayAbilityActorInfo CallFunc_GetActorInfo_ReturnValue_2;  // 0x2B0 (0x2B0)
	char pad_760_1 : 7;  // 0x2F8 (0x2F8)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x2F8 (0x2F8)
	char pad_761_1 : 7;  // 0x2F9 (0x2F9)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x2F9 (0x2F9)
	char pad_762[6];  // 0x2FA (0x2FA)
	struct TScriptInterface<IBaseInterface> K2Node_DynamicCast_AsBase_Interface_2;  // 0x300 (0x300)
	char pad_784_1 : 7;  // 0x310 (0x310)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x310 (0x310)
	char pad_785_1 : 7;  // 0x311 (0x311)
	bool CallFunc_HasTag_ReturnValue : 1;  // 0x311 (0x311)
	char pad_786_1 : 7;  // 0x312 (0x312)
	bool CallFunc_HasTag_ReturnValue_2 : 1;  // 0x312 (0x312)
	char pad_787[5];  // 0x313 (0x313)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x318 (0x318)
	struct FMsgWidgetGameGroupVisibilityRequest K2Node_MakeStruct_MsgWidgetGameGroupVisibilityRequest_2;  // 0x320 (0x320)
	char pad_832_1 : 7;  // 0x340 (0x340)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x340 (0x340)


}; 
 
 
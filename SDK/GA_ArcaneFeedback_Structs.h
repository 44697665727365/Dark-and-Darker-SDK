#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ArcaneFeedback.GA_ArcaneFeedback_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_ArcaneFeedback.GA_ArcaneFeedback_C.EventReceived_FEC06BF8418516612E978591E8FA44BB
struct FEventReceived_FEC06BF8418516612E978591E8FA44BB
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_ArcaneFeedback.GA_ArcaneFeedback_C.ExecuteUbergraph_GA_ArcaneFeedback
struct FExecuteUbergraph_GA_ArcaneFeedback
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC0 (0xC0)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x180 (0x180)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393_1 : 7;  // 0x189 (0x189)
	bool CallFunc_HasTag_ReturnValue : 1;  // 0x189 (0x189)
	char pad_394_1 : 7;  // 0x18A (0x18A)
	bool CallFunc_HasTag_ReturnValue_2 : 1;  // 0x18A (0x18A)
	char pad_395_1 : 7;  // 0x18B (0x18B)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x18B (0x18B)
	char pad_396[4];  // 0x18C (0x18C)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x190 (0x190)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x240 (0x240)
	char pad_577[7];  // 0x241 (0x241)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x248 (0x248)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x258 (0x258)
	char pad_776_1 : 7;  // 0x308 (0x308)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x308 (0x308)


}; 
 
 
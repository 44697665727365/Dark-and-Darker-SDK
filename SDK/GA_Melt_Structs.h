#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Melt.GA_Melt_C.EventReceived_572966854591EB9993AC94996BE81F87
struct FEventReceived_572966854591EB9993AC94996BE81F87
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_Melt.GA_Melt_C.ExecuteUbergraph_GA_Melt
struct FExecuteUbergraph_GA_Melt
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
	char pad_393[7];  // 0x189 (0x189)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x190 (0x190)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool CallFunc_HasTag_ReturnValue : 1;  // 0x1A0 (0x1A0)
	char pad_417_1 : 7;  // 0x1A1 (0x1A1)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x1A1 (0x1A1)
	char pad_418[6];  // 0x1A2 (0x1A2)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x1A8 (0x1A8)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x258 (0x258)
	char pad_601_1 : 7;  // 0x259 (0x259)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x259 (0x259)


}; 
 
 // Function GA_Melt.GA_Melt_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 
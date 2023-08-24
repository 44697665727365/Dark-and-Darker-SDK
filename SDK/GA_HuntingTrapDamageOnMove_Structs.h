#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_HuntingTrapDamageOnMove.GA_HuntingTrapDamageOnMove_C.EventReceived_9E74D6F347C54F8146C39898E5654F35
struct FEventReceived_9E74D6F347C54F8146C39898E5654F35
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_HuntingTrapDamageOnMove.GA_HuntingTrapDamageOnMove_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_HuntingTrapDamageOnMove.GA_HuntingTrapDamageOnMove_C.ExecuteUbergraph_GA_HuntingTrapDamageOnMove
struct FExecuteUbergraph_GA_HuntingTrapDamageOnMove
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x10 (0x10)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xC0 (0xC0)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	char pad_376_1 : 7;  // 0x178 (0x178)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x178 (0x178)
	char pad_377[7];  // 0x179 (0x179)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x180 (0x180)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x230 (0x230)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x240 (0x240)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x250 (0x250)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x258 (0x258)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x260 (0x260)


}; 
 
 
#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DemonDog_Attack.GA_DemonDog_Attack_C.EventReceived_DBA5641548D44CA6EB284BB42FBBF497
struct FEventReceived_DBA5641548D44CA6EB284BB42FBBF497
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_DemonDog_Attack.GA_DemonDog_Attack_C.ExecuteUbergraph_GA_DemonDog_Attack
struct FExecuteUbergraph_GA_DemonDog_Attack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x10 (0x10)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x20 (0x20)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x180 (0x180)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393_1 : 7;  // 0x189 (0x189)
	bool K2Node_Event_bWasCancelled : 1;  // 0x189 (0x189)
	char pad_394[6];  // 0x18A (0x18A)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x190 (0x190)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x240 (0x240)


}; 
 
 // Function GA_DemonDog_Attack.GA_DemonDog_Attack_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DemonDog_Attack.GA_DemonDog_Attack_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 
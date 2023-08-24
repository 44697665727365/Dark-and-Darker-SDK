#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ZombieEating.GA_ZombieEating_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_ZombieEating.GA_ZombieEating_C.EventReceived_D94F53204DADF94B17AE4B948B7EC3A8
struct FEventReceived_D94F53204DADF94B17AE4B948B7EC3A8
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_ZombieEating.GA_ZombieEating_C.ExecuteUbergraph_GA_ZombieEating
struct FExecuteUbergraph_GA_ZombieEating
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x18 (0x18)
	struct UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue;  // 0x28 (0x28)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x30 (0x30)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x38 (0x38)
	float CallFunc_GetSightRange_ReturnValue;  // 0xE8 (0xE8)
	char pad_236[4];  // 0xEC (0xEC)
	struct FGameplayEventData Temp_struct_Variable;  // 0xF0 (0xF0)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x1A0 (0x1A0)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x1A8 (0x1A8)
	char pad_432_1 : 7;  // 0x1B0 (0x1B0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1B0 (0x1B0)
	char pad_433[7];  // 0x1B1 (0x1B1)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1B8 (0x1B8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x268 (0x268)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x270 (0x270)
	struct AAIController* CallFunc_GetAIController_ReturnValue_2;  // 0x278 (0x278)
	struct AAIController* CallFunc_GetAIController_ReturnValue_3;  // 0x280 (0x280)
	struct UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue_2;  // 0x288 (0x288)
	struct UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue_3;  // 0x290 (0x290)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool CallFunc_SetSightRange_ReturnValue : 1;  // 0x298 (0x298)
	char pad_665_1 : 7;  // 0x299 (0x299)
	bool CallFunc_SetSightRange_ReturnValue_2 : 1;  // 0x299 (0x299)
	char pad_666[6];  // 0x29A (0x29A)
	double K2Node_VariableSet_TempSightRange_ImplicitCast;  // 0x2A0 (0x2A0)
	float CallFunc_SetSightRange_SightRange_ImplicitCast;  // 0x2A8 (0x2A8)


}; 
 
 
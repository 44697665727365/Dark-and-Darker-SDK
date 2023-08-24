#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.OnSuccess_A7D5BE974E6E069FBEB9DEA6342A6CF5
struct FOnSuccess_A7D5BE974E6E069FBEB9DEA6342A6CF5
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.EventReceived_0976E0E9468066BEC23996B7CFF9D646
struct FEventReceived_0976E0E9468066BEC23996B7CFF9D646
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.ExecuteUbergraph_GA_SkeletonChampion_SprintPhase
struct FExecuteUbergraph_GA_SkeletonChampion_SprintPhase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct AAIController* CallFunc_GetAIController_ReturnValue;  // 0xB8 (0xB8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC0 (0xC0)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x170 (0x170)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x178 (0x178)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x188 (0x188)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2;  // 0x189 (0x189)
	enum class EPathFollowingResult K2Node_CustomEvent_MovementResult;  // 0x18A (0x18A)
	char pad_395[1];  // 0x18B (0x18B)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x18C (0x18C)
	enum class EPathFollowingResult Temp_byte_Variable;  // 0x19C (0x19C)
	char pad_413[3];  // 0x19D (0x19D)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1A0 (0x1A0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x250 (0x250)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x258 (0x258)
	char pad_601[7];  // 0x259 (0x259)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x260 (0x260)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x268 (0x268)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x270 (0x270)
	char pad_625[7];  // 0x271 (0x271)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x278 (0x278)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x328 (0x328)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x338 (0x338)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x348 (0x348)
	struct UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue;  // 0x350 (0x350)
	char pad_856_1 : 7;  // 0x358 (0x358)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x358 (0x358)


}; 
 
 // Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.OnFail_A7D5BE974E6E069FBEB9DEA6342A6CF5
struct FOnFail_A7D5BE974E6E069FBEB9DEA6342A6CF5
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 
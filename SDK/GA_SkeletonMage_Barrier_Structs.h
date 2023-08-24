#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonMage_Barrier.GA_SkeletonMage_Barrier_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonMage_Barrier.GA_SkeletonMage_Barrier_C.EventReceived_16E0B731426486054E70CBB8F8CDC1B7
struct FEventReceived_16E0B731426486054E70CBB8F8CDC1B7
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonMage_Barrier.GA_SkeletonMage_Barrier_C.ExecuteUbergraph_GA_SkeletonMage_Barrier
struct FExecuteUbergraph_GA_SkeletonMage_Barrier
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x18 (0x18)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x28 (0x28)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD8 (0xD8)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x188 (0x188)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x238 (0x238)
	struct UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue;  // 0x240 (0x240)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x248 (0x248)
	struct ABP_DCMonsterBase_C* K2Node_DynamicCast_AsBP_DCMonster_Base;  // 0x250 (0x250)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x258 (0x258)
	char pad_601_1 : 7;  // 0x259 (0x259)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x259 (0x259)
	char pad_602[6];  // 0x25A (0x25A)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x260 (0x260)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x270 (0x270)
	char pad_625[7];  // 0x271 (0x271)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x278 (0x278)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x328 (0x328)


}; 
 
 
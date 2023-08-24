#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Pushing.GA_Pushing_C.ExecuteUbergraph_GA_Pushing
struct FExecuteUbergraph_GA_Pushing
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x14 (0x14)
	char pad_36[4];  // 0x24 (0x24)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x28 (0x28)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD8 (0xD8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x190 (0x190)
	char pad_401[7];  // 0x191 (0x191)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x198 (0x198)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x1A0 (0x1A0)
	struct ABP_PushingBlock_C* K2Node_DynamicCast_AsBP_Pushing_Block;  // 0x1B0 (0x1B0)
	char pad_440_1 : 7;  // 0x1B8 (0x1B8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1B8 (0x1B8)
	char pad_441[7];  // 0x1B9 (0x1B9)
	struct ABP_PushingBlock_C* K2Node_DynamicCast_AsBP_Pushing_Block_2;  // 0x1C0 (0x1C0)
	char pad_456_1 : 7;  // 0x1C8 (0x1C8)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x1C8 (0x1C8)
	char pad_457[7];  // 0x1C9 (0x1C9)
	struct UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent;  // 0x1D0 (0x1D0)
	struct AActor* K2Node_CustomEvent_OtherActor;  // 0x1D8 (0x1D8)
	struct UPrimitiveComponent* K2Node_CustomEvent_OtherComp;  // 0x1E0 (0x1E0)
	int32_t K2Node_CustomEvent_OtherBodyIndex;  // 0x1E8 (0x1E8)
	char pad_492_1 : 7;  // 0x1EC (0x1EC)
	bool K2Node_CustomEvent_bFromSweep : 1;  // 0x1EC (0x1EC)
	char pad_493[3];  // 0x1ED (0x1ED)
	struct FHitResult K2Node_CustomEvent_SweepResult;  // 0x1F0 (0x1F0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x2D8 (0x2D8)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x2E0 (0x2E0)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x390 (0x390)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x440 (0x440)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x450 (0x450)


}; 
 
 // Function GA_Pushing.GA_Pushing_C.CustomEvent
struct FCustomEvent
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bFromSweep : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FHitResult SweepResult;  // 0x20 (0x20)


}; 
 
 // Function GA_Pushing.GA_Pushing_C.EventReceived_03862C72450BC79ED8F2908E40347D05
struct FEventReceived_03862C72450BC79ED8F2908E40347D05
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_Pushing.GA_Pushing_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 
#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Slime_AttackPhase.GA_Slime_AttackPhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Slime_AttackPhase.GA_Slime_AttackPhase_C.EventReceived_24CAE78F43C9EF3054EB50932E944C21
struct FEventReceived_24CAE78F43C9EF3054EB50932E944C21
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_Slime_AttackPhase.GA_Slime_AttackPhase_C.ExecuteUbergraph_GA_Slime_AttackPhase
struct FExecuteUbergraph_GA_Slime_AttackPhase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xB8 (0xB8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x168 (0x168)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x170 (0x170)
	char pad_369[7];  // 0x171 (0x171)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x178 (0x178)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x188 (0x188)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x190 (0x190)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1F0 (0x1F0)
	struct FVector CallFunc_BreakTransform_Location;  // 0x2A0 (0x2A0)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x2B8 (0x2B8)
	struct FVector CallFunc_BreakTransform_Scale;  // 0x2D0 (0x2D0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x2E8 (0x2E8)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x2F0 (0x2F0)
	struct ABP_Slime_C* K2Node_DynamicCast_AsBP_Slime;  // 0x300 (0x300)
	char pad_776_1 : 7;  // 0x308 (0x308)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x308 (0x308)
	char pad_777[3];  // 0x309 (0x309)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x30C (0x30C)
	char pad_796[4];  // 0x31C (0x31C)
	struct TArray<struct AActor*> CallFunc_CapsuleOverlapActors_OutActors;  // 0x320 (0x320)
	char pad_816_1 : 7;  // 0x330 (0x330)
	bool CallFunc_CapsuleOverlapActors_ReturnValue : 1;  // 0x330 (0x330)


}; 
 
 
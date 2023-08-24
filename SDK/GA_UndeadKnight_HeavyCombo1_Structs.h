#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_UndeadKnight_HeavyCombo1.GA_UndeadKnight_HeavyCombo1_C.EventReceived_DFC67D8749D4EBFD2FDFA6BFC00142A8
struct FEventReceived_DFC67D8749D4EBFD2FDFA6BFC00142A8
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_UndeadKnight_HeavyCombo1.GA_UndeadKnight_HeavyCombo1_C.ExecuteUbergraph_GA_UndeadKnight_HeavyCombo1
struct FExecuteUbergraph_GA_UndeadKnight_HeavyCombo1
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x10 (0x10)
	struct ABP_UndeadKnight_Common_C* K2Node_DynamicCast_AsBP_Undead_Knight_Common;  // 0xC0 (0xC0)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xC8 (0xC8)
	char pad_201[7];  // 0xC9 (0xC9)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	int32_t Temp_int_Array_Index_Variable;  // 0x180 (0x180)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x184 (0x184)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x188 (0x188)
	char pad_396[4];  // 0x18C (0x18C)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x190 (0x190)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x240 (0x240)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x248 (0x248)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x260 (0x260)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x270 (0x270)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x280 (0x280)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x288 (0x288)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x298 (0x298)
	char pad_665[7];  // 0x299 (0x299)
	struct UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue;  // 0x2A0 (0x2A0)
	char pad_680_1 : 7;  // 0x2A8 (0x2A8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x2A8 (0x2A8)
	char pad_681[7];  // 0x2A9 (0x2A9)
	struct AActor* CallFunc_Array_Get_Item;  // 0x2B0 (0x2B0)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x2B8 (0x2B8)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x2C0 (0x2C0)
	char pad_705[3];  // 0x2C1 (0x2C1)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x2C4 (0x2C4)
	char pad_712_1 : 7;  // 0x2C8 (0x2C8)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x2C8 (0x2C8)
	char pad_713[3];  // 0x2C9 (0x2C9)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x2CC (0x2CC)
	char pad_732[4];  // 0x2DC (0x2DC)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x2E0 (0x2E0)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x2E8 (0x2E8)
	char pad_748_1 : 7;  // 0x2EC (0x2EC)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x2EC (0x2EC)
	char pad_749_1 : 7;  // 0x2ED (0x2ED)
	bool CallFunc_SortTargetsByDistance_ReturnValue : 1;  // 0x2ED (0x2ED)
	char pad_750[2];  // 0x2EE (0x2EE)
	struct ADCCharacterBase* CallFunc_Array_Get_Item_2;  // 0x2F0 (0x2F0)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x2F8 (0x2F8)


}; 
 
 // Function GA_UndeadKnight_HeavyCombo1.GA_UndeadKnight_HeavyCombo1_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 
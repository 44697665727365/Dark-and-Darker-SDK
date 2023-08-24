#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_GoblinAxeman.BP_GoblinAxeman_C.OnFMsgGASAttributeNotifyBlueprint
// Size: 0x4D8(Inherited: 0x4D8)
struct FOnFMsgGASAttributeNotifyBlueprint : FOnFMsgGASAttributeNotifyBlueprint
{
	struct FMsgGASAttributeNotify InMsg;  // 0x0 (0x0)


}; 
 
 // Function BP_GoblinAxeman.BP_GoblinAxeman_C.ExecuteUbergraph_BP_GoblinAxeman
struct FExecuteUbergraph_BP_GoblinAxeman
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x4 (0x4)
	int32_t K2Node_Event_InCount;  // 0xC (0xC)
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct UABP_GoblinAxeman_C* K2Node_DynamicCast_AsABP_Goblin_Axeman;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct UABP_GoblinAxeman_C* K2Node_DynamicCast_AsABP_Goblin_Axeman_2;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct UABP_GoblinAxeman_C* K2Node_DynamicCast_AsABP_Goblin_Axeman_3;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x49 (0x49)
	char pad_74_1 : 7;  // 0x4A (0x4A)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2 : 1;  // 0x4A (0x4A)
	char pad_75_1 : 7;  // 0x4B (0x4B)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue_3 : 1;  // 0x4B (0x4B)
	char pad_76[4];  // 0x4C (0x4C)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x50 (0x50)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x60 (0x60)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0xC0 (0xC0)
	struct FMsgGASAttributeNotify K2Node_Event_InMsg;  // 0xC8 (0xC8)
	struct ABP_GoblinWarrior_Shield_C* CallFunc_FinishSpawningActor_ReturnValue;  // 0x5A0 (0x5A0)
	struct AActor* CallFunc_DCEffectContextGetInstigatorActor_ReturnValue;  // 0x5A8 (0x5A8)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x5B0 (0x5B0)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x5B8 (0x5B8)
	char pad_1640_1 : 7;  // 0x668 (0x668)
	bool CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue : 1;  // 0x668 (0x668)
	char pad_1641[7];  // 0x669 (0x669)
	struct FHitResult CallFunc_K2_SetActorRelativeRotation_SweepHitResult;  // 0x670 (0x670)
	struct FHitResult CallFunc_K2_SetActorRelativeLocation_SweepHitResult;  // 0x758 (0x758)
	char pad_2112_1 : 7;  // 0x840 (0x840)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x840 (0x840)
	char pad_2113_1 : 7;  // 0x841 (0x841)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x841 (0x841)
	char pad_2114_1 : 7;  // 0x842 (0x842)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0x842 (0x842)
	char pad_2115_1 : 7;  // 0x843 (0x843)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x843 (0x843)
	float CallFunc_GetDistanceTo_ReturnValue;  // 0x844 (0x844)
	char pad_2120_1 : 7;  // 0x848 (0x848)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x848 (0x848)
	char pad_2121_1 : 7;  // 0x849 (0x849)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x849 (0x849)
	char pad_2122[6];  // 0x84A (0x84A)
	struct TArray<struct FGameplayTag> K2Node_MakeArray_Array;  // 0x850 (0x850)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;  // 0x860 (0x860)
	char pad_2176_1 : 7;  // 0x880 (0x880)
	bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue : 1;  // 0x880 (0x880)
	char pad_2177[7];  // 0x881 (0x881)
	double CallFunc_Subtract_DoubleDouble_B_ImplicitCast;  // 0x888 (0x888)
	double CallFunc_Subtract_DoubleDouble_A_ImplicitCast;  // 0x890 (0x890)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0x898 (0x898)


}; 
 
 // Function BP_GoblinAxeman.BP_GoblinAxeman_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 
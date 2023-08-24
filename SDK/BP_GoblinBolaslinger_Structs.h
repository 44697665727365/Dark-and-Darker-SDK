#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_GoblinBolaslinger.BP_GoblinBolaslinger_C.ExecuteUbergraph_BP_GoblinBolaslinger
struct FExecuteUbergraph_BP_GoblinBolaslinger
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x4 (0x4)
	int32_t K2Node_Event_InCount;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2 : 1;  // 0x12 (0x12)
	char pad_19_1 : 7;  // 0x13 (0x13)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue_3 : 1;  // 0x13 (0x13)
	char pad_20[4];  // 0x14 (0x14)
	struct FMsgGASAttributeNotify K2Node_Event_InMsg;  // 0x18 (0x18)
	struct AActor* CallFunc_DCEffectContextGetInstigatorActor_ReturnValue;  // 0x4F0 (0x4F0)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x4F8 (0x4F8)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x500 (0x500)
	char pad_1456_1 : 7;  // 0x5B0 (0x5B0)
	bool CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue : 1;  // 0x5B0 (0x5B0)
	char pad_1457[7];  // 0x5B1 (0x5B1)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x5B8 (0x5B8)
	char pad_1472_1 : 7;  // 0x5C0 (0x5C0)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x5C0 (0x5C0)
	char pad_1473_1 : 7;  // 0x5C1 (0x5C1)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x5C1 (0x5C1)
	char pad_1474_1 : 7;  // 0x5C2 (0x5C2)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0x5C2 (0x5C2)
	char pad_1475_1 : 7;  // 0x5C3 (0x5C3)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x5C3 (0x5C3)
	float CallFunc_GetDistanceTo_ReturnValue;  // 0x5C4 (0x5C4)
	char pad_1480_1 : 7;  // 0x5C8 (0x5C8)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x5C8 (0x5C8)
	char pad_1481_1 : 7;  // 0x5C9 (0x5C9)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x5C9 (0x5C9)
	char pad_1482[6];  // 0x5CA (0x5CA)
	struct TArray<struct FGameplayTag> K2Node_MakeArray_Array;  // 0x5D0 (0x5D0)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;  // 0x5E0 (0x5E0)
	char pad_1536_1 : 7;  // 0x600 (0x600)
	bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue : 1;  // 0x600 (0x600)
	char pad_1537[7];  // 0x601 (0x601)
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue;  // 0x608 (0x608)
	struct UABP_GoblinBolaslinger_C* K2Node_DynamicCast_AsABP_Goblin_Bolaslinger;  // 0x610 (0x610)
	char pad_1560_1 : 7;  // 0x618 (0x618)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x618 (0x618)
	char pad_1561[7];  // 0x619 (0x619)
	struct UABP_GoblinBolaslinger_C* K2Node_DynamicCast_AsABP_Goblin_Bolaslinger_2;  // 0x620 (0x620)
	char pad_1576_1 : 7;  // 0x628 (0x628)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x628 (0x628)
	char pad_1577[7];  // 0x629 (0x629)
	struct UABP_GoblinBolaslinger_C* K2Node_DynamicCast_AsABP_Goblin_Bolaslinger_3;  // 0x630 (0x630)
	char pad_1592_1 : 7;  // 0x638 (0x638)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x638 (0x638)
	char pad_1593[7];  // 0x639 (0x639)
	double CallFunc_Subtract_DoubleDouble_B_ImplicitCast;  // 0x640 (0x640)
	double CallFunc_Subtract_DoubleDouble_A_ImplicitCast;  // 0x648 (0x648)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0x650 (0x650)


}; 
 
 // Function BP_GoblinBolaslinger.BP_GoblinBolaslinger_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_GoblinBolaslinger.BP_GoblinBolaslinger_C.OnFMsgGASAttributeNotifyBlueprint
// Size: 0x4D8(Inherited: 0x4D8)
struct FOnFMsgGASAttributeNotifyBlueprint : FOnFMsgGASAttributeNotifyBlueprint
{
	struct FMsgGASAttributeNotify InMsg;  // 0x0 (0x0)


}; 
 
 
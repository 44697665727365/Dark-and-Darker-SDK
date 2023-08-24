#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_GoblinArcher.BP_GoblinArcher_C.ExecuteUbergraph_BP_GoblinArcher
struct FExecuteUbergraph_BP_GoblinArcher
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgGASAttributeNotify K2Node_Event_InMsg;  // 0x8 (0x8)
	struct AActor* CallFunc_DCEffectContextGetInstigatorActor_ReturnValue;  // 0x4E0 (0x4E0)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x4E8 (0x4E8)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x4F0 (0x4F0)
	char pad_1440_1 : 7;  // 0x5A0 (0x5A0)
	bool CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue : 1;  // 0x5A0 (0x5A0)
	char pad_1441[7];  // 0x5A1 (0x5A1)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x5A8 (0x5A8)
	char pad_1456_1 : 7;  // 0x5B0 (0x5B0)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x5B0 (0x5B0)
	char pad_1457_1 : 7;  // 0x5B1 (0x5B1)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x5B1 (0x5B1)
	char pad_1458_1 : 7;  // 0x5B2 (0x5B2)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0x5B2 (0x5B2)
	char pad_1459_1 : 7;  // 0x5B3 (0x5B3)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x5B3 (0x5B3)
	float CallFunc_GetDistanceTo_ReturnValue;  // 0x5B4 (0x5B4)
	char pad_1464_1 : 7;  // 0x5B8 (0x5B8)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x5B8 (0x5B8)
	char pad_1465_1 : 7;  // 0x5B9 (0x5B9)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x5B9 (0x5B9)
	char pad_1466[6];  // 0x5BA (0x5BA)
	struct TArray<struct FGameplayTag> K2Node_MakeArray_Array;  // 0x5C0 (0x5C0)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;  // 0x5D0 (0x5D0)
	char pad_1520_1 : 7;  // 0x5F0 (0x5F0)
	bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue : 1;  // 0x5F0 (0x5F0)
	char pad_1521[7];  // 0x5F1 (0x5F1)
	double CallFunc_Subtract_DoubleDouble_B_ImplicitCast;  // 0x5F8 (0x5F8)
	double CallFunc_Subtract_DoubleDouble_A_ImplicitCast;  // 0x600 (0x600)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0x608 (0x608)


}; 
 
 // Function BP_GoblinArcher.BP_GoblinArcher_C.OnFMsgGASAttributeNotifyBlueprint
// Size: 0x4D8(Inherited: 0x4D8)
struct FOnFMsgGASAttributeNotifyBlueprint : FOnFMsgGASAttributeNotifyBlueprint
{
	struct FMsgGASAttributeNotify InMsg;  // 0x0 (0x0)


}; 
 
 
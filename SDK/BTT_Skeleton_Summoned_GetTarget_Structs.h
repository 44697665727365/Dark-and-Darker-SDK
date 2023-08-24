#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTT_Skeleton_Summoned_GetTarget.BTT_Skeleton_Summoned_GetTarget_C.ExecuteUbergraph_BTT_Skeleton_Summoned_GetTarget
struct FExecuteUbergraph_BTT_Skeleton_Summoned_GetTarget
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AAIController* K2Node_Event_OwnerController;  // 0x8 (0x8)
	struct APawn* K2Node_Event_ControlledPawn;  // 0x10 (0x10)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool CallFunc_FilterTagedTargets_ReturnValue : 1;  // 0x21 (0x21)
	char pad_34_1 : 7;  // 0x22 (0x22)
	bool CallFunc_FilterUnTagedTargets_ReturnValue : 1;  // 0x22 (0x22)
	char pad_35_1 : 7;  // 0x23 (0x23)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x23 (0x23)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool CallFunc_SortTargetsByAggro_ReturnValue : 1;  // 0x24 (0x24)
	char pad_37_1 : 7;  // 0x25 (0x25)
	bool CallFunc_SortTargetsByDistance_ReturnValue : 1;  // 0x25 (0x25)
	char pad_38[2];  // 0x26 (0x26)
	struct ADCCharacterBase* CallFunc_PickTarget_ReturnValue;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x38 (0x38)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x40 (0x40)


}; 
 
 // Function BTT_Skeleton_Summoned_GetTarget.BTT_Skeleton_Summoned_GetTarget_C.ReceiveExecuteAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveExecuteAI : FReceiveExecuteAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 
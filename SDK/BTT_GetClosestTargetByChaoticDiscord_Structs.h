#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTT_GetClosestTargetByChaoticDiscord.BTT_GetClosestTargetByChaoticDiscord_C.ExecuteUbergraph_BTT_GetClosestTargetByChaoticDiscord
struct FExecuteUbergraph_BTT_GetClosestTargetByChaoticDiscord
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AAIController* K2Node_Event_OwnerController;  // 0x8 (0x8)
	struct APawn* K2Node_Event_ControlledPawn;  // 0x10 (0x10)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool CallFunc_GetAllTargetArray_ReturnValue : 1;  // 0x21 (0x21)
	char pad_34[6];  // 0x22 (0x22)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool CallFunc_Array_RemoveItem_ReturnValue : 1;  // 0x31 (0x31)
	char pad_50_1 : 7;  // 0x32 (0x32)
	bool CallFunc_SortTargetsByDistance_ReturnValue : 1;  // 0x32 (0x32)
	char pad_51[5];  // 0x33 (0x33)
	struct ADCCharacterBase* CallFunc_PickTarget_ReturnValue;  // 0x38 (0x38)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x40 (0x40)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_FilterTagedTargets_ReturnValue : 1;  // 0x50 (0x50)
	char pad_81_1 : 7;  // 0x51 (0x51)
	bool CallFunc_FilterUnTagedTargets_ReturnValue : 1;  // 0x51 (0x51)
	char pad_82_1 : 7;  // 0x52 (0x52)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x52 (0x52)


}; 
 
 // Function BTT_GetClosestTargetByChaoticDiscord.BTT_GetClosestTargetByChaoticDiscord_C.ReceiveExecuteAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveExecuteAI : FReceiveExecuteAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 
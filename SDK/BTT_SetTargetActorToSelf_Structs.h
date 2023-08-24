#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTT_SetTargetActorToSelf.BTT_SetTargetActorToSelf_C.ExecuteUbergraph_BTT_SetTargetActorToSelf
struct FExecuteUbergraph_BTT_SetTargetActorToSelf
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AAIController* K2Node_Event_OwnerController;  // 0x8 (0x8)
	struct APawn* K2Node_Event_ControlledPawn;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)


}; 
 
 // Function BTT_SetTargetActorToSelf.BTT_SetTargetActorToSelf_C.ReceiveExecuteAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveExecuteAI : FReceiveExecuteAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 
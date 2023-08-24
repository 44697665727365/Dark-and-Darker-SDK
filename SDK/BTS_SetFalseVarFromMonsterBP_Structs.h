#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTS_SetFalseVarFromMonsterBP.BTS_SetFalseVarFromMonsterBP_C.ExecuteUbergraph_BTS_SetFalseVarFromMonsterBP
struct FExecuteUbergraph_BTS_SetFalseVarFromMonsterBP
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AAIController* K2Node_Event_OwnerController;  // 0x8 (0x8)
	struct APawn* K2Node_Event_ControlledPawn;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)


}; 
 
 // Function BTS_SetFalseVarFromMonsterBP.BTS_SetFalseVarFromMonsterBP_C.ReceiveDeactivationAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveDeactivationAI : FReceiveDeactivationAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 
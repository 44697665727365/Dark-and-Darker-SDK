#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTT_WaitWithOptions.BTT_WaitWithOptions_C.ExecuteUbergraph_BTT_WaitWithOptions
struct FExecuteUbergraph_BTT_WaitWithOptions
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x8 (0x8)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x10 (0x10)
	struct AAIController* K2Node_Event_OwnerController;  // 0x18 (0x18)
	struct APawn* K2Node_Event_ControlledPawn;  // 0x20 (0x20)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x28 (0x28)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	float CallFunc_GetValueAsFloat_ReturnValue;  // 0x3C (0x3C)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2;  // 0x40 (0x40)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x48 (0x48)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x50 (0x50)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x58 (0x58)
	char pad_89[3];  // 0x59 (0x59)
	float CallFunc_GetDistanceTo_ReturnValue;  // 0x5C (0x5C)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x60 (0x60)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x68 (0x68)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x70 (0x70)
	double CallFunc_RandomFloatInRange_ReturnValue_2;  // 0x78 (0x78)
	double CallFunc_Divide_DoubleDouble_ReturnValue_2;  // 0x80 (0x80)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0x88 (0x88)
	float CallFunc_Delay_Duration_ImplicitCast_2;  // 0x8C (0x8C)
	double CallFunc_Divide_DoubleDouble_A_ImplicitCast;  // 0x90 (0x90)
	float CallFunc_Delay_Duration_ImplicitCast_3;  // 0x98 (0x98)
	float CallFunc_Delay_Duration_ImplicitCast_4;  // 0x9C (0x9C)


}; 
 
 // Function BTT_WaitWithOptions.BTT_WaitWithOptions_C.ReceiveExecuteAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveExecuteAI : FReceiveExecuteAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 
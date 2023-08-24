#pragma once 
#include <BTD_CheckFloatAttributeCondition_Structs.h>
 
 
 
// BlueprintGeneratedClass BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C
// Size: 0xE0(Inherited: 0xA0)
struct UBTD_CheckFloatAttributeCondition_C : UBTDecorator_BlueprintBase
{
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool Get Param Type From Monster BP : 1;  // 0xA0 (0xA0)
	enum class E_FloatAttributeType Param Type;  // 0xA1 (0xA1)
	enum class E_CompareNumber CompareWith;  // 0xA2 (0xA2)
	char pad_163[5];  // 0xA3 (0xA3)
	double FloatValue;  // 0xA8 (0xA8)
	struct FBlackboardKeySelector BlackboardKey;  // 0xB0 (0xB0)
	struct ABP_DCMonsterBaseWithOptions_C* As BP DCMonster Base With Options;  // 0xD8 (0xD8)


	void Compare Move Speed(double Move Speed, bool& bool); // Function BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C.Compare Move Speed
	void Compare Secondary Attack Power(double Secondary Attack Power, bool& bool); // Function BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C.Compare Secondary Attack Power
	void Compare Primary Attack Power(double Primary Attack Power, bool& bool); // Function BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C.Compare Primary Attack Power
	void Compare Float Value(double CompareFloatValue, bool& bool); // Function BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C.Compare Float Value
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C.PerformConditionCheckAI
}; 
 
 



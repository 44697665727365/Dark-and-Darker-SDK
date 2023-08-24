#pragma once 
#include <BTD_ProbabilitySuccess_Structs.h>
 
 
 
// BlueprintGeneratedClass BTD_ProbabilitySuccess.BTD_ProbabilitySuccess_C
// Size: 0xE0(Inherited: 0xA0)
struct UBTD_ProbabilitySuccess_C : UBTDecorator_BlueprintBase
{
	double SuccessRatio;  // 0xA0 (0xA0)
	double RandomRatio;  // 0xA8 (0xA8)
	struct FName FloatValue;  // 0xB0 (0xB0)
	struct FBlackboardKeySelector BlackboardKey;  // 0xB8 (0xB8)


	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_ProbabilitySuccess.BTD_ProbabilitySuccess_C.PerformConditionCheckAI
}; 
 
 



#pragma once 
#include <BTD_TargetIsInRange_Structs.h>
 
 
 
// BlueprintGeneratedClass BTD_TargetIsInRange.BTD_TargetIsInRange_C
// Size: 0xB0(Inherited: 0xA0)
struct UBTD_TargetIsInRange_C : UBTDecorator_BlueprintBase
{
	double MinDistance;  // 0xA0 (0xA0)
	double MaxDistance;  // 0xA8 (0xA8)


	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_TargetIsInRange.BTD_TargetIsInRange_C.PerformConditionCheckAI
}; 
 
 



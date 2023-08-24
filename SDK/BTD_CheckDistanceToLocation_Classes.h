#pragma once 
#include <BTD_CheckDistanceToLocation_Structs.h>
 
 
 
// BlueprintGeneratedClass BTD_CheckDistanceToLocation.BTD_CheckDistanceToLocation_C
// Size: 0xB0(Inherited: 0xA0)
struct UBTD_CheckDistanceToLocation_C : UBTDecorator_BlueprintBase
{
	enum class E_DistanceTypeToLocation Distance Type;  // 0xA0 (0xA0)
	enum class E_CompareNumber Compare Type;  // 0xA1 (0xA1)
	char pad_162[6];  // 0xA2 (0xA2)
	double Compare Value;  // 0xA8 (0xA8)


	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_CheckDistanceToLocation.BTD_CheckDistanceToLocation_C.PerformConditionCheckAI
}; 
 
 



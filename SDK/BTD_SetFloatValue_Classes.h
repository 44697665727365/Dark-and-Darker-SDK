#pragma once 
#include <BTD_SetFloatValue_Structs.h>
 
 
 
// BlueprintGeneratedClass BTD_SetFloatValue.BTD_SetFloatValue_C
// Size: 0xE8(Inherited: 0xA0)
struct UBTD_SetFloatValue_C : UBTDecorator_BlueprintBase
{
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool Use Random Range : 1;  // 0xA0 (0xA0)
	enum class E_FloatValueCalculate CalculateType;  // 0xA1 (0xA1)
	char pad_162[6];  // 0xA2 (0xA2)
	double Value1;  // 0xA8 (0xA8)
	double Value2;  // 0xB0 (0xB0)
	double Obtained Value;  // 0xB8 (0xB8)
	double Obtained Final Value;  // 0xC0 (0xC0)
	struct FName FloatValue;  // 0xC8 (0xC8)
	struct UBlackboardComponent* Blackboard;  // 0xD0 (0xD0)
	struct AAIController* Owner Controller;  // 0xD8 (0xD8)
	struct APawn* Controlled Pawn;  // 0xE0 (0xE0)


	void Add(double FloatValue Before Change); // Function BTD_SetFloatValue.BTD_SetFloatValue_C.Add
	void Divide(double FloatValue Before Change); // Function BTD_SetFloatValue.BTD_SetFloatValue_C.Divide
	void Multiply(double FloatValue Before Change); // Function BTD_SetFloatValue.BTD_SetFloatValue_C.Multiply
	void Subtract(double FloatValue Before Change); // Function BTD_SetFloatValue.BTD_SetFloatValue_C.Subtract
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_SetFloatValue.BTD_SetFloatValue_C.PerformConditionCheckAI
}; 
 
 



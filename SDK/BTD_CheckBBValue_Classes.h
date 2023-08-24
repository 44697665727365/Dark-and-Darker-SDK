#pragma once 
#include <BTD_CheckBBValue_Structs.h>
 
 
 
// BlueprintGeneratedClass BTD_CheckBBValue.BTD_CheckBBValue_C
// Size: 0xF8(Inherited: 0xA0)
struct UBTD_CheckBBValue_C : UBTDecorator_BlueprintBase
{
	enum class E_Variables Variable Type;  // 0xA0 (0xA0)
	char pad_161_1 : 7;  // 0xA1 (0xA1)
	bool TRUE : 1;  // 0xA1 (0xA1)
	enum class E_CompareNumber Int;  // 0xA2 (0xA2)
	char pad_163[5];  // 0xA3 (0xA3)
	double Float Value;  // 0xA8 (0xA8)
	int32_t Int Value;  // 0xB0 (0xB0)
	char pad_180[4];  // 0xB4 (0xB4)
	struct FBlackboardKeySelector Select Key;  // 0xB8 (0xB8)
	struct FName Key Name;  // 0xE0 (0xE0)
	enum class E_LocationVariables Select Vector;  // 0xE8 (0xE8)
	char pad_233[3];  // 0xE9 (0xE9)
	float Tolerance;  // 0xEC (0xEC)
	struct APawn* Controlled Pawn;  // 0xF0 (0xF0)


	void CompareVectorValue(bool& bool); // Function BTD_CheckBBValue.BTD_CheckBBValue_C.CompareVectorValue
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_CheckBBValue.BTD_CheckBBValue_C.PerformConditionCheckAI
	void CompareIntValue(bool& bool); // Function BTD_CheckBBValue.BTD_CheckBBValue_C.CompareIntValue
	void CompareFloatValue(bool& bool); // Function BTD_CheckBBValue.BTD_CheckBBValue_C.CompareFloatValue
}; 
 
 



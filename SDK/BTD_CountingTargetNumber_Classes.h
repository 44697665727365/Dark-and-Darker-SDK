#pragma once 
#include <BTD_CountingTargetNumber_Structs.h>
 
 
 
// BlueprintGeneratedClass BTD_CountingTargetNumber.BTD_CountingTargetNumber_C
// Size: 0x168(Inherited: 0xA0)
struct UBTD_CountingTargetNumber_C : UBTDecorator_BlueprintBase
{
	struct ABP_DCMonsterBaseWithOptions_C* ControlledPawn;  // 0xA0 (0xA0)
	struct UAIPerceptionComponent* AIPerception;  // 0xA8 (0xA8)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0xB0 (0xB0)
	float Sphere Radius;  // 0xC0 (0xC0)
	char pad_196_1 : 7;  // 0xC4 (0xC4)
	bool Player : 1;  // 0xC4 (0xC4)
	char pad_197_1 : 7;  // 0xC5 (0xC5)
	bool Monster : 1;  // 0xC5 (0xC5)
	char pad_198[2];  // 0xC6 (0xC6)
	struct TArray<struct FGameplayTag> Tags;  // 0xC8 (0xC8)
	struct TArray<struct FGameplayTag> Untags;  // 0xD8 (0xD8)
	enum class E_ActivityArea Activity Area;  // 0xE8 (0xE8)
	enum class E_DistanceFromVariables DistanceFrom;  // 0xE9 (0xE9)
	char pad_234[6];  // 0xEA (0xEA)
	double Distance;  // 0xF0 (0xF0)
	double Angle;  // 0xF8 (0xF8)
	double Direction;  // 0x100 (0x100)
	enum class E_CompareNumber Compare;  // 0x108 (0x108)
	char pad_265[7];  // 0x109 (0x109)
	double Player Count;  // 0x110 (0x110)
	struct FBlackboardKeySelector BlackboardKey;  // 0x118 (0x118)
	struct TArray<struct FPrimaryAssetId> Monster ID;  // 0x140 (0x140)
	int32_t Final Player Count;  // 0x150 (0x150)
	char pad_340[4];  // 0x154 (0x154)
	struct TArray<struct ADCCharacterBase*> TempTargetArray;  // 0x158 (0x158)


	void FilterRange(bool& bool); // Function BTD_CountingTargetNumber.BTD_CountingTargetNumber_C.FilterRange
	void FilterTags(bool& bool); // Function BTD_CountingTargetNumber.BTD_CountingTargetNumber_C.FilterTags
	void GetTargetArray(bool& bool); // Function BTD_CountingTargetNumber.BTD_CountingTargetNumber_C.GetTargetArray
	void TargetingType(bool& bool); // Function BTD_CountingTargetNumber.BTD_CountingTargetNumber_C.TargetingType
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_CountingTargetNumber.BTD_CountingTargetNumber_C.PerformConditionCheckAI
}; 
 
 



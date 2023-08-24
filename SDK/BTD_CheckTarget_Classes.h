#pragma once 
#include <BTD_CheckTarget_Structs.h>
 
 
 
// BlueprintGeneratedClass BTD_CheckTarget.BTD_CheckTarget_C
// Size: 0x140(Inherited: 0xA0)
struct UBTD_CheckTarget_C : UBTDecorator_BlueprintBase
{
	struct ABP_DCMonsterBaseWithOptions_C* ControlledPawn;  // 0xA0 (0xA0)
	struct UAIPerceptionComponent* AIPerception;  // 0xA8 (0xA8)
	struct UBlackboardComponent* Blackboard;  // 0xB0 (0xB0)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0xB8 (0xB8)
	struct FName TargetActor;  // 0xC8 (0xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool Find BlackBoard TargetActor : 1;  // 0xD0 (0xD0)
	enum class E_SensorType Get List From;  // 0xD1 (0xD1)
	char pad_210_1 : 7;  // 0xD2 (0xD2)
	bool Player : 1;  // 0xD2 (0xD2)
	char pad_211_1 : 7;  // 0xD3 (0xD3)
	bool Monster : 1;  // 0xD3 (0xD3)
	char pad_212_1 : 7;  // 0xD4 (0xD4)
	bool Get from Combat Area : 1;  // 0xD4 (0xD4)
	char pad_213_1 : 7;  // 0xD5 (0xD5)
	bool FilterSpawnLocation : 1;  // 0xD5 (0xD5)
	char pad_214[2];  // 0xD6 (0xD6)
	double Filter Distance from Spawn Location;  // 0xD8 (0xD8)
	struct TArray<struct FGameplayTag> Tags;  // 0xE0 (0xE0)
	struct TArray<struct FGameplayTag> Untags;  // 0xF0 (0xF0)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool Get ActivityArea From Monster BP : 1;  // 0x100 (0x100)
	enum class E_ActivityArea Activity Area;  // 0x101 (0x101)
	char pad_258[6];  // 0x102 (0x102)
	double MinDistance;  // 0x108 (0x108)
	enum class E_DistanceFromVariables MaxDistanceFrom;  // 0x110 (0x110)
	char pad_273[7];  // 0x111 (0x111)
	double MaxDistance;  // 0x118 (0x118)
	double Angle;  // 0x120 (0x120)
	double Direction;  // 0x128 (0x128)
	double MinHP;  // 0x130 (0x130)
	double MaxHP;  // 0x138 (0x138)


	void ClearVariables(); // Function BTD_CheckTarget.BTD_CheckTarget_C.ClearVariables
	void FilterHP(bool& bool); // Function BTD_CheckTarget.BTD_CheckTarget_C.FilterHP
	void FilterRange(bool& bool); // Function BTD_CheckTarget.BTD_CheckTarget_C.FilterRange
	void FilterTags(bool& bool); // Function BTD_CheckTarget.BTD_CheckTarget_C.FilterTags
	void TargetingType(bool& bool); // Function BTD_CheckTarget.BTD_CheckTarget_C.TargetingType
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_CheckTarget.BTD_CheckTarget_C.PerformConditionCheckAI
}; 
 
 



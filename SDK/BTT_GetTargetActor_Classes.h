#pragma once 
#include <BTT_GetTargetActor_Structs.h>
 
 
 
// BlueprintGeneratedClass BTT_GetTargetActor.BTT_GetTargetActor_C
// Size: 0x1B0(Inherited: 0xA8)
struct UBTT_GetTargetActor_C : UBTTask_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xA8 (0xA8)
	struct ABP_DCMonsterBaseWithOptions_C* ControlledPawn;  // 0xB0 (0xB0)
	struct TArray<struct ADCCharacterBase*> Provider Array;  // 0xB8 (0xB8)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0xC8 (0xC8)
	struct ADCCharacterBase* Target;  // 0xD8 (0xD8)
	struct FName TargetActor;  // 0xE0 (0xE0)
	struct UBlackboardComponent* Blackboard;  // 0xE8 (0xE8)
	struct UAIPerceptionComponent* AIPerception;  // 0xF0 (0xF0)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool Get Target Has Aggro Only : 1;  // 0xF8 (0xF8)
	enum class E_SensorType Get List From;  // 0xF9 (0xF9)
	char pad_250_1 : 7;  // 0xFA (0xFA)
	bool Player : 1;  // 0xFA (0xFA)
	char pad_251_1 : 7;  // 0xFB (0xFB)
	bool Monster : 1;  // 0xFB (0xFB)
	char pad_252_1 : 7;  // 0xFC (0xFC)
	bool Get from Combat Area : 1;  // 0xFC (0xFC)
	char pad_253_1 : 7;  // 0xFD (0xFD)
	bool FilterSpawnLocation : 1;  // 0xFD (0xFD)
	char pad_254[2];  // 0xFE (0xFE)
	double FilterDistanceFromSpawnLocation;  // 0x100 (0x100)
	struct FVector FilterBoxSizeFromSpawnLocation;  // 0x108 (0x108)
	struct TArray<struct FGameplayTag> Tags;  // 0x120 (0x120)
	struct TArray<struct FGameplayTag> Untags;  // 0x130 (0x130)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool Get ActivityArea From Monster BP : 1;  // 0x140 (0x140)
	enum class E_ActivityArea Activity Area;  // 0x141 (0x141)
	char pad_322[6];  // 0x142 (0x142)
	double MinDistance;  // 0x148 (0x148)
	enum class E_DistanceFromVariables MaxDistance From;  // 0x150 (0x150)
	char pad_337[7];  // 0x151 (0x151)
	double MaxDistance;  // 0x158 (0x158)
	double Angle;  // 0x160 (0x160)
	double Direction;  // 0x168 (0x168)
	enum class E_TargetSortingType Sorting Type;  // 0x170 (0x170)
	uint8_t Sort By;  // 0x171 (0x171)
	char pad_370[2];  // 0x172 (0x172)
	int32_t Pick Index;  // 0x174 (0x174)
	struct ADCCharacterBase* TempTarget;  // 0x178 (0x178)
	double MinHP;  // 0x180 (0x180)
	double MaxHP;  // 0x188 (0x188)
	struct TArray<struct ADCCharacterBase*> TempArray;  // 0x190 (0x190)
	struct ABP_DCMonsterBase_C* CastProviderMonster;  // 0x1A0 (0x1A0)
	struct ABP_DCMonsterBaseWithOptions_C* Provider Actor;  // 0x1A8 (0x1A8)


	void ClearVariables(); // Function BTT_GetTargetActor.BTT_GetTargetActor_C.ClearVariables
	void Sorting(bool& bool); // Function BTT_GetTargetActor.BTT_GetTargetActor_C.Sorting
	void FilterHP(bool& bool); // Function BTT_GetTargetActor.BTT_GetTargetActor_C.FilterHP
	void FilterRange(bool& bool); // Function BTT_GetTargetActor.BTT_GetTargetActor_C.FilterRange
	void FilterTags(bool& bool); // Function BTT_GetTargetActor.BTT_GetTargetActor_C.FilterTags
	void TargetingType(bool& bool); // Function BTT_GetTargetActor.BTT_GetTargetActor_C.TargetingType
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_GetTargetActor.BTT_GetTargetActor_C.ReceiveExecuteAI
	void ExecuteUbergraph_BTT_GetTargetActor(int32_t EntryPoint); // Function BTT_GetTargetActor.BTT_GetTargetActor_C.ExecuteUbergraph_BTT_GetTargetActor
}; 
 
 



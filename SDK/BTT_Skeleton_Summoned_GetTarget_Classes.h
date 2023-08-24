#pragma once 
#include <BTT_Skeleton_Summoned_GetTarget_Structs.h>
 
 
 
// BlueprintGeneratedClass BTT_Skeleton_Summoned_GetTarget.BTT_Skeleton_Summoned_GetTarget_C
// Size: 0xD0(Inherited: 0xA8)
struct UBTT_Skeleton_Summoned_GetTarget_C : UBTTask_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xA8 (0xA8)
	struct TArray<struct ADCCharacterBase*> Summoners Enemies;  // 0xB0 (0xB0)
	struct ABP_DCMonsterBaseWithOptions_C* As BP DCMonster Base With Options;  // 0xC0 (0xC0)
	uint8_t Sort By;  // 0xC8 (0xC8)
	enum class E_TargetSortingType Sorting Type;  // 0xC9 (0xC9)
	char pad_202[2];  // 0xCA (0xCA)
	int32_t Pick Index;  // 0xCC (0xCC)


	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Skeleton_Summoned_GetTarget.BTT_Skeleton_Summoned_GetTarget_C.ReceiveExecuteAI
	void ExecuteUbergraph_BTT_Skeleton_Summoned_GetTarget(int32_t EntryPoint); // Function BTT_Skeleton_Summoned_GetTarget.BTT_Skeleton_Summoned_GetTarget_C.ExecuteUbergraph_BTT_Skeleton_Summoned_GetTarget
}; 
 
 



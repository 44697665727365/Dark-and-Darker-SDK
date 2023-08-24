#pragma once 
#include <BTT_GetTargetNonPlayable_Structs.h>
 
 
 
// BlueprintGeneratedClass BTT_GetTargetNonPlayable.BTT_GetTargetNonPlayable_C
// Size: 0xC8(Inherited: 0xA8)
struct UBTT_GetTargetNonPlayable_C : UBTT_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xA8 (0xA8)
	struct TArray<struct AActor*> Out Actors;  // 0xB0 (0xB0)
	UObject* Actor Class Filter;  // 0xC0 (0xC0)


	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_GetTargetNonPlayable.BTT_GetTargetNonPlayable_C.ReceiveExecuteAI
	void OnTaskFinished(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult TaskResult); // Function BTT_GetTargetNonPlayable.BTT_GetTargetNonPlayable_C.OnTaskFinished
	void ExecuteUbergraph_BTT_GetTargetNonPlayable(int32_t EntryPoint); // Function BTT_GetTargetNonPlayable.BTT_GetTargetNonPlayable_C.ExecuteUbergraph_BTT_GetTargetNonPlayable
}; 
 
 



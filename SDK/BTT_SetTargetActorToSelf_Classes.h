#pragma once 
#include <BTT_SetTargetActorToSelf_Structs.h>
 
 
 
// BlueprintGeneratedClass BTT_SetTargetActorToSelf.BTT_SetTargetActorToSelf_C
// Size: 0xB8(Inherited: 0xA8)
struct UBTT_SetTargetActorToSelf_C : UBTTask_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xA8 (0xA8)
	struct FName Key Name;  // 0xB0 (0xB0)


	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_SetTargetActorToSelf.BTT_SetTargetActorToSelf_C.ReceiveExecuteAI
	void ExecuteUbergraph_BTT_SetTargetActorToSelf(int32_t EntryPoint); // Function BTT_SetTargetActorToSelf.BTT_SetTargetActorToSelf_C.ExecuteUbergraph_BTT_SetTargetActorToSelf
}; 
 
 



#pragma once 
#include <BTT_CheckHeightFromTargetAndMove_Structs.h>
 
 
 
// BlueprintGeneratedClass BTT_CheckHeightFromTargetAndMove.BTT_CheckHeightFromTargetAndMove_C
// Size: 0xD8(Inherited: 0xA8)
struct UBTT_CheckHeightFromTargetAndMove_C : UBTT_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xA8 (0xA8)
	double Allowed Height From Target;  // 0xB0 (0xB0)
	struct FName TargetActor;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool Reached : 1;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)
	double Return Value X;  // 0xC8 (0xC8)
	double Return Value Y;  // 0xD0 (0xD0)


	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_CheckHeightFromTargetAndMove.BTT_CheckHeightFromTargetAndMove_C.ReceiveExecuteAI
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_CheckHeightFromTargetAndMove.BTT_CheckHeightFromTargetAndMove_C.ReceiveTickAI
	void ExecuteUbergraph_BTT_CheckHeightFromTargetAndMove(int32_t EntryPoint); // Function BTT_CheckHeightFromTargetAndMove.BTT_CheckHeightFromTargetAndMove_C.ExecuteUbergraph_BTT_CheckHeightFromTargetAndMove
}; 
 
 



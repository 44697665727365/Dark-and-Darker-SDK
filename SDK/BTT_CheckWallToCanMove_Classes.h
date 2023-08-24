#pragma once 
#include <BTT_CheckWallToCanMove_Structs.h>
 
 
 
// BlueprintGeneratedClass BTT_CheckWallToCanMove.BTT_CheckWallToCanMove_C
// Size: 0xD0(Inherited: 0xA8)
struct UBTT_CheckWallToCanMove_C : UBTTask_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xA8 (0xA8)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool FromTarget : 1;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)
	double DestAngle;  // 0xB8 (0xB8)
	double DestDistance;  // 0xC0 (0xC0)
	struct FName Key TargetActor;  // 0xC8 (0xC8)


	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_CheckWallToCanMove.BTT_CheckWallToCanMove_C.ReceiveExecuteAI
	void ExecuteUbergraph_BTT_CheckWallToCanMove(int32_t EntryPoint); // Function BTT_CheckWallToCanMove.BTT_CheckWallToCanMove_C.ExecuteUbergraph_BTT_CheckWallToCanMove
}; 
 
 



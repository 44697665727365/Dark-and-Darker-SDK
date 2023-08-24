#pragma once 
#include <BTT_AddTimer_Structs.h>
 
 
 
// BlueprintGeneratedClass BTT_AddTimer.BTT_AddTimer_C
// Size: 0xC0(Inherited: 0xA8)
struct UBTT_AddTimer_C : UBTTask_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xA8 (0xA8)
	int32_t Timer Index;  // 0xB0 (0xB0)
	char pad_180[4];  // 0xB4 (0xB4)
	double Timer Second;  // 0xB8 (0xB8)


	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_AddTimer.BTT_AddTimer_C.ReceiveExecuteAI
	void ExecuteUbergraph_BTT_AddTimer(int32_t EntryPoint); // Function BTT_AddTimer.BTT_AddTimer_C.ExecuteUbergraph_BTT_AddTimer
}; 
 
 



#pragma once 
#include <BTT_WaitWithOptions_Structs.h>
 
 
 
// BlueprintGeneratedClass BTT_WaitWithOptions.BTT_WaitWithOptions_C
// Size: 0xD0(Inherited: 0xA8)
struct UBTT_WaitWithOptions_C : UBTTask_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xA8 (0xA8)
	struct FName FloatValue;  // 0xB0 (0xB0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool Use Float From BlackBoard : 1;  // 0xB8 (0xB8)
	char pad_185_1 : 7;  // 0xB9 (0xB9)
	bool Use Float From Monster BP : 1;  // 0xB9 (0xB9)
	char pad_186[6];  // 0xBA (0xBA)
	double ManualWaitTime1;  // 0xC0 (0xC0)
	double ManualWaitTime2;  // 0xC8 (0xC8)


	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_WaitWithOptions.BTT_WaitWithOptions_C.ReceiveExecuteAI
	void ExecuteUbergraph_BTT_WaitWithOptions(int32_t EntryPoint); // Function BTT_WaitWithOptions.BTT_WaitWithOptions_C.ExecuteUbergraph_BTT_WaitWithOptions
}; 
 
 



#pragma once 
#include <BTS_SetFalseVarFromMonsterBP_Structs.h>
 
 
 
// BlueprintGeneratedClass BTS_SetFalseVarFromMonsterBP.BTS_SetFalseVarFromMonsterBP_C
// Size: 0xA1(Inherited: 0x98)
struct UBTS_SetFalseVarFromMonsterBP_C : UBTService_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x98 (0x98)
	enum class E_BTActionsFromMonsterBP SetBoolVar;  // 0xA0 (0xA0)


	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTS_SetFalseVarFromMonsterBP.BTS_SetFalseVarFromMonsterBP_C.ReceiveDeactivationAI
	void ExecuteUbergraph_BTS_SetFalseVarFromMonsterBP(int32_t EntryPoint); // Function BTS_SetFalseVarFromMonsterBP.BTS_SetFalseVarFromMonsterBP_C.ExecuteUbergraph_BTS_SetFalseVarFromMonsterBP
}; 
 
 



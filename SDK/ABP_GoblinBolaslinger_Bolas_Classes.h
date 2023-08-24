#pragma once 
#include <ABP_GoblinBolaslinger_Bolas_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_GoblinBolaslinger_Bolas.ABP_GoblinBolaslinger_Bolas_C
// Size: 0x6C0(Inherited: 0x510)
struct UABP_GoblinBolaslinger_Bolas_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x518 (0x518)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x520 (0x520)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x528 (0x528)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x548 (0x548)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x590 (0x590)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x5D8 (0x5D8)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x5F8 (0x5F8)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_GoblinBolaslinger_Bolas.ABP_GoblinBolaslinger_Bolas_C.AnimGraph
	void ExecuteUbergraph_ABP_GoblinBolaslinger_Bolas(int32_t EntryPoint); // Function ABP_GoblinBolaslinger_Bolas.ABP_GoblinBolaslinger_Bolas_C.ExecuteUbergraph_ABP_GoblinBolaslinger_Bolas
}; 
 
 



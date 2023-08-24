#pragma once 
#include <ABP_StoneTomb01_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_StoneTomb01.ABP_StoneTomb01_C
// Size: 0x6B8(Inherited: 0x450)
struct UABP_StoneTomb01_C : UDCAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x450 (0x450)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x458 (0x458)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x460 (0x460)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x468 (0x468)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x488 (0x488)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x4D0 (0x4D0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x4F8 (0x4F8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x520 (0x520)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x568 (0x568)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x588 (0x588)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x5D0 (0x5D0)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x5F0 (0x5F0)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_StoneTomb01.ABP_StoneTomb01_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_7617E39044210A7B7D3E4DA165C6148B(); // Function ABP_StoneTomb01.ABP_StoneTomb01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_7617E39044210A7B7D3E4DA165C6148B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_8BC0A01143FDF06FADFB11BBBF95DC41(); // Function ABP_StoneTomb01.ABP_StoneTomb01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_8BC0A01143FDF06FADFB11BBBF95DC41
	void ExecuteUbergraph_ABP_StoneTomb01(int32_t EntryPoint); // Function ABP_StoneTomb01.ABP_StoneTomb01_C.ExecuteUbergraph_ABP_StoneTomb01
}; 
 
 



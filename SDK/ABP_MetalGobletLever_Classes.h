#pragma once 
#include <ABP_MetalGobletLever_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_MetalGobletLever.ABP_MetalGobletLever_C
// Size: 0x6B8(Inherited: 0x450)
struct UABP_MetalGobletLever_C : UDCAnimInstanceBase
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


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_MetalGobletLever.ABP_MetalGobletLever_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MetalGobletLever_AnimGraphNode_TransitionResult_EE179D46406D4F3DF707E6A49A2D167B(); // Function ABP_MetalGobletLever.ABP_MetalGobletLever_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MetalGobletLever_AnimGraphNode_TransitionResult_EE179D46406D4F3DF707E6A49A2D167B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MetalGobletLever_AnimGraphNode_TransitionResult_FE38D6064F7327DE34238DAC7728BAF2(); // Function ABP_MetalGobletLever.ABP_MetalGobletLever_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MetalGobletLever_AnimGraphNode_TransitionResult_FE38D6064F7327DE34238DAC7728BAF2
	void ExecuteUbergraph_ABP_MetalGobletLever(int32_t EntryPoint); // Function ABP_MetalGobletLever.ABP_MetalGobletLever_C.ExecuteUbergraph_ABP_MetalGobletLever
}; 
 
 



#pragma once 
#include <ABP_StoneDoor_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_StoneDoor.ABP_StoneDoor_C
// Size: 0x690(Inherited: 0x450)
struct UABP_StoneDoor_C : UDCAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x450 (0x450)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x458 (0x458)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x460 (0x460)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x468 (0x468)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x488 (0x488)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x4B0 (0x4B0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x4F8 (0x4F8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x518 (0x518)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x560 (0x560)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x580 (0x580)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x648 (0x648)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_StoneDoor.ABP_StoneDoor_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneDoor_AnimGraphNode_TransitionResult_BC48A2E746D76B7C2C94DDABABCA05E5(); // Function ABP_StoneDoor.ABP_StoneDoor_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneDoor_AnimGraphNode_TransitionResult_BC48A2E746D76B7C2C94DDABABCA05E5
	void ExecuteUbergraph_ABP_StoneDoor(int32_t EntryPoint); // Function ABP_StoneDoor.ABP_StoneDoor_C.ExecuteUbergraph_ABP_StoneDoor
}; 
 
 



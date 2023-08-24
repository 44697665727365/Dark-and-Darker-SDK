#pragma once 
#include <ABP_Pavise_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Pavise.ABP_Pavise_C
// Size: 0x6B9(Inherited: 0x450)
struct UABP_Pavise_C : UDCAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x450 (0x450)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x458 (0x458)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x460 (0x460)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x468 (0x468)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x488 (0x488)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x4B0 (0x4B0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x4D8 (0x4D8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x520 (0x520)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x540 (0x540)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x588 (0x588)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x5A8 (0x5A8)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x670 (0x670)
	char pad_1720_1 : 7;  // 0x6B8 (0x6B8)
	bool bIsEquipped : 1;  // 0x6B8 (0x6B8)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Pavise.ABP_Pavise_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pavise_AnimGraphNode_TransitionResult_18B44C47481507277DC4F3B67A53870E(); // Function ABP_Pavise.ABP_Pavise_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pavise_AnimGraphNode_TransitionResult_18B44C47481507277DC4F3B67A53870E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pavise_AnimGraphNode_TransitionResult_CDD760A74611E46BC9BCDFB09232F69A(); // Function ABP_Pavise.ABP_Pavise_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Pavise_AnimGraphNode_TransitionResult_CDD760A74611E46BC9BCDFB09232F69A
	void OnItemDataUpdated_2(struct FItemData& ItemData); // Function ABP_Pavise.ABP_Pavise_C.OnItemDataUpdated_2
	void ExecuteUbergraph_ABP_Pavise(int32_t EntryPoint); // Function ABP_Pavise.ABP_Pavise_C.ExecuteUbergraph_ABP_Pavise
}; 
 
 



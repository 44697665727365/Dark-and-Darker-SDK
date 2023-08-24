#pragma once 
#include <ABP_Crossbow_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Crossbow.ABP_Crossbow_C
// Size: 0x818(Inherited: 0x5B0)
struct UABP_Crossbow_C : UItemWeaponAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5B0 (0x5B0)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x5B8 (0x5B8)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x5C0 (0x5C0)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x5C8 (0x5C8)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x5E8 (0x5E8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x630 (0x630)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x658 (0x658)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x680 (0x680)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x6C8 (0x6C8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x6E8 (0x6E8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x730 (0x730)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x750 (0x750)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Crossbow.ABP_Crossbow_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Crossbow_AnimGraphNode_TransitionResult_A198D84A471518187E7C65B383F4BDD4(); // Function ABP_Crossbow.ABP_Crossbow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Crossbow_AnimGraphNode_TransitionResult_A198D84A471518187E7C65B383F4BDD4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Crossbow_AnimGraphNode_TransitionResult_EC386F7947887E1AD71AF5B26189C1F7(); // Function ABP_Crossbow.ABP_Crossbow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Crossbow_AnimGraphNode_TransitionResult_EC386F7947887E1AD71AF5B26189C1F7
	void OnItemDataUpdated(struct FItemData& ItemData); // Function ABP_Crossbow.ABP_Crossbow_C.OnItemDataUpdated
	void ExecuteUbergraph_ABP_Crossbow(int32_t EntryPoint); // Function ABP_Crossbow.ABP_Crossbow_C.ExecuteUbergraph_ABP_Crossbow
}; 
 
 



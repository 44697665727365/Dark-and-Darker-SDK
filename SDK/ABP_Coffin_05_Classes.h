#pragma once 
#include <ABP_Coffin_05_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Coffin_05.ABP_Coffin_05_C
// Size: 0x6B8(Inherited: 0x450)
struct UABP_Coffin_05_C : UDCAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x450 (0x450)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // [00546711] /Game/Dungeon ([00546711] /Game/DungeonCrawler/Characters/Monster/Mimic/Textures_Materials/Alt2/ChestMidrangeMedium/T_ChestMidrangeMedium_albedoOpacity)
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


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Coffin_05.ABP_Coffin_05_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_05_AnimGraphNode_TransitionResult_8B47FC284E917D0B344600BFB7F1FE51(); // Function ABP_Coffin_05.ABP_Coffin_05_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_05_AnimGraphNode_TransitionResult_8B47FC284E917D0B344600BFB7F1FE51
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_05_AnimGraphNode_TransitionResult_58257B534098EC309483D49BD308AE06(); // Function ABP_Coffin_05.ABP_Coffin_05_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coffin_05_AnimGraphNode_TransitionResult_58257B534098EC309483D49BD308AE06
	void ExecuteUbergraph_ABP_Coffin_05(int32_t EntryPoint); // Function ABP_Coffin_05.ABP_Coffin_05_C.ExecuteUbergraph_ABP_Coffin_05
}; 
 
 



#pragma once 
#include <ABP_GhostKing_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_GhostKing.ABP_GhostKing_C
// Size: 0x1359(Inherited: 0x510)
struct UABP_GhostKing_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x528 (0x528)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x530 (0x530)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x538 (0x538)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x558 (0x558)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0x5A0 (0x5A0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x5C8 (0x5C8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x5F0 (0x5F0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x618 (0x618)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x640 (0x640)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x668 (0x668)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x6B0 (0x6B0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x6D0 (0x6D0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x740 (0x740)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x760 (0x760)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x7D0 (0x7D0)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x7F0 (0x7F0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x8B8 (0x8B8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x9C0 (0x9C0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x9E8 (0x9E8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0xA10 (0xA10)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0xA38 (0xA38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0xA60 (0xA60)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;  // 0xA88 (0xA88)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0xAB0 (0xAB0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0xAD8 (0xAD8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0xB00 (0xB00)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0xB48 (0xB48)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;  // 0xB90 (0xB90)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;  // 0xC58 (0xC58)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0xD20 (0xD20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0xE00 (0xE00)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0xE48 (0xE48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0xE68 (0xE68)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xE90 (0xE90)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xEB8 (0xEB8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xEE0 (0xEE0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xF28 (0xF28)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;  // 0xF70 (0xF70)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x1038 (0x1038)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x1100 (0x1100)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x11E0 (0x11E0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x1228 (0x1228)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1248 (0x1248)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x1270 (0x1270)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x1290 (0x1290)
	char pad_4952_1 : 7;  // 0x1358 (0x1358)
	bool EatingPhase : 1;  // 0x1358 (0x1358)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_GhostKing.ABP_GhostKing_C.AnimGraph
	void BlueprintBeginPlay(); // Function ABP_GhostKing.ABP_GhostKing_C.BlueprintBeginPlay
	void ExecuteUbergraph_ABP_GhostKing(int32_t EntryPoint); // Function ABP_GhostKing.ABP_GhostKing_C.ExecuteUbergraph_ABP_GhostKing
}; 
 
 



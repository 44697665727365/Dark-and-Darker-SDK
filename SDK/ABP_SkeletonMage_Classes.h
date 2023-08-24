#pragma once 
#include <ABP_SkeletonMage_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_SkeletonMage.ABP_SkeletonMage_C
// Size: 0x155A(Inherited: 0x510)
struct UABP_SkeletonMage_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
	char pad_1316[4];  // 0x524 (0x524)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x528 (0x528)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x530 (0x530)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x538 (0x538)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x558 (0x558)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x580 (0x580)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x5A8 (0x5A8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x5F0 (0x5F0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x0 (0x0) (0x0 (0x0))
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x680 (0x680)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x7FF7D35967D0 (0x1705D6E0080) (0x7FF7D35967D0 (0x1705D6E0080))
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x768 (0x768)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x7B0 (0x7B0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x8B8 (0x8B8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x8E0 (0x8E0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x908 (0x908)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x930 (0x930)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x958 (0x958)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x980 (0x980)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x9A8 (0x9A8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8;  // 0x9D0 (0x9D0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x9F8 (0x9F8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x7FF7CE0B0110 (0x7FF7CE0B0110)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0xA60 (0xA60)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;  // 0xAA8 (0xAA8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0x7FF7CCAA9AC0 (0x7FF7CCAA9AC0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0xAF8 (0xAF8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;  // 0xB20 (0xB20)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;  // 0xBE8 (0xBE8)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // 0x0 (0x0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // 0xCD0 (0xCD0)
	struct FAnimNode_LegIK AnimGraphNode_LegIK_2;  // 0xCF0 (0xCF0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x0 (0x0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0xE30 (0xE30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0xF10 (0xF10)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xF30 (0xF30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xF78 (0xF78)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0xFC0 (0xFC0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xFE8 (0xFE8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0x1010 (0x1010)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;  // 0x1038 (0x1038)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x1100 (0x1100)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x11C8 (0x11C8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x11E8 (0x11E8)
	struct FAnimNode_LegIK AnimGraphNode_LegIK;  // 0x1208 (0x1208)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1300 (0x1300)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x1348 (0x1348)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x1428 (0x1428)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1448 (0x1448)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x1470 (0x1470)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x1490 (0x1490)
	char pad_5464_1 : 7;  // 0x1558 (0x1558)
	bool ShouldTransitionToHitReactionFlipFlopAndNotDead : 1;  // 0x1558 (0x1558)
	char pad_5465_1 : 7;  // 0x1559 (0x1559)
	bool ShouldTransitionToHitAndNotDead : 1;  // 0x1559 (0x1559)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_SkeletonMage.ABP_SkeletonMage_C.AnimGraph
	void ExecuteUbergraph_ABP_SkeletonMage(int32_t EntryPoint); // Function ABP_SkeletonMage.ABP_SkeletonMage_C.ExecuteUbergraph_ABP_SkeletonMage
}; 
 
 



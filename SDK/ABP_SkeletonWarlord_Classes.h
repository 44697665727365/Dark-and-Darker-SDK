#pragma once 
#include <ABP_SkeletonWarlord_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_SkeletonWarlord.ABP_SkeletonWarlord_C
// Size: 0xF28(Inherited: 0x510)
struct UABP_SkeletonWarlord_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
	char pad_1316[4];  // 0x524 (0x524)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x528 (0x528)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x530 (0x530)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x538 (0x538)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x558 (0x558)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x5A0 (0x5A0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x5C8 (0x5C8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x5F0 (0x5F0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x638 (0x638)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x658 (0x658)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x6C8 (0x6C8)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x6E8 (0x6E8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x7B0 (0x7B0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x8B8 (0x8B8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x8E0 (0x8E0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x908 (0x908)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x930 (0x930)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x958 (0x958)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x980 (0x980)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x9A8 (0x9A8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0x9D0 (0x9D0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x9F8 (0x9F8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0xA18 (0xA18)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0xA60 (0xA60)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xAA8 (0xAA8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0xAD0 (0xAD0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0xB18 (0xB18)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0xBF8 (0xBF8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xC18 (0xC18)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xC60 (0xC60)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xCA8 (0xCA8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0xCD0 (0xCD0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0xD18 (0xD18)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0xDF8 (0xDF8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0xE18 (0xE18)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0xE40 (0xE40)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0xE60 (0xE60)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_SkeletonWarlord.ABP_SkeletonWarlord_C.AnimGraph
	void ExecuteUbergraph_ABP_SkeletonWarlord(int32_t EntryPoint); // Function ABP_SkeletonWarlord.ABP_SkeletonWarlord_C.ExecuteUbergraph_ABP_SkeletonWarlord
}; 
 
 



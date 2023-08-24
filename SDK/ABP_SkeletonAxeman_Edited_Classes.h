#pragma once 
#include <ABP_SkeletonAxeman_Edited_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_SkeletonAxeman_Edited.ABP_SkeletonAxeman_Edited_C
// Size: 0x1470(Inherited: 0x510)
struct UABP_SkeletonAxeman_Edited_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
	char pad_1316[4];  // 0x524 (0x524)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x528 (0x528)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x530 (0x530)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x538 (0x538)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x558 (0x558)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;  // 0x5A0 (0x5A0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0x5C8 (0x5C8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x5F0 (0x5F0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x638 (0x638)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x658 (0x658)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x6C8 (0x6C8)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x6E8 (0x6E8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x7B0 (0x7B0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x8B8 (0x8B8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x8E0 (0x8E0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x908 (0x908)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x930 (0x930)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x958 (0x958)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x980 (0x980)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x9A8 (0x9A8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x9D0 (0x9D0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x9F8 (0x9F8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8;  // 0xA20 (0xA20)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0xA48 (0xA48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0xA68 (0xA68)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0xAB0 (0xAB0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;  // 0xAF8 (0xAF8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;  // 0xBC0 (0xBC0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0xBE8 (0xBE8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;  // 0xC10 (0xC10)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0xCD8 (0xCD8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0xD20 (0xD20)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0xD48 (0xD48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0xE28 (0xE28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0xE48 (0xE48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0xE70 (0xE70)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xE90 (0xE90)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xED8 (0xED8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;  // 0xF20 (0xF20)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xFE8 (0xFE8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0x1010 (0x1010)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x1038 (0x1038)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1100 (0x1100)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1148 (0x1148)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x1170 (0x1170)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x1250 (0x1250)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x1270 (0x1270)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x1338 (0x1338)
	struct FAnimNode_LegIK AnimGraphNode_LegIK;  // 0x1358 (0x1358)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x1450 (0x1450)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_SkeletonAxeman_Edited.ABP_SkeletonAxeman_Edited_C.AnimGraph
	void ExecuteUbergraph_ABP_SkeletonAxeman_Edited(int32_t EntryPoint); // Function ABP_SkeletonAxeman_Edited.ABP_SkeletonAxeman_Edited_C.ExecuteUbergraph_ABP_SkeletonAxeman_Edited
}; 
 
 



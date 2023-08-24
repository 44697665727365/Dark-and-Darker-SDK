#pragma once 
#include <ABP_SkeletonArcher_Summoned_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_SkeletonArcher_Summoned.ABP_SkeletonArcher_Summoned_C
// Size: 0x155D(Inherited: 0x510)
struct UABP_SkeletonArcher_Summoned_C : UDCMonsterAnimInstanceBase
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
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8;  // 0x9D0 (0x9D0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x9F8 (0x9F8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0xA18 (0xA18)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0xA60 (0xA60)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;  // 0xAA8 (0xAA8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0xAD0 (0xAD0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0xAF8 (0xAF8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;  // 0xB20 (0xB20)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;  // 0xBE8 (0xBE8)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // 0xCB0 (0xCB0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // 0xCD0 (0xCD0)
	struct FAnimNode_LegIK AnimGraphNode_LegIK_2;  // 0xCF0 (0xCF0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0xDE8 (0xDE8)
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
	bool FakeDeath Stance : 1;  // 0x1558 (0x1558)
	char pad_5465_1 : 7;  // 0x1559 (0x1559)
	bool ShouldTransitionToHitReactionFlipFlopAndNotFakeDeathStance : 1;  // 0x1559 (0x1559)
	char pad_5466_1 : 7;  // 0x155A (0x155A)
	bool ShouldTransitionToHitAndNotFakeDeathStance : 1;  // 0x155A (0x155A)
	char pad_5467_1 : 7;  // 0x155B (0x155B)
	bool ShouldPlayStaggeredAndNotFakeDeathStance : 1;  // 0x155B (0x155B)
	char pad_5468_1 : 7;  // 0x155C (0x155C)
	bool ShouldPlayHitReactionAndNotFakeDeathStance : 1;  // 0x155C (0x155C)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_SkeletonArcher_Summoned.ABP_SkeletonArcher_Summoned_C.AnimGraph
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime); // Function ABP_SkeletonArcher_Summoned.ABP_SkeletonArcher_Summoned_C.BlueprintThreadSafeUpdateAnimation
	void Removed_799E048149A10F6A8843F08FC7FB08A4(); // Function ABP_SkeletonArcher_Summoned.ABP_SkeletonArcher_Summoned_C.Removed_799E048149A10F6A8843F08FC7FB08A4
	void Added_1F07E6964CA9FB2D9F6166AB57B55DF3(); // Function ABP_SkeletonArcher_Summoned.ABP_SkeletonArcher_Summoned_C.Added_1F07E6964CA9FB2D9F6166AB57B55DF3
	void BlueprintBeginPlay(); // Function ABP_SkeletonArcher_Summoned.ABP_SkeletonArcher_Summoned_C.BlueprintBeginPlay
	void ExecuteUbergraph_ABP_SkeletonArcher_Summoned(int32_t EntryPoint); // Function ABP_SkeletonArcher_Summoned.ABP_SkeletonArcher_Summoned_C.ExecuteUbergraph_ABP_SkeletonArcher_Summoned
}; 
 
 



#pragma once 
#include <ABP_SkeletonGuardman_Summoned_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C
// Size: 0x1565(Inherited: 0x510)
struct UABP_SkeletonGuardman_Summoned_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
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
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;  // 0xA18 (0xA18)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0xA40 (0xA40)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0xA68 (0xA68)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0xA90 (0xA90)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0xAD8 (0xAD8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;  // 0xB20 (0xB20)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;  // 0xBE8 (0xBE8)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // 0xCB0 (0xCB0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // 0xCD0 (0xCD0)
	struct FAnimNode_LegIK AnimGraphNode_LegIK_2;  // 0xCF0 (0xCF0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0xDE8 (0xDE8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0xE30 (0xE30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0xF10 (0xF10)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0xF30 (0xF30)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xF58 (0xF58)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xF80 (0xF80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xFA8 (0xFA8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xFF0 (0xFF0)
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
	double Direction;  // 0x1558 (0x1558)
	char pad_5472_1 : 7;  // 0x1560 (0x1560)
	bool FakeDeath Stance : 1;  // 0x1560 (0x1560)
	char pad_5473_1 : 7;  // 0x1561 (0x1561)
	bool ShouldPlayStaggeredAndNotFakeDeathStance : 1;  // 0x1561 (0x1561)
	char pad_5474_1 : 7;  // 0x1562 (0x1562)
	bool ShouldPlayHitReactionAndNotFakeDeathStance : 1;  // 0x1562 (0x1562)
	char pad_5475_1 : 7;  // 0x1563 (0x1563)
	bool ShouldTransitionToHitReactionFlipFlopAndNotFakeDeathStance : 1;  // 0x1563 (0x1563)
	char pad_5476_1 : 7;  // 0x1564 (0x1564)
	bool ShouldTransitionToHitAndNotFakeDeathStance : 1;  // 0x1564 (0x1564)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.AnimGraph
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime); // Function ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.BlueprintThreadSafeUpdateAnimation
	void Removed_4707F7A046566CED8E583AAA644151A5(); // Function ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.Removed_4707F7A046566CED8E583AAA644151A5
	void Added_C7B155A1483852911613FAB0B54028B3(); // Function ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.Added_C7B155A1483852911613FAB0B54028B3
	void BlueprintBeginPlay(); // Function ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.BlueprintBeginPlay
	void ExecuteUbergraph_ABP_SkeletonGuardman_Summoned(int32_t EntryPoint); // Function ABP_SkeletonGuardman_Summoned.ABP_SkeletonGuardman_Summoned_C.ExecuteUbergraph_ABP_SkeletonGuardman_Summoned
}; 
 
 



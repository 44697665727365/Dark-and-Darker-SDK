#pragma once 
#include <ABP_Mimic_Small_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Mimic_Small.ABP_Mimic_Small_C
// Size: 0x109D(Inherited: 0x510)
struct UABP_Mimic_Small_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x520 (0x520)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x528 (0x528)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x530 (0x530)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x550 (0x550)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;  // 0x598 (0x598)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0x5C0 (0x5C0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x5E8 (0x5E8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x610 (0x610)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x638 (0x638)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7;  // 0x680 (0x680)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x6A0 (0x6A0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x6E8 (0x6E8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x708 (0x708)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x778 (0x778)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x798 (0x798)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x860 (0x860)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x968 (0x968)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x990 (0x990)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x9B8 (0x9B8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x9E0 (0x9E0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0xA08 (0xA08)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0xA30 (0xA30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0xA58 (0xA58)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0xA80 (0xA80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0xAA8 (0xAA8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0xAC8 (0xAC8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0xAF0 (0xAF0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;  // 0xB18 (0xB18)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0xBE0 (0xBE0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xCC0 (0xCC0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0xD08 (0xD08)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xD28 (0xD28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0xD50 (0xD50)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xD70 (0xD70)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0xD98 (0xD98)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0xDC0 (0xDC0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0xE88 (0xE88)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xF68 (0xF68)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0xFB0 (0xFB0)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0xFD0 (0xFD0)
	char pad_4248_1 : 7;  // 0x1098 (0x1098)
	bool Opened : 1;  // 0x1098 (0x1098)
	char pad_4249_1 : 7;  // 0x1099 (0x1099)
	bool bLocked : 1;  // 0x1099 (0x1099)
	char pad_4250_1 : 7;  // 0x109A (0x109A)
	bool ShouldPlayHitReactionNotBlocked : 1;  // 0x109A (0x109A)
	char pad_4251_1 : 7;  // 0x109B (0x109B)
	bool ShouldPlayStaggeredNotBlocked : 1;  // 0x109B (0x109B)
	char pad_4252_1 : 7;  // 0x109C (0x109C)
	bool ShouldPlayHitReactionFlipFlopNotBlocked : 1;  // 0x109C (0x109C)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Mimic_Small.ABP_Mimic_Small_C.AnimGraph
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime); // Function ABP_Mimic_Small.ABP_Mimic_Small_C.BlueprintThreadSafeUpdateAnimation
	void ExecuteUbergraph_ABP_Mimic_Small(int32_t EntryPoint); // Function ABP_Mimic_Small.ABP_Mimic_Small_C.ExecuteUbergraph_ABP_Mimic_Small
}; 
 
 



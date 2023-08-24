#pragma once 
#include <ABP_RuinsGolem_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_RuinsGolem.ABP_RuinsGolem_C
// Size: 0xFE2(Inherited: 0x510)
struct UABP_RuinsGolem_C : UDCMonsterAnimInstanceBase
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
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x5F0 (0x5F0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x618 (0x618)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;  // 0x640 (0x640)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7;  // 0x688 (0x688)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x6A8 (0x6A8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x6F0 (0x6F0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x710 (0x710)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x780 (0x780)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x7A0 (0x7A0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x868 (0x868)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x890 (0x890)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x8B8 (0x8B8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x8E0 (0x8E0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x908 (0x908)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x930 (0x930)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x958 (0x958)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0x980 (0x980)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x9A8 (0x9A8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x9C8 (0x9C8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0xA10 (0xA10)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xA58 (0xA58)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0xA80 (0xA80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0xAC8 (0xAC8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0xBA8 (0xBA8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xBC8 (0xBC8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xC10 (0xC10)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xC58 (0xC58)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0xC80 (0xC80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0xCC8 (0xCC8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0xDA8 (0xDA8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0xDC8 (0xDC8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0xDF0 (0xDF0)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0xE10 (0xE10)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0xED8 (0xED8)
	char pad_4064_1 : 7;  // 0xFE0 (0xFE0)
	bool ShouldPlayHitReactionNotSpawn : 1;  // 0xFE0 (0xFE0)
	char pad_4065_1 : 7;  // 0xFE1 (0xFE1)
	bool ShouldPlayStaggeredNotSpawn : 1;  // 0xFE1 (0xFE1)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_RuinsGolem.ABP_RuinsGolem_C.AnimGraph
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime); // Function ABP_RuinsGolem.ABP_RuinsGolem_C.BlueprintThreadSafeUpdateAnimation
	void ExecuteUbergraph_ABP_RuinsGolem(int32_t EntryPoint); // Function ABP_RuinsGolem.ABP_RuinsGolem_C.ExecuteUbergraph_ABP_RuinsGolem
}; 
 
 



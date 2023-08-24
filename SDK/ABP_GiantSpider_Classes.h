#pragma once 
#include <ABP_GiantSpider_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_GiantSpider.ABP_GiantSpider_C
// Size: 0xF2A(Inherited: 0x510)
struct UABP_GiantSpider_C : UDCMonsterAnimInstanceBase
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
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x7B0 (0x7B0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x7D8 (0x7D8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x800 (0x800)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x828 (0x828)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x850 (0x850)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x878 (0x878)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x8A0 (0x8A0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0x8C8 (0x8C8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x8F0 (0x8F0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x910 (0x910)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x958 (0x958)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0x9A0 (0x9A0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x9C8 (0x9C8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0xA10 (0xA10)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0xAF0 (0xAF0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xB10 (0xB10)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xB58 (0xB58)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xBA0 (0xBA0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0xBC8 (0xBC8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0xC10 (0xC10)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0xCF0 (0xCF0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0xD10 (0xD10)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0xD38 (0xD38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0xD58 (0xD58)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0xE20 (0xE20)
	char pad_3880_1 : 7;  // 0xF28 (0xF28)
	bool ShouldPlayHitReactionNotSpawn : 1;  // 0xF28 (0xF28)
	char pad_3881_1 : 7;  // 0xF29 (0xF29)
	bool ShouldPlayStaggeredNotSpawn : 1;  // 0xF29 (0xF29)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_GiantSpider.ABP_GiantSpider_C.AnimGraph
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime); // Function ABP_GiantSpider.ABP_GiantSpider_C.BlueprintThreadSafeUpdateAnimation
	void ExecuteUbergraph_ABP_GiantSpider(int32_t EntryPoint); // Function ABP_GiantSpider.ABP_GiantSpider_C.ExecuteUbergraph_ABP_GiantSpider
}; 
 
 



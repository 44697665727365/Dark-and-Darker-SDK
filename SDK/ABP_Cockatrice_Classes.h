#pragma once 
#include <ABP_Cockatrice_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Cockatrice.ABP_Cockatrice_C
// Size: 0x13A1(Inherited: 0x510)
struct UABP_Cockatrice_C : UDCMonsterAnimInstanceBase
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
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8;  // 0x980 (0x980)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x9A8 (0x9A8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;  // 0x9C8 (0x9C8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;  // 0xA90 (0xA90)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0xAB8 (0xAB8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0xB00 (0xB00)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;  // 0xB28 (0xB28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0xBF0 (0xBF0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0xC18 (0xC18)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0xC60 (0xC60)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0xCA8 (0xCA8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0xD88 (0xD88)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;  // 0xDA8 (0xDA8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0xE70 (0xE70)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xE98 (0xE98)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xEE0 (0xEE0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0xF08 (0xF08)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xFD0 (0xFD0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xFF8 (0xFF8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1040 (0x1040)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x1088 (0x1088)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x1168 (0x1168)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1188 (0x1188)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x11B0 (0x11B0)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x11D0 (0x11D0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x1298 (0x1298)
	char pad_5024_1 : 7;  // 0x13A0 (0x13A0)
	bool ShouldPlayStaggerNotSpawn : 1;  // 0x13A0 (0x13A0)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Cockatrice.ABP_Cockatrice_C.AnimGraph
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime); // Function ABP_Cockatrice.ABP_Cockatrice_C.BlueprintThreadSafeUpdateAnimation
	void ExecuteUbergraph_ABP_Cockatrice(int32_t EntryPoint); // Function ABP_Cockatrice.ABP_Cockatrice_C.ExecuteUbergraph_ABP_Cockatrice
}; 
 
 



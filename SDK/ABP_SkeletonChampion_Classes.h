#pragma once 
#include <ABP_SkeletonChampion_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_SkeletonChampion.ABP_SkeletonChampion_C
// Size: 0x15F1(Inherited: 0x510)
struct UABP_SkeletonChampion_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
	char pad_1316[4];  // 0x524 (0x524)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x528 (0x528)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x530 (0x530)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x538 (0x538)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;  // 0x558 (0x558)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0x580 (0x580)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x5A8 (0x5A8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x5D0 (0x5D0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x5F8 (0x5F8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x620 (0x620)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x668 (0x668)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;  // 0x6B0 (0x6B0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;  // 0x6D8 (0x6D8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0x7A0 (0x7A0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0x7C8 (0x7C8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;  // 0x7F0 (0x7F0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0x8B8 (0x8B8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // 0x998 (0x998)
	struct FAnimNode_LegIK AnimGraphNode_LegIK_2;  // 0x9B8 (0x9B8)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // 0xAB0 (0xAB0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0xAD0 (0xAD0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0xB18 (0xB18)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0xB38 (0xB38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xB80 (0xB80)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0xBC8 (0xBC8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;  // 0xBF0 (0xBF0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xCB8 (0xCB8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xCE0 (0xCE0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0xD08 (0xD08)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0xDD0 (0xDD0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0xEB0 (0xEB0)
	struct FAnimNode_LegIK AnimGraphNode_LegIK;  // 0xED0 (0xED0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0xFC8 (0xFC8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0xFE8 (0xFE8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x1030 (0x1030)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1050 (0x1050)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x1078 (0x1078)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x1098 (0x1098)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x1160 (0x1160)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x1188 (0x1188)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x11B0 (0x11B0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x11D8 (0x11D8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x1200 (0x1200)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x1228 (0x1228)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x1250 (0x1250)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x12C0 (0x12C0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x12E0 (0x12E0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x1328 (0x1328)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x1348 (0x1348)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x13B8 (0x13B8)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x13D8 (0x13D8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x14A0 (0x14A0)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x15A8 (0x15A8)
	char pad_5616_1 : 7;  // 0x15F0 (0x15F0)
	bool InCombat : 1;  // 0x15F0 (0x15F0)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_SkeletonChampion.ABP_SkeletonChampion_C.AnimGraph
	void ExecuteUbergraph_ABP_SkeletonChampion(int32_t EntryPoint); // Function ABP_SkeletonChampion.ABP_SkeletonChampion_C.ExecuteUbergraph_ABP_SkeletonChampion
}; 
 
 



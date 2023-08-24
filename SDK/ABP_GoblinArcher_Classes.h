#pragma once 
#include <ABP_GoblinArcher_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_GoblinArcher.ABP_GoblinArcher_C
// Size: 0x14C0(Inherited: 0x510)
struct UABP_GoblinArcher_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
	char pad_1316[4];  // 0x524 (0x524)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x528 (0x528)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x530 (0x530)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x538 (0x538)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x558 (0x558)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x5A0 (0x5A0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x5C8 (0x5C8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x5F0 (0x5F0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x638 (0x638)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x658 (0x658)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x6C8 (0x6C8)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x6E8 (0x6E8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x7B0 (0x7B0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x8B8 (0x8B8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x8E0 (0x8E0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x908 (0x908)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x930 (0x930)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x958 (0x958)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x980 (0x980)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x9C8 (0x9C8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;  // 0xA10 (0xA10)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0xA38 (0xA38)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0xA60 (0xA60)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;  // 0xA88 (0xA88)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;  // 0xB50 (0xB50)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // 0xC18 (0xC18)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // 0xC38 (0xC38)
	struct FAnimNode_LegIK AnimGraphNode_LegIK_2;  // 0xC58 (0xC58)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0xD50 (0xD50)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0xD98 (0xD98)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0xE78 (0xE78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xE98 (0xE98)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xEE0 (0xEE0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0xF28 (0xF28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xF50 (0xF50)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xF78 (0xF78)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;  // 0xFA0 (0xFA0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x1068 (0x1068)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x1130 (0x1130)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x1150 (0x1150)
	struct FAnimNode_LegIK AnimGraphNode_LegIK;  // 0x1170 (0x1170)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1268 (0x1268)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x12B0 (0x12B0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x1390 (0x1390)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x13B0 (0x13B0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x13D8 (0x13D8)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x13F8 (0x13F8)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_GoblinArcher.ABP_GoblinArcher_C.AnimGraph
	void ExecuteUbergraph_ABP_GoblinArcher(int32_t EntryPoint); // Function ABP_GoblinArcher.ABP_GoblinArcher_C.ExecuteUbergraph_ABP_GoblinArcher
}; 
 
 



#pragma once 
#include <ABP_SkeletonSwordman_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_SkeletonSwordman.ABP_SkeletonSwordman_C
// Size: 0x15A8(Inherited: 0x510)
struct UABP_SkeletonSwordman_C : UDCMonsterAnimInstanceBase
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
	struct FAnimNode_LegIK AnimGraphNode_LegIK_2;  // 0xA68 (0xA68)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // 0xB60 (0xB60)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // 0xB80 (0xB80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0xBA0 (0xBA0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0xBE8 (0xBE8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;  // 0xC30 (0xC30)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;  // 0xCF8 (0xCF8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0xD20 (0xD20)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;  // 0xD48 (0xD48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0xE10 (0xE10)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0xE58 (0xE58)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0xE80 (0xE80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0xF60 (0xF60)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0xF80 (0xF80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0xFA8 (0xFA8)
	struct FAnimNode_LegIK AnimGraphNode_LegIK;  // 0xFC8 (0xFC8)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x10C0 (0x10C0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x10E0 (0x10E0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x1100 (0x1100)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x11E0 (0x11E0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x1228 (0x1228)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;  // 0x1270 (0x1270)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0x1338 (0x1338)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0x1360 (0x1360)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x1388 (0x1388)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1450 (0x1450)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1498 (0x1498)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x14C0 (0x14C0)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x14E0 (0x14E0)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_SkeletonSwordman.ABP_SkeletonSwordman_C.AnimGraph
	void ExecuteUbergraph_ABP_SkeletonSwordman(int32_t EntryPoint); // Function ABP_SkeletonSwordman.ABP_SkeletonSwordman_C.ExecuteUbergraph_ABP_SkeletonSwordman
}; 
 
 



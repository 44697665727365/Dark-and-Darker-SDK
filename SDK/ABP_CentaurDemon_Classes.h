#pragma once 
#include <ABP_CentaurDemon_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_CentaurDemon.ABP_CentaurDemon_C
// Size: 0x14B8(Inherited: 0x510)
struct UABP_CentaurDemon_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x520 (0x520)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x528 (0x528)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x530 (0x530)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x550 (0x550)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x578 (0x578)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x5A0 (0x5A0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x5C8 (0x5C8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x5F0 (0x5F0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0x618 (0x618)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x6F8 (0x6F8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;  // 0x740 (0x740)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0x768 (0x768)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;  // 0x790 (0x790)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // 0x858 (0x858)
	struct FAnimNode_LegIK AnimGraphNode_LegIK_2;  // 0x878 (0x878)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // 0x970 (0x970)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x990 (0x990)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0x9D8 (0x9D8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;  // 0xA00 (0xA00)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0xAC8 (0xAC8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0xB10 (0xB10)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0xB30 (0xB30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0xC10 (0xC10)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0xC58 (0xC58)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xC80 (0xC80)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;  // 0xCA8 (0xCA8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0xD70 (0xD70)
	struct FAnimNode_LegIK AnimGraphNode_LegIK;  // 0xD90 (0xD90)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0xE88 (0xE88)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xEA8 (0xEA8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xEF0 (0xEF0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0xF18 (0xF18)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0xFE0 (0xFE0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x1028 (0x1028)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1048 (0x1048)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x1070 (0x1070)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x1090 (0x1090)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x1158 (0x1158)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x1180 (0x1180)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x11A8 (0x11A8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x11F0 (0x11F0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x1210 (0x1210)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x1280 (0x1280)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x12A0 (0x12A0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x1368 (0x1368)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x1470 (0x1470)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_CentaurDemon.ABP_CentaurDemon_C.AnimGraph
	void ExecuteUbergraph_ABP_CentaurDemon(int32_t EntryPoint); // Function ABP_CentaurDemon.ABP_CentaurDemon_C.ExecuteUbergraph_ABP_CentaurDemon
}; 
 
 



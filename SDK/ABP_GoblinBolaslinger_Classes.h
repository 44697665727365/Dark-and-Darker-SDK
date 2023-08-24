#pragma once 
#include <ABP_GoblinBolaslinger_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_GoblinBolaslinger.ABP_GoblinBolaslinger_C
// Size: 0x25E7(Inherited: 0x510)
struct UABP_GoblinBolaslinger_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
	char pad_1316[4];  // 0x524 (0x524)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x528 (0x528)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x530 (0x530)
	char pad_1336[8];  // 0x538 (0x538)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3;  // 0x540 (0x540)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2;  // 0xA60 (0xA60)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;  // 0xF80 (0xF80)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0xFA0 (0xFA0)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0xFC0 (0xFC0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;  // 0x1008 (0x1008)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0x1030 (0x1030)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x1058 (0x1058)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x1080 (0x1080)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x10A8 (0x10A8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x10D0 (0x10D0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;  // 0x10F8 (0x10F8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7;  // 0x1140 (0x1140)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;  // 0x1160 (0x1160)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x11A8 (0x11A8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x11C8 (0x11C8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x1210 (0x1210)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x1230 (0x1230)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x12A0 (0x12A0)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x12C0 (0x12C0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x1388 (0x1388)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x1490 (0x1490)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x14B8 (0x14B8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x14E0 (0x14E0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x1508 (0x1508)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x1530 (0x1530)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x1558 (0x1558)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x15A0 (0x15A0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;  // 0x15E8 (0x15E8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0x1610 (0x1610)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0x1638 (0x1638)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;  // 0x1660 (0x1660)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;  // 0x1728 (0x1728)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // 0x17F0 (0x17F0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;  // 0x1810 (0x1810)
	struct FAnimNode_LegIK AnimGraphNode_LegIK_2;  // 0x1830 (0x1830)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x1928 (0x1928)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0x1970 (0x1970)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x1A50 (0x1A50)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x1A70 (0x1A70)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x1AB8 (0x1AB8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0x1B00 (0x1B00)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0x1B28 (0x1B28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0x1B50 (0x1B50)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;  // 0x1B78 (0x1B78)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x1C40 (0x1C40)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x1D08 (0x1D08)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // 0x1D28 (0x1D28)
	struct FAnimNode_LegIK AnimGraphNode_LegIK;  // 0x1D48 (0x1D48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1E40 (0x1E40)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x1E88 (0x1E88)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x1F68 (0x1F68)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1F88 (0x1F88)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x1FB0 (0x1FB0)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x1FD0 (0x1FD0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x2098 (0x2098)
	char pad_8376[8];  // 0x20B8 (0x20B8)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics;  // 0x20C0 (0x20C0)
	int32_t Deadbody Index;  // 0x25E0 (0x25E0)
	char pad_9700_1 : 7;  // 0x25E4 (0x25E4)
	bool DeadbodyIndex1 : 1;  // 0x25E4 (0x25E4)
	char pad_9701_1 : 7;  // 0x25E5 (0x25E5)
	bool DeadbodyIndex2 : 1;  // 0x25E5 (0x25E5)
	char pad_9702_1 : 7;  // 0x25E6 (0x25E6)
	bool DeadbodyIndex3 : 1;  // 0x25E6 (0x25E6)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_GoblinBolaslinger.ABP_GoblinBolaslinger_C.AnimGraph
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime); // Function ABP_GoblinBolaslinger.ABP_GoblinBolaslinger_C.BlueprintThreadSafeUpdateAnimation
	void ExecuteUbergraph_ABP_GoblinBolaslinger(int32_t EntryPoint); // Function ABP_GoblinBolaslinger.ABP_GoblinBolaslinger_C.ExecuteUbergraph_ABP_GoblinBolaslinger
}; 
 
 



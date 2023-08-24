#pragma once 
#include <ABP_UndeadKnight_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_UndeadKnight.ABP_UndeadKnight_C
// Size: 0x14C5(Inherited: 0x510)
struct UABP_UndeadKnight_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
	char pad_1316[4];  // 0x524 (0x524)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x528 (0x528)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x530 (0x530)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x538 (0x538)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x558 (0x558)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x580 (0x580)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x5A8 (0x5A8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x5D0 (0x5D0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x5F8 (0x5F8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x620 (0x620)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;  // 0x668 (0x668)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;  // 0x690 (0x690)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0x758 (0x758)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x780 (0x780)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0x7C8 (0x7C8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;  // 0x7F0 (0x7F0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0x8B8 (0x8B8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // 0x998 (0x998)
	struct FAnimNode_LegIK AnimGraphNode_LegIK_2;  // 0x9B8 (0x9B8)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // 0xAB0 (0xAB0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0xAD0 (0xAD0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0xB18 (0xB18)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0xB38 (0xB38)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0xB80 (0xB80)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;  // 0xBA8 (0xBA8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xC70 (0xC70)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xC98 (0xC98)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xCE0 (0xCE0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0xD08 (0xD08)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0xDD0 (0xDD0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0xEB0 (0xEB0)
	struct FAnimNode_LegIK AnimGraphNode_LegIK;  // 0xED0 (0xED0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0xFC8 (0xFC8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0xFE8 (0xFE8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x1030 (0x1030)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1050 (0x1050)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x1078 (0x1078)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x1098 (0x1098)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x1160 (0x1160)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x1188 (0x1188)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x11B0 (0x11B0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x11F8 (0x11F8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x1218 (0x1218)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x1288 (0x1288)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x12A8 (0x12A8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x1370 (0x1370)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x1478 (0x1478)
	float Direction;  // 0x14C0 (0x14C0)
	char pad_5316_1 : 7;  // 0x14C4 (0x14C4)
	bool GuardMode : 1;  // 0x14C4 (0x14C4)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_UndeadKnight.ABP_UndeadKnight_C.AnimGraph
	void BlueprintInitializeAnimation(); // Function ABP_UndeadKnight.ABP_UndeadKnight_C.BlueprintInitializeAnimation
	void ExecuteUbergraph_ABP_UndeadKnight(int32_t EntryPoint); // Function ABP_UndeadKnight.ABP_UndeadKnight_C.ExecuteUbergraph_ABP_UndeadKnight
}; 
 
 



#pragma once 
#include <ABP_GiantDragonfly_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_GiantDragonfly.ABP_GiantDragonfly_C
// Size: 0x1248(Inherited: 0x510)
struct UABP_GiantDragonfly_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
	char pad_1316[4];  // 0x524 (0x524)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x528 (0x528)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x530 (0x530)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x538 (0x538)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x558 (0x558)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x580 (0x580)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x5A8 (0x5A8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x5D0 (0x5D0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x5F8 (0x5F8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x620 (0x620)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x648 (0x648)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0x670 (0x670)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x698 (0x698)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x6B8 (0x6B8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0x700 (0x700)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;  // 0x728 (0x728)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x7F0 (0x7F0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x810 (0x810)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0x858 (0x858)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0x880 (0x880)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x948 (0x948)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0x968 (0x968)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x990 (0x990)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x9B0 (0x9B0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0xA78 (0xA78)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0xAA0 (0xAA0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xAC8 (0xAC8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0xB10 (0xB10)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0xB30 (0xB30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0xBA0 (0xBA0)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0xBC0 (0xBC0)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0xC88 (0xC88)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2;  // 0xCD0 (0xCD0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // 0xDD8 (0xDD8)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;  // 0xDF8 (0xDF8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0xF20 (0xF20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0xF40 (0xF40)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // 0x1068 (0x1068)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x1088 (0x1088)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // [x10A8 ([x10A8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x10F0 (0x10F0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0x11F8 (0x11F8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x1220 (0x1220)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_GiantDragonfly.ABP_GiantDragonfly_C.AnimGraph
	void ExecuteUbergraph_ABP_GiantDragonfly(int32_t EntryPoint); // Function ABP_GiantDragonfly.ABP_GiantDragonfly_C.ExecuteUbergraph_ABP_GiantDragonfly
}; 
 
 



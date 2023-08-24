#pragma once 
#include <ABP_LavaMonster_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_LavaMonster.ABP_LavaMonster_C
// Size: 0x1609(Inherited: 0x510)
struct UABP_LavaMonster_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x520 (0x520)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x528 (0x528)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x530 (0x530)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;  // 0x550 (0x550)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0x578 (0x578)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x5A0 (0x5A0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x5C8 (0x5C8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x5F0 (0x5F0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x618 (0x618)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x640 (0x640)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8;  // 0x668 (0x668)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7;  // 0x690 (0x690)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;  // 0x6B0 (0x6B0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x6F8 (0x6F8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7;  // 0x740 (0x740)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4;  // 0x768 (0x768)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;  // 0x830 (0x830)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;  // 0x858 (0x858)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3;  // 0x880 (0x880)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0x948 (0x948)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // 0xA28 (0xA28)
	struct FAnimNode_LegIK AnimGraphNode_LegIK_2;  // 0xA48 (0xA48)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // 0xB40 (0xB40)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0xB60 (0xB60)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0xBA8 (0xBA8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0xBC8 (0xBC8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0xC10 (0xC10)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0xC58 (0xC58)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;  // 0xC80 (0xC80)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xD48 (0xD48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xD70 (0xD70)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;  // 0xD98 (0xD98)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0xE60 (0xE60)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0xF40 (0xF40)
	struct FAnimNode_LegIK AnimGraphNode_LegIK;  // 0xF60 (0xF60)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x1058 (0x1058)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x1078 (0x1078)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x10C0 (0x10C0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0x10E0 (0x10E0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x1108 (0x1108)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x1128 (0x1128)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x11F0 (0x11F0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x1218 (0x1218)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x1240 (0x1240)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x1268 (0x1268)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x1290 (0x1290)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x12D8 (0x12D8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x12F8 (0x12F8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x1340 (0x1340)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x1360 (0x1360)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x13D0 (0x13D0)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x13F0 (0x13F0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x14B8 (0x14B8)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x15C0 (0x15C0)
	char pad_5640_1 : 7;  // 0x1608 (0x1608)
	bool WakeUp : 1;  // 0x1608 (0x1608)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_LavaMonster.ABP_LavaMonster_C.AnimGraph
	void ExecuteUbergraph_ABP_LavaMonster(int32_t EntryPoint); // Function ABP_LavaMonster.ABP_LavaMonster_C.ExecuteUbergraph_ABP_LavaMonster
}; 
 
 



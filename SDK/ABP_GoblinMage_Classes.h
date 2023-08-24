#pragma once 
#include <ABP_GoblinMage_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_GoblinMage.ABP_GoblinMage_C
// Size: 0xF1B(Inherited: 0x510)
struct UABP_GoblinMage_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
	char pad_1316[4];  // 0x524 (0x524)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x528 (0x528)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x530 (0x530)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x538 (0x538)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x558 (0x558)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;  // 0x5A0 (0x5A0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;  // 0x5C8 (0x5C8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;  // 0x5F0 (0x5F0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;  // 0x618 (0x618)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0x640 (0x640)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x668 (0x668)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x690 (0x690)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x6B8 (0x6B8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x6E0 (0x6E0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x750 (0x750)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x770 (0x770)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x798 (0x798)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x7E0 (0x7E0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x800 (0x800)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x870 (0x870)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x890 (0x890)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x958 (0x958)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0xA60 (0xA60)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0xA88 (0xA88)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0xAB0 (0xAB0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0xAD8 (0xAD8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0xB00 (0xB00)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xB28 (0xB28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xB70 (0xB70)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0xB98 (0xB98)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0xC78 (0xC78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xC98 (0xC98)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xCE0 (0xCE0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0xD08 (0xD08)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0xDE8 (0xDE8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0xE08 (0xE08)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0xE30 (0xE30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0xE50 (0xE50)
	char pad_3864_1 : 7;  // 0xF18 (0xF18)
	bool Combat : 1;  // 0xF18 (0xF18)
	char pad_3865_1 : 7;  // 0xF19 (0xF19)
	bool ToPeace : 1;  // 0xF19 (0xF19)
	char pad_3866_1 : 7;  // 0xF1A (0xF1A)
	bool ToCombat : 1;  // 0xF1A (0xF1A)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_GoblinMage.ABP_GoblinMage_C.AnimGraph
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime); // Function ABP_GoblinMage.ABP_GoblinMage_C.BlueprintThreadSafeUpdateAnimation
	void ExecuteUbergraph_ABP_GoblinMage(int32_t EntryPoint); // Function ABP_GoblinMage.ABP_GoblinMage_C.ExecuteUbergraph_ABP_GoblinMage
}; 
 
 



#pragma once 
#include <ABP_Lich_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Lich.ABP_Lich_C
// Size: 0xEA0(Inherited: 0x510)
struct UABP_Lich_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
	char pad_1324[4];  // 0x52C (0x52C)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x530 (0x530)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x538 (0x538)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x540 (0x540)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x560 (0x560)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0x5A8 (0x5A8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x5D0 (0x5D0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x5F8 (0x5F8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x620 (0x620)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x648 (0x648)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x670 (0x670)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0x6B8 (0x6B8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0x6D8 (0x6D8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0x748 (0x748)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0x768 (0x768)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x7D8 (0x7D8)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x7F8 (0x7F8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x8C0 (0x8C0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x9C8 (0x9C8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x9F0 (0x9F0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0xA18 (0xA18)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0xA40 (0xA40)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0xA68 (0xA68)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xA90 (0xA90)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xAD8 (0xAD8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0xB00 (0xB00)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0xBE0 (0xBE0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xC00 (0xC00)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xC48 (0xC48)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0xC70 (0xC70)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0xD50 (0xD50)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0xD70 (0xD70)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0xD98 (0xD98)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0xDB8 (0xDB8)
	char pad_3712_1 : 7;  // 0xE80 (0xE80)
	bool Combat : 1;  // 0xE80 (0xE80)
	char pad_3713[7];  // 0xE81 (0xE81)
	struct FTimerHandle TimerHandle;  // 0xE88 (0xE88)
	struct TArray<struct ADCCharacterBase*> Target Array;  // 0xE90 (0xE90)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Lich.ABP_Lich_C.AnimGraph
	void ExecuteUbergraph_ABP_Lich(int32_t EntryPoint); // Function ABP_Lich.ABP_Lich_C.ExecuteUbergraph_ABP_Lich
}; 
 
 



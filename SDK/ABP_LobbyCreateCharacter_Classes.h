#pragma once 
#include <ABP_LobbyCreateCharacter_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C
// Size: 0x9A0(Inherited: 0x3A0)
struct UABP_LobbyCreateCharacter_C : UDCAnimInstanceV2
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x3A0 (0x3A0)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x3A8 (0x3A8)
	char pad_940[4];  // 0x3AC (0x3AC)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x3B0 (0x3B0)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x3B8 (0x3B8)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x3C0 (0x3C0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x3E0 (0x3E0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x428 (0x428)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0x448 (0x448)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0x510 (0x510)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_4;  // 0x5F0 (0x5F0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x668 (0x668)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_3;  // 0x6B0 (0x6B0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x728 (0x728)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_2;  // 0x770 (0x770)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0x7E8 (0x7E8)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;  // 0x830 (0x830)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x8A8 (0x8A8)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x8C8 (0x8C8)
	struct UAnimSequenceBase* IdleAnim;  // 0x990 (0x990)
	struct UObject* objectPartHead;  // 0x998 (0x998)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C.AnimGraph
	void UpdateIdleAnim(); // Function ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C.UpdateIdleAnim
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyCreateCharacter_AnimGraphNode_BlendListByBool_FB1926DE4C10E9B0C766C18588EFFB49(); // Function ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyCreateCharacter_AnimGraphNode_BlendListByBool_FB1926DE4C10E9B0C766C18588EFFB49
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyCreateCharacter_AnimGraphNode_BlendListByBool_48284C1548D337A9B6ABAFB6CD0E01D5(); // Function ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyCreateCharacter_AnimGraphNode_BlendListByBool_48284C1548D337A9B6ABAFB6CD0E01D5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyCreateCharacter_AnimGraphNode_BlendListByBool_358E7FD148A20902347AE1ABC2DB7E9C(); // Function ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyCreateCharacter_AnimGraphNode_BlendListByBool_358E7FD148A20902347AE1ABC2DB7E9C
	void OnChangedStandIdle(struct UAnimSequence* ItemStandIdleAnimation, struct FGameplayTag ItemHandType, struct FGameplayTag ItemSlotType); // Function ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C.OnChangedStandIdle
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C.BlueprintUpdateAnimation
	void ExecuteUbergraph_ABP_LobbyCreateCharacter(int32_t EntryPoint); // Function ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C.ExecuteUbergraph_ABP_LobbyCreateCharacter
}; 
 
 



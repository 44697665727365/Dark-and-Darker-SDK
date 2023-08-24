#pragma once 
#include <ABP_CampfireKit_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_CampfireKit.ABP_CampfireKit_C
// Size: 0x819(Inherited: 0x5B0)
struct UABP_CampfireKit_C : UItemWeaponAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5B0 (0x5B0)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x5B8 (0x5B8)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x5C0 (0x5C0)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x5C8 (0x5C8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x5E8 (0x5E8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x610 (0x610)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x638 (0x638)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x680 (0x680)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x6A0 (0x6A0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x6E8 (0x6E8)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x708 (0x708)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x7D0 (0x7D0)
	char pad_2072_1 : 7;  // 0x818 (0x818)
	bool bIsInHand : 1;  // 0x818 (0x818)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_CampfireKit.ABP_CampfireKit_C.AnimGraph
	void OnItemDataUpdated(struct FItemData& ItemData); // Function ABP_CampfireKit.ABP_CampfireKit_C.OnItemDataUpdated
	void ExecuteUbergraph_ABP_CampfireKit(int32_t EntryPoint); // Function ABP_CampfireKit.ABP_CampfireKit_C.ExecuteUbergraph_ABP_CampfireKit
}; 
 
 



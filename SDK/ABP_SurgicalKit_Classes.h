#pragma once 
#include <ABP_SurgicalKit_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_SurgicalKit.ABP_SurgicalKit_C
// Size: 0x678(Inherited: 0x5B0)
struct UABP_SurgicalKit_C : UItemWeaponAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5B0 (0x5B0)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x5B8 (0x5B8)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x5C0 (0x5C0)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x5C8 (0x5C8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x5E8 (0x5E8)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x630 (0x630)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_SurgicalKit.ABP_SurgicalKit_C.AnimGraph
	void ExecuteUbergraph_ABP_SurgicalKit(int32_t EntryPoint); // Function ABP_SurgicalKit.ABP_SurgicalKit_C.ExecuteUbergraph_ABP_SurgicalKit
}; 
 
 



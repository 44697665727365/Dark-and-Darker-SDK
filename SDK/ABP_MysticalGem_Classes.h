#pragma once 
#include <ABP_MysticalGem_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_MysticalGem.ABP_MysticalGem_C
// Size: 0x798(Inherited: 0x5B0)
struct UABP_MysticalGem_C : UItemWeaponAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5B0 (0x5B0)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x5B8 (0x5B8)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x5C0 (0x5C0)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x5C8 (0x5C8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x5E8 (0x5E8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0x630 (0x630)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0x650 (0x650)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0x778 (0x778)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_MysticalGem.ABP_MysticalGem_C.AnimGraph
	void ExecuteUbergraph_ABP_MysticalGem(int32_t EntryPoint); // Function ABP_MysticalGem.ABP_MysticalGem_C.ExecuteUbergraph_ABP_MysticalGem
}; 
 
 



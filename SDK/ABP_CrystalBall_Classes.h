#pragma once 
#include <ABP_CrystalBall_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_CrystalBall.ABP_CrystalBall_C
// Size: 0x631(Inherited: 0x5B0)
struct UABP_CrystalBall_C : UItemWeaponAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5B0 (0x5B0)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x5B8 (0x5B8)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x5C0 (0x5C0)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x5C8 (0x5C8)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x5E8 (0x5E8)
	char pad_1584_1 : 7;  // 0x630 (0x630)
	bool bIsInHand : 1;  // 0x630 (0x630)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_CrystalBall.ABP_CrystalBall_C.AnimGraph
	void OnItemDataUpdated(struct FItemData& ItemData); // Function ABP_CrystalBall.ABP_CrystalBall_C.OnItemDataUpdated
	void ExecuteUbergraph_ABP_CrystalBall(int32_t EntryPoint); // Function ABP_CrystalBall.ABP_CrystalBall_C.ExecuteUbergraph_ABP_CrystalBall
}; 
 
 



#pragma once 
#include <ABP_PlayerCharacterResurrection_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_PlayerCharacterResurrection.ABP_PlayerCharacterResurrection_C
// Size: 0x4C0(Inherited: 0x350)
struct UABP_PlayerCharacterResurrection_C : UAnimInstance
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x350 (0x350)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x358 (0x358)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x360 (0x360)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x368 (0x368)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x388 (0x388)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x3D0 (0x3D0)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x3F0 (0x3F0)
	struct USkeletalMesh* HeadMeshAsset;  // 0x4B8 (0x4B8)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_PlayerCharacterResurrection.ABP_PlayerCharacterResurrection_C.AnimGraph
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_PlayerCharacterResurrection.ABP_PlayerCharacterResurrection_C.BlueprintUpdateAnimation
	void ExecuteUbergraph_ABP_PlayerCharacterResurrection(int32_t EntryPoint); // Function ABP_PlayerCharacterResurrection.ABP_PlayerCharacterResurrection_C.ExecuteUbergraph_ABP_PlayerCharacterResurrection
}; 
 
 



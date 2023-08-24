#pragma once 
#include <ABP_Lantern_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Lantern.ABP_Lantern_C
// Size: 0x1038(Inherited: 0x5B0)
struct UABP_Lantern_C : UItemWeaponAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5B0 (0x5B0)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x5B8 (0x5B8)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x5C8 (0x5C8)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x5D0 (0x5D0)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x5D8 (0x5D8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x5F8 (0x5F8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x620 (0x620)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x648 (0x648)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x690 (0x690)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;  // 0x6B0 (0x6B0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;  // 0x7D8 (0x7D8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;  // 0x7F8 (0x7F8)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;  // 0x818 (0x818)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x940 (0x940)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;  // 0x988 (0x988)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;  // 0x9D0 (0x9D0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0xAF8 (0xAF8)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;  // 0xB40 (0xB40)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;  // 0xB60 (0xB60)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone;  // 0xB80 (0xB80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0xCA8 (0xCA8)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0xCF0 (0xCF0)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;  // 0xD38 (0xD38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xE50 (0xE50)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xE98 (0xE98)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0xEE0 (0xEE0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0xF28 (0xF28)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0xF48 (0xF48)
	char pad_4112_1 : 7;  // 0x1010 (0x1010)
	bool bIsInHand : 1;  // 0x1010 (0x1010)
	char pad_4113[7];  // 0x1011 (0x1011)
	struct FRotator OwnerActorRotation;  // 0x1018 (0x1018)
	char pad_4144_1 : 7;  // 0x1030 (0x1030)
	bool bIsPrimaryAttacking : 1;  // 0x1030 (0x1030)
	char pad_4145_1 : 7;  // 0x1031 (0x1031)
	bool bIsSpecialAttacking : 1;  // 0x1031 (0x1031)
	char pad_4146_1 : 7;  // 0x1032 (0x1032)
	bool bIsInteractInstall : 1;  // 0x1032 (0x1032)
	char pad_4147_1 : 7;  // 0x1033 (0x1033)
	bool bIsItemConsume : 1;  // 0x1033 (0x1033)
	char pad_4148_1 : 7;  // 0x1034 (0x1034)
	bool bIsItemEquipPrimary : 1;  // 0x1034 (0x1034)
	char pad_4149_1 : 7;  // 0x1035 (0x1035)
	bool bIsPlayMusic : 1;  // 0x1035 (0x1035)
	char pad_4150_1 : 7;  // 0x1036 (0x1036)
	bool bIsSkillAnimating : 1;  // 0x1036 (0x1036)
	char pad_4151_1 : 7;  // 0x1037 (0x1037)
	bool bIsPrimaryMontagePlaying : 1;  // 0x1037 (0x1037)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Lantern.ABP_Lantern_C.AnimGraph
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime); // Function ABP_Lantern.ABP_Lantern_C.BlueprintThreadSafeUpdateAnimation
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_ModifyBone_35AE8B904B7BCEEC064A8D86A8175F6F(); // Function ABP_Lantern.ABP_Lantern_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_ModifyBone_35AE8B904B7BCEEC064A8D86A8175F6F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_BlendListByBool_01D67BD44B9852EF767DA5931A92ECC2(); // Function ABP_Lantern.ABP_Lantern_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_BlendListByBool_01D67BD44B9852EF767DA5931A92ECC2
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_SequencePlayer_E122A4D948C5D31C9899F2BF10F6E186(); // Function ABP_Lantern.ABP_Lantern_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_SequencePlayer_E122A4D948C5D31C9899F2BF10F6E186
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_BlendListByBool_FCD1F97C478C954D9D553FB9B5F0D858(); // Function ABP_Lantern.ABP_Lantern_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_BlendListByBool_FCD1F97C478C954D9D553FB9B5F0D858
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_TransitionResult_677867BB4FE8C8CF64F511B52602A76E(); // Function ABP_Lantern.ABP_Lantern_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_TransitionResult_677867BB4FE8C8CF64F511B52602A76E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_TransitionResult_E6E75154404BF5531C91919C63DF5452(); // Function ABP_Lantern.ABP_Lantern_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_AnimGraphNode_TransitionResult_E6E75154404BF5531C91919C63DF5452
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Lantern.ABP_Lantern_C.BlueprintUpdateAnimation
	void OnItemDataUpdated(struct FItemData& ItemData); // Function ABP_Lantern.ABP_Lantern_C.OnItemDataUpdated
	void ExecuteUbergraph_ABP_Lantern(int32_t EntryPoint); // Function ABP_Lantern.ABP_Lantern_C.ExecuteUbergraph_ABP_Lantern
}; 
 
 



#pragma once 
#include <ABP_Spellbook_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Spellbook.ABP_Spellbook_C
// Size: 0x11D1(Inherited: 0x5B0)
struct UABP_Spellbook_C : UItemWeaponAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5B0 (0x5B0)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x5B8 (0x5B8)
	char pad_1476[4];  // 0x5C4 (0x5C4)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x5C8 (0x5C8)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x5D0 (0x5D0)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x5D8 (0x5D8)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x5F8 (0x5F8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2;  // 0x640 (0x640)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;  // 0x748 (0x748)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;  // 0x770 (0x770)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0x798 (0x798)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x7C0 (0x7C0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x7E8 (0x7E8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x810 (0x810)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x838 (0x838)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;  // 0x860 (0x860)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_12;  // 0x8A8 (0x8A8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;  // 0x8C8 (0x8C8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_11;  // 0x910 (0x910)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x930 (0x930)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_10;  // 0x958 (0x958)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;  // 0x978 (0x978)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9;  // 0x9C0 (0x9C0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x9E0 (0x9E0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8;  // 0xA28 (0xA28)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_4;  // 0xA48 (0xA48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7;  // 0xB10 (0xB10)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0xB30 (0xB30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0xB58 (0xB58)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_3;  // 0xB78 (0xB78)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0xC40 (0xC40)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0xC68 (0xC68)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0xC90 (0xC90)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0xCB8 (0xCB8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0xCE0 (0xCE0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0xD28 (0xD28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xD48 (0xD48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0xD70 (0xD70)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0xD90 (0xD90)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0xDD8 (0xDD8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0xDF8 (0xDF8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0xE20 (0xE20)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0xE40 (0xE40)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xF08 (0xF08)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0xF50 (0xF50)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xF98 (0xF98)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0xFE0 (0xFE0)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x1000 (0x1000)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x10C8 (0x10C8)
	char pad_4560_1 : 7;  // 0x11D0 (0x11D0)
	bool bIsInHand : 1;  // 0x11D0 (0x11D0)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Spellbook.ABP_Spellbook_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_SequencePlayer_EFE09FE24B10415F3F2946A5AEDEBD32(); // Function ABP_Spellbook.ABP_Spellbook_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_SequencePlayer_EFE09FE24B10415F3F2946A5AEDEBD32
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_BlendListByBool_750B0A9146268CA8C0A866BEFE13F60F(); // Function ABP_Spellbook.ABP_Spellbook_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_BlendListByBool_750B0A9146268CA8C0A866BEFE13F60F
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_TransitionResult_C3FC4AFC4DA5135E3D63CF9673F80D9E(); // Function ABP_Spellbook.ABP_Spellbook_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_TransitionResult_C3FC4AFC4DA5135E3D63CF9673F80D9E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_TransitionResult_16E27BEB4550344902BBD0ACE3FD0FE6(); // Function ABP_Spellbook.ABP_Spellbook_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_TransitionResult_16E27BEB4550344902BBD0ACE3FD0FE6
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_TransitionResult_FB037124482F78C03C123B98C5EF75F6(); // Function ABP_Spellbook.ABP_Spellbook_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_TransitionResult_FB037124482F78C03C123B98C5EF75F6
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_TransitionResult_2E40BF814E04FE2B3FC93298033829A5(); // Function ABP_Spellbook.ABP_Spellbook_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_TransitionResult_2E40BF814E04FE2B3FC93298033829A5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_TransitionResult_8A930EA84168DBA1DD4BE7AA7248A3DA(); // Function ABP_Spellbook.ABP_Spellbook_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_TransitionResult_8A930EA84168DBA1DD4BE7AA7248A3DA
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_TransitionResult_B20C8C734F27E768BD5DF09A53B4497F(); // Function ABP_Spellbook.ABP_Spellbook_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Spellbook_AnimGraphNode_TransitionResult_B20C8C734F27E768BD5DF09A53B4497F
	void OnItemDataUpdated(struct FItemData& ItemData); // Function ABP_Spellbook.ABP_Spellbook_C.OnItemDataUpdated
	void ExecuteUbergraph_ABP_Spellbook(int32_t EntryPoint); // Function ABP_Spellbook.ABP_Spellbook_C.ExecuteUbergraph_ABP_Spellbook
}; 
 
 



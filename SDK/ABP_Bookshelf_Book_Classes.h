#pragma once 
#include <ABP_Bookshelf_Book_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Bookshelf_Book.ABP_Bookshelf_Book_C
// Size: 0x6B8(Inherited: 0x450)
struct UABP_Bookshelf_Book_C : UDCAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x450 (0x450)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x458 (0x458)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x460 (0x460)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x468 (0x468)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x488 (0x488)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x4D0 (0x4D0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x4F8 (0x4F8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x520 (0x520)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x568 (0x568)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x588 (0x588)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x5D0 (0x5D0)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x5F0 (0x5F0)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Bookshelf_Book.ABP_Bookshelf_Book_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_Book_AnimGraphNode_TransitionResult_27D14B364D8EC7902AB6B3A98F633CE5(); // Function ABP_Bookshelf_Book.ABP_Bookshelf_Book_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_Book_AnimGraphNode_TransitionResult_27D14B364D8EC7902AB6B3A98F633CE5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_Book_AnimGraphNode_TransitionResult_705C87B44CC02000F7AA5DA14D5E6315(); // Function ABP_Bookshelf_Book.ABP_Bookshelf_Book_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bookshelf_Book_AnimGraphNode_TransitionResult_705C87B44CC02000F7AA5DA14D5E6315
	void ExecuteUbergraph_ABP_Bookshelf_Book(int32_t EntryPoint); // Function ABP_Bookshelf_Book.ABP_Bookshelf_Book_C.ExecuteUbergraph_ABP_Bookshelf_Book
}; 
 
 



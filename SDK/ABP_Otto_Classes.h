#pragma once 
#include <ABP_Otto_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_Otto.ABP_Otto_C
// Size: 0xA65(Inherited: 0x510)
struct UABP_Otto_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x518 (0x518)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x520 (0x520)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x528 (0x528)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;  // 0x548 (0x548)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;  // 0x570 (0x570)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;  // 0x598 (0x598)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0x5C0 (0x5C0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0x5E8 (0x5E8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0x610 (0x610)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0x638 (0x638)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0x660 (0x660)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0x688 (0x688)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0x6B0 (0x6B0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0x6D8 (0x6D8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0x700 (0x700)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0x728 (0x728)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0x750 (0x750)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0x798 (0x798)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_2;  // 0x7B8 (0x7B8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0x830 (0x830)
	struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;  // 0x850 (0x850)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0x8C8 (0x8C8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0x8E8 (0x8E8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x930 (0x930)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x950 (0x950)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0xA18 (0xA18)
	enum class E_Otto_StanceType Stance;  // 0xA60 (0xA60)
	char pad_2657_1 : 7;  // 0xA61 (0xA61)
	bool SleepStance : 1;  // 0xA61 (0xA61)
	char pad_2658_1 : 7;  // 0xA62 (0xA62)
	bool StandStance : 1;  // 0xA62 (0xA62)
	char pad_2659_1 : 7;  // 0xA63 (0xA63)
	bool SitStance : 1;  // 0xA63 (0xA63)
	char pad_2660_1 : 7;  // 0xA64 (0xA64)
	bool LieStance : 1;  // 0xA64 (0xA64)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Otto.ABP_Otto_C.AnimGraph
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime); // Function ABP_Otto.ABP_Otto_C.BlueprintThreadSafeUpdateAnimation
	void Added_F702C9C640E64D2D140233B87E67AF0A(); // Function ABP_Otto.ABP_Otto_C.Added_F702C9C640E64D2D140233B87E67AF0A
	void Added_9F2231B346CCE4626A7A4F8AC7D43CEA(); // Function ABP_Otto.ABP_Otto_C.Added_9F2231B346CCE4626A7A4F8AC7D43CEA
	void Added_802EA04D45BE39398AD314A0EBB7B4CD(); // Function ABP_Otto.ABP_Otto_C.Added_802EA04D45BE39398AD314A0EBB7B4CD
	void Added_D8E194F34B546738A6FAAFBCCC55DAC6(); // Function ABP_Otto.ABP_Otto_C.Added_D8E194F34B546738A6FAAFBCCC55DAC6
	void BlueprintInitializeAnimation(); // Function ABP_Otto.ABP_Otto_C.BlueprintInitializeAnimation
	void ExecuteUbergraph_ABP_Otto(int32_t EntryPoint); // Function ABP_Otto.ABP_Otto_C.ExecuteUbergraph_ABP_Otto
}; 
 
 



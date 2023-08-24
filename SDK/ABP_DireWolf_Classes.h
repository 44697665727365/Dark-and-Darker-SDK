#pragma once 
#include <ABP_DireWolf_Structs.h>
 
 
 
// AnimBlueprintGeneratedClass ABP_DireWolf.ABP_DireWolf_C
// Size: 0x11FD(Inherited: 0x510)
struct UABP_DireWolf_C : UDCMonsterAnimInstanceBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x510 (0x510)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;  // 0x518 (0x518)
	char pad_1316[4];  // 0x524 (0x524)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;  // 0x528 (0x528)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base;  // 0x530 (0x530)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;  // 0x538 (0x538)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18;  // 0x640 (0x640)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17;  // 0x668 (0x668)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16;  // 0x690 (0x690)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15;  // 0x6B8 (0x6B8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14;  // 0x6E0 (0x6E0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13;  // 0x708 (0x708)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;  // 0x730 (0x730)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;  // 0x758 (0x758)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8;  // 0x780 (0x780)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;  // 0x7A0 (0x7A0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;  // 0x7E8 (0x7E8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;  // 0x830 (0x830)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;  // 0x858 (0x858)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2;  // 0x8A0 (0x8A0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7;  // 0x980 (0x980)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;  // 0x9A0 (0x9A0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;  // 0x9E8 (0x9E8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;  // 0xA30 (0xA30)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;  // 0xA58 (0xA58)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;  // 0xAA0 (0xAA0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6;  // 0xB80 (0xB80)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;  // 0xBA0 (0xBA0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5;  // 0xBC8 (0xBC8)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2;  // 0xBE8 (0xBE8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;  // 0xCB0 (0xCB0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;  // 0xCD8 (0xCD8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;  // 0xD00 (0xD00)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;  // 0xD28 (0xD28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;  // 0xD50 (0xD50)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;  // 0xD78 (0xD78)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;  // 0xDA0 (0xDA0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;  // 0xDC8 (0xDC8)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;  // 0xDF0 (0xDF0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;  // 0xE18 (0xE18)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;  // 0xE40 (0xE40)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4;  // 0xE88 (0xE88)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult;  // 0xEA8 (0xEA8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;  // 0xED0 (0xED0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3;  // 0xF18 (0xF18)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;  // 0xF38 (0xF38)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2;  // 0xFA8 (0xFA8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;  // 0xFC8 (0xFC8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult;  // 0x1038 (0x1038)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine;  // 0x1058 (0x1058)
	struct FAnimNode_Slot AnimGraphNode_Slot;  // 0x1120 (0x1120)
	struct FAnimNode_Root AnimGraphNode_Root;  // 0x1168 (0x1168)
	char pad_4488_1 : 7;  // 0x1188 (0x1188)
	bool On Combat : 1;  // 0x1188 (0x1188)
	char pad_4489[3];  // 0x1189 (0x1189)
	int32_t Death Index;  // 0x118C (0x118C)
	struct ACharacter* Character;  // 0x1190 (0x1190)
	double Speed;  // 0x1198 (0x1198)
	struct FVector LC_Hit;  // 0x11A0 (0x11A0)
	struct FVector LT_Hit;  // 0x11B8 (0x11B8)
	struct FRotator FloorAngle;  // 0x11D0 (0x11D0)
	double RootCorection;  // 0x11E8 (0x11E8)
	double NewVar;  // 0x11F0 (0x11F0)
	char pad_4600_1 : 7;  // 0x11F8 (0x11F8)
	bool bShouldPlayStaggerNotSpawn : 1;  // 0x11F8 (0x11F8)
	char pad_4601_1 : 7;  // 0x11F9 (0x11F9)
	bool bShouldPlayHitReactionNotSpawn : 1;  // 0x11F9 (0x11F9)
	char pad_4602_1 : 7;  // 0x11FA (0x11FA)
	bool bIsDeathIndexTwo : 1;  // 0x11FA (0x11FA)
	char pad_4603_1 : 7;  // 0x11FB (0x11FB)
	bool bIsDeathIndexOne : 1;  // 0x11FB (0x11FB)
	char pad_4604_1 : 7;  // 0x11FC (0x11FC)
	bool bIsDeathIndexNotOne : 1;  // 0x11FC (0x11FC)


	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_DireWolf.ABP_DireWolf_C.AnimGraph
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime); // Function ABP_DireWolf.ABP_DireWolf_C.BlueprintThreadSafeUpdateAnimation
	bool TraceFloor(struct FName InSocketName, struct FVector& Location, float& Distance); // Function ABP_DireWolf.ABP_DireWolf_C.TraceFloor
	void BlueprintInitializeAnimation(); // Function ABP_DireWolf.ABP_DireWolf_C.BlueprintInitializeAnimation
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_DireWolf.ABP_DireWolf_C.BlueprintUpdateAnimation
	void ExecuteUbergraph_ABP_DireWolf(int32_t EntryPoint); // Function ABP_DireWolf.ABP_DireWolf_C.ExecuteUbergraph_ABP_DireWolf
}; 
 
 



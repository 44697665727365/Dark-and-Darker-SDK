#pragma once 
#include <BTT_SkillOnWhileState_Structs.h>
 
 
 
// BlueprintGeneratedClass BTT_SkillOnWhileState.BTT_SkillOnWhileState_C
// Size: 0x148(Inherited: 0xA8)
struct UBTT_SkillOnWhileState_C : UBTTask_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xA8 (0xA8)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool Get Variables From MonsterBP : 1;  // 0xB0 (0xB0)
	enum class E_BTActionsFromMonsterBP Select Action;  // 0xB1 (0xB1)
	char pad_178[6];  // 0xB2 (0xB2)
	struct FBlackboardKeySelector TargetActor;  // 0xB8 (0xB8)
	struct TArray<struct FGameplayTag> AbilityTags;  // 0xE0 (0xE0)
	struct TArray<int32_t> AbilityRates;  // 0xF0 (0xF0)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool WaitState : 1;  // 0x100 (0x100)
	char pad_257[7];  // 0x101 (0x101)
	struct TArray<struct FGameplayTag> WaitStateTags;  // 0x108 (0x108)
	int32_t Ability Tags Count;  // 0x118 (0x118)
	int32_t Rate;  // 0x11C (0x11C)
	struct FGameplayTag AbilityTag;  // 0x120 (0x120)
	struct FGameplayTag WaitStateTag;  // 0x128 (0x128)
	int32_t WaitTagsCount;  // 0x130 (0x130)
	int32_t RateTemp;  // 0x134 (0x134)
	struct ABP_DCMonsterBaseWithOptions_C* Controlled Pawn;  // 0x138 (0x138)
	struct UDCAnimInstanceBase* As DCAnim Instance Base;  // 0x140 (0x140)


	void Removed_241FC3634545136A0308048C3368EF5F(); // Function BTT_SkillOnWhileState.BTT_SkillOnWhileState_C.Removed_241FC3634545136A0308048C3368EF5F
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_SkillOnWhileState.BTT_SkillOnWhileState_C.ReceiveExecuteAI
	void ExecuteUbergraph_BTT_SkillOnWhileState(int32_t EntryPoint); // Function BTT_SkillOnWhileState.BTT_SkillOnWhileState_C.ExecuteUbergraph_BTT_SkillOnWhileState
}; 
 
 



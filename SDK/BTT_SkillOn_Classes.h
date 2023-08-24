#pragma once 
#include <BTT_SkillOn_Structs.h>
 
 
 
// BlueprintGeneratedClass BTT_SkillOn.BTT_SkillOn_C
// Size: 0x12C(Inherited: 0xA8)
struct UBTT_SkillOn_C : UBTTask_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xA8 (0xA8)
	struct FBlackboardKeySelector TargetActor;  // 0xB0 (0xB0)
	struct TArray<struct FGameplayTag> AbilityTags;  // 0xD8 (0xD8)
	struct TArray<int32_t> AbilityRates;  // 0xE8 (0xE8)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool WaitState : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)
	struct TArray<struct FGameplayTag> StateTags;  // 0x100 (0x100)
	int32_t Count;  // 0x110 (0x110)
	int32_t Rate;  // 0x114 (0x114)
	struct FGameplayTag AbilityTag;  // 0x118 (0x118)
	int32_t RateTemp;  // 0x120 (0x120)
	struct FGameplayTag StateTag;  // 0x124 (0x124)


	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_SkillOn.BTT_SkillOn_C.ReceiveExecuteAI
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_SkillOn.BTT_SkillOn_C.ReceiveTickAI
	void ExecuteUbergraph_BTT_SkillOn(int32_t EntryPoint); // Function BTT_SkillOn.BTT_SkillOn_C.ExecuteUbergraph_BTT_SkillOn
}; 
 
 



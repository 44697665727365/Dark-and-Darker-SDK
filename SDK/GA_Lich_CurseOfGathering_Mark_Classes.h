#pragma once 
#include <GA_Lich_CurseOfGathering_Mark_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C
// Size: 0x5A8(Inherited: 0x580)
struct UGA_Lich_CurseOfGathering_Mark_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct ADCCharacterBase* As DCCharacter Base;  // 0x588 (0x588)
	struct TArray<struct AActor*> Overlap Actors;  // 0x590 (0x590)
	struct FGameplayTag Container Tag;  // 0x5A0 (0x5A0)


	void CheckOverlapActorIsNull(bool& Is Null); // Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.CheckOverlapActorIsNull
	void Apply Effect(); // Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.Apply Effect
	void OnFinish_ECA6CAF448F9E889034078A012F45101(); // Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.OnFinish_ECA6CAF448F9E889034078A012F45101
	void InvalidHandle_7481A0444A582F553DFF5FB1E801F3B4(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo); // Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.InvalidHandle_7481A0444A582F553DFF5FB1E801F3B4
	void OnRemoved_7481A0444A582F553DFF5FB1E801F3B4(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo); // Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.OnRemoved_7481A0444A582F553DFF5FB1E801F3B4
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.AbilityActivated
	void ExecuteUbergraph_GA_Lich_CurseOfGathering_Mark(int32_t EntryPoint); // Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.ExecuteUbergraph_GA_Lich_CurseOfGathering_Mark
}; 
 
 



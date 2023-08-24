#pragma once 
#include <GA_Lich_CurseOfIsolation_Mark_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Lich_CurseOfIsolation_Mark.GA_Lich_CurseOfIsolation_Mark_C
// Size: 0x5A8(Inherited: 0x580)
struct UGA_Lich_CurseOfIsolation_Mark_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct ADCCharacterBase* As DCCharacter Base;  // 0x588 (0x588)
	struct TArray<struct AActor*> Overlap Actors;  // 0x590 (0x590)
	struct FGameplayTag Container Tag;  // 0x5A0 (0x5A0)


	void CheckOverlapActorIsNull(bool& Is Null); // Function GA_Lich_CurseOfIsolation_Mark.GA_Lich_CurseOfIsolation_Mark_C.CheckOverlapActorIsNull
	void Apply Effect(); // Function GA_Lich_CurseOfIsolation_Mark.GA_Lich_CurseOfIsolation_Mark_C.Apply Effect
	void OnFinish_46FD27054B6E2537B8D3BFA57E85AF6D(); // Function GA_Lich_CurseOfIsolation_Mark.GA_Lich_CurseOfIsolation_Mark_C.OnFinish_46FD27054B6E2537B8D3BFA57E85AF6D
	void InvalidHandle_544DC1E440C81C931B18AE89CA7CFBE3(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo); // Function GA_Lich_CurseOfIsolation_Mark.GA_Lich_CurseOfIsolation_Mark_C.InvalidHandle_544DC1E440C81C931B18AE89CA7CFBE3
	void OnRemoved_544DC1E440C81C931B18AE89CA7CFBE3(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo); // Function GA_Lich_CurseOfIsolation_Mark.GA_Lich_CurseOfIsolation_Mark_C.OnRemoved_544DC1E440C81C931B18AE89CA7CFBE3
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Lich_CurseOfIsolation_Mark.GA_Lich_CurseOfIsolation_Mark_C.AbilityActivated
	void ExecuteUbergraph_GA_Lich_CurseOfIsolation_Mark(int32_t EntryPoint); // Function GA_Lich_CurseOfIsolation_Mark.GA_Lich_CurseOfIsolation_Mark_C.ExecuteUbergraph_GA_Lich_CurseOfIsolation_Mark
}; 
 
 



#pragma once 
#include <GA_PlayerSpellCast_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_PlayerSpellCast.GA_PlayerSpellCast_C
// Size: 0x780(Inherited: 0x770)
struct UGA_PlayerSpellCast_C : UGA_PlayerSpellCastBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x770 (0x770)
	struct UAbilityTask_WaitTargetData* WaitTargetDataTask;  // 0x778 (0x778)


	void CheckGround(struct FHitResult HtResult, bool& Result); // Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.CheckGround
	void Cancelled_BD46902F414FE76022DDE5BE621487B9(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.Cancelled_BD46902F414FE76022DDE5BE621487B9
	void ValidData_BD46902F414FE76022DDE5BE621487B9(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.ValidData_BD46902F414FE76022DDE5BE621487B9
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.AbilityActivated
	void CastingFinishEvent(struct FDesignDataSpell CurentDesignSpellData); // Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.CastingFinishEvent
	void SpellFireEvent(); // Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.SpellFireEvent
	void ExecuteUbergraph_GA_PlayerSpellCast(int32_t EntryPoint); // Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.ExecuteUbergraph_GA_PlayerSpellCast
}; 
 
 



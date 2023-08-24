#pragma once 
#include <GA_Fireball_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Fireball.GA_Fireball_C
// Size: 0x620(Inherited: 0x618)
struct UGA_Fireball_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)


	void Cancelled_D31D8679479E40498B8FF495A75CE021(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Fireball.GA_Fireball_C.Cancelled_D31D8679479E40498B8FF495A75CE021
	void ValidData_D31D8679479E40498B8FF495A75CE021(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Fireball.GA_Fireball_C.ValidData_D31D8679479E40498B8FF495A75CE021
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_Fireball.GA_Fireball_C.AbilityActivated
	void ExecuteUbergraph_GA_Fireball(int32_t EntryPoint); // Function GA_Fireball.GA_Fireball_C.ExecuteUbergraph_GA_Fireball
}; 
 
 



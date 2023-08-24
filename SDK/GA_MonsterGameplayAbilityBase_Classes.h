#pragma once 
#include <GA_MonsterGameplayAbilityBase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C
// Size: 0x580(Inherited: 0x560)
struct UGA_MonsterGameplayAbilityBase_C : UDCMonsterGameplayAbilityBase
{
	struct FVector Origin Location;  // 0x560 (0x560)
	struct FTimerHandle Unable To Move Check TimerHandle;  // 0x578 (0x578)


	void Unable To Move Check(); // Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.Unable To Move Check
	void Unable To Move Check Timer(struct FTimerHandle& TimerHandle); // Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.Unable To Move Check Timer
	void GetBBTargetActorToMonsterBase(bool& Result, struct ABP_DCMonsterBaseWithOptions_C*& DCMonsterBaseWithOptions); // Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.GetBBTargetActorToMonsterBase
	void GetBBTargetActorToCharacterBase(bool& Result, struct ADCCharacterBase*& As DCCharacter Base); // Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.GetBBTargetActorToCharacterBase
	void GetBBTargetActor(bool& Result, struct UObject*& Return Value); // Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.GetBBTargetActor
}; 
 
 



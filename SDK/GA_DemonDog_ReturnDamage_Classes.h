#pragma once 
#include <GA_DemonDog_ReturnDamage_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DemonDog_ReturnDamage.GA_DemonDog_ReturnDamage_C
// Size: 0x588(Inherited: 0x580)
struct UGA_DemonDog_ReturnDamage_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_7AD18C924EBF9EFF077702863DB5AE57(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_DemonDog_ReturnDamage.GA_DemonDog_ReturnDamage_C.EventReceived_7AD18C924EBF9EFF077702863DB5AE57
	void Added_3D6FD3214EFCAAD24939D59A7A409CF3(); // Function GA_DemonDog_ReturnDamage.GA_DemonDog_ReturnDamage_C.Added_3D6FD3214EFCAAD24939D59A7A409CF3
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_DemonDog_ReturnDamage.GA_DemonDog_ReturnDamage_C.AbilityActivated
	void ExecuteUbergraph_GA_DemonDog_ReturnDamage(int32_t EntryPoint); // Function GA_DemonDog_ReturnDamage.GA_DemonDog_ReturnDamage_C.ExecuteUbergraph_GA_DemonDog_ReturnDamage
}; 
 
 



#pragma once 
#include <GA_Cockatrice_ChaseAttackPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Cockatrice_ChaseAttackPhase.GA_Cockatrice_ChaseAttackPhase_C
// Size: 0x588(Inherited: 0x580)
struct UGA_Cockatrice_ChaseAttackPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_A039B1F64BBDF1060F19DD85F303B550(struct FGameplayEventData Payload); // Function GA_Cockatrice_ChaseAttackPhase.GA_Cockatrice_ChaseAttackPhase_C.EventReceived_A039B1F64BBDF1060F19DD85F303B550
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Cockatrice_ChaseAttackPhase.GA_Cockatrice_ChaseAttackPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_Cockatrice_ChaseAttackPhase(int32_t EntryPoint); // Function GA_Cockatrice_ChaseAttackPhase.GA_Cockatrice_ChaseAttackPhase_C.ExecuteUbergraph_GA_Cockatrice_ChaseAttackPhase
}; 
 
 



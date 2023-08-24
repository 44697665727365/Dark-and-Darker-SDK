#pragma once 
#include <GA_Mummy_Attack4_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Mummy_Attack4.GA_Mummy_Attack4_C
// Size: 0x6E0(Inherited: 0x6C9)
struct UGA_Mummy_Attack4_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct UDCAT_RotateToActor* Async Task;  // 0x6D8 (0x6D8)


	void EventReceived_2E178BC945F30FDA58F6BCA3E8BA296F(struct FGameplayEventData Payload); // Function GA_Mummy_Attack4.GA_Mummy_Attack4_C.EventReceived_2E178BC945F30FDA58F6BCA3E8BA296F
	void EventReceived_2E178BC945F30FDA58F6BCA304969C89(struct FGameplayEventData Payload); // Function GA_Mummy_Attack4.GA_Mummy_Attack4_C.EventReceived_2E178BC945F30FDA58F6BCA304969C89
	void EventReceived_9AADA1DC4072B1DBEE17C7B0EAC80A2B(struct FGameplayEventData Payload); // Function GA_Mummy_Attack4.GA_Mummy_Attack4_C.EventReceived_9AADA1DC4072B1DBEE17C7B0EAC80A2B
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Mummy_Attack4.GA_Mummy_Attack4_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Mummy_Attack4.GA_Mummy_Attack4_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_Mummy_Attack4(int32_t EntryPoint); // Function GA_Mummy_Attack4.GA_Mummy_Attack4_C.ExecuteUbergraph_GA_Mummy_Attack4
}; 
 
 



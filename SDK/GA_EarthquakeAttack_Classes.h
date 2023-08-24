#pragma once 
#include <GA_EarthquakeAttack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_EarthquakeAttack.GA_EarthquakeAttack_C
// Size: 0x578(Inherited: 0x558)
struct UGA_EarthquakeAttack_C : UDCGameplayAbilityBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct UAsyncTaskWaitGameplayEvent* NewVar;  // 0x560 (0x560)
	struct UAbilityTask_WaitGameplayEvent* Async Task;  // 0x568 (0x568)
	struct UAbilityTask_WaitGameplayTagRemoved* Async Task_1;  // 0x570 (0x570)


	void (); // Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.
	void Removed_9E6658F8454852B6E36EE1B51E43362D(); // Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.Removed_9E6658F8454852B6E36EE1B51E43362D
	void EventReceived_33FB7CA34B61D273DD00EB869E699495(struct FGameplayEventData Payload); // Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.EventReceived_33FB7CA34B61D273DD00EB869E699495
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.K2_ActivateAbilityFromEvent
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_EarthquakeAttack(int32_t EntryPoint); // Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.ExecuteUbergraph_GA_EarthquakeAttack
}; 
 
 



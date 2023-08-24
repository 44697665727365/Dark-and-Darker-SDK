#pragma once 
#include <GA_MonsterDeath_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_MonsterDeath.GA_MonsterDeath_C
// Size: 0x592(Inherited: 0x580)
struct UGA_MonsterDeath_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct UAnimMontage* Montage to Play Fly;  // 0x588 (0x588)
	char pad_1424_1 : 7;  // 0x590 (0x590)
	bool IsLootable : 1;  // 0x590 (0x590)
	char pad_1425_1 : 7;  // 0x591 (0x591)
	bool IsAir : 1;  // 0x591 (0x591)


	void OnChange_9E8AFB9E4D98F88ECD2A39BAF1250363(enum class EMovementMode NewMovementMode); // Function GA_MonsterDeath.GA_MonsterDeath_C.OnChange_9E8AFB9E4D98F88ECD2A39BAF1250363
	void EventReceived_6BD842A04FEECB3ADB7405A03B1CC235(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_MonsterDeath.GA_MonsterDeath_C.EventReceived_6BD842A04FEECB3ADB7405A03B1CC235
	void OnCancelled_6BD842A04FEECB3ADB7405A03B1CC235(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_MonsterDeath.GA_MonsterDeath_C.OnCancelled_6BD842A04FEECB3ADB7405A03B1CC235
	void OnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_MonsterDeath.GA_MonsterDeath_C.OnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235
	void OnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_MonsterDeath.GA_MonsterDeath_C.OnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235
	void OnCompleted_6BD842A04FEECB3ADB7405A03B1CC235(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_MonsterDeath.GA_MonsterDeath_C.OnCompleted_6BD842A04FEECB3ADB7405A03B1CC235
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_MonsterDeath.GA_MonsterDeath_C.AbilityActivated
	void ExecuteUbergraph_GA_MonsterDeath(int32_t EntryPoint); // Function GA_MonsterDeath.GA_MonsterDeath_C.ExecuteUbergraph_GA_MonsterDeath
}; 
 
 



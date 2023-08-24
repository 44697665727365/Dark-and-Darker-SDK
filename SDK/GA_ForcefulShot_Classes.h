#pragma once 
#include <GA_ForcefulShot_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_ForcefulShot.GA_ForcefulShot_C
// Size: 0x688(Inherited: 0x680)
struct UGA_ForcefulShot_C : UGA_PlayerSkillInstantAndWaitForEnd_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x680 (0x680)


	void On Launch Character(struct AActor* TargetActor, struct FVector HitDirection); // Function GA_ForcefulShot.GA_ForcefulShot_C.On Launch Character
	void EventReceived_71BD8AA2429E3C9F1C2813B20526FB8E(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_ForcefulShot.GA_ForcefulShot_C.EventReceived_71BD8AA2429E3C9F1C2813B20526FB8E
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_ForcefulShot.GA_ForcefulShot_C.AbilityActivated
	void ExecuteUbergraph_GA_ForcefulShot(int32_t EntryPoint); // Function GA_ForcefulShot.GA_ForcefulShot_C.ExecuteUbergraph_GA_ForcefulShot
}; 
 
 



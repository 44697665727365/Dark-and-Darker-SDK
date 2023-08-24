#pragma once 
#include <GA_GhostKing_Eating_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GhostKing_Eating.GA_GhostKing_Eating_C
// Size: 0x5A0(Inherited: 0x580)
struct UGA_GhostKing_Eating_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FVector Out Socket Location;  // 0x588 (0x588)


	void Removed_701844FA4EED4533E0BF9B854F204ECB(); // Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.Removed_701844FA4EED4533E0BF9B854F204ECB
	void EventReceived_AA4AB67146876402F8EBA39BF04EDC2D(struct FGameplayEventData Payload); // Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.EventReceived_AA4AB67146876402F8EBA39BF04EDC2D
	void Added_96D0CB504ECC5D3FD581698258C98FCB(); // Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.Added_96D0CB504ECC5D3FD581698258C98FCB
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.AbilityActivated
	void OnDestroyedEvent(struct AActor* DestroyedActor); // Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.OnDestroyedEvent
	void ExecuteUbergraph_GA_GhostKing_Eating(int32_t EntryPoint); // Function GA_GhostKing_Eating.GA_GhostKing_Eating_C.ExecuteUbergraph_GA_GhostKing_Eating
}; 
 
 



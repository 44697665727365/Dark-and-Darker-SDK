#pragma once 
#include <GA_LightningStrike_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LightningStrike.GA_LightningStrike_C
// Size: 0x658(Inherited: 0x618)
struct UGA_LightningStrike_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	double IntervalTime;  // 0x620 (0x620)
	struct FVector PivotLocation;  // 0x628 (0x628)
	struct TArray<struct AActor*> TargetActors;  // 0x640 (0x640)
	double Height;  // 0x650 (0x650)


	void HitCollisionCheck(AActor* TargetActorClass); // Function GA_LightningStrike.GA_LightningStrike_C.HitCollisionCheck
	void SpellBlast(bool& Result); // Function GA_LightningStrike.GA_LightningStrike_C.SpellBlast
	void InstallGround(struct FHitResult HtResult, bool& Result); // Function GA_LightningStrike.GA_LightningStrike_C.InstallGround
	void Cancelled_3C07F6154261BA22F206AFA74ABBAD1C(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_LightningStrike.GA_LightningStrike_C.Cancelled_3C07F6154261BA22F206AFA74ABBAD1C
	void ValidData_3C07F6154261BA22F206AFA74ABBAD1C(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_LightningStrike.GA_LightningStrike_C.ValidData_3C07F6154261BA22F206AFA74ABBAD1C
	void OnFinish_96E515424152A73E08746B99EA15FF49(); // Function GA_LightningStrike.GA_LightningStrike_C.OnFinish_96E515424152A73E08746B99EA15FF49
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_LightningStrike.GA_LightningStrike_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_LightningStrike.GA_LightningStrike_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_LightningStrike(int32_t EntryPoint); // Function GA_LightningStrike.GA_LightningStrike_C.ExecuteUbergraph_GA_LightningStrike
}; 
 
 



#pragma once 
#include <GA_HolyStrike_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_HolyStrike.GA_HolyStrike_C
// Size: 0x650(Inherited: 0x618)
struct UGA_HolyStrike_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	struct FVector PivotLocation;  // 0x620 (0x620)
	struct TArray<struct AActor*> TargetActors;  // 0x638 (0x638)
	double Height;  // 0x648 (0x648)


	void SpellBlast(); // Function GA_HolyStrike.GA_HolyStrike_C.SpellBlast
	void HitCollisionCheck(AActor* TargetActorClass); // Function GA_HolyStrike.GA_HolyStrike_C.HitCollisionCheck
	void InstallGround(struct FHitResult HtResult, bool& Result); // Function GA_HolyStrike.GA_HolyStrike_C.InstallGround
	void Cancelled_5D422FC745788DC53D9BB980597D3C0C(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_HolyStrike.GA_HolyStrike_C.Cancelled_5D422FC745788DC53D9BB980597D3C0C
	void ValidData_5D422FC745788DC53D9BB980597D3C0C(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_HolyStrike.GA_HolyStrike_C.ValidData_5D422FC745788DC53D9BB980597D3C0C
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_HolyStrike.GA_HolyStrike_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_HolyStrike.GA_HolyStrike_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_HolyStrike(int32_t EntryPoint); // Function GA_HolyStrike.GA_HolyStrike_C.ExecuteUbergraph_GA_HolyStrike
}; 
 
 



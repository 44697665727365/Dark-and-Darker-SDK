#pragma once 
#include <GA_SkeletonWarlord_SoulPassFromPlayer_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C
// Size: 0x6E0(Inherited: 0x6C0)
struct UGA_SkeletonWarlord_SoulPassFromPlayer_C : UGA_MonsterChargedRangedAttackBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6C0 (0x6C0)
	struct TArray<struct ADCCharacterBase*> Target Array;  // 0x6C8 (0x6C8)
	struct ADCCharacterBase* DCCharacter Base;  // 0x6D8 (0x6D8)


	void OnFinish_A81052C64B49D6839A4D65A89622689F(); // Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.OnFinish_A81052C64B49D6839A4D65A89622689F
	void OnSuccess_48A59F624177C1EAB8E96499AAA37DE7(struct AActor* ProjectileActor); // Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.OnSuccess_48A59F624177C1EAB8E96499AAA37DE7
	void OnFinish_2C0EA8BD41F8B1DEAB9EBF996A705D1A(); // Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.OnFinish_2C0EA8BD41F8B1DEAB9EBF996A705D1A
	void OnApplied_CF5CCFE740FA854749CD529B24F66BBF(struct AActor* Source, struct FGameplayEffectSpecHandle SpecHandle, struct FActiveGameplayEffectHandle ActiveHandle); // Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.OnApplied_CF5CCFE740FA854749CD529B24F66BBF
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonWarlord_SoulPassFromPlayer(int32_t EntryPoint); // Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.ExecuteUbergraph_GA_SkeletonWarlord_SoulPassFromPlayer
}; 
 
 



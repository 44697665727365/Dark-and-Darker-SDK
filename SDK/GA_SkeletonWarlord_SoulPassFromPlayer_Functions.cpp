#include "pch.h"
#include "SDK.h"

void UGA_SkeletonWarlord_SoulPassFromPlayer_C::OnFinish_A81052C64B49D6839A4D65A89622689F(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.OnFinish_A81052C64B49D6839A4D65A89622689F");

	FOnFinish_A81052C64B49D6839A4D65A89622689F parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_SoulPassFromPlayer_C::OnSuccess_48A59F624177C1EAB8E96499AAA37DE7(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.OnSuccess_48A59F624177C1EAB8E96499AAA37DE7");

	FOnSuccess_48A59F624177C1EAB8E96499AAA37DE7 parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_SoulPassFromPlayer_C::OnFinish_2C0EA8BD41F8B1DEAB9EBF996A705D1A(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.OnFinish_2C0EA8BD41F8B1DEAB9EBF996A705D1A");

	FOnFinish_2C0EA8BD41F8B1DEAB9EBF996A705D1A parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_SoulPassFromPlayer_C::OnApplied_CF5CCFE740FA854749CD529B24F66BBF(struct AActor* Source, struct FGameplayEffectSpecHandle SpecHandle, struct FActiveGameplayEffectHandle ActiveHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.OnApplied_CF5CCFE740FA854749CD529B24F66BBF");

	FOnApplied_CF5CCFE740FA854749CD529B24F66BBF parms{};	
	parms.Source = Source;
	parms.SpecHandle = SpecHandle;
	parms.ActiveHandle = ActiveHandle;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_SoulPassFromPlayer_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_SoulPassFromPlayer_C::ExecuteUbergraph_GA_SkeletonWarlord_SoulPassFromPlayer(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C.ExecuteUbergraph_GA_SkeletonWarlord_SoulPassFromPlayer");

	FExecuteUbergraph_GA_SkeletonWarlord_SoulPassFromPlayer parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


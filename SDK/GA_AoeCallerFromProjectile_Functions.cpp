#include "pch.h"
#include "SDK.h"

void UGA_AoeCallerFromProjectile_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerFromProjectile.GA_AoeCallerFromProjectile_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerFromProjectile_C::TargetDataReceived(struct FHitResult& Hit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerFromProjectile.GA_AoeCallerFromProjectile_C.TargetDataReceived");

	FTargetDataReceived parms{};	
	parms.Hit = Hit;

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerFromProjectile_C::Aoe Spawned(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerFromProjectile.GA_AoeCallerFromProjectile_C.Aoe Spawned");

	FAoe Spawned parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerFromProjectile_C::ExecuteUbergraph_GA_AoeCallerFromProjectile(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerFromProjectile.GA_AoeCallerFromProjectile_C.ExecuteUbergraph_GA_AoeCallerFromProjectile");

	FExecuteUbergraph_GA_AoeCallerFromProjectile parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerFromProjectile_C::Aoe Spawn Event Dispatcher__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerFromProjectile.GA_AoeCallerFromProjectile_C.Aoe Spawn Event Dispatcher__DelegateSignature");

	FAoe Spawn Event Dispatcher__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}


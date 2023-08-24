#include "pch.h"
#include "SDK.h"

void UGA_GhostKing_NormalAttack_C::Set Variables(struct FGameplayEventData Trigger Event Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.Set Variables");

	FSet Variables parms{};	
	parms.Trigger Event Data = Trigger Event Data;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_NormalAttack_C::EventReceived_442DA6E34A7324E0185013B9B8192AE7(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.EventReceived_442DA6E34A7324E0185013B9B8192AE7");

	FEventReceived_442DA6E34A7324E0185013B9B8192AE7 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_NormalAttack_C::OnSuccess_C7A010454D363CFFE342A88C155A0B81(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.OnSuccess_C7A010454D363CFFE342A88C155A0B81");

	FOnSuccess_C7A010454D363CFFE342A88C155A0B81 parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_NormalAttack_C::EventReceived_808334F54FC668822F461982A5C1F828(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.EventReceived_808334F54FC668822F461982A5C1F828");

	FEventReceived_808334F54FC668822F461982A5C1F828 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_NormalAttack_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_NormalAttack_C::CreateProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower, struct FVector StartLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.CreateProjectiles");

	FCreateProjectiles parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;
	parms.FirePower = FirePower;
	parms.StartLocation = StartLocation;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_NormalAttack_C::ExecuteUbergraph_GA_GhostKing_NormalAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.ExecuteUbergraph_GA_GhostKing_NormalAttack");

	FExecuteUbergraph_GA_GhostKing_NormalAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


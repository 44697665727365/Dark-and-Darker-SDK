#include "pch.h"
#include "SDK.h"

void UGA_LavaMonster_SpawnLava_Nightmare_C::EventReceived_E40F5943497DCAF72B3B2CBB58BE2A63(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C.EventReceived_E40F5943497DCAF72B3B2CBB58BE2A63");

	FEventReceived_E40F5943497DCAF72B3B2CBB58BE2A63 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_LavaMonster_SpawnLava_Nightmare_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_LavaMonster_SpawnLava_Nightmare_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_LavaMonster_SpawnLava_Nightmare_C::Spawn Line Aoe(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C.Spawn Line Aoe");

	FSpawn Line Aoe parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_LavaMonster_SpawnLava_Nightmare_C::ExecuteUbergraph_GA_LavaMonster_SpawnLava_Nightmare(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C.ExecuteUbergraph_GA_LavaMonster_SpawnLava_Nightmare");

	FExecuteUbergraph_GA_LavaMonster_SpawnLava_Nightmare parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


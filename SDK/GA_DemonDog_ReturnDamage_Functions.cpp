#include "pch.h"
#include "SDK.h"

void UGA_DemonDog_ReturnDamage_C::EventReceived_7AD18C924EBF9EFF077702863DB5AE57(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonDog_ReturnDamage.GA_DemonDog_ReturnDamage_C.EventReceived_7AD18C924EBF9EFF077702863DB5AE57");

	FEventReceived_7AD18C924EBF9EFF077702863DB5AE57 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DemonDog_ReturnDamage_C::Added_3D6FD3214EFCAAD24939D59A7A409CF3(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonDog_ReturnDamage.GA_DemonDog_ReturnDamage_C.Added_3D6FD3214EFCAAD24939D59A7A409CF3");

	FAdded_3D6FD3214EFCAAD24939D59A7A409CF3 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DemonDog_ReturnDamage_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonDog_ReturnDamage.GA_DemonDog_ReturnDamage_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DemonDog_ReturnDamage_C::ExecuteUbergraph_GA_DemonDog_ReturnDamage(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonDog_ReturnDamage.GA_DemonDog_ReturnDamage_C.ExecuteUbergraph_GA_DemonDog_ReturnDamage");

	FExecuteUbergraph_GA_DemonDog_ReturnDamage parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


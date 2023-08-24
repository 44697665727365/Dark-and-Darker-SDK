#include "pch.h"
#include "SDK.h"

void UGA_MonsterDeath_C::OnChange_9E8AFB9E4D98F88ECD2A39BAF1250363(enum class EMovementMode NewMovementMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterDeath.GA_MonsterDeath_C.OnChange_9E8AFB9E4D98F88ECD2A39BAF1250363");

	FOnChange_9E8AFB9E4D98F88ECD2A39BAF1250363 parms{};	
	parms.NewMovementMode = NewMovementMode;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterDeath_C::EventReceived_6BD842A04FEECB3ADB7405A03B1CC235(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterDeath.GA_MonsterDeath_C.EventReceived_6BD842A04FEECB3ADB7405A03B1CC235");

	FEventReceived_6BD842A04FEECB3ADB7405A03B1CC235 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterDeath_C::OnCancelled_6BD842A04FEECB3ADB7405A03B1CC235(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterDeath.GA_MonsterDeath_C.OnCancelled_6BD842A04FEECB3ADB7405A03B1CC235");

	FOnCancelled_6BD842A04FEECB3ADB7405A03B1CC235 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterDeath_C::OnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterDeath.GA_MonsterDeath_C.OnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235");

	FOnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterDeath_C::OnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterDeath.GA_MonsterDeath_C.OnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235");

	FOnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterDeath_C::OnCompleted_6BD842A04FEECB3ADB7405A03B1CC235(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterDeath.GA_MonsterDeath_C.OnCompleted_6BD842A04FEECB3ADB7405A03B1CC235");

	FOnCompleted_6BD842A04FEECB3ADB7405A03B1CC235 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterDeath_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterDeath.GA_MonsterDeath_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterDeath_C::ExecuteUbergraph_GA_MonsterDeath(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterDeath.GA_MonsterDeath_C.ExecuteUbergraph_GA_MonsterDeath");

	FExecuteUbergraph_GA_MonsterDeath parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


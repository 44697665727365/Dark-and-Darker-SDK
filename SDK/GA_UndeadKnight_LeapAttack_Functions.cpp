#include "pch.h"
#include "SDK.h"

void UGA_UndeadKnight_LeapAttack_C::EventReceived_72C25031498FC089C1AC9D9A4F6521BD(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.EventReceived_72C25031498FC089C1AC9D9A4F6521BD");

	FEventReceived_72C25031498FC089C1AC9D9A4F6521BD parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_LeapAttack_C::OnChange_7D22AAB54594BBCBA38D60B6F1252082(enum class EMovementMode NewMovementMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.OnChange_7D22AAB54594BBCBA38D60B6F1252082");

	FOnChange_7D22AAB54594BBCBA38D60B6F1252082 parms{};	
	parms.NewMovementMode = NewMovementMode;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_LeapAttack_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_LeapAttack_C::ExecuteUbergraph_GA_UndeadKnight_LeapAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.ExecuteUbergraph_GA_UndeadKnight_LeapAttack");

	FExecuteUbergraph_GA_UndeadKnight_LeapAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


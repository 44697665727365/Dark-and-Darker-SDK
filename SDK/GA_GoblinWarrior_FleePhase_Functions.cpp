#include "pch.h"
#include "SDK.h"

void UGA_GoblinWarrior_FleePhase_C::EventReceived_BF3F566141F89016543AD490488A3AD7(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.EventReceived_BF3F566141F89016543AD490488A3AD7");

	FEventReceived_BF3F566141F89016543AD490488A3AD7 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_FleePhase_C::EventReceived_81379A3849C747B5C64706BF518AB608(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.EventReceived_81379A3849C747B5C64706BF518AB608");

	FEventReceived_81379A3849C747B5C64706BF518AB608 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_FleePhase_C::OnCancelled_81379A3849C747B5C64706BF518AB608(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnCancelled_81379A3849C747B5C64706BF518AB608");

	FOnCancelled_81379A3849C747B5C64706BF518AB608 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_FleePhase_C::OnInterrupted_81379A3849C747B5C64706BF518AB608(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnInterrupted_81379A3849C747B5C64706BF518AB608");

	FOnInterrupted_81379A3849C747B5C64706BF518AB608 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_FleePhase_C::OnBlendOut_81379A3849C747B5C64706BF518AB608(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnBlendOut_81379A3849C747B5C64706BF518AB608");

	FOnBlendOut_81379A3849C747B5C64706BF518AB608 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_FleePhase_C::OnCompleted_81379A3849C747B5C64706BF518AB608(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnCompleted_81379A3849C747B5C64706BF518AB608");

	FOnCompleted_81379A3849C747B5C64706BF518AB608 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_FleePhase_C::OnFail_1A840F70482377B71FCEADBD5ACE2499(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnFail_1A840F70482377B71FCEADBD5ACE2499");

	FOnFail_1A840F70482377B71FCEADBD5ACE2499 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_FleePhase_C::OnSuccess_1A840F70482377B71FCEADBD5ACE2499(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.OnSuccess_1A840F70482377B71FCEADBD5ACE2499");

	FOnSuccess_1A840F70482377B71FCEADBD5ACE2499 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_FleePhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_FleePhase_C::MoveFailTimeOut(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.MoveFailTimeOut");

	FMoveFailTimeOut parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_FleePhase_C::MoveFlee(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.MoveFlee");

	FMoveFlee parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_FleePhase_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_FleePhase_C::MoveFailUnable(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.MoveFailUnable");

	FMoveFailUnable parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_FleePhase_C::ExecuteUbergraph_GA_GoblinWarrior_FleePhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_FleePhase.GA_GoblinWarrior_FleePhase_C.ExecuteUbergraph_GA_GoblinWarrior_FleePhase");

	FExecuteUbergraph_GA_GoblinWarrior_FleePhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


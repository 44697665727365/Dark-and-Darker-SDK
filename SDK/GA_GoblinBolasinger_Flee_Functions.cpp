#include "pch.h"
#include "SDK.h"

void UGA_GoblinBolasinger_Flee_C::EventReceived_B56679AE43FF329382C750930B7E2180(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.EventReceived_B56679AE43FF329382C750930B7E2180");

	FEventReceived_B56679AE43FF329382C750930B7E2180 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Flee_C::OnFail_D60F649742A7B239BC5AFCAE0F7D2692(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnFail_D60F649742A7B239BC5AFCAE0F7D2692");

	FOnFail_D60F649742A7B239BC5AFCAE0F7D2692 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Flee_C::OnSuccess_D60F649742A7B239BC5AFCAE0F7D2692(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnSuccess_D60F649742A7B239BC5AFCAE0F7D2692");

	FOnSuccess_D60F649742A7B239BC5AFCAE0F7D2692 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Flee_C::EventReceived_3FDA19F04FD64EF8679FE3B72FA17924(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.EventReceived_3FDA19F04FD64EF8679FE3B72FA17924");

	FEventReceived_3FDA19F04FD64EF8679FE3B72FA17924 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Flee_C::OnCancelled_3FDA19F04FD64EF8679FE3B72FA17924(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnCancelled_3FDA19F04FD64EF8679FE3B72FA17924");

	FOnCancelled_3FDA19F04FD64EF8679FE3B72FA17924 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Flee_C::OnInterrupted_3FDA19F04FD64EF8679FE3B72FA17924(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnInterrupted_3FDA19F04FD64EF8679FE3B72FA17924");

	FOnInterrupted_3FDA19F04FD64EF8679FE3B72FA17924 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Flee_C::OnBlendOut_3FDA19F04FD64EF8679FE3B72FA17924(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnBlendOut_3FDA19F04FD64EF8679FE3B72FA17924");

	FOnBlendOut_3FDA19F04FD64EF8679FE3B72FA17924 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Flee_C::OnCompleted_3FDA19F04FD64EF8679FE3B72FA17924(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.OnCompleted_3FDA19F04FD64EF8679FE3B72FA17924");

	FOnCompleted_3FDA19F04FD64EF8679FE3B72FA17924 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Flee_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Flee_C::MoveFlee(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.MoveFlee");

	FMoveFlee parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Flee_C::MoveFailTimeOut(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.MoveFailTimeOut");

	FMoveFailTimeOut parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Flee_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinBolasinger_Flee_C::ExecuteUbergraph_GA_GoblinBolasinger_Flee(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C.ExecuteUbergraph_GA_GoblinBolasinger_Flee");

	FExecuteUbergraph_GA_GoblinBolasinger_Flee parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


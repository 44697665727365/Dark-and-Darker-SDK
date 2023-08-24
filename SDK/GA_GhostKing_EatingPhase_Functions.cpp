#include "pch.h"
#include "SDK.h"

void UGA_GhostKing_EatingPhase_C::EventReceived_3463EFF4417BB3384BC1978B45CE231A(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.EventReceived_3463EFF4417BB3384BC1978B45CE231A");

	FEventReceived_3463EFF4417BB3384BC1978B45CE231A parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EatingPhase_C::OnCancelled_3463EFF4417BB3384BC1978B45CE231A(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnCancelled_3463EFF4417BB3384BC1978B45CE231A");

	FOnCancelled_3463EFF4417BB3384BC1978B45CE231A parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EatingPhase_C::OnInterrupted_3463EFF4417BB3384BC1978B45CE231A(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnInterrupted_3463EFF4417BB3384BC1978B45CE231A");

	FOnInterrupted_3463EFF4417BB3384BC1978B45CE231A parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EatingPhase_C::OnBlendOut_3463EFF4417BB3384BC1978B45CE231A(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnBlendOut_3463EFF4417BB3384BC1978B45CE231A");

	FOnBlendOut_3463EFF4417BB3384BC1978B45CE231A parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EatingPhase_C::OnCompleted_3463EFF4417BB3384BC1978B45CE231A(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnCompleted_3463EFF4417BB3384BC1978B45CE231A");

	FOnCompleted_3463EFF4417BB3384BC1978B45CE231A parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EatingPhase_C::EventReceived_EDC0A7A64CBF5F3A07573DB4C59A21DB(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.EventReceived_EDC0A7A64CBF5F3A07573DB4C59A21DB");

	FEventReceived_EDC0A7A64CBF5F3A07573DB4C59A21DB parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EatingPhase_C::OnFail_324969DB431820DCE27899A1BAC9413E(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnFail_324969DB431820DCE27899A1BAC9413E");

	FOnFail_324969DB431820DCE27899A1BAC9413E parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EatingPhase_C::OnSuccess_324969DB431820DCE27899A1BAC9413E(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnSuccess_324969DB431820DCE27899A1BAC9413E");

	FOnSuccess_324969DB431820DCE27899A1BAC9413E parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EatingPhase_C::OnFail_5391F5304F1D635B3732248B0EF812AA(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnFail_5391F5304F1D635B3732248B0EF812AA");

	FOnFail_5391F5304F1D635B3732248B0EF812AA parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EatingPhase_C::OnSuccess_5391F5304F1D635B3732248B0EF812AA(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.OnSuccess_5391F5304F1D635B3732248B0EF812AA");

	FOnSuccess_5391F5304F1D635B3732248B0EF812AA parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EatingPhase_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EatingPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EatingPhase_C::TimeOut To Chase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.TimeOut To Chase");

	FTimeOut To Chase parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EatingPhase_C::CheckNearTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.CheckNearTarget");

	FCheckNearTarget parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_EatingPhase_C::ExecuteUbergraph_GA_GhostKing_EatingPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_EatingPhase.GA_GhostKing_EatingPhase_C.ExecuteUbergraph_GA_GhostKing_EatingPhase");

	FExecuteUbergraph_GA_GhostKing_EatingPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


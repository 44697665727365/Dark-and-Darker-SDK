#include "pch.h"
#include "SDK.h"

void UGA_GoblinArcher_Flee_C::EventReceived_86933E1F49F2B960ED4F83B9F19E4E93(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.EventReceived_86933E1F49F2B960ED4F83B9F19E4E93");

	FEventReceived_86933E1F49F2B960ED4F83B9F19E4E93 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Flee_C::OnFail_4738D3F54466A34A2142A3ADFFE63889(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnFail_4738D3F54466A34A2142A3ADFFE63889");

	FOnFail_4738D3F54466A34A2142A3ADFFE63889 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Flee_C::OnSuccess_4738D3F54466A34A2142A3ADFFE63889(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnSuccess_4738D3F54466A34A2142A3ADFFE63889");

	FOnSuccess_4738D3F54466A34A2142A3ADFFE63889 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Flee_C::EventReceived_81B9BE924EC7C43D14623CA54085F212(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.EventReceived_81B9BE924EC7C43D14623CA54085F212");

	FEventReceived_81B9BE924EC7C43D14623CA54085F212 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Flee_C::OnCancelled_81B9BE924EC7C43D14623CA54085F212(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnCancelled_81B9BE924EC7C43D14623CA54085F212");

	FOnCancelled_81B9BE924EC7C43D14623CA54085F212 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Flee_C::OnInterrupted_81B9BE924EC7C43D14623CA54085F212(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnInterrupted_81B9BE924EC7C43D14623CA54085F212");

	FOnInterrupted_81B9BE924EC7C43D14623CA54085F212 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Flee_C::OnBlendOut_81B9BE924EC7C43D14623CA54085F212(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnBlendOut_81B9BE924EC7C43D14623CA54085F212");

	FOnBlendOut_81B9BE924EC7C43D14623CA54085F212 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Flee_C::OnCompleted_81B9BE924EC7C43D14623CA54085F212(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.OnCompleted_81B9BE924EC7C43D14623CA54085F212");

	FOnCompleted_81B9BE924EC7C43D14623CA54085F212 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Flee_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Flee_C::MoveFlee(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.MoveFlee");

	FMoveFlee parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Flee_C::MoveFailTimeOut(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.MoveFailTimeOut");

	FMoveFailTimeOut parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Flee_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinArcher_Flee_C::ExecuteUbergraph_GA_GoblinArcher_Flee(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinArcher_Flee.GA_GoblinArcher_Flee_C.ExecuteUbergraph_GA_GoblinArcher_Flee");

	FExecuteUbergraph_GA_GoblinArcher_Flee parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


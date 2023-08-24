#include "pch.h"
#include "SDK.h"

void UGA_UndeadKnight_SprintPhase_C::EventReceived_C01E00A745D90988C64F02A55501B62D(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C.EventReceived_C01E00A745D90988C64F02A55501B62D");

	FEventReceived_C01E00A745D90988C64F02A55501B62D parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_SprintPhase_C::OnFail_53A2376149A80593CBB556904CC367B9(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C.OnFail_53A2376149A80593CBB556904CC367B9");

	FOnFail_53A2376149A80593CBB556904CC367B9 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_SprintPhase_C::OnSuccess_53A2376149A80593CBB556904CC367B9(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C.OnSuccess_53A2376149A80593CBB556904CC367B9");

	FOnSuccess_53A2376149A80593CBB556904CC367B9 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_SprintPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_SprintPhase_C::ExecuteUbergraph_GA_UndeadKnight_SprintPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_SprintPhase.GA_UndeadKnight_SprintPhase_C.ExecuteUbergraph_GA_UndeadKnight_SprintPhase");

	FExecuteUbergraph_GA_UndeadKnight_SprintPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


#include "pch.h"
#include "SDK.h"

void UGA_UndeadKnight_HeavyCombo1_C::EventReceived_DFC67D8749D4EBFD2FDFA6BFC00142A8(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_HeavyCombo1.GA_UndeadKnight_HeavyCombo1_C.EventReceived_DFC67D8749D4EBFD2FDFA6BFC00142A8");

	FEventReceived_DFC67D8749D4EBFD2FDFA6BFC00142A8 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_HeavyCombo1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_HeavyCombo1.GA_UndeadKnight_HeavyCombo1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_UndeadKnight_HeavyCombo1_C::ExecuteUbergraph_GA_UndeadKnight_HeavyCombo1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UndeadKnight_HeavyCombo1.GA_UndeadKnight_HeavyCombo1_C.ExecuteUbergraph_GA_UndeadKnight_HeavyCombo1");

	FExecuteUbergraph_GA_UndeadKnight_HeavyCombo1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


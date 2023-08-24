#include "pch.h"
#include "SDK.h"

void UGA_GiantBat_Attack1_C::EventReceived_89DFD7BC4DE1144A2B5028AE4B4B0B46(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.EventReceived_89DFD7BC4DE1144A2B5028AE4B4B0B46");

	FEventReceived_89DFD7BC4DE1144A2B5028AE4B4B0B46 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_Attack1_C::OnFinish_A59D6A7B48D10C8B0CB09485131D3822(bool IsArrivedDestLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.OnFinish_A59D6A7B48D10C8B0CB09485131D3822");

	FOnFinish_A59D6A7B48D10C8B0CB09485131D3822 parms{};	
	parms.IsArrivedDestLocation = IsArrivedDestLocation;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_Attack1_C::OnFinish_372A32544DABC7B360308B88A192A4E4(bool IsArrivedDestLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.OnFinish_372A32544DABC7B360308B88A192A4E4");

	FOnFinish_372A32544DABC7B360308B88A192A4E4 parms{};	
	parms.IsArrivedDestLocation = IsArrivedDestLocation;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_Attack1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_Attack1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_Attack1_C::ExecuteUbergraph_GA_GiantBat_Attack1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.ExecuteUbergraph_GA_GiantBat_Attack1");

	FExecuteUbergraph_GA_GiantBat_Attack1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


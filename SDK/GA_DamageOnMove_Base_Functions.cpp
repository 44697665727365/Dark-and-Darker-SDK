#include "pch.h"
#include "SDK.h"

void UGA_DamageOnMove_Base_C::EventReceived_BF6EE2BE40B27897C742FF9F58A960DF(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DamageOnMove_Base.GA_DamageOnMove_Base_C.EventReceived_BF6EE2BE40B27897C742FF9F58A960DF");

	FEventReceived_BF6EE2BE40B27897C742FF9F58A960DF parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_DamageOnMove_Base_C::Removed_4F82E88D459E4C27FA441BB1321A09F0(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DamageOnMove_Base.GA_DamageOnMove_Base_C.Removed_4F82E88D459E4C27FA441BB1321A09F0");

	FRemoved_4F82E88D459E4C27FA441BB1321A09F0 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DamageOnMove_Base_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DamageOnMove_Base.GA_DamageOnMove_Base_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DamageOnMove_Base_C::ExecuteUbergraph_GA_DamageOnMove_Base(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DamageOnMove_Base.GA_DamageOnMove_Base_C.ExecuteUbergraph_GA_DamageOnMove_Base");

	FExecuteUbergraph_GA_DamageOnMove_Base parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


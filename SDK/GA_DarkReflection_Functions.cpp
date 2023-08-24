#include "pch.h"
#include "SDK.h"

void UGA_DarkReflection_C::Removed_6FA7F6D94CDFFCF57D789FAEF48329D4(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DarkReflection.GA_DarkReflection_C.Removed_6FA7F6D94CDFFCF57D789FAEF48329D4");

	FRemoved_6FA7F6D94CDFFCF57D789FAEF48329D4 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DarkReflection_C::OnFinish_89BBFAE34C809CE9C8E41ABA2FA8C8F1(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DarkReflection.GA_DarkReflection_C.OnFinish_89BBFAE34C809CE9C8E41ABA2FA8C8F1");

	FOnFinish_89BBFAE34C809CE9C8E41ABA2FA8C8F1 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DarkReflection_C::EventReceived_EAEF202049D40A73947FC29489290511(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DarkReflection.GA_DarkReflection_C.EventReceived_EAEF202049D40A73947FC29489290511");

	FEventReceived_EAEF202049D40A73947FC29489290511 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_DarkReflection_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DarkReflection.GA_DarkReflection_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DarkReflection_C::ExecuteUbergraph_GA_DarkReflection(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DarkReflection.GA_DarkReflection_C.ExecuteUbergraph_GA_DarkReflection");

	FExecuteUbergraph_GA_DarkReflection parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


#include "pch.h"
#include "SDK.h"

void UGA_OilLantern_LightActivate_C::PlayAnimation(struct FName PlaySection){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_OilLantern_LightActivate.GA_OilLantern_LightActivate_C.PlayAnimation");

	FPlayAnimation parms{};	
	parms.PlaySection = PlaySection;

	ProcessEvent(fn, &parms);
}

void UGA_OilLantern_LightActivate_C::InputActionCompleted_2ECE16BB4BD658617D893EA21CA677EA(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_OilLantern_LightActivate.GA_OilLantern_LightActivate_C.InputActionCompleted_2ECE16BB4BD658617D893EA21CA677EA");

	FInputActionCompleted_2ECE16BB4BD658617D893EA21CA677EA parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_OilLantern_LightActivate_C::InputActionStarted_2ECE16BB4BD658617D893EA21CA677EA(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_OilLantern_LightActivate.GA_OilLantern_LightActivate_C.InputActionStarted_2ECE16BB4BD658617D893EA21CA677EA");

	FInputActionStarted_2ECE16BB4BD658617D893EA21CA677EA parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_OilLantern_LightActivate_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_OilLantern_LightActivate.GA_OilLantern_LightActivate_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_OilLantern_LightActivate_C::ExecuteUbergraph_GA_OilLantern_LightActivate(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_OilLantern_LightActivate.GA_OilLantern_LightActivate_C.ExecuteUbergraph_GA_OilLantern_LightActivate");

	FExecuteUbergraph_GA_OilLantern_LightActivate parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


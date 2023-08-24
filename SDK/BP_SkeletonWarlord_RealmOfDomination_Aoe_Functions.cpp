#include "pch.h"
#include "SDK.h"

void ABP_SkeletonWarlord_RealmOfDomination_Aoe_C::Remove(struct ADCCharacterBase* InputPin){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord_RealmOfDomination_Aoe.BP_SkeletonWarlord_RealmOfDomination_Aoe_C.Remove");

	FRemove parms{};	
	parms.InputPin = InputPin;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_RealmOfDomination_Aoe_C::Trigger(struct ADCCharacterBase* InputPin){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord_RealmOfDomination_Aoe.BP_SkeletonWarlord_RealmOfDomination_Aoe_C.Trigger");

	FTrigger parms{};	
	parms.InputPin = InputPin;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_RealmOfDomination_Aoe_C::ProcessDespawn(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord_RealmOfDomination_Aoe.BP_SkeletonWarlord_RealmOfDomination_Aoe_C.ProcessDespawn");

	FProcessDespawn parms{};	

	ProcessEvent(fn, &parms);
}


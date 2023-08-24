#include "pch.h"
#include "SDK.h"

void UGA_AoeAttackBase_C::Filter UnTags(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeAttackBase.GA_AoeAttackBase_C.Filter UnTags");

	FFilter UnTags parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AoeAttackBase_C::Filter Tags(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeAttackBase.GA_AoeAttackBase_C.Filter Tags");

	FFilter Tags parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AoeAttackBase_C::Filter Target Type(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeAttackBase.GA_AoeAttackBase_C.Filter Target Type");

	FFilter Target Type parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AoeAttackBase_C::Set Variables(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeAttackBase.GA_AoeAttackBase_C.Set Variables");

	FSet Variables parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AoeAttackBase_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeAttackBase.GA_AoeAttackBase_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AoeAttackBase_C::ExecuteUbergraph_GA_AoeAttackBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeAttackBase.GA_AoeAttackBase_C.ExecuteUbergraph_GA_AoeAttackBase");

	FExecuteUbergraph_GA_AoeAttackBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


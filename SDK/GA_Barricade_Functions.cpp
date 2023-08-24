#include "pch.h"
#include "SDK.h"

void UGA_Barricade_C::Added_CDEBE08F419BA47AA5B100AC4BDE7C30(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Barricade.GA_Barricade_C.Added_CDEBE08F419BA47AA5B100AC4BDE7C30");

	FAdded_CDEBE08F419BA47AA5B100AC4BDE7C30 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Barricade_C::Removed_9D57EB6048B5D50E07F302B277BF139C(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Barricade.GA_Barricade_C.Removed_9D57EB6048B5D50E07F302B277BF139C");

	FRemoved_9D57EB6048B5D50E07F302B277BF139C parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Barricade_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Barricade.GA_Barricade_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Barricade_C::ExecuteUbergraph_GA_Barricade(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Barricade.GA_Barricade_C.ExecuteUbergraph_GA_Barricade");

	FExecuteUbergraph_GA_Barricade parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


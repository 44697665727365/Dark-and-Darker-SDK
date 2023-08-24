#include "pch.h"
#include "SDK.h"

void UGA_WeaponPerkBase_C::FinishNotAllow(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.FinishNotAllow");

	FFinishNotAllow parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_WeaponPerkBase_C::FinishAllow(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.FinishAllow");

	FFinishAllow parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_WeaponPerkBase_C::StartNotAllow(struct FPrimaryAssetId AssetId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.StartNotAllow");

	FStartNotAllow parms{};	
	parms.AssetId = AssetId;

	ProcessEvent(fn, &parms);
}

void UGA_WeaponPerkBase_C::StartAllow(struct FPrimaryAssetId AssetId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.StartAllow");

	FStartAllow parms{};	
	parms.AssetId = AssetId;

	ProcessEvent(fn, &parms);
}

void UGA_WeaponPerkBase_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_WeaponPerkBase_C::ExecuteUbergraph_GA_WeaponPerkBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_WeaponPerkBase.GA_WeaponPerkBase_C.ExecuteUbergraph_GA_WeaponPerkBase");

	FExecuteUbergraph_GA_WeaponPerkBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


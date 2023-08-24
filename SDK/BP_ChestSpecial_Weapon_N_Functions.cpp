#include "pch.h"
#include "SDK.h"

void ABP_ChestSpecial_Weapon_N_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ChestSpecial_Weapon_N.BP_ChestSpecial_Weapon_N_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ChestSpecial_Weapon_N_C::ReceivePreInitializeComponents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ChestSpecial_Weapon_N.BP_ChestSpecial_Weapon_N_C.ReceivePreInitializeComponents");

	FReceivePreInitializeComponents parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ChestSpecial_Weapon_N_C::ExecuteUbergraph_BP_ChestSpecial_Weapon_N(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ChestSpecial_Weapon_N.BP_ChestSpecial_Weapon_N_C.ExecuteUbergraph_BP_ChestSpecial_Weapon_N");

	FExecuteUbergraph_BP_ChestSpecial_Weapon_N parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


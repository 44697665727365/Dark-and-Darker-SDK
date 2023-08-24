#include "pch.h"
#include "SDK.h"

void ABP_Aoe_Zombie_PoisonArea_Nightmare_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Aoe_Zombie_PoisonArea_Nightmare.BP_Aoe_Zombie_PoisonArea_Nightmare_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Aoe_Zombie_PoisonArea_Nightmare_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Aoe_Zombie_PoisonArea_Nightmare.BP_Aoe_Zombie_PoisonArea_Nightmare_C.ReceiveEndPlay");

	FReceiveEndPlay parms{};	
	parms.EndPlayReason = EndPlayReason;

	ProcessEvent(fn, &parms);
}

void ABP_Aoe_Zombie_PoisonArea_Nightmare_C::ExecuteUbergraph_BP_Aoe_Zombie_PoisonArea_Nightmare(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Aoe_Zombie_PoisonArea_Nightmare.BP_Aoe_Zombie_PoisonArea_Nightmare_C.ExecuteUbergraph_BP_Aoe_Zombie_PoisonArea_Nightmare");

	FExecuteUbergraph_BP_Aoe_Zombie_PoisonArea_Nightmare parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


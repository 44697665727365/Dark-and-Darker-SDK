#include "pch.h"
#include "SDK.h"

void ABP_Aoe_Zombie_PoisonArea_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Aoe_Zombie_PoisonArea.BP_Aoe_Zombie_PoisonArea_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Aoe_Zombie_PoisonArea_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Aoe_Zombie_PoisonArea.BP_Aoe_Zombie_PoisonArea_C.ReceiveEndPlay");

	FReceiveEndPlay parms{};	
	parms.EndPlayReason = EndPlayReason;

	ProcessEvent(fn, &parms);
}

void ABP_Aoe_Zombie_PoisonArea_C::ExecuteUbergraph_BP_Aoe_Zombie_PoisonArea(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Aoe_Zombie_PoisonArea.BP_Aoe_Zombie_PoisonArea_C.ExecuteUbergraph_BP_Aoe_Zombie_PoisonArea");

	FExecuteUbergraph_BP_Aoe_Zombie_PoisonArea parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


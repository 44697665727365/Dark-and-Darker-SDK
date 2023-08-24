#include "pch.h"
#include "SDK.h"

void ABP_Lich_NormalAttack_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_NormalAttack.BP_Lich_NormalAttack_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lich_NormalAttack_C::ExecuteUbergraph_BP_Lich_NormalAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_NormalAttack.BP_Lich_NormalAttack_C.ExecuteUbergraph_BP_Lich_NormalAttack");

	FExecuteUbergraph_BP_Lich_NormalAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


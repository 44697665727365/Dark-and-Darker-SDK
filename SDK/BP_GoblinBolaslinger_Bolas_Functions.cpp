#include "pch.h"
#include "SDK.h"

void ABP_GoblinBolaslinger_Bolas_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinBolaslinger_Bolas.BP_GoblinBolaslinger_Bolas_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GoblinBolaslinger_Bolas_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinBolaslinger_Bolas.BP_GoblinBolaslinger_Bolas_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_GoblinBolaslinger_Bolas_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinBolaslinger_Bolas.BP_GoblinBolaslinger_Bolas_C.ReceiveEndPlay");

	FReceiveEndPlay parms{};	
	parms.EndPlayReason = EndPlayReason;

	ProcessEvent(fn, &parms);
}

void ABP_GoblinBolaslinger_Bolas_C::ExecuteUbergraph_BP_GoblinBolaslinger_Bolas(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinBolaslinger_Bolas.BP_GoblinBolaslinger_Bolas_C.ExecuteUbergraph_BP_GoblinBolaslinger_Bolas");

	FExecuteUbergraph_BP_GoblinBolaslinger_Bolas parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


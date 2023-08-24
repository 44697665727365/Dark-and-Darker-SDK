#include "pch.h"
#include "SDK.h"

void ABP_BaseTrophy_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_BaseTrophy.BP_BaseTrophy_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_BaseTrophy_C::ExecuteUbergraph_BP_BaseTrophy(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_BaseTrophy.BP_BaseTrophy_C.ExecuteUbergraph_BP_BaseTrophy");

	FExecuteUbergraph_BP_BaseTrophy parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


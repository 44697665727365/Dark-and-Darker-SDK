#include "pch.h"
#include "SDK.h"

void UGA_MagicMissile_C::Cancelled_202FBCAD450BA3FCBEE9F5944EE986AE(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MagicMissile.GA_MagicMissile_C.Cancelled_202FBCAD450BA3FCBEE9F5944EE986AE");

	FCancelled_202FBCAD450BA3FCBEE9F5944EE986AE parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_MagicMissile_C::ValidData_202FBCAD450BA3FCBEE9F5944EE986AE(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MagicMissile.GA_MagicMissile_C.ValidData_202FBCAD450BA3FCBEE9F5944EE986AE");

	FValidData_202FBCAD450BA3FCBEE9F5944EE986AE parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_MagicMissile_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MagicMissile.GA_MagicMissile_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_MagicMissile_C::ExecuteUbergraph_GA_MagicMissile(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MagicMissile.GA_MagicMissile_C.ExecuteUbergraph_GA_MagicMissile");

	FExecuteUbergraph_GA_MagicMissile parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


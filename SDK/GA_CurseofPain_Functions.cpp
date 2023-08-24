#include "pch.h"
#include "SDK.h"

void UGA_CurseofPain_C::Cancelled_B76A5055469BECD50C74599607DE5AF4(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CurseofPain.GA_CurseofPain_C.Cancelled_B76A5055469BECD50C74599607DE5AF4");

	FCancelled_B76A5055469BECD50C74599607DE5AF4 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_CurseofPain_C::ValidData_B76A5055469BECD50C74599607DE5AF4(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CurseofPain.GA_CurseofPain_C.ValidData_B76A5055469BECD50C74599607DE5AF4");

	FValidData_B76A5055469BECD50C74599607DE5AF4 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_CurseofPain_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CurseofPain.GA_CurseofPain_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_CurseofPain_C::ExecuteUbergraph_GA_CurseofPain(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CurseofPain.GA_CurseofPain_C.ExecuteUbergraph_GA_CurseofPain");

	FExecuteUbergraph_GA_CurseofPain parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


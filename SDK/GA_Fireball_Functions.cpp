#include "pch.h"
#include "SDK.h"

void UGA_Fireball_C::Cancelled_D31D8679479E40498B8FF495A75CE021(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Fireball.GA_Fireball_C.Cancelled_D31D8679479E40498B8FF495A75CE021");

	FCancelled_D31D8679479E40498B8FF495A75CE021 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Fireball_C::ValidData_D31D8679479E40498B8FF495A75CE021(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Fireball.GA_Fireball_C.ValidData_D31D8679479E40498B8FF495A75CE021");

	FValidData_D31D8679479E40498B8FF495A75CE021 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Fireball_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Fireball.GA_Fireball_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_Fireball_C::ExecuteUbergraph_GA_Fireball(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Fireball.GA_Fireball_C.ExecuteUbergraph_GA_Fireball");

	FExecuteUbergraph_GA_Fireball parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


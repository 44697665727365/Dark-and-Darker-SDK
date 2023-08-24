#include "pch.h"
#include "SDK.h"

void UGA_GhostKing_NormalAttack_Return_C::OnSuccess_FEEF2ADC496CDFE7AE74449D038508D7(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C.OnSuccess_FEEF2ADC496CDFE7AE74449D038508D7");

	FOnSuccess_FEEF2ADC496CDFE7AE74449D038508D7 parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_NormalAttack_Return_C::OnSuccess_5F7376234ACAB284769674B6CAA713A2(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C.OnSuccess_5F7376234ACAB284769674B6CAA713A2");

	FOnSuccess_5F7376234ACAB284769674B6CAA713A2 parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_NormalAttack_Return_C::OnSuccess_FB2F52A3488E48849B6EEB88441917EB(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C.OnSuccess_FB2F52A3488E48849B6EEB88441917EB");

	FOnSuccess_FB2F52A3488E48849B6EEB88441917EB parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_NormalAttack_Return_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_NormalAttack_Return_C::ExecuteUbergraph_GA_GhostKing_NormalAttack_Return(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C.ExecuteUbergraph_GA_GhostKing_NormalAttack_Return");

	FExecuteUbergraph_GA_GhostKing_NormalAttack_Return parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


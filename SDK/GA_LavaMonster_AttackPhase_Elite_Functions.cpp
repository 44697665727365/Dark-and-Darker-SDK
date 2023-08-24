#include "pch.h"
#include "SDK.h"

void UGA_LavaMonster_AttackPhase_Elite_C::EventReceived_ABDE35A0442A5FAEF726C7966DB196F8(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.EventReceived_ABDE35A0442A5FAEF726C7966DB196F8");

	FEventReceived_ABDE35A0442A5FAEF726C7966DB196F8 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_LavaMonster_AttackPhase_Elite_C::OnFail_474F162345D3673CCC66B4A1438B16DB(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.OnFail_474F162345D3673CCC66B4A1438B16DB");

	FOnFail_474F162345D3673CCC66B4A1438B16DB parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_LavaMonster_AttackPhase_Elite_C::OnSuccess_474F162345D3673CCC66B4A1438B16DB(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.OnSuccess_474F162345D3673CCC66B4A1438B16DB");

	FOnSuccess_474F162345D3673CCC66B4A1438B16DB parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_LavaMonster_AttackPhase_Elite_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_LavaMonster_AttackPhase_Elite_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_LavaMonster_AttackPhase_Elite_C::MoveFail Timeout(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.MoveFail Timeout");

	FMoveFail Timeout parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_LavaMonster_AttackPhase_Elite_C::ExecuteUbergraph_GA_LavaMonster_AttackPhase_Elite(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_AttackPhase_Elite.GA_LavaMonster_AttackPhase_Elite_C.ExecuteUbergraph_GA_LavaMonster_AttackPhase_Elite");

	FExecuteUbergraph_GA_LavaMonster_AttackPhase_Elite parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


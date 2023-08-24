#include "pch.h"
#include "SDK.h"

void UGA_DireWolfPeaceInteractionPhase_C::GA_DireWolfPeaceInteractionPhase_AutoGenFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.GA_DireWolfPeaceInteractionPhase_AutoGenFunc");

	FGA_DireWolfPeaceInteractionPhase_AutoGenFunc parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DireWolfPeaceInteractionPhase_C::EventReceived_8FB63F494BA768FA1ED311ACF2F9B292(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.EventReceived_8FB63F494BA768FA1ED311ACF2F9B292");

	FEventReceived_8FB63F494BA768FA1ED311ACF2F9B292 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_DireWolfPeaceInteractionPhase_C::OnFail_C86AE1ED41315BC6F9772494FBBA5F1B(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.OnFail_C86AE1ED41315BC6F9772494FBBA5F1B");

	FOnFail_C86AE1ED41315BC6F9772494FBBA5F1B parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_DireWolfPeaceInteractionPhase_C::OnSuccess_C86AE1ED41315BC6F9772494FBBA5F1B(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.OnSuccess_C86AE1ED41315BC6F9772494FBBA5F1B");

	FOnSuccess_C86AE1ED41315BC6F9772494FBBA5F1B parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_DireWolfPeaceInteractionPhase_C::OnFinish_CB01DE074DD75C6C785969A460094EBA(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.OnFinish_CB01DE074DD75C6C785969A460094EBA");

	FOnFinish_CB01DE074DD75C6C785969A460094EBA parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DireWolfPeaceInteractionPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DireWolfPeaceInteractionPhase_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DireWolfPeaceInteractionPhase_C::ExecuteUbergraph_GA_DireWolfPeaceInteractionPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DireWolfPeaceInteractionPhase.GA_DireWolfPeaceInteractionPhase_C.ExecuteUbergraph_GA_DireWolfPeaceInteractionPhase");

	FExecuteUbergraph_GA_DireWolfPeaceInteractionPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


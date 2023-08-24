#include "pch.h"
#include "SDK.h"

void UBTS_AttachEffectWhileActive_C::ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTS_AttachEffectWhileActive.BTS_AttachEffectWhileActive_C.ReceiveActivationAI");

	FReceiveActivationAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTS_AttachEffectWhileActive_C::ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTS_AttachEffectWhileActive.BTS_AttachEffectWhileActive_C.ReceiveDeactivationAI");

	FReceiveDeactivationAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTS_AttachEffectWhileActive_C::ExecuteUbergraph_BTS_AttachEffectWhileActive(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTS_AttachEffectWhileActive.BTS_AttachEffectWhileActive_C.ExecuteUbergraph_BTS_AttachEffectWhileActive");

	FExecuteUbergraph_BTS_AttachEffectWhileActive parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


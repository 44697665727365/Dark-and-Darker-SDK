#include "pch.h"
#include "SDK.h"

struct UFXSystemComponent* UAnimNotifyState_TimedNiagaraEffect::GetSpawnedEffect(struct UMeshComponent* MeshComp){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect");

	FGetSpawnedEffect parms{};	
	parms.MeshComp = MeshComp;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAnimNotifyState_TimedNiagaraEffectAdvanced::GetNotifyProgress(struct UMeshComponent* MeshComp){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress");

	FGetNotifyProgress parms{};	
	parms.MeshComp = MeshComp;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UFXSystemComponent* UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect");

	FGetSpawnedEffect parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


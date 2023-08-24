#include "pch.h"
#include "SDK.h"

struct FVector UChainComponent::getChainPoint(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChainPlugin.ChainComponent.getChainPoint");

	FgetChainPoint parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<int32_t> UChainComponent::ApplyForce(struct FVector InPosition, float InRadius, struct FVector InForce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChainPlugin.ChainComponent.ApplyForce");

	FApplyForce parms{};	
	parms.InPosition = InPosition;
	parms.InRadius = InRadius;
	parms.InForce = InForce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


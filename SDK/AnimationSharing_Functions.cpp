#include "pch.h"
#include "SDK.h"

void UAnimationSharingManager::RegisterActorWithSkeletonBP(struct AActor* InActor, struct USkeleton* SharingSkeleton){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP");

	FRegisterActorWithSkeletonBP parms{};	
	parms.InActor = InActor;
	parms.SharingSkeleton = SharingSkeleton;

	ProcessEvent(fn, &parms);
}

struct UAnimationSharingManager* UAnimationSharingManager::GetAnimationSharingManager(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager");

	FGetAnimationSharingManager parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAnimationSharingManager::CreateAnimationSharingManager(struct UObject* WorldContextObject, struct UAnimationSharingSetup* Setup){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager");

	FCreateAnimationSharingManager parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Setup = Setup;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAnimationSharingManager::AnimationSharingEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled");

	FAnimationSharingEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAnimationSharingStateProcessor::ProcessActorState(int32_t& OutState, struct AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState");

	FProcessActorState parms{};	
	parms.OutState = OutState;
	parms.InActor = InActor;
	parms.CurrentState = CurrentState;
	parms.OnDemandState = OnDemandState;
	parms.bShouldProcess = bShouldProcess;

	ProcessEvent(fn, &parms);
}

struct UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum");

	FGetAnimationStateEnum parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAnimSharingStateInstance::GetInstancedActors(struct TArray<struct AActor*>& Actors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors");

	FGetInstancedActors parms{};	
	parms.Actors = Actors;

	ProcessEvent(fn, &parms);
}


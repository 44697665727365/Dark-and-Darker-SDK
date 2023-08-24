#include "pch.h"
#include "SDK.h"

void UGameplayTask::ReadyForActivation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.ReadyForActivation");

	FReadyForActivation parms{};	

	ProcessEvent(fn, &parms);
}

void UGameplayTask::GenericGameplayTaskDelegate__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature");

	FGenericGameplayTaskDelegate__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UGameplayTask::EndTask(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.EndTask");

	FEndTask parms{};	

	ProcessEvent(fn, &parms);
}

void UGameplayTasksComponent::OnRep_SimulatedTasks(struct TArray<struct UGameplayTask*>& PreviousSimulatedTasks){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks");

	FOnRep_SimulatedTasks parms{};	
	parms.PreviousSimulatedTasks = PreviousSimulatedTasks;

	ProcessEvent(fn, &parms);
}

uint8_t UGameplayTasksComponent::K2_RunGameplayTask(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct UGameplayTask* Task, char Priority, struct TArray<UGameplayTaskResource*> AdditionalRequiredResources, struct TArray<UGameplayTaskResource*> AdditionalClaimedResources){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask");

	FK2_RunGameplayTask parms{};	
	parms.TaskOwner = TaskOwner;
	parms.Task = Task;
	parms.Priority = Priority;
	parms.AdditionalRequiredResources = AdditionalRequiredResources;
	parms.AdditionalClaimedResources = AdditionalClaimedResources;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UGameplayTask_WaitDelay* UGameplayTask_WaitDelay::TaskWaitDelay(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, char Priority){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay");

	FTaskWaitDelay parms{};	
	parms.TaskOwner = TaskOwner;
	parms.Time = Time;
	parms.Priority = Priority;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameplayTask_WaitDelay::TaskDelayDelegate__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature");

	FTaskDelayDelegate__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

struct UGameplayTask_SpawnActor* UGameplayTask_SpawnActor::SpawnActor(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, AActor* Class, bool bSpawnOnlyOnAuthority){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor");

	FSpawnActor parms{};	
	parms.TaskOwner = TaskOwner;
	parms.SpawnLocation = SpawnLocation;
	parms.SpawnRotation = SpawnRotation;
	parms.Class = Class;
	parms.bSpawnOnlyOnAuthority = bSpawnOnlyOnAuthority;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameplayTask_SpawnActor::FinishSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor");

	FFinishSpawningActor parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SpawnedActor = SpawnedActor;

	ProcessEvent(fn, &parms);
}

bool UGameplayTask_SpawnActor::BeginSpawningActor(struct UObject* WorldContextObject, struct AActor*& SpawnedActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor");

	FBeginSpawningActor parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.SpawnedActor = SpawnedActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResources(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct TArray<UGameplayTaskResource*> ResourceClasses, char Priority, struct FName TaskInstanceName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources");

	FClaimResources parms{};	
	parms.InTaskOwner = InTaskOwner;
	parms.ResourceClasses = ResourceClasses;
	parms.Priority = Priority;
	parms.TaskInstanceName = TaskInstanceName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResource(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, UGameplayTaskResource* ResourceClass, char Priority, struct FName TaskInstanceName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource");

	FClaimResource parms{};	
	parms.InTaskOwner = InTaskOwner;
	parms.ResourceClass = ResourceClass;
	parms.Priority = Priority;
	parms.TaskInstanceName = TaskInstanceName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


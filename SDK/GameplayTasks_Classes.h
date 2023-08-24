#pragma once 
#include <GameplayTasks_Structs.h>
 
 
 
// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0x98(Inherited: 0x68)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask
{
	struct FMulticastInlineDelegate OnFinished;  // 0x68 (0x68)
	struct FMulticastInlineDelegate OnTimeExpired;  // 0x78 (0x78)
	char pad_136[16];  // 0x88 (0x88)


}; 
 
 


// Class GameplayTasks.GameplayTaskResource
// Size: 0x38(Inherited: 0x28)
struct UGameplayTaskResource : UObject
{
	int32_t ManualResourceID;  // 0x28 (0x28)
	int8_t AutoResourceID;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	char bManuallySetID : 1;  // 0x30 (0x30)
	char pad_48_1 : 7;  // 0x30 (0x30)
	char pad_49[8];  // 0x31 (0x31)


}; 
 
 


// Class GameplayTasks.GameplayTask
// Size: 0x68(Inherited: 0x28)
struct UGameplayTask : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct FName InstanceName;  // 0x30 (0x30)
	char pad_56[2];  // 0x38 (0x38)
	uint8_t ResourceOverlapPolicy;  // 0x3A (0x3A)
	char pad_59[37];  // 0x3B (0x3B)
	struct UGameplayTask* ChildTask;  // 0x60 (0x60)


	void ReadyForActivation(); // Function GameplayTasks.GameplayTask.ReadyForActivation
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	void EndTask(); // Function GameplayTasks.GameplayTask.EndTask
}; 
 
 


// Class GameplayTasks.GameplayTasksComponent
// Size: [0008(Inherited: 0xA0)
struct UGameplayTasksComponent : UActorComponent
{
	char pad_160[20];  // 0xA0 (0xA0)
	char pad_180_1 : 1;  // 0xB4 (0xB4)
	char bIsNetDirty : 1;  // 0xB4 (0xB4)
	char pad_180_2 : 6;  // 0xB4 (0xB4)
	char pad_181[4];  // 0xB5 (0xB5)
	struct TArray<struct UGameplayTask*> TaskPriorityQueue;  // 0xB8 (0xB8)
	char pad_200[16];  // 0xC8 (0xC8)
	struct TArray<struct UGameplayTask*> TickingTasks;  // 0xD8 (0xD8)
	struct TArray<struct UGameplayTask*> KnownTasks;  // 0xE8 (0xE8)
	struct FMulticastInlineDelegate OnClaimedResourcesChange;  // 0xF8 (0xF8)
	struct TArray<struct UGameplayTask*> SimulatedTasks;  // 0x108 (0x108)


	void OnRep_SimulatedTasks(struct TArray<struct UGameplayTask*>& PreviousSimulatedTasks); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	uint8_t K2_RunGameplayTask(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct UGameplayTask* Task, char Priority, struct TArray<UGameplayTaskResource*> AdditionalRequiredResources, struct TArray<UGameplayTaskResource*> AdditionalClaimedResources); // Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
}; 
 
 


// Class GameplayTasks.GameplayTaskOwnerInterface
// Size: 0x28(Inherited: 0x28)
struct UGameplayTaskOwnerInterface : UInterface
{


}; 
 
 


// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x80(Inherited: 0x68)
struct UGameplayTask_WaitDelay : UGameplayTask
{
	struct FMulticastInlineDelegate OnFinish;  // 0x68 (0x68)
	char pad_120[8];  // 0x78 (0x78)


	struct UGameplayTask_WaitDelay* TaskWaitDelay(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, char Priority); // Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
}; 
 
 


// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xC0(Inherited: 0x68)
struct UGameplayTask_SpawnActor : UGameplayTask
{
	struct FMulticastInlineDelegate Success;  // 0x68 (0x68)
	struct FMulticastInlineDelegate DidNotSpawn;  // 0x78 (0x78)
	char pad_136[48];  // 0x88 (0x88)
	AActor* ClassToSpawn;  // 0xB8 (0xB8)


	struct UGameplayTask_SpawnActor* SpawnActor(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, AActor* Class, bool bSpawnOnlyOnAuthority); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	void FinishSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	bool BeginSpawningActor(struct UObject* WorldContextObject, struct AActor*& SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
}; 
 
 


// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x68(Inherited: 0x68)
struct UGameplayTask_ClaimResource : UGameplayTask
{


	struct UGameplayTask_ClaimResource* ClaimResources(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct TArray<UGameplayTaskResource*> ResourceClasses, char Priority, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	struct UGameplayTask_ClaimResource* ClaimResource(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, UGameplayTaskResource* ResourceClass, char Priority, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
}; 
 
 



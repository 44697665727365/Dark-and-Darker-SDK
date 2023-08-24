#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
struct FClaimResources
{
	struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner;  // 0x0 (0x0)
	struct TArray<UGameplayTaskResource*> ResourceClasses;  // 0x10 (0x10)
	char Priority;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	struct FName TaskInstanceName;  // 0x24 (0x24)
	char pad_44[4];  // 0x2C (0x2C)
	struct UGameplayTask_ClaimResource* ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
struct FOnRep_SimulatedTasks
{
	struct TArray<struct UGameplayTask*> PreviousSimulatedTasks;  // 0x0 (0x0)


}; 
 
 // Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
struct FTaskWaitDelay
{
	struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;  // 0x0 (0x0)
	float Time;  // 0x10 (0x10)
	char Priority;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct UGameplayTask_WaitDelay* ReturnValue;  // 0x18 (0x18)


}; 
 
 // DelegateFunction GameplayTasks.GameplayTaskSpawnActorDelegate__DelegateSignature
struct FGameplayTaskSpawnActorDelegate__DelegateSignature
{
	struct AActor* SpawnedActor;  // 0x0 (0x0)


}; 
 
 // DelegateFunction GameplayTasks.OnClaimedResourcesChangeSignature__DelegateSignature
struct FOnClaimedResourcesChangeSignature__DelegateSignature
{
	struct FGameplayResourceSet NewlyClaimed;  // 0x0 (0x0)
	struct FGameplayResourceSet FreshlyReleased;  // 0x2 (0x2)


}; 
 
 // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
struct FClaimResource
{
	struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner;  // 0x0 (0x0)
	UGameplayTaskResource* ResourceClass;  // 0x10 (0x10)
	char Priority;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FName TaskInstanceName;  // 0x1C (0x1C)
	char pad_36[4];  // 0x24 (0x24)
	struct UGameplayTask_ClaimResource* ReturnValue;  // 0x28 (0x28)


}; 
 
 // ScriptStruct GameplayTasks.GameplayResourceSet
struct FGameplayResourceSet
{
	char pad_0[2];  // 0x0 (0x0)


}; 
 
 // Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
struct FK2_RunGameplayTask
{
	struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;  // 0x0 (0x0)
	struct UGameplayTask* Task;  // 0x10 (0x10)
	char Priority;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct TArray<UGameplayTaskResource*> AdditionalRequiredResources;  // 0x20 (0x20)
	struct TArray<UGameplayTaskResource*> AdditionalClaimedResources;  // 0x30 (0x30)
	uint8_t ReturnValue;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)


}; 
 
 // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
struct FBeginSpawningActor
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct AActor* SpawnedActor;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
struct FFinishSpawningActor
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct AActor* SpawnedActor;  // 0x8 (0x8)


}; 
 
 // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
struct FSpawnActor
{
	struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;  // 0x0 (0x0)
	struct FVector SpawnLocation;  // 0x10 (0x10)
	struct FRotator SpawnRotation;  // 0x28 (0x28)
	AActor* Class;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bSpawnOnlyOnAuthority : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct UGameplayTask_SpawnActor* ReturnValue;  // 0x50 (0x50)


}; 
 
 
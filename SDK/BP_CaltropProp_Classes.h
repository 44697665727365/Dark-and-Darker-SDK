#pragma once 
#include <BP_CaltropProp_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_CaltropProp.BP_CaltropProp_C
// Size: 0x568(Inherited: 0x554)
struct ABP_CaltropProp_C : ABP_TrapBase_C
{
	char pad_1364[4];  // 0x554 (0x554)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct UBoxComponent* Box;  // 0x560 (0x560)


	void ReceiveBeginPlay(); // Function BP_CaltropProp.BP_CaltropProp_C.ReceiveBeginPlay
	void OnOverlapToActor(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_CaltropProp.BP_CaltropProp_C.OnOverlapToActor
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_CaltropProp.BP_CaltropProp_C.InteractSucceed
	void ExecuteUbergraph_BP_CaltropProp(int32_t EntryPoint); // Function BP_CaltropProp.BP_CaltropProp_C.ExecuteUbergraph_BP_CaltropProp
}; 
 
 



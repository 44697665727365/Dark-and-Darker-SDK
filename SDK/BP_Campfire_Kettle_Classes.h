#pragma once 
#include <BP_Campfire_Kettle_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Campfire_Kettle.BP_Campfire_Kettle_C
// Size: 0x528(Inherited: 0x508)
struct ABP_Campfire_Kettle_C : ABP_CampfireProp_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x508 (0x508)
	struct UNiagaraComponent* FXS_Campfire;  // 0x510 (0x510)
	struct UNiagaraComponent* FXS_Campfire_Feature_Kettle;  // 0x518 (0x518)
	struct USkeletalMeshComponent* Kettle;  // 0x520 (0x520)


	void Deactivate Particle System(); // Function BP_Campfire_Kettle.BP_Campfire_Kettle_C.Deactivate Particle System
	void Activate Particle System(); // Function BP_Campfire_Kettle.BP_Campfire_Kettle_C.Activate Particle System
	void ReceiveBeginPlay(); // Function BP_Campfire_Kettle.BP_Campfire_Kettle_C.ReceiveBeginPlay
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_Campfire_Kettle.BP_Campfire_Kettle_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_Campfire_Kettle(int32_t EntryPoint); // Function BP_Campfire_Kettle.BP_Campfire_Kettle_C.ExecuteUbergraph_BP_Campfire_Kettle
}; 
 
 



#pragma once 
#include <BP_Wanted01_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Wanted01.BP_Wanted01_C
// Size: 0x4DC(Inherited: 0x4B8)
struct ABP_Wanted01_C : ABP_PropsActorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UStaticMeshComponent* SM_Wanted01;  // 0x4C0 (0x4C0)
	struct FPrimaryAssetId ScriptAssetID;  // 0x4C8 (0x4C8)
	int32_t FontSize;  // 0x4D8 (0x4D8)


	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_Wanted01.BP_Wanted01_C.InteractSucceed
	void ExecuteUbergraph_BP_Wanted01(int32_t EntryPoint); // Function BP_Wanted01.BP_Wanted01_C.ExecuteUbergraph_BP_Wanted01
}; 
 
 



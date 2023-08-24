#pragma once 
#include <BP_BaseTrophy_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_BaseTrophy.BP_BaseTrophy_C
// Size: 0x4F0(Inherited: 0x4B8)
struct ABP_BaseTrophy_C : ABP_PropsActorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct FPrimaryAssetId ScriptAssetID;  // 0x4C0 (0x4C0)
	int32_t FontSize;  // 0x4D0 (0x4D0)
	char pad_1236[4];  // 0x4D4 (0x4D4)
	struct FText ErrorMsg;  // 0x4D8 (0x4D8)


	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_BaseTrophy.BP_BaseTrophy_C.InteractSucceed
	void ExecuteUbergraph_BP_BaseTrophy(int32_t EntryPoint); // Function BP_BaseTrophy.BP_BaseTrophy_C.ExecuteUbergraph_BP_BaseTrophy
}; 
 
 



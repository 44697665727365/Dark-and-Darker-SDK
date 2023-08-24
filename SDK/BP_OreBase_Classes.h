#pragma once 
#include <BP_OreBase_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_OreBase.BP_OreBase_C
// Size: 0x4E8(Inherited: 0x4B8)
struct ABP_OreBase_C : ABP_PropsActorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UItemRandomGenerateComponent* ItemRandomGenerate;  // 0x4C0 (0x4C0)
	struct AActor* Target;  // 0x4C8 (0x4C8)
	struct FVector CustomImpactPointOffset;  // 0x4D0 (0x4D0)


	void InteractStarted(struct AActor* Interacter, struct FGameplayTag EventTag); // Function BP_OreBase.BP_OreBase_C.InteractStarted
	void BndEvt__BP_Statue_ATM_ItemRandomGenerate_K2Node_ComponentBoundEvent_2_ItemGenerationFinishedSignature__DelegateSignature(struct TArray<struct FItemData>& ResultItems); // Function BP_OreBase.BP_OreBase_C.BndEvt__BP_Statue_ATM_ItemRandomGenerate_K2Node_ComponentBoundEvent_2_ItemGenerationFinishedSignature__DelegateSignature
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_OreBase.BP_OreBase_C.InteractSucceed
	void ReceiveBeginPlay(); // Function BP_OreBase.BP_OreBase_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_OreBase(int32_t EntryPoint); // Function BP_OreBase.BP_OreBase_C.ExecuteUbergraph_BP_OreBase
}; 
 
 



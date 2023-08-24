#pragma once 
#include <BP_AnimatedChestBase_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_AnimatedChestBase.BP_AnimatedChestBase_C
// Size: 0x4D0(Inherited: 0x4B8)
struct ABP_AnimatedChestBase_C : ABP_PropsActorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UExpandableInventoryComponent* ExpandableInventory;  // 0x4C0 (0x4C0)
	struct UItemRandomGenerateComponent* ItemRandomGenerate;  // 0x4C8 (0x4C8)


	void OpenAndGenerateItem(struct AActor* InActor); // Function BP_AnimatedChestBase.BP_AnimatedChestBase_C.OpenAndGenerateItem
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_AnimatedChestBase.BP_AnimatedChestBase_C.InteractSucceed
	void BndEvt__BP_ChestBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature(struct TArray<struct FItemData>& ResultItems); // Function BP_AnimatedChestBase.BP_AnimatedChestBase_C.BndEvt__BP_ChestBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature
	void OnImpactEnduranceExhausted(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext); // Function BP_AnimatedChestBase.BP_AnimatedChestBase_C.OnImpactEnduranceExhausted
	void ExecuteUbergraph_BP_AnimatedChestBase(int32_t EntryPoint); // Function BP_AnimatedChestBase.BP_AnimatedChestBase_C.ExecuteUbergraph_BP_AnimatedChestBase
}; 
 
 



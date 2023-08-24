#pragma once 
#include <BP_SimpleDestructableActorBase_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SimpleDestructableActorBase.BP_SimpleDestructableActorBase_C
// Size: 0x4D0(Inherited: 0x4B8)
struct ABP_SimpleDestructableActorBase_C : ABP_PropsActorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UExpandableInventoryComponent* ExpandableInventory;  // 0x4C0 (0x4C0)
	struct UItemRandomGenerateComponent* ItemRandomGenerate;  // 0x4C8 (0x4C8)


	void OnImpactEnduranceExhausted(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext); // Function BP_SimpleDestructableActorBase.BP_SimpleDestructableActorBase_C.OnImpactEnduranceExhausted
	void BndEvt__BP_ChestBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature(struct TArray<struct FItemData>& ResultItems); // Function BP_SimpleDestructableActorBase.BP_SimpleDestructableActorBase_C.BndEvt__BP_ChestBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature
	void ExecuteUbergraph_BP_SimpleDestructableActorBase(int32_t EntryPoint); // Function BP_SimpleDestructableActorBase.BP_SimpleDestructableActorBase_C.ExecuteUbergraph_BP_SimpleDestructableActorBase
}; 
 
 



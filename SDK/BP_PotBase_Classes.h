#pragma once 
#include <BP_PotBase_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_PotBase.BP_PotBase_C
// Size: 0x4E0(Inherited: 0x4B8)
struct ABP_PotBase_C : ABP_PropsActorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UDCGeometryCollectionComponent* GC_PotBase_Default;  // 0x4C0 (0x4C0)
	struct UExpandableInventoryComponent* ExpandableInventory;  // 0x4C8 (0x4C8)
	struct UItemRandomGenerateComponent* ItemRandomGenerate;  // 0x4D0 (0x4D0)
	struct UStaticMeshComponent* StaticMesh;  // 0x4D8 (0x4D8)


	void OnImpactEnduranceExhausted(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext); // Function BP_PotBase.BP_PotBase_C.OnImpactEnduranceExhausted
	void BndEvt__BP_ChestBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature(struct TArray<struct FItemData>& ResultItems); // Function BP_PotBase.BP_PotBase_C.BndEvt__BP_ChestBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature
	void ExecuteUbergraph_BP_PotBase(int32_t EntryPoint); // Function BP_PotBase.BP_PotBase_C.ExecuteUbergraph_BP_PotBase
}; 
 
 



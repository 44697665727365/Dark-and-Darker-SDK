#pragma once 
#include <BP_ItemDispenserBase_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_ItemDispenserBase.BP_ItemDispenserBase_C
// Size: 0x4E0(Inherited: 0x4B8)
struct ABP_ItemDispenserBase_C : ABP_StatueBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UItemRandomGenerateComponent* ItemRandomGenerate;  // 0x4C0 (0x4C0)
	char pad_1224_1 : 7;  // 0x4C8 (0x4C8)
	bool bIsOverlapped : 1;  // 0x4C8 (0x4C8)
	char pad_1225[7];  // 0x4C9 (0x4C9)
	double reactivationTime;  // 0x4D0 (0x4D0)
	struct AActor* Target;  // 0x4D8 (0x4D8)


	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_ItemDispenserBase.BP_ItemDispenserBase_C.InteractSucceed
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_ItemDispenserBase.BP_ItemDispenserBase_C.GameplayTagUpdated
	void BndEvt__BP_Statue_ATM_ItemRandomGenerate_K2Node_ComponentBoundEvent_2_ItemGenerationFinishedSignature__DelegateSignature(struct TArray<struct FItemData>& ResultItems); // Function BP_ItemDispenserBase.BP_ItemDispenserBase_C.BndEvt__BP_Statue_ATM_ItemRandomGenerate_K2Node_ComponentBoundEvent_2_ItemGenerationFinishedSignature__DelegateSignature
	void ExecuteUbergraph_BP_ItemDispenserBase(int32_t EntryPoint); // Function BP_ItemDispenserBase.BP_ItemDispenserBase_C.ExecuteUbergraph_BP_ItemDispenserBase
}; 
 
 



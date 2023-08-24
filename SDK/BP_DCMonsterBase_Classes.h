#pragma once 
#include <BP_DCMonsterBase_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_DCMonsterBase.BP_DCMonsterBase_C
// Size: 0xC98(Inherited: 0xC50)
struct ABP_DCMonsterBase_C : ADCMonsterBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xC50 (0xC50)
	struct UDCGameSpawnableComponent* DCGameSpawnable;  // 0xC58 (0xC58)
	struct UDCAkComponent* DCAk;  // 0xC60 (0xC60)
	struct UExpandableInventoryComponent* ExpandableInventory;  // 0xC68 (0xC68)
	struct UInteractableTargetComponent* InteractableTarget;  // 0xC70 (0xC70)
	struct UItemRandomGenerateComponent* ItemRandomGenerate;  // 0xC78 (0xC78)
	double AudibleDistance;  // 0xC80 (0xC80)
	struct TArray<struct FPrimaryAssetId> InteractSettingArray;  // 0xC88 (0xC88)


	void OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83(struct UMsgBaseNode* ProxyObject); // Function BP_DCMonsterBase.BP_DCMonsterBase_C.OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83
	void ReceivePreInitializeComponents(); // Function BP_DCMonsterBase.BP_DCMonsterBase_C.ReceivePreInitializeComponents
	void EventFMsgSoundEvent(struct FMsgSoundEvent Msg); // Function BP_DCMonsterBase.BP_DCMonsterBase_C.EventFMsgSoundEvent
	void BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature(struct TArray<struct FItemData>& ResultItems); // Function BP_DCMonsterBase.BP_DCMonsterBase_C.BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_DCMonsterBase.BP_DCMonsterBase_C.InteractSucceed
	void ReceiveBeginPlay(); // Function BP_DCMonsterBase.BP_DCMonsterBase_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_DCMonsterBase(int32_t EntryPoint); // Function BP_DCMonsterBase.BP_DCMonsterBase_C.ExecuteUbergraph_BP_DCMonsterBase
}; 
 
 



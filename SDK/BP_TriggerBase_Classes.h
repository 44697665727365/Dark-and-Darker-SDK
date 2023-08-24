#pragma once 
#include <BP_TriggerBase_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_TriggerBase.BP_TriggerBase_C
// Size: 0x4D8(Inherited: 0x4B8)
struct ABP_TriggerBase_C : ABP_PropsActorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UDCGameObjectLinkComponent* DCGameObjectLink;  // 0x4C0 (0x4C0)
	struct UDCSkeletalMeshComponent* DCSkeletalMesh;  // 0x4C8 (0x4C8)
	struct FGameplayTag AbilityTriggerTag;  // 0x4D0 (0x4D0)


	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_TriggerBase.BP_TriggerBase_C.InteractSucceed
	void BndEvt__BP_Portcullis_DCGameObjectLink_K2Node_ComponentBoundEvent_0_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam); // Function BP_TriggerBase.BP_TriggerBase_C.BndEvt__BP_Portcullis_DCGameObjectLink_K2Node_ComponentBoundEvent_0_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
	void ExecuteUbergraph_BP_TriggerBase(int32_t EntryPoint); // Function BP_TriggerBase.BP_TriggerBase_C.ExecuteUbergraph_BP_TriggerBase
}; 
 
 



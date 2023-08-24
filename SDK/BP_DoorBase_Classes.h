#pragma once 
#include <BP_DoorBase_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_DoorBase.BP_DoorBase_C
// Size: 0x4E8(Inherited: 0x4B8)
struct ABP_DoorBase_C : ABP_PropsActorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4B8 (0x4B8)
	struct UStaticMeshComponent* Cube_AkPortal;  // 0x4C0 (0x4C0)
	struct UAkPortalComponent* AkPortal;  // 0x4C8 (0x4C8)
	struct UDCGameObjectLinkComponent* DCGameObjectLink;  // 0x4D0 (0x4D0)
	struct UDCSkeletalMeshComponent* Mesh;  // 0x4D8 (0x4D8)
	struct FGameplayTag AbilityTriggerTag;  // 0x4E0 (0x4E0)


	void IsInteracterForward(struct AActor* Interacter, bool& IsForward); // Function BP_DoorBase.BP_DoorBase_C.IsInteracterForward
	void OnMessageReceived_3A90E84A4DEA713B17112090EC99FAA2(struct UMsgBaseNode* ProxyObject); // Function BP_DoorBase.BP_DoorBase_C.OnMessageReceived_3A90E84A4DEA713B17112090EC99FAA2
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_DoorBase.BP_DoorBase_C.InteractSucceed
	void ReceivePreInitializeComponents(); // Function BP_DoorBase.BP_DoorBase_C.ReceivePreInitializeComponents
	void BndEvt__BP_DoorBase_DCGameObjectLink_K2Node_ComponentBoundEvent_1_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam); // Function BP_DoorBase.BP_DoorBase_C.BndEvt__BP_DoorBase_DCGameObjectLink_K2Node_ComponentBoundEvent_1_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
	void EventFMsgSoundEvent(struct FMsgSoundEvent Msg); // Function BP_DoorBase.BP_DoorBase_C.EventFMsgSoundEvent
	void ExecuteUbergraph_BP_DoorBase(int32_t EntryPoint); // Function BP_DoorBase.BP_DoorBase_C.ExecuteUbergraph_BP_DoorBase
}; 
 
 



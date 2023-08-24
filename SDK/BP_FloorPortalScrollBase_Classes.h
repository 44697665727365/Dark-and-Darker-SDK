#pragma once 
#include <BP_FloorPortalScrollBase_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C
// Size: 0x411(Inherited: 0x3F0)
struct ABP_FloorPortalScrollBase_C : AFloorPortalScrollBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x3F0 (0x3F0)
	struct UDCAkComponent* DCAk;  // 0x3F8 (0x3F8)
	struct UBoxComponent* Box;  // 0x400 (0x400)
	struct UDCSkeletalMeshComponent* DCSkeletalMesh;  // 0x408 (0x408)
	char pad_1040_1 : 7;  // 0x410 (0x410)
	bool bOpen : 1;  // 0x410 (0x410)


	void OnRep_bOpen(); // Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.OnRep_bOpen
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.InteractSucceed
	void BndEvt__BP_FloorPortalScrollBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.BndEvt__BP_FloorPortalScrollBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void OnOpen(); // Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.OnOpen
	void FX_PlayerPortalInteraction(struct ADCPlayerCharacterBase* PlayerCharacter); // Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.FX_PlayerPortalInteraction
	void ClosePortalScroll(struct ADCPlayerCharacterBase* Character); // Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.ClosePortalScroll
	void ExecuteUbergraph_BP_FloorPortalScrollBase(int32_t EntryPoint); // Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.ExecuteUbergraph_BP_FloorPortalScrollBase
}; 
 
 



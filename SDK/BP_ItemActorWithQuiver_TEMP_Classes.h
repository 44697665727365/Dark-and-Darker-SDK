#pragma once 
#include <BP_ItemActorWithQuiver_TEMP_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C
// Size: 0x5CC(Inherited: 0x580)
struct ABP_ItemActorWithQuiver_TEMP_C : ABP_DCItemActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct USkeletalMesh* QuiverMesh;  // 0x588 (0x588)
	struct FName QuiverAttachSocket;  // 0x590 (0x590)
	struct USkeletalMeshComponent* QuiverSkeletalMeshComponent;  // 0x598 (0x598)
	struct FName QuiverSheathAttachSocket;  // 0x5A0 (0x5A0)
	struct TArray<struct FName> ArrowSocketNames;  // 0x5A8 (0x5A8)
	int32_t CurrentAmmoCount;  // 0x5B8 (0x5B8)
	struct FName ItemEquippedLeftSocketName;  // 0x5BC (0x5BC)
	struct FName ItemEquippedRightSocketName;  // 0x5C4 (0x5C4)


	void AttachQuiverMeshComponentToSocket(struct FName InSocketName); // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.AttachQuiverMeshComponentToSocket
	void OnMontageFinished(); // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnMontageFinished
	void AmmoCountUpdated(); // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.AmmoCountUpdated
	void ReceiveBeginPlay(); // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.ReceiveBeginPlay
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.ReceiveEndPlay
	void ItemDataUpdated(struct FItemData& InItemData); // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.ItemDataUpdated
	void OnAttachedSheathSocket(); // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnAttachedSheathSocket
	void OnAttachedEquipSocket(); // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnAttachedEquipSocket
	void PreReduceAmmoCount(int32_t ReduceCount); // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.PreReduceAmmoCount
	void OnAttachmentReplication(); // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnAttachmentReplication
	void ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP(int32_t EntryPoint); // Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP
}; 
 
 



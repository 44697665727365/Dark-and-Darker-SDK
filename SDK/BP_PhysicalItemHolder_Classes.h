#pragma once 
#include <BP_PhysicalItemHolder_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_PhysicalItemHolder.BP_PhysicalItemHolder_C
// Size: 0x418(Inherited: 0x3F8)
struct ABP_PhysicalItemHolder_C : ASkeletalMeshItemHolderActor
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x3F8 (0x3F8)
	struct FPrimaryAssetId ItemIdToSpawn;  // 0x400 (0x400)
	double PhysicsSleepTime;  // 0x410 (0x410)


	void UserConstructionScript(); // Function BP_PhysicalItemHolder.BP_PhysicalItemHolder_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_PhysicalItemHolder.BP_PhysicalItemHolder_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_PhysicalItemHolder(int32_t EntryPoint); // Function BP_PhysicalItemHolder.BP_PhysicalItemHolder_C.ExecuteUbergraph_BP_PhysicalItemHolder
}; 
 
 



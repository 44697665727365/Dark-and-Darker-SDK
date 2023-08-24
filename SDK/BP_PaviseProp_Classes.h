#pragma once 
#include <BP_PaviseProp_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_PaviseProp.BP_PaviseProp_C
// Size: 0x408(Inherited: 0x3F0)
struct ABP_PaviseProp_C : APavisePropBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x3F0 (0x3F0)
	struct UDCAkComponent* DCAk;  // 0x3F8 (0x3F8)
	struct USkeletalMeshComponent* SkeletalMesh;  // 0x400 (0x400)


	void EventFMsgSoundEvent(struct FMsgSoundEvent Msg); // Function BP_PaviseProp.BP_PaviseProp_C.EventFMsgSoundEvent
	void ExecuteUbergraph_BP_PaviseProp(int32_t EntryPoint); // Function BP_PaviseProp.BP_PaviseProp_C.ExecuteUbergraph_BP_PaviseProp
}; 
 
 



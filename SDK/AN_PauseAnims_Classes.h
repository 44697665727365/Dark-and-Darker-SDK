#pragma once 
#include <AN_PauseAnims_Structs.h>
 
 
 
// BlueprintGeneratedClass AN_PauseAnims.AN_PauseAnims_C
// Size: 0x39(Inherited: 0x38)
struct UAN_PauseAnims_C : UAnimNotify
{
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool Pause : 1;  // 0x38 (0x38)


	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference); // Function AN_PauseAnims.AN_PauseAnims_C.Received_Notify
}; 
 
 



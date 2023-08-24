#pragma once 
#include <AN_SetCollisionProfile_Structs.h>
 
 
 
// BlueprintGeneratedClass AN_SetCollisionProfile.AN_SetCollisionProfile_C
// Size: 0x39(Inherited: 0x38)
struct UAN_SetCollisionProfile_C : UAnimNotify
{
	uint8_t CollisionProfileName;  // 0x38 (0x38)


	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference); // Function AN_SetCollisionProfile.AN_SetCollisionProfile_C.Received_Notify
}; 
 
 



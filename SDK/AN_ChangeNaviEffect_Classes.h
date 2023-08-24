#pragma once 
#include <AN_ChangeNaviEffect_Structs.h>
 
 
 
// BlueprintGeneratedClass AN_ChangeNaviEffect.AN_ChangeNaviEffect_C
// Size: 0x39(Inherited: 0x38)
struct UAN_ChangeNaviEffect_C : UAnimNotify
{
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool AffectNavigation : 1;  // 0x38 (0x38)


	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference); // Function AN_ChangeNaviEffect.AN_ChangeNaviEffect_C.Received_Notify
}; 
 
 



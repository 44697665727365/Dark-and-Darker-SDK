#pragma once 
#include <AnimNotify_AkEvent_Structs.h>
 
 
 
// BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C
// Size: 0x68(Inherited: 0x38)
struct UAnimNotify_AkEvent_C : UAnimNotify
{
	struct FString Attach Name;  // 0x38 (0x38)
	struct UAkAudioEvent* Event;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool Follow : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct FString EventName;  // 0x58 (0x58)


	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference); // Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
}; 
 
 



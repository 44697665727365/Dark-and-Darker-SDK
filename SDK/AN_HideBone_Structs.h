#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function AN_HideBone.AN_HideBone_C.Received_Notify
// Size: 0x3A(Inherited: 0x40)
struct FReceived_Notify : FReceived_Notify
{
	struct USkeletalMeshComponent* MeshComp;  // 0x0 (0x0)
	struct UAnimSequenceBase* Animation;  // 0x8 (0x8)
	struct FAnimNotifyEventReference EventReference;  // 0x10 (0x10)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool ReturnValue : 1;  // 0x38 (0x38)
	char pad_121_1 : 7;  // 0x79 (0x79)
	bool CallFunc_IsBoneHiddenByName_ReturnValue : 1;  // 0x39 (0x39)


}; 
 
 
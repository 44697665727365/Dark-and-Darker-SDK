#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
// Size: 0xA0(Inherited: 0x40)
struct FReceived_Notify : FReceived_Notify
{
	struct USkeletalMeshComponent* MeshComp;  // 0x0 (0x0)
	struct UAnimSequenceBase* Animation;  // 0x8 (0x8)
	struct FAnimNotifyEventReference EventReference;  // 0x10 (0x10)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool ReturnValue : 1;  // 0x38 (0x38)
	struct FVector CallFunc_K2_GetComponentLocation_ReturnValue;  // 0x40 (0x40)
	struct FVector CallFunc_K2_GetComponentLocation_ReturnValue_2;  // 0x58 (0x58)
	struct AActor* CallFunc_GetOwner_ReturnValue;  // 0x70 (0x70)
	struct UAkComponent* CallFunc_GetComponentByClass_ReturnValue;  // 0x78 (0x78)
	char pad_185_1 : 7;  // 0xB9 (0xB9)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x80 (0x80)
	int32_t CallFunc_PostEventAtLocation_ReturnValue;  // 0x84 (0x84)
	struct FDelegate Temp_delegate_Variable;  // 0x88 (0x88)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x98 (0x98)
	int32_t CallFunc_PostEventAtLocation_ReturnValue_2;  // 0x9C (0x9C)


}; 
 
 
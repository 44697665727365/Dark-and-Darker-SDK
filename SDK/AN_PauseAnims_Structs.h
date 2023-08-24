#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function AN_PauseAnims.AN_PauseAnims_C.Received_Notify
// Size: 0x59(Inherited: 0x40)
struct FReceived_Notify : FReceived_Notify
{
	struct USkeletalMeshComponent* MeshComp;  // 0x0 (0x0)
	struct UAnimSequenceBase* Animation;  // 0x8 (0x8)
	struct FAnimNotifyEventReference EventReference;  // 0x10 (0x10)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool ReturnValue : 1;  // 0x38 (0x38)
	struct AActor* CallFunc_GetOwner_ReturnValue;  // 0x40 (0x40)
	char CallFunc_Conv_BoolToByte_ReturnValue;  // 0x48 (0x48)
	struct ADCMonsterBase* K2Node_DynamicCast_AsDCMonster_Base;  // 0x50 (0x50)
	char pad_138_1 : 7;  // 0x8A (0x8A)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x58 (0x58)


}; 
 
 
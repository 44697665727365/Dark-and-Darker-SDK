#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function AN_ChangeNaviEffect.AN_ChangeNaviEffect_C.Received_Notify
// Size: 0x49(Inherited: 0x40)
struct FReceived_Notify : FReceived_Notify
{
	struct USkeletalMeshComponent* MeshComp;  // 0x0 (0x0)
	struct UAnimSequenceBase* Animation;  // 0x8 (0x8)
	struct FAnimNotifyEventReference EventReference;  // 0x10 (0x10)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool ReturnValue : 1;  // 0x38 (0x38)
	struct UDCSkeletalMeshComponent* K2Node_DynamicCast_AsDCSkeletal_Mesh_Component;  // 0x40 (0x40)
	char pad_129_1 : 7;  // 0x81 (0x81)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x48 (0x48)


}; 
 
 
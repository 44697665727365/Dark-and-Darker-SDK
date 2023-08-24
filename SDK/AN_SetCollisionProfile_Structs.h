#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function AN_SetCollisionProfile.AN_SetCollisionProfile_C.Received_Notify
// Size: 0x58(Inherited: 0x40)
struct FReceived_Notify : FReceived_Notify
{
	struct USkeletalMeshComponent* MeshComp;  // 0x0 (0x0)
	struct UAnimSequenceBase* Animation;  // 0x8 (0x8)
	struct FAnimNotifyEventReference EventReference;  // 0x10 (0x10)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool ReturnValue : 1;  // 0x38 (0x38)
	char pad_121_1 : 7;  // 0x79 (0x79)
	bool CallFunc_IsServer_ReturnValue : 1;  // 0x39 (0x39)
	struct AActor* CallFunc_GetOwner_ReturnValue;  // 0x40 (0x40)
	struct ADCMonsterBase* K2Node_DynamicCast_AsDCMonster_Base;  // 0x48 (0x48)
	char pad_138_1 : 7;  // 0x8A (0x8A)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x50 (0x50)
	char pad_139_1 : 7;  // 0x8B (0x8B)
	bool CallFunc_InteractableWithoutHit_ReturnValue : 1;  // 0x51 (0x51)
	char pad_140_1 : 7;  // 0x8C (0x8C)
	bool CallFunc_InteractableOnly_ReturnValue : 1;  // 0x52 (0x52)
	char pad_141_1 : 7;  // 0x8D (0x8D)
	bool CallFunc_Interactable_ReturnValue : 1;  // 0x53 (0x53)
	char pad_142_1 : 7;  // 0x8E (0x8E)
	bool CallFunc_Death_ReturnValue : 1;  // 0x54 (0x54)
	char pad_143_1 : 7;  // 0x8F (0x8F)
	bool CallFunc_Normal_ReturnValue : 1;  // 0x55 (0x55)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool CallFunc_Burrow_ReturnValue : 1;  // 0x56 (0x56)
	char pad_145_1 : 7;  // 0x91 (0x91)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x57 (0x57)


}; 
 
 
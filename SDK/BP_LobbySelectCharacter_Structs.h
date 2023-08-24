#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_LobbySelectCharacter.BP_LobbySelectCharacter_C.ExecuteUbergraph_BP_LobbySelectCharacter
struct FExecuteUbergraph_BP_LobbySelectCharacter
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue;  // 0x8 (0x8)
	struct UAnimationAsset* K2Node_Event_ItemStandIdle;  // 0x10 (0x10)
	struct FGameplayTag K2Node_Event_ItemHandType;  // 0x18 (0x18)
	struct FGameplayTag K2Node_Event_ItemSlotType;  // 0x20 (0x20)
	struct UABP_PlayerCharacterCapture_C* K2Node_DynamicCast_AsABP_Player_Character_Capture;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct UAnimSequence* K2Node_DynamicCast_As______;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x40 (0x40)


}; 
 
 // Function BP_LobbySelectCharacter.BP_LobbySelectCharacter_C.CustomEvent
struct FCustomEvent
{
	struct UAnimationAsset* ItemStandIdle;  // 0x0 (0x0)
	struct FGameplayTag ItemHandType;  // 0x8 (0x8)
	struct FGameplayTag ItemSlotType;  // 0x10 (0x10)


}; 
 
 
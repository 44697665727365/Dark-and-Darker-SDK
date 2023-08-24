#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_BossReward_DoubleStoneDoor.BP_BossReward_DoubleStoneDoor_C.ExecuteUbergraph_BP_BossReward_DoubleStoneDoor
struct FExecuteUbergraph_BP_BossReward_DoubleStoneDoor
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FObjectLinkRequestEvent K2Node_ComponentBoundEvent_RecvEvent;  // 0x10 (0x10)
	struct UObjectLinkMetaDataBlueprint* K2Node_ComponentBoundEvent_SendEventParam;  // 0xC0 (0xC0)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool CallFunc_AddGameplayTag_ReturnValue_2 : 1;  // 0xC8 (0xC8)
	char pad_201_1 : 7;  // 0xC9 (0xC9)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0xC9 (0xC9)
	char pad_202_1 : 7;  // 0xCA (0xCA)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0xCA (0xCA)
	char pad_203[5];  // 0xCB (0xCB)
	struct TArray<struct FGameplayTag> K2Node_MakeArray_Array;  // 0xD0 (0xD0)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;  // 0xE0 (0xE0)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool CallFunc_DoesContainerMatchTagQuery_ReturnValue : 1;  // 0x100 (0x100)


}; 
 
 // Function BP_BossReward_DoubleStoneDoor.BP_BossReward_DoubleStoneDoor_C.BndEvt__BP_DoorBase_DCGameObjectLink_K2Node_ComponentBoundEvent_1_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
// Size: 0xB8(Inherited: 0xB8)
struct FBndEvt__BP_DoorBase_DCGameObjectLink_K2Node_ComponentBoundEvent_1_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature : FBndEvt__BP_DoorBase_DCGameObjectLink_K2Node_ComponentBoundEvent_1_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
{
	struct FObjectLinkRequestEvent RecvEvent;  // 0x0 (0x0)
	struct UObjectLinkMetaDataBlueprint* SendEventParam;  // 0xB0 (0xB0)


}; 
 
 // Function BP_BossReward_DoubleStoneDoor.BP_BossReward_DoubleStoneDoor_C.InteractTargetInfoRarity
// Size: 0x8(Inherited: 0x8)
struct FInteractTargetInfoRarity : FInteractTargetInfoRarity
{
	struct FGameplayTag RarityTag;  // 0x0 (0x0)


}; 
 
 
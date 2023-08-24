#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Lift.BP_Lift_C.BndEvt__BP_Portcullis_DCGameObjectLink_K2Node_ComponentBoundEvent_0_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
struct FBndEvt__BP_Portcullis_DCGameObjectLink_K2Node_ComponentBoundEvent_0_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
{
	struct FObjectLinkRequestEvent RecvEvent;  // 0x0 (0x0)
	struct UObjectLinkMetaDataBlueprint* SendEventParam;  // 0xB0 (0xB0)


}; 
 
 // Function BP_Lift.BP_Lift_C.ExecuteUbergraph_BP_Lift
struct FExecuteUbergraph_BP_Lift
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FObjectLinkRequestEvent K2Node_ComponentBoundEvent_RecvEvent;  // 0x8 (0x8)
	struct UObjectLinkMetaDataBlueprint* K2Node_ComponentBoundEvent_SendEventParam;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)
	struct TArray<struct FGameplayTag> K2Node_MakeArray_Array;  // 0xC8 (0xC8)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;  // 0xD8 (0xD8)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool CallFunc_DoesContainerMatchTagQuery_ReturnValue : 1;  // 0xF8 (0xF8)


}; 
 
 
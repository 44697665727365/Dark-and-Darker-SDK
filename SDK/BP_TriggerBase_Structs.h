#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_TriggerBase.BP_TriggerBase_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_TriggerBase.BP_TriggerBase_C.ExecuteUbergraph_BP_TriggerBase
struct FExecuteUbergraph_BP_TriggerBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_NotEqual_GameplayTag_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_NotEqual_GameplayTag_ReturnValue_2 : 1;  // 0x5 (0x5)
	char pad_6_1 : 7;  // 0x6 (0x6)
	bool CallFunc_NotEqual_GameplayTag_ReturnValue_3 : 1;  // 0x6 (0x6)
	char pad_7[1];  // 0x7 (0x7)
	struct AActor* K2Node_Event_Interacter;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x10 (0x10)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x18 (0x18)
	struct FHitResult K2Node_Event_HitResult;  // 0x20 (0x20)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x108 (0x108)
	char pad_265[7];  // 0x109 (0x109)
	struct FObjectLinkRequestEvent K2Node_ComponentBoundEvent_RecvEvent;  // 0x110 (0x110)
	struct UObjectLinkMetaDataBlueprint* K2Node_ComponentBoundEvent_SendEventParam;  // 0x1C0 (0x1C0)
	char pad_456_1 : 7;  // 0x1C8 (0x1C8)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x1C8 (0x1C8)
	char pad_457_1 : 7;  // 0x1C9 (0x1C9)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x1C9 (0x1C9)
	char pad_458[6];  // 0x1CA (0x1CA)
	struct TArray<struct FGameplayTag> K2Node_MakeArray_Array;  // 0x1D0 (0x1D0)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;  // 0x1E0 (0x1E0)
	char pad_512_1 : 7;  // 0x200 (0x200)
	bool CallFunc_DoesContainerMatchTagQuery_ReturnValue : 1;  // 0x200 (0x200)
	char pad_513_1 : 7;  // 0x201 (0x201)
	bool CallFunc_NotEqual_GameplayTag_ReturnValue_4 : 1;  // 0x201 (0x201)


}; 
 
 // Function BP_TriggerBase.BP_TriggerBase_C.BndEvt__BP_Portcullis_DCGameObjectLink_K2Node_ComponentBoundEvent_0_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
struct FBndEvt__BP_Portcullis_DCGameObjectLink_K2Node_ComponentBoundEvent_0_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
{
	struct FObjectLinkRequestEvent RecvEvent;  // 0x0 (0x0)
	struct UObjectLinkMetaDataBlueprint* SendEventParam;  // 0xB0 (0xB0)


}; 
 
 
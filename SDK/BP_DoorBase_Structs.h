#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_DoorBase.BP_DoorBase_C.OnMessageReceived_3A90E84A4DEA713B17112090EC99FAA2
struct FOnMessageReceived_3A90E84A4DEA713B17112090EC99FAA2
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function BP_DoorBase.BP_DoorBase_C.BndEvt__BP_DoorBase_DCGameObjectLink_K2Node_ComponentBoundEvent_1_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
struct FBndEvt__BP_DoorBase_DCGameObjectLink_K2Node_ComponentBoundEvent_1_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
{
	struct FObjectLinkRequestEvent RecvEvent;  // 0x0 (0x0)
	struct UObjectLinkMetaDataBlueprint* SendEventParam;  // 0xB0 (0xB0)


}; 
 
 // Function BP_DoorBase.BP_DoorBase_C.IsInteracterForward
struct FIsInteracterForward
{
	struct AActor* Interacter;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool IsForward : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x10 (0x10)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x28 (0x28)
	struct FVector CallFunc_GetActorForwardVector_ReturnValue;  // 0x40 (0x40)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x58 (0x58)
	double CallFunc_Dot_VectorVector_ReturnValue;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x78 (0x78)


}; 
 
 // Function BP_DoorBase.BP_DoorBase_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_DoorBase.BP_DoorBase_C.EventFMsgSoundEvent
struct FEventFMsgSoundEvent
{
	struct FMsgSoundEvent Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_DoorBase.BP_DoorBase_C.ExecuteUbergraph_BP_DoorBase
struct FExecuteUbergraph_BP_DoorBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgSoundEvent K2Node_CustomEvent_Msg;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x30 (0x30)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x40 (0x40)
	struct FMsgSoundEvent Temp_struct_Variable;  // 0x48 (0x48)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x70 (0x70)
	struct AActor* K2Node_Event_Interacter;  // 0x78 (0x78)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x80 (0x80)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x88 (0x88)
	struct FHitResult K2Node_Event_HitResult;  // 0x90 (0x90)
	char pad_376_1 : 7;  // 0x178 (0x178)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x178 (0x178)
	char pad_377_1 : 7;  // 0x179 (0x179)
	bool CallFunc_IsInteracterForward_IsForward : 1;  // 0x179 (0x179)
	char pad_378[6];  // 0x17A (0x17A)
	struct FMsgSoundEvent Temp_struct_Variable_2;  // 0x180 (0x180)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x1A8 (0x1A8)
	char pad_425_1 : 7;  // 0x1A9 (0x1A9)
	bool CallFunc_NotEqual_GameplayTag_ReturnValue : 1;  // 0x1A9 (0x1A9)
	char pad_426_1 : 7;  // 0x1AA (0x1AA)
	bool CallFunc_NotEqual_GameplayTag_ReturnValue_2 : 1;  // 0x1AA (0x1AA)
	char pad_427[5];  // 0x1AB (0x1AB)
	struct FObjectLinkRequestEvent K2Node_ComponentBoundEvent_RecvEvent;  // 0x1B0 (0x1B0)
	struct UObjectLinkMetaDataBlueprint* K2Node_ComponentBoundEvent_SendEventParam;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x268 (0x268)
	char pad_617_1 : 7;  // 0x269 (0x269)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x269 (0x269)
	char pad_618[6];  // 0x26A (0x26A)
	struct TArray<struct FGameplayTag> K2Node_MakeArray_Array;  // 0x270 (0x270)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;  // 0x280 (0x280)
	char pad_672_1 : 7;  // 0x2A0 (0x2A0)
	bool CallFunc_DoesContainerMatchTagQuery_ReturnValue : 1;  // 0x2A0 (0x2A0)
	char pad_673[7];  // 0x2A1 (0x2A1)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput;  // 0x2A8 (0x2A8)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0x2B8 (0x2B8)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x2C0 (0x2C0)


}; 
 
 
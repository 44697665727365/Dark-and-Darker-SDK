#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_DCMonsterBase.BP_DCMonsterBase_C.BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature
struct FBndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature
{
	struct TArray<struct FItemData> ResultItems;  // 0x0 (0x0)


}; 
 
 // Function BP_DCMonsterBase.BP_DCMonsterBase_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_DCMonsterBase.BP_DCMonsterBase_C.EventFMsgSoundEvent
struct FEventFMsgSoundEvent
{
	struct FMsgSoundEvent Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_DCMonsterBase.BP_DCMonsterBase_C.ExecuteUbergraph_BP_DCMonsterBase
struct FExecuteUbergraph_BP_DCMonsterBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct UMsgBaseNode* K2Node_CustomEvent_ProxyObject;  // 0x18 (0x18)
	struct FMsgSoundEvent Temp_struct_Variable;  // 0x20 (0x20)
	struct UMsgBaseNode* Temp_object_Variable;  // 0x48 (0x48)
	int32_t Temp_int_Array_Index_Variable;  // 0x50 (0x50)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x54 (0x54)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x58 (0x58)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x5C (0x5C)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x60 (0x60)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x64 (0x64)
	struct FMsgSoundEvent K2Node_CustomEvent_Msg;  // 0x68 (0x68)
	struct FDelegate Temp_delegate_Variable;  // 0x90 (0x90)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xA0 (0xA0)
	char pad_161_1 : 7;  // 0xA1 (0xA1)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0xA1 (0xA1)
	char pad_162[6];  // 0xA2 (0xA2)
	struct TArray<struct FItemData> K2Node_ComponentBoundEvent_ResultItems;  // 0xA8 (0xA8)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)
	struct FItemData CallFunc_Array_Get_Item;  // 0xC0 (0xC0)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x160 (0x160)
	char pad_356_1 : 7;  // 0x164 (0x164)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x164 (0x164)
	char pad_357[3];  // 0x165 (0x165)
	int32_t CallFunc_Conv_ByteToInt_ReturnValue;  // 0x168 (0x168)
	char pad_364[4];  // 0x16C (0x16C)
	struct FMsgAddContainingItemRequest K2Node_MakeStruct_MsgAddContainingItemRequest;  // 0x170 (0x170)
	struct AActor* K2Node_Event_Interacter;  // 0x238 (0x238)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x240 (0x240)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x248 (0x248)
	struct FHitResult K2Node_Event_HitResult;  // 0x250 (0x250)
	char pad_824_1 : 7;  // 0x338 (0x338)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x338 (0x338)
	char pad_825[7];  // 0x339 (0x339)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x340 (0x340)
	char pad_840_1 : 7;  // 0x348 (0x348)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x348 (0x348)
	char pad_841[7];  // 0x349 (0x349)
	struct FMsgAddLooter K2Node_MakeStruct_MsgAddLooter;  // 0x350 (0x350)
	struct FPrimaryAssetId CallFunc_Array_Get_Item_2;  // 0x458 (0x458)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x468 (0x468)
	char pad_1132[4];  // 0x46C (0x46C)
	struct FDesignDataPropsInteract CallFunc_GetDesignDataPropsInteract_ReturnValue;  // 0x470 (0x470)
	char pad_1296_1 : 7;  // 0x510 (0x510)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x510 (0x510)
	char pad_1297[3];  // 0x511 (0x511)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x514 (0x514)
	struct TScriptInterface<IBaseInterface> CallFunc_BindMsgNode_BaseInterface_CastInput;  // 0x518 (0x518)
	struct UBindMsgNode* CallFunc_BindMsgNode_ReturnValue;  // 0x528 (0x528)
	struct FMsgSoundEvent Temp_struct_Variable_2;  // 0x530 (0x530)
	char pad_1368_1 : 7;  // 0x558 (0x558)
	bool CallFunc_GetPayload_ReturnValue : 1;  // 0x558 (0x558)
	char pad_1369_1 : 7;  // 0x559 (0x559)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x559 (0x559)


}; 
 
 // Function BP_DCMonsterBase.BP_DCMonsterBase_C.OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83
struct FOnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 
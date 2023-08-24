#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_ItemDispenserBase.BP_ItemDispenserBase_C.BndEvt__BP_Statue_ATM_ItemRandomGenerate_K2Node_ComponentBoundEvent_2_ItemGenerationFinishedSignature__DelegateSignature
struct FBndEvt__BP_Statue_ATM_ItemRandomGenerate_K2Node_ComponentBoundEvent_2_ItemGenerationFinishedSignature__DelegateSignature
{
	struct TArray<struct FItemData> ResultItems;  // 0x0 (0x0)


}; 
 
 // Function BP_ItemDispenserBase.BP_ItemDispenserBase_C.ExecuteUbergraph_BP_ItemDispenserBase
struct FExecuteUbergraph_BP_ItemDispenserBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	float CallFunc_GetActorAttributeValue_ReturnValue;  // 0x4 (0x4)
	struct AActor* K2Node_Event_Interacter;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x10 (0x10)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x18 (0x18)
	struct FHitResult K2Node_Event_HitResult;  // 0x20 (0x20)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x108 (0x108)
	char pad_265[7];  // 0x109 (0x109)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x110 (0x110)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x1C0 (0x1C0)
	int32_t K2Node_Event_InCount;  // 0x1C8 (0x1C8)
	char pad_460_1 : 7;  // 0x1CC (0x1CC)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x1CC (0x1CC)
	char pad_461_1 : 7;  // 0x1CD (0x1CD)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x1CD (0x1CD)
	char pad_462[2];  // 0x1CE (0x1CE)
	struct TScriptInterface<IItemGenerateInterface> CallFunc_GenerateItems_self_CastInput;  // 0x1D0 (0x1D0)
	struct TArray<struct FItemData> K2Node_ComponentBoundEvent_ResultItems;  // 0x1E0 (0x1E0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x1F0 (0x1F0)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x1F4 (0x1F4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x1F8 (0x1F8)
	char pad_508_1 : 7;  // 0x1FC (0x1FC)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x1FC (0x1FC)
	char pad_509[3];  // 0x1FD (0x1FD)
	int32_t Temp_int_Array_Index_Variable;  // 0x200 (0x200)
	char pad_516[4];  // 0x204 (0x204)
	struct FItemData CallFunc_Array_Get_Item;  // 0x208 (0x208)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x2A8 (0x2A8)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x2B0 (0x2B0)
	char pad_689[3];  // 0x2B1 (0x2B1)
	int32_t CallFunc_Conv_ByteToInt_ReturnValue;  // 0x2B4 (0x2B4)
	struct FItemData K2Node_SetFieldsInStruct_StructOut;  // 0x2B8 (0x2B8)
	struct FMsgAddContainingItemRequest K2Node_MakeStruct_MsgAddContainingItemRequest;  // 0x358 (0x358)
	struct TScriptInterface<IBaseInterface> CallFunc_BroadcastMsgBlueprint_self_CastInput;  // 0x420 (0x420)


}; 
 
 // Function BP_ItemDispenserBase.BP_ItemDispenserBase_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_ItemDispenserBase.BP_ItemDispenserBase_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 
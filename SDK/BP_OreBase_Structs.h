#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_OreBase.BP_OreBase_C.BndEvt__BP_Statue_ATM_ItemRandomGenerate_K2Node_ComponentBoundEvent_2_ItemGenerationFinishedSignature__DelegateSignature
struct FBndEvt__BP_Statue_ATM_ItemRandomGenerate_K2Node_ComponentBoundEvent_2_ItemGenerationFinishedSignature__DelegateSignature
{
	struct TArray<struct FItemData> ResultItems;  // 0x0 (0x0)


}; 
 
 // Function BP_OreBase.BP_OreBase_C.ExecuteUbergraph_BP_OreBase
struct FExecuteUbergraph_BP_OreBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* K2Node_Event_Interacter_2;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x10 (0x10)
	uint8_t CallFunc_GetInteractability_ReturnValue;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x20 (0x20)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct TArray<struct FItemData> K2Node_ComponentBoundEvent_ResultItems;  // 0x38 (0x38)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x50 (0x50)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x58 (0x58)
	char pad_89_1 : 7;  // 0x59 (0x59)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x59 (0x59)
	char pad_90[6];  // 0x5A (0x5A)
	struct AActor* K2Node_Event_Interacter;  // 0x60 (0x60)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x68 (0x68)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x70 (0x70)
	struct FHitResult K2Node_Event_HitResult;  // 0x78 (0x78)
	int32_t CallFunc_Conv_ByteToInt_ReturnValue;  // 0x160 (0x160)
	float CallFunc_GetActorAttributeValue_ReturnValue;  // 0x164 (0x164)
	struct TScriptInterface<IItemGenerateInterface> CallFunc_GenerateItems_self_CastInput;  // 0x168 (0x168)
	int32_t Temp_int_Array_Index_Variable;  // 0x178 (0x178)
	char pad_380[4];  // 0x17C (0x17C)
	struct FItemData CallFunc_Array_Get_Item;  // 0x180 (0x180)
	char pad_544_1 : 7;  // 0x220 (0x220)
	bool CallFunc_CanInteract_ReturnValue : 1;  // 0x220 (0x220)
	char pad_545[7];  // 0x221 (0x221)
	struct FItemData K2Node_SetFieldsInStruct_StructOut;  // 0x228 (0x228)
	char pad_712_1 : 7;  // 0x2C8 (0x2C8)
	bool CallFunc_AddContainingItem_ReturnValue : 1;  // 0x2C8 (0x2C8)
	char pad_713[3];  // 0x2C9 (0x2C9)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x2CC (0x2CC)
	struct UGeometryCollectionComponent* CallFunc_FindGeometryCollectionDefault_GeometryCollection;  // 0x2D0 (0x2D0)
	char pad_728_1 : 7;  // 0x2D8 (0x2D8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x2D8 (0x2D8)
	char pad_729[7];  // 0x2D9 (0x2D9)
	struct FVector CallFunc_K2_GetComponentLocation_ReturnValue;  // 0x2E0 (0x2E0)
	char pad_760_1 : 7;  // 0x2F8 (0x2F8)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x2F8 (0x2F8)
	char pad_761[3];  // 0x2F9 (0x2F9)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x2FC (0x2FC)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x300 (0x300)


}; 
 
 // Function BP_OreBase.BP_OreBase_C.InteractStarted
// Size: 0x10(Inherited: 0x10)
struct FInteractStarted : FInteractStarted
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag EventTag;  // 0x8 (0x8)


}; 
 
 // Function BP_OreBase.BP_OreBase_C.InteractSucceed
// Size: 001052298erited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 
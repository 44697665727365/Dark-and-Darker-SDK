#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_AnimatedChestBase.BP_AnimatedChestBase_C.ExecuteUbergraph_BP_AnimatedChestBase
struct FExecuteUbergraph_BP_AnimatedChestBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct AActor* K2Node_Event_Interacter;  // 0x8 (0x8)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x10 (0x10)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x18 (0x18)
	struct FHitResult K2Node_Event_HitResult;  // 0x20 (0x20)
	struct TArray<struct FItemData> K2Node_ComponentBoundEvent_ResultItems;  // 0x108 (0x108)
	struct FMsgAddLooter K2Node_MakeStruct_MsgAddLooter;  // 0x118 (0x118)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x220 (0x220)
	char pad_548[4];  // 0x224 (0x224)
	struct FMsgAddLooter K2Node_MakeStruct_MsgAddLooter_2;  // 0x228 (0x228)
	char pad_816_1 : 7;  // 0x330 (0x330)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x330 (0x330)
	char pad_817[3];  // 0x331 (0x331)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x334 (0x334)
	char pad_824_1 : 7;  // 0x338 (0x338)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x338 (0x338)
	char pad_825[3];  // 0x339 (0x339)
	int32_t CallFunc_Conv_ByteToInt_ReturnValue;  // 0x33C (0x33C)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x340 (0x340)
	int32_t Temp_int_Array_Index_Variable;  // 0x344 (0x344)
	struct FItemData CallFunc_Array_Get_Item;  // 0x348 (0x348)
	struct FMsgAddContainingItemRequest K2Node_MakeStruct_MsgAddContainingItemRequest;  // 0x3E8 (0x3E8)
	float K2Node_Event_ExhaustedTime;  // 0x4B0 (0x4B0)
	char pad_1204[4];  // 0x4B4 (0x4B4)
	UGameplayEffect* K2Node_Event_GameplayEffectClass;  // 0x4B8 (0x4B8)
	struct FDCGameplayEffectContext K2Node_Event_EffectContext;  // 0x4C0 (0x4C0)
	struct FMsgRemoveAllLooters K2Node_MakeStruct_MsgRemoveAllLooters;  // 0x698 (0x698)
	struct AActor* CallFunc_DCEffectContextGetInstigatorActor_ReturnValue;  // 0x6B0 (0x6B0)
	float CallFunc_GetActorAttributeValue_ReturnValue;  // 0x6B8 (0x6B8)


}; 
 
 // Function BP_AnimatedChestBase.BP_AnimatedChestBase_C.BndEvt__BP_ChestBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature
struct FBndEvt__BP_ChestBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature
{
	struct TArray<struct FItemData> ResultItems;  // 0x0 (0x0)


}; 
 
 // Function BP_AnimatedChestBase.BP_AnimatedChestBase_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_AnimatedChestBase.BP_AnimatedChestBase_C.OnImpactEnduranceExhausted
// Size: 0x1E8(Inherited: 0x1E8)
struct FOnImpactEnduranceExhausted : FOnImpactEnduranceExhausted
{
	float ExhaustedTime;  // 0x0 (0x0)
	UGameplayEffect* GameplayEffectClass;  // 0x8 (0x8)
	struct FDCGameplayEffectContext EffectContext;  // 0x10 (0x10)


}; 
 
 // Function BP_AnimatedChestBase.BP_AnimatedChestBase_C.OpenAndGenerateItem
struct FOpenAndGenerateItem
{
	struct AActor* InActor;  // 0x0 (0x0)
	float CallFunc_GetActorAttributeValue_ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct TScriptInterface<IItemGenerateInterface> CallFunc_GenerateItems_self_CastInput;  // 0x10 (0x10)


}; 
 
 
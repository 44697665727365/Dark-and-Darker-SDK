#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Statue_ItemDispenser.BP_Statue_ItemDispenser_C.BndEvt__BP_Statue_ATM_ItemRandomGenerate_K2Node_ComponentBoundEvent_2_ItemGenerationFinishedSignature__DelegateSignature
struct FBndEvt__BP_Statue_ATM_ItemRandomGenerate_K2Node_ComponentBoundEvent_2_ItemGenerationFinishedSignature__DelegateSignature
{
	struct TArray<struct FItemData> ResultItems;  // 0x0 (0x0)


}; 
 
 // Function BP_Statue_ItemDispenser.BP_Statue_ItemDispenser_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct FBndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bFromSweep : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FHitResult SweepResult;  // 0x20 (0x20)


}; 
 
 // Function BP_Statue_ItemDispenser.BP_Statue_ItemDispenser_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct FBndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)


}; 
 
 // Function BP_Statue_ItemDispenser.BP_Statue_ItemDispenser_C.ExecuteUbergraph_BP_Statue_ItemDispenser
struct FExecuteUbergraph_BP_Statue_ItemDispenser
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	float CallFunc_GetActorAttributeValue_ReturnValue;  // 0x8 (0x8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xC (0xC)
	int32_t Temp_int_Array_Index_Variable;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2;  // 0x18 (0x18)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor_2;  // 0x20 (0x20)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2;  // 0x28 (0x28)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_2;  // 0x30 (0x30)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool K2Node_ComponentBoundEvent_bFromSweep : 1;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	struct FHitResult K2Node_ComponentBoundEvent_SweepResult;  // 0x38 (0x38)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x120 (0x120)
	char pad_296_1 : 7;  // 0x128 (0x128)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x128 (0x128)
	char pad_297[7];  // 0x129 (0x129)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;  // 0x130 (0x130)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x138 (0x138)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x140 (0x140)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex;  // 0x148 (0x148)
	char pad_332_1 : 7;  // 0x14C (0x14C)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x14C (0x14C)
	char pad_333[3];  // 0x14D (0x14D)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_2;  // 0x150 (0x150)
	char pad_344_1 : 7;  // 0x158 (0x158)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x158 (0x158)
	char pad_345_1 : 7;  // 0x159 (0x159)
	bool CallFunc_IsLocallyControlled_ReturnValue_2 : 1;  // 0x159 (0x159)
	char pad_346[6];  // 0x15A (0x15A)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x160 (0x160)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x170 (0x170)
	char pad_369[7];  // 0x171 (0x171)
	struct AActor* K2Node_Event_Interacter;  // 0x178 (0x178)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x180 (0x180)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x188 (0x188)
	struct FHitResult K2Node_Event_HitResult;  // 0x190 (0x190)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x280 (0x280)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x330 (0x330)
	int32_t K2Node_Event_InCount;  // 0x338 (0x338)
	char pad_828_1 : 7;  // 0x33C (0x33C)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x33C (0x33C)
	char pad_829_1 : 7;  // 0x33D (0x33D)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x33D (0x33D)
	char pad_830[2];  // 0x33E (0x33E)
	struct TScriptInterface<IItemGenerateInterface> CallFunc_GenerateItems_self_CastInput;  // 0x340 (0x340)
	struct TArray<struct FItemData> K2Node_ComponentBoundEvent_ResultItems;  // 0x350 (0x350)
	struct FItemData CallFunc_Array_Get_Item;  // 0x360 (0x360)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x400 (0x400)
	char pad_1028_1 : 7;  // 0x404 (0x404)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x404 (0x404)
	char pad_1029[3];  // 0x405 (0x405)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_3;  // 0x408 (0x408)
	char pad_1040_1 : 7;  // 0x410 (0x410)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x410 (0x410)
	char pad_1041[3];  // 0x411 (0x411)
	int32_t CallFunc_Conv_ByteToInt_ReturnValue;  // 0x414 (0x414)
	struct FItemData K2Node_MakeStruct_ItemData;  // 0x418 (0x418)
	struct FMsgAddContainingItemRequest K2Node_MakeStruct_MsgAddContainingItemRequest;  // 0x4B8 (0x4B8)
	struct TScriptInterface<IBaseInterface> CallFunc_BroadcastMsgBlueprint_self_CastInput;  // 0x580 (0x580)


}; 
 
 // Function BP_Statue_ItemDispenser.BP_Statue_ItemDispenser_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_Statue_ItemDispenser.BP_Statue_ItemDispenser_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 
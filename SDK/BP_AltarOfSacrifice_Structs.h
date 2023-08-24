#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
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
 
 // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.InteractStarted
// Size: 0x10(Inherited: 0x10)
struct FInteractStarted : FInteractStarted
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag EventTag;  // 0x8 (0x8)


}; 
 
 // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct FBndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
{
	struct UPrimitiveComponent* OverlappedComponent;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	int32_t OtherBodyIndex;  // 0x18 (0x18)


}; 
 
 // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.BroadcastSystemMessage
struct FBroadcastSystemMessage
{
	struct ABP_PlayerCharacter_C* Interacter;  // 0x0 (0x0)
	struct FText SystemMessage;  // 0x8 (0x8)
	struct AController* CallFunc_GetController_ReturnValue;  // 0x20 (0x20)
	struct APlayerController* K2Node_DynamicCast_As_________;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30 (0x30)


}; 
 
 // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.ExecuteUbergraph_BP_AltarOfSacrifice
struct FExecuteUbergraph_BP_AltarOfSacrifice
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2;  // 0x8 (0x8)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor_2;  // 0x10 (0x10)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2;  // 0x18 (0x18)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_2;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool K2Node_ComponentBoundEvent_bFromSweep : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FHitResult K2Node_ComponentBoundEvent_SweepResult;  // 0x28 (0x28)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character;  // 0x110 (0x110)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x118 (0x118)
	char pad_281[7];  // 0x119 (0x119)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent;  // 0x120 (0x120)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x128 (0x128)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x130 (0x130)
	int32_t K2Node_ComponentBoundEvent_OtherBodyIndex;  // 0x138 (0x138)
	char pad_316_1 : 7;  // 0x13C (0x13C)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x13C (0x13C)
	char pad_317[3];  // 0x13D (0x13D)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_2;  // 0x140 (0x140)
	char pad_328_1 : 7;  // 0x148 (0x148)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x148 (0x148)
	char pad_329_1 : 7;  // 0x149 (0x149)
	bool CallFunc_IsLocallyControlled_ReturnValue_2 : 1;  // 0x149 (0x149)
	char pad_330[6];  // 0x14A (0x14A)
	struct AActor* K2Node_Event_Interacter_3;  // 0x150 (0x150)
	struct FGameplayTag K2Node_Event_StateTag;  // 0x158 (0x158)
	struct FGameplayTag K2Node_Event_TriggerTag;  // 0x160 (0x160)
	struct FHitResult K2Node_Event_HitResult;  // 0x168 (0x168)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x250 (0x250)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x260 (0x260)
	char pad_609_1 : 7;  // 0x261 (0x261)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x261 (0x261)
	char pad_610[6];  // 0x262 (0x262)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_3;  // 0x268 (0x268)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x270 (0x270)
	char pad_625[3];  // 0x271 (0x271)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x274 (0x274)
	int32_t K2Node_Event_InCount;  // 0x27C (0x27C)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x280 (0x280)
	char pad_816_1 : 7;  // 0x330 (0x330)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x330 (0x330)
	char pad_817_1 : 7;  // 0x331 (0x331)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x331 (0x331)
	char pad_818_1 : 7;  // 0x332 (0x332)
	bool CallFunc_IsEnoughHealth_Result : 1;  // 0x332 (0x332)
	char pad_819[5];  // 0x333 (0x333)
	struct AActor* K2Node_Event_Interacter_2;  // 0x338 (0x338)
	struct FGameplayTag K2Node_Event_EventTag_2;  // 0x340 (0x340)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x348 (0x348)
	char pad_844[4];  // 0x34C (0x34C)
	struct ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_4;  // 0x350 (0x350)
	char pad_856_1 : 7;  // 0x358 (0x358)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0x358 (0x358)
	char pad_857[3];  // 0x359 (0x359)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x35C (0x35C)
	struct TArray<struct UItem*> CallFunc_GetItemsBySlotType_ReturnValue;  // 0x360 (0x360)
	char pad_880_1 : 7;  // 0x370 (0x370)
	bool CallFunc_IsEnoughHealth_Result_2 : 1;  // 0x370 (0x370)
	char pad_881[3];  // 0x371 (0x371)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x374 (0x374)
	char pad_888_1 : 7;  // 0x378 (0x378)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x378 (0x378)
	char pad_889_1 : 7;  // 0x379 (0x379)
	bool Temp_bool_True_if_break_was_hit_Variable : 1;  // 0x379 (0x379)
	char pad_890_1 : 7;  // 0x37A (0x37A)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x37A (0x37A)
	char pad_891_1 : 7;  // 0x37B (0x37B)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x37B (0x37B)
	int32_t Temp_int_Array_Index_Variable;  // 0x37C (0x37C)
	struct AActor* K2Node_Event_Interacter;  // 0x380 (0x380)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x388 (0x388)
	struct UItem* CallFunc_Array_Get_Item;  // 0x390 (0x390)
	struct FItemData CallFunc_GetItemData_ReturnValue;  // 0x398 (0x398)
	char pad_1080_1 : 7;  // 0x438 (0x438)
	bool CallFunc_IsSameTeam_ReturnValue : 1;  // 0x438 (0x438)
	char pad_1081[7];  // 0x439 (0x439)
	struct FDesignDataItem CallFunc_GetDesignDataItem_ReturnValue;  // 0x440 (0x440)
	char pad_1480_1 : 7;  // 0x5C8 (0x5C8)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x5C8 (0x5C8)
	char pad_1481_1 : 7;  // 0x5C9 (0x5C9)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x5C9 (0x5C9)
	char pad_1482[2];  // 0x5CA (0x5CA)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x5CC (0x5CC)
	char pad_1500[4];  // 0x5DC (0x5DC)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x5E0 (0x5E0)
	enum class EEndPlayReason K2Node_Event_EndPlayReason;  // 0x5E8 (0x5E8)
	char pad_1513_1 : 7;  // 0x5E9 (0x5E9)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x5E9 (0x5E9)
	char pad_1514[6];  // 0x5EA (0x5EA)
	struct FDesignDataProps CallFunc_GetDesignDataProps_ReturnValue;  // 0x5F0 (0x5F0)
	struct FDelegate Temp_delegate_Variable;  // 0x680 (0x680)
	char pad_1680_1 : 7;  // 0x690 (0x690)
	bool CallFunc_Array_IsNotEmpty_ReturnValue : 1;  // 0x690 (0x690)
	char pad_1681[7];  // 0x691 (0x691)
	struct FDesignDataPropsInteract CallFunc_GetDesignDataPropsInteract_ReturnValue;  // 0x698 (0x698)
	struct FDelegate Temp_delegate_Variable_2;  // 0x738 (0x738)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x748 (0x748)
	struct FDelegate Temp_delegate_Variable_3;  // 0x750 (0x750)
	struct FDelegate Temp_delegate_Variable_4;  // 0x760 (0x760)
	struct FDelegate Temp_delegate_Variable_5;  // 0x770 (0x770)
	struct FDelegate Temp_delegate_Variable_6;  // 0x780 (0x780)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0x790 (0x790)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0x794 (0x794)
	int32_t CallFunc_PostAkEvent_ReturnValue_3;  // 0x798 (0x798)
	int32_t CallFunc_PostAkEvent_ReturnValue_4;  // 0x79C (0x79C)
	int32_t CallFunc_PostAkEvent_ReturnValue_5;  // 0x7A0 (0x7A0)
	int32_t CallFunc_PostAkEvent_ReturnValue_6;  // 0x7A4 (0x7A4)
	float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;  // 0x7A8 (0x7A8)
	char pad_1964[4];  // 0x7AC (0x7AC)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x7B0 (0x7B0)


}; 
 
 // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.InteractSucceed
// Size: 0x100(Inherited: 0x100)
struct FInteractSucceed : FInteractSucceed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag StateTag;  // 0x8 (0x8)
	struct FGameplayTag TriggerTag;  // 0x10 (0x10)
	struct FHitResult HitResult;  // 0x18 (0x18)


}; 
 
 // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.InteractFailed
// Size: 0x10(Inherited: 0x10)
struct FInteractFailed : FInteractFailed
{
	struct AActor* Interacter;  // 0x0 (0x0)
	struct FGameplayTag EventTag;  // 0x8 (0x8)


}; 
 
 // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.IsEnoughHealth
struct FIsEnoughHealth
{
	struct ABP_PlayerCharacter_C* Interacter;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Result : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_2 : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_2;  // 0x24 (0x24)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x38 (0x38)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	double CallFunc_Divide_DoubleDouble_B_ImplicitCast;  // 0x50 (0x50)
	double CallFunc_Divide_DoubleDouble_A_ImplicitCast;  // 0x58 (0x58)


}; 
 
 // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.OnRep_EffectResurrectionOn
struct FOnRep_EffectResurrectionOn
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector CallFunc_K2_GetComponentLocation_ReturnValue;  // 0x8 (0x8)
	struct UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x28 (0x28)


}; 
 
 // Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.ReceiveEndPlay
// Size: 0x1(Inherited: 0x1)
struct FReceiveEndPlay : FReceiveEndPlay
{
	enum class EEndPlayReason EndPlayReason;  // 0x0 (0x0)


}; 
 
 
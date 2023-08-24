#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.ExecuteUbergraph_GA_Lich_CurseOfGathering_Mark
struct FExecuteUbergraph_GA_Lich_CurseOfGathering_Mark
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x8 (0x8)
	struct FGameplayEffectRemovalInfo K2Node_CustomEvent_GameplayEffectRemovalInfo_2;  // 0x18 (0x18)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x38 (0x38)
	struct FGameplayEffectRemovalInfo K2Node_CustomEvent_GameplayEffectRemovalInfo;  // 0x48 (0x48)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x68 (0x68)
	struct FGameplayEffectRemovalInfo Temp_struct_Variable;  // 0x78 (0x78)
	int32_t Temp_int_Array_Index_Variable;  // 0x98 (0x98)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x9C (0x9C)
	struct UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue;  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xA8 (0xA8)
	char pad_169[3];  // 0xA9 (0xA9)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xAC (0xAC)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0xB0 (0xB0)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0xC0 (0xC0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x170 (0x170)
	struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item;  // 0x180 (0x180)
	struct UAbilityTask_WaitGameplayEffectRemoved* CallFunc_WaitForGameplayEffectRemoved_ReturnValue;  // 0x188 (0x188)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x190 (0x190)
	char pad_404_1 : 7;  // 0x194 (0x194)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x194 (0x194)
	char pad_405_1 : 7;  // 0x195 (0x195)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x195 (0x195)
	char pad_406[2];  // 0x196 (0x196)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x198 (0x198)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x1A8 (0x1A8)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x1C0 (0x1C0)
	char pad_464_1 : 7;  // 0x1D0 (0x1D0)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x1D0 (0x1D0)
	char pad_465[7];  // 0x1D1 (0x1D1)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1D8 (0x1D8)
	char pad_648_1 : 7;  // 0x288 (0x288)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x288 (0x288)
	char pad_649[7];  // 0x289 (0x289)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x290 (0x290)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result_2 : 1;  // 0x298 (0x298)
	char pad_665[7];  // 0x299 (0x299)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base_2;  // 0x2A0 (0x2A0)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0x2A8 (0x2A8)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x2B0 (0x2B0)
	char pad_689[7];  // 0x2B1 (0x2B1)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x2B8 (0x2B8)
	char pad_712_1 : 7;  // 0x2C8 (0x2C8)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x2C8 (0x2C8)
	char pad_713_1 : 7;  // 0x2C9 (0x2C9)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x2C9 (0x2C9)
	char pad_714[6];  // 0x2CA (0x2CA)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x2D0 (0x2D0)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x3A8 (0x3A8)


}; 
 
 // Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.Apply Effect
struct FApply Effect
{
	int32_t Temp_int_Array_Index_Variable;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_CheckOverlapActorIsNull_Is_Null : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct AActor* CallFunc_Array_Get_Item;  // 0x10 (0x10)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x20 (0x20)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 000043283] Package Id_Props_FlatChestLarge_N3 (000043283] Package Id_Props_FlatChestLarge_N3)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0xE8 (0xE8)
	char pad_236_1 : 7;  // 0xEC (0xEC)
	bool K2Node_SwitchInteger_CmpSuccess : 1;  // 0xEC (0xEC)


}; 
 
 // Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.CheckOverlapActorIsNull
struct FCheckOverlapActorIsNull
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Is Null : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x8 (0x8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Temp_bool_Variable : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x14 (0x14)
	struct AActor* CallFunc_Array_Get_Item;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x28 (0x28)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x39 (0x39)
	char pad_58_1 : 7;  // 0x3A (0x3A)
	bool CallFunc_Array_RemoveItem_ReturnValue : 1;  // 0x3A (0x3A)
	char pad_59[1];  // 0x3B (0x3B)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x3C (0x3C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x40 (0x40)


}; 
 
 // Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.InvalidHandle_7481A0444A582F553DFF5FB1E801F3B4
struct FInvalidHandle_7481A0444A582F553DFF5FB1E801F3B4
{
	struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo;  // 0x0 (0x0)


}; 
 
 // Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.OnRemoved_7481A0444A582F553DFF5FB1E801F3B4
struct FOnRemoved_7481A0444A582F553DFF5FB1E801F3B4
{
	struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo;  // 0x0 (0x0)


}; 
 
 
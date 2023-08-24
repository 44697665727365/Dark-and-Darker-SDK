#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GhostKing_Scream.GA_GhostKing_Scream_C.EventReceived_EF2338D248B93425A4E548942DF6FAB7
struct FEventReceived_EF2338D248B93425A4E548942DF6FAB7
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_Scream.GA_GhostKing_Scream_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GhostKing_Scream.GA_GhostKing_Scream_C.ExecuteUbergraph_GA_GhostKing_Scream
struct FExecuteUbergraph_GA_GhostKing_Scream
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	int32_t Temp_int_Array_Index_Variable;  // 0xC (0xC)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x18 (0x18)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x20 (0x20)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x24 (0x24)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x30 (0x30)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xE0 (0xE0)
	struct ABP_GhostKing_Common_C* K2Node_DynamicCast_AsBP_Ghost_King_Common;  // 0xE8 (0xE8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xF0 (0xF0)
	char pad_241[7];  // 0xF1 (0xF1)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0xF8 (0xF8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x100 (0x100)
	char pad_260[4];  // 0x104 (0x104)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x108 (0x108)
	char pad_440_1 : 7;  // 0x1B8 (0x1B8)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x1B8 (0x1B8)
	char pad_441[7];  // 0x1B9 (0x1B9)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x1C0 (0x1C0)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue;  // 0x1D0 (0x1D0)
	char pad_472_1 : 7;  // 0x1D8 (0x1D8)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x1D8 (0x1D8)
	char pad_473[3];  // 0x1D9 (0x1D9)
	int32_t CallFunc_GetGameplayEffectCount_ReturnValue;  // 0x1DC (0x1DC)
	double CallFunc_Conv_IntToDouble_ReturnValue;  // 0x1E0 (0x1E0)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x1E8 (0x1E8)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x1F0 (0x1F0)
	struct ADCCharacterBase* CallFunc_Array_Get_Item_2;  // 0x1F8 (0x1F8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_Change_GE_Attribute_And_Apply_Return_Value;  // 0x200 (0x200)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x210 (0x210)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2;  // 0x2C0 (0x2C0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x2C8 (0x2C8)
	int32_t CallFunc_GetGameplayEffectCount_ReturnValue_2;  // 0x2D8 (0x2D8)
	char pad_732[4];  // 0x2DC (0x2DC)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x2E0 (0x2E0)
	char pad_752_1 : 7;  // 0x2F0 (0x2F0)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x2F0 (0x2F0)
	char pad_753[7];  // 0x2F1 (0x2F1)
	double CallFunc_Conv_IntToDouble_ReturnValue_2;  // 0x2F8 (0x2F8)
	char pad_768_1 : 7;  // 0x300 (0x300)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x300 (0x300)
	char pad_769_1 : 7;  // 0x301 (0x301)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x301 (0x301)
	char pad_770[2];  // 0x302 (0x302)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x304 (0x304)
	char pad_776_1 : 7;  // 0x308 (0x308)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x308 (0x308)
	char pad_777[7];  // 0x309 (0x309)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_2;  // 0x310 (0x310)
	struct FGameplayEventData Temp_struct_Variable;  // 0x318 (0x318)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x3C8 (0x3C8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x3D0 (0x3D0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x480 (0x480)
	char pad_1168_1 : 7;  // 0x490 (0x490)
	bool K2Node_Event_bWasCancelled : 1;  // 0x490 (0x490)
	char pad_1169_1 : 7;  // 0x491 (0x491)
	bool CallFunc_IsValid_ReturnValue_4 : 1;  // 0x491 (0x491)
	char pad_1170_1 : 7;  // 0x492 (0x492)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0x492 (0x492)
	char pad_1171[5];  // 0x493 (0x493)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_Change_GE_Attribute_And_Apply_Return_Value_2;  // 0x498 (0x498)


}; 
 
 // Function GA_GhostKing_Scream.GA_GhostKing_Scream_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 
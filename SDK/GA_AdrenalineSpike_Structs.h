#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_AdrenalineSpike.GA_AdrenalineSpike_C.CheckHealthBelowCertainPer
struct FCheckHealthBelowCertainPer
{
	double CurrentHealth;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Result : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FGameplayTagContainer CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;  // 0x10 (0x10)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;  // 0x3C (0x3C)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;  // 0x40 (0x40)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x58 (0x58)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x60 (0x60)
	char pad_97_1 : 7;  // 0x61 (0x61)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x61 (0x61)
	char pad_98_1 : 7;  // 0x62 (0x62)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x62 (0x62)
	char pad_99[5];  // 0x63 (0x63)
	double CallFunc_Divide_DoubleDouble_B_ImplicitCast;  // 0x68 (0x68)


}; 
 
 // Function GA_AdrenalineSpike.GA_AdrenalineSpike_C.ExecuteUbergraph_GA_AdrenalineSpike
struct FExecuteUbergraph_GA_AdrenalineSpike
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0xC8 (0xC8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xD8 (0xD8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0xDC (0xDC)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0xEC (0xEC)
	char pad_252[4];  // 0xFC (0xFC)
	struct UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue;  // 0x100 (0x100)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x108 (0x108)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x1B8 (0x1B8)
	char pad_456_1 : 7;  // 0x1C8 (0x1C8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1C8 (0x1C8)
	char pad_457[3];  // 0x1C9 (0x1C9)
	int32_t Temp_int_Array_Index_Variable;  // 0x1CC (0x1CC)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x1D0 (0x1D0)
	struct FActiveGameplayEffectHandle CallFunc_Array_Get_Item;  // 0x1D4 (0x1D4)
	float CallFunc_GetActiveGameplayEffectRemainingDuration_ReturnValue;  // 0x1DC (0x1DC)
	char pad_480_1 : 7;  // 0x1E0 (0x1E0)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x1E0 (0x1E0)
	char pad_481[7];  // 0x1E1 (0x1E1)
	struct UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue;  // 0x1E8 (0x1E8)
	char pad_496_1 : 7;  // 0x1F0 (0x1F0)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x1F0 (0x1F0)
	char pad_497[3];  // 0x1F1 (0x1F1)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x1F4 (0x1F4)
	struct UDCAT_WaitAttributeChangeByExecution* CallFunc_WaitForAttributeChange_ReturnValue;  // 0x1F8 (0x1F8)
	char pad_512_1 : 7;  // 0x200 (0x200)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x200 (0x200)
	char pad_513_1 : 7;  // 0x201 (0x201)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x201 (0x201)
	char pad_514[2];  // 0x202 (0x202)
	float Temp_real_Variable;  // 0x204 (0x204)
	float Temp_real_Variable_2;  // 0x208 (0x208)
	char pad_524[4];  // 0x20C (0x20C)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x210 (0x210)
	char pad_536_1 : 7;  // 0x218 (0x218)
	bool CallFunc_CheckHealthBelowCertainPer_Result : 1;  // 0x218 (0x218)
	char pad_537_1 : 7;  // 0x219 (0x219)
	bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute : 1;  // 0x219 (0x219)
	char pad_538[2];  // 0x21A (0x21A)
	float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;  // 0x21C (0x21C)
	char pad_544_1 : 7;  // 0x220 (0x220)
	bool CallFunc_CheckHealthBelowCertainPer_Result_2 : 1;  // 0x220 (0x220)
	char pad_545[3];  // 0x221 (0x221)
	float K2Node_CustomEvent_OldValue;  // 0x224 (0x224)
	float K2Node_CustomEvent_NewValue;  // 0x228 (0x228)
	char pad_556[4];  // 0x22C (0x22C)
	double CallFunc_CheckHealthBelowCertainPer_CurrentHealth_ImplicitCast;  // 0x230 (0x230)
	double CallFunc_CheckHealthBelowCertainPer_CurrentHealth_ImplicitCast_2;  // 0x238 (0x238)


}; 
 
 // Function GA_AdrenalineSpike.GA_AdrenalineSpike_C.OnChange_15B3EBAC461BE5313FFA019C63C0FA1F
struct FOnChange_15B3EBAC461BE5313FFA019C63C0FA1F
{
	float OldValue;  // 0x0 (0x0)
	float NewValue;  // 0x4 (0x4)


}; 
 
 
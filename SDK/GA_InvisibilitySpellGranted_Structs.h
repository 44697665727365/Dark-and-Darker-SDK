#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_InvisibilitySpellGranted.GA_InvisibilitySpellGranted_C.ExecuteUbergraph_GA_InvisibilitySpellGranted
struct FExecuteUbergraph_GA_InvisibilitySpellGranted
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	float K2Node_CustomEvent_OldValue;  // 0x10 (0x10)
	float K2Node_CustomEvent_NewValue;  // 0x14 (0x14)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x18 (0x18)
	float Temp_real_Variable;  // 0x28 (0x28)
	float Temp_real_Variable_2;  // 0x2C (0x2C)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct UDCAT_WaitAttributeChangeByExecution* CallFunc_WaitForAttributeChange_ReturnValue;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct FGameplayCueParameters Temp_struct_Variable;  // 0x48 (0x48)
	struct FGameplayCueParameters Temp_struct_Variable_2;  // 0x120 (0x120)
	char pad_504_1 : 7;  // 0x1F8 (0x1F8)
	bool K2Node_Event_bWasCancelled : 1;  // 0x1F8 (0x1F8)
	char pad_505[7];  // 0x1F9 (0x1F9)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x200 (0x200)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x2B0 (0x2B0)
	char pad_689[7];  // 0x2B1 (0x2B1)
	double CallFunc_Greater_DoubleDouble_B_ImplicitCast;  // 0x2B8 (0x2B8)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0x2C0 (0x2C0)


}; 
 
 // Function GA_InvisibilitySpellGranted.GA_InvisibilitySpellGranted_C.OnChange_A65BB06A463B178A996B879F84364682
struct FOnChange_A65BB06A463B178A996B879F84364682
{
	float OldValue;  // 0x0 (0x0)
	float NewValue;  // 0x4 (0x4)


}; 
 
 // Function GA_InvisibilitySpellGranted.GA_InvisibilitySpellGranted_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_InvisibilitySpellGranted.GA_InvisibilitySpellGranted_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 
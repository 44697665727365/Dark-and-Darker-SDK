#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ThornyBrambleActivate.GA_ThornyBrambleActivate_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_ThornyBrambleActivate.GA_ThornyBrambleActivate_C.OnChange_737926B54B1EBE282AA4429E4294B8BF
struct FOnChange_737926B54B1EBE282AA4429E4294B8BF
{
	float OldValue;  // 0x0 (0x0)
	float NewValue;  // 0x4 (0x4)


}; 
 
 // Function GA_ThornyBrambleActivate.GA_ThornyBrambleActivate_C.ExecuteUbergraph_GA_ThornyBrambleActivate
struct FExecuteUbergraph_GA_ThornyBrambleActivate
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	float Temp_real_Variable;  // 0x10 (0x10)
	float Temp_real_Variable_2;  // 0x14 (0x14)
	struct UDCAT_WaitAttributeChangeByExecution* CallFunc_WaitForAttributeChange_ReturnValue;  // 0x18 (0x18)
	struct FGameplayEventData Temp_struct_Variable;  // 0x20 (0x20)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0xD0 (0xD0)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xE0 (0xE0)
	char pad_225[3];  // 0xE1 (0xE1)
	int32_t Temp_int_Variable;  // 0xE4 (0xE4)
	float K2Node_CustomEvent_OldValue;  // 0xE8 (0xE8)
	float K2Node_CustomEvent_NewValue;  // 0xEC (0xEC)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xF0 (0xF0)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x100 (0x100)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x1B0 (0x1B0)
	struct ABP_ThornyBramble_C* K2Node_DynamicCast_AsBP_Thorny_Bramble;  // 0x1B8 (0x1B8)
	char pad_448_1 : 7;  // 0x1C0 (0x1C0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1C0 (0x1C0)
	char pad_449_1 : 7;  // 0x1C1 (0x1C1)
	bool CallFunc_IsImmuneToDamage_Result : 1;  // 0x1C1 (0x1C1)
	char pad_450[2];  // 0x1C2 (0x1C2)
	int32_t CallFunc_GetDestroyHitCount_Result;  // 0x1C4 (0x1C4)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x1C8 (0x1C8)
	char pad_460_1 : 7;  // 0x1CC (0x1CC)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x1CC (0x1CC)
	char pad_461_1 : 7;  // 0x1CD (0x1CD)
	bool K2Node_Event_bWasCancelled : 1;  // 0x1CD (0x1CD)


}; 
 
 // Function GA_ThornyBrambleActivate.GA_ThornyBrambleActivate_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 
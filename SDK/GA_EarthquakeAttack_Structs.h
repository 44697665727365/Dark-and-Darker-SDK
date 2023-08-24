#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.ExecuteUbergraph_GA_EarthquakeAttack
struct FExecuteUbergraph_GA_EarthquakeAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x14 (0x14)
	char pad_36[4];  // 0x24 (0x24)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x28 (0x28)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD8 (0xD8)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_K2_CommitAbility_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393[7];  // 0x189 (0x189)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x190 (0x190)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x240 (0x240)
	struct UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue;  // 0x248 (0x248)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x250 (0x250)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x258 (0x258)
	char pad_601_1 : 7;  // 0x259 (0x259)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x259 (0x259)
	char pad_602[6];  // 0x25A (0x25A)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x260 (0x260)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyPremadeSpecArray_ReturnValue;  // 0x310 (0x310)
	char pad_800_1 : 7;  // 0x320 (0x320)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x320 (0x320)
	char pad_801_1 : 7;  // 0x321 (0x321)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x321 (0x321)
	char pad_802_1 : 7;  // 0x322 (0x322)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x322 (0x322)
	char pad_803_1 : 7;  // 0x323 (0x323)
	bool K2Node_Event_bWasCancelled : 1;  // 0x323 (0x323)
	char pad_804[4];  // 0x324 (0x324)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x328 (0x328)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x330 (0x330)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x408 (0x408)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyPremadeSpecArray_ReturnValue_2;  // 0x4B8 (0x4B8)
	struct ABP_AOE_Earthquake_C* K2Node_DynamicCast_AsBP_AOE_Earthquake;  // 0x4C8 (0x4C8)
	char pad_1232_1 : 7;  // 0x4D0 (0x4D0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x4D0 (0x4D0)


}; 
 
 // Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.EventReceived_33FB7CA34B61D273DD00EB869E699495
struct FEventReceived_33FB7CA34B61D273DD00EB869E699495
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_EarthquakeAttack.GA_EarthquakeAttack_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 
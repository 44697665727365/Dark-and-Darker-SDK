#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DamageOnMove_Base.GA_DamageOnMove_Base_C.EventReceived_BF6EE2BE40B27897C742FF9F58A960DF
struct FEventReceived_BF6EE2BE40B27897C742FF9F58A960DF
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_DamageOnMove_Base.GA_DamageOnMove_Base_C.ExecuteUbergraph_GA_DamageOnMove_Base
struct FExecuteUbergraph_GA_DamageOnMove_Base
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0xC8 (0xC8)
	char pad_201[7];  // 0xC9 (0xC9)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xD0 (0xD0)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0xD8 (0xD8)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x1B0 (0x1B0)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x260 (0x260)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x310 (0x310)
	char pad_792_1 : 7;  // 0x318 (0x318)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x318 (0x318)
	char pad_793[7];  // 0x319 (0x319)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x320 (0x320)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x328 (0x328)
	char pad_824_1 : 7;  // 0x338 (0x338)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x338 (0x338)
	char pad_825[7];  // 0x339 (0x339)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x340 (0x340)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x3F0 (0x3F0)
	struct UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue;  // 0x400 (0x400)
	char pad_1032_1 : 7;  // 0x408 (0x408)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x408 (0x408)


}; 
 
 // Function GA_DamageOnMove_Base.GA_DamageOnMove_Base_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 
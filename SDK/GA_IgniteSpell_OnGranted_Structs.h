#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_IgniteSpell_OnGranted.GA_IgniteSpell_OnGranted_C.EventReceived_DCE28BCC4B5EB2B17582A798A5CA2926
struct FEventReceived_DCE28BCC4B5EB2B17582A798A5CA2926
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_IgniteSpell_OnGranted.GA_IgniteSpell_OnGranted_C.ExecuteUbergraph_GA_IgniteSpell_OnGranted
struct FExecuteUbergraph_GA_IgniteSpell_OnGranted
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0xB8 (0xB8)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool CallFunc_EffectContextHasHitResult_ReturnValue : 1;  // 0xC8 (0xC8)
	char pad_201_1 : 7;  // 0xC9 (0xC9)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xC9 (0xC9)
	char pad_202[6];  // 0xCA (0xCA)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xD0 (0xD0)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0xD8 (0xD8)
	char pad_217[3];  // 0xD9 (0xD9)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xDC (0xDC)
	char pad_236[4];  // 0xEC (0xEC)
	struct UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue;  // 0xF0 (0xF0)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x100 (0x100)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x1B0 (0x1B0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x268 (0x268)
	char pad_617_1 : 7;  // 0x269 (0x269)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x269 (0x269)
	char pad_618[2];  // 0x26A (0x26A)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x26C (0x26C)


}; 
 
 // Function GA_IgniteSpell_OnGranted.GA_IgniteSpell_OnGranted_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 
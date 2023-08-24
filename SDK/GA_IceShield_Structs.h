#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_IceShield.GA_IceShield_C.EventReceived_5EB0E3114F71A35895119AB12A8713E4
struct FEventReceived_5EB0E3114F71A35895119AB12A8713E4
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_IceShield.GA_IceShield_C.ExecuteUbergraph_GA_IceShield
struct FExecuteUbergraph_GA_IceShield
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC0 (0xC0)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x180 (0x180)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393_1 : 7;  // 0x189 (0x189)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x189 (0x189)
	char pad_394[6];  // 0x18A (0x18A)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x190 (0x190)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x240 (0x240)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x250 (0x250)
	char pad_593[7];  // 0x251 (0x251)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x258 (0x258)
	char pad_776_1 : 7;  // 0x308 (0x308)
	bool CallFunc_IsLocallyControlled_ReturnValue : 1;  // 0x308 (0x308)


}; 
 
 // Function GA_IceShield.GA_IceShield_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 
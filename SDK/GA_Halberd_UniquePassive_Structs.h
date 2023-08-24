#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Halberd_UniquePassive.GA_Halberd_UniquePassive_C.EventReceived_3EF2DF974793AF751C3C3EBE5273AB0C
struct FEventReceived_3EF2DF974793AF751C3C3EBE5273AB0C
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_Halberd_UniquePassive.GA_Halberd_UniquePassive_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Halberd_UniquePassive.GA_Halberd_UniquePassive_C.ExecuteUbergraph_GA_Halberd_UniquePassive
struct FExecuteUbergraph_GA_Halberd_UniquePassive
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
	char pad_393[7];  // 0x189 (0x189)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x190 (0x190)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x198 (0x198)
	char pad_409[7];  // 0x199 (0x199)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x1A0 (0x1A0)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x250 (0x250)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x258 (0x258)


}; 
 
 
#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GiantWorm_UnderToOn.GA_GiantWorm_UnderToOn_C.ExecuteUbergraph_GA_GiantWorm_UnderToOn
struct FExecuteUbergraph_GA_GiantWorm_UnderToOn
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x14 (0x14)
	char pad_36[4];  // 0x24 (0x24)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x28 (0x28)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD8 (0xD8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x190 (0x190)
	char pad_401[7];  // 0x191 (0x191)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x198 (0x198)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x248 (0x248)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool CallFunc_RemoveGameplayTag_ReturnValue : 1;  // 0x250 (0x250)
	char pad_593_1 : 7;  // 0x251 (0x251)
	bool K2Node_Event_bWasCancelled : 1;  // 0x251 (0x251)


}; 
 
 // Function GA_GiantWorm_UnderToOn.GA_GiantWorm_UnderToOn_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantWorm_UnderToOn.GA_GiantWorm_UnderToOn_C.EventReceived_9E4376F04A212FECF0631BBF0ADFF69C
struct FEventReceived_9E4376F04A212FECF0631BBF0ADFF69C
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantWorm_UnderToOn.GA_GiantWorm_UnderToOn_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 
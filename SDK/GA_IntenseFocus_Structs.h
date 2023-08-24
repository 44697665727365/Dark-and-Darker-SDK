#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_IntenseFocus.GA_IntenseFocus_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_IntenseFocus.GA_IntenseFocus_C.EventReceived_BCE4DF5A4536514977F0C6B37DBA206E
struct FEventReceived_BCE4DF5A4536514977F0C6B37DBA206E
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_IntenseFocus.GA_IntenseFocus_C.ExecuteUbergraph_GA_IntenseFocus
struct FExecuteUbergraph_GA_IntenseFocus
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x10 (0x10)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC0 (0xC0)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x170 (0x170)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385[7];  // 0x181 (0x181)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x188 (0x188)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool CallFunc_K2_HasAuthority_ReturnValue : 1;  // 0x238 (0x238)
	char pad_569[7];  // 0x239 (0x239)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x240 (0x240)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0x248 (0x248)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0x250 (0x250)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x328 (0x328)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x338 (0x338)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0x340 (0x340)


}; 
 
 // Function GA_IntenseFocus.GA_IntenseFocus_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 
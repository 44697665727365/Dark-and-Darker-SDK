#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.ExecuteUbergraph_GA_SkeletonArcher_Attack3
struct FExecuteUbergraph_GA_SkeletonArcher_Attack3
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0x10 (0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC0 (0xC0)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD0 (0xD0)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x180 (0x180)
	char pad_392_1 : 7;  // 0x188 (0x188)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x188 (0x188)
	char pad_393[7];  // 0x189 (0x189)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x190 (0x190)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x198 (0x198)
	char pad_409[7];  // 0x199 (0x199)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1A0 (0x1A0)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool K2Node_Event_bWasCancelled : 1;  // 0x250 (0x250)
	char pad_593[7];  // 0x251 (0x251)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0x258 (0x258)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x260 (0x260)
	char pad_609_1 : 7;  // 0x261 (0x261)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x261 (0x261)


}; 
 
 // Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.EventReceived_8FB9027344203331AB7216B23DB68538
struct FEventReceived_8FB9027344203331AB7216B23DB68538
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 
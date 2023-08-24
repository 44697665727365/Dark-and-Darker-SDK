#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonFootmanPeaceState.GA_SkeletonFootmanPeaceState_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonFootmanPeaceState.GA_SkeletonFootmanPeaceState_C.EventReceived_25EE265A422B5C79E3CBBF8E0732F638
struct FEventReceived_25EE265A422B5C79E3CBBF8E0732F638
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_SkeletonFootmanPeaceState.GA_SkeletonFootmanPeaceState_C.ExecuteUbergraph_GA_SkeletonFootmanPeaceState
struct FExecuteUbergraph_GA_SkeletonFootmanPeaceState
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0xB8 (0xB8)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0xC0 (0xC0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x170 (0x170)
	struct FGameplayEventData Temp_struct_Variable;  // 0x180 (0x180)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x230 (0x230)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x238 (0x238)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x240 (0x240)


}; 
 
 
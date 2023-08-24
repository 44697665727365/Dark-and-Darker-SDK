#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LichNormalAttack.GA_LichNormalAttack_C.ExecuteUbergraph_GA_LichNormalAttack
struct FExecuteUbergraph_GA_LichNormalAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0xC8 (0xC8)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0xD0 (0xD0)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0x180 (0x180)
	struct FGameplayEventData Temp_struct_Variable;  // 0x188 (0x188)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x238 (0x238)
	char pad_569_1 : 7;  // 0x239 (0x239)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x239 (0x239)
	char pad_570[2];  // 0x23A (0x23A)
	struct FGameplayTag Temp_struct_Variable_2;  // 0x23C (0x23C)
	char pad_580_1 : 7;  // 0x244 (0x244)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x244 (0x244)
	char pad_581[3];  // 0x245 (0x245)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x248 (0x248)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x250 (0x250)


}; 
 
 // Function GA_LichNormalAttack.GA_LichNormalAttack_C.EventReceived_3D96C36F4FAC76511505409F6321DC9E
struct FEventReceived_3D96C36F4FAC76511505409F6321DC9E
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_LichNormalAttack.GA_LichNormalAttack_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 
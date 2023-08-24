#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Cockatrice.BP_Cockatrice_C.ExecuteUbergraph_BP_Cockatrice
struct FExecuteUbergraph_BP_Cockatrice
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x4 (0x4)
	int32_t K2Node_Event_InCount;  // 0xC (0xC)
	struct FMsgSoundEvent K2Node_Event_Msg;  // 0x10 (0x10)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x39 (0x39)
	char pad_58_1 : 7;  // 0x3A (0x3A)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x3A (0x3A)
	char pad_59[1];  // 0x3B (0x3B)
	int32_t CallFunc_RandomIntegerInRange_ReturnValue;  // 0x3C (0x3C)
	int32_t CallFunc_Get_BB_Phase_Phase;  // 0x40 (0x40)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x44 (0x44)


}; 
 
 // Function BP_Cockatrice.BP_Cockatrice_C.EventFMsgSoundEvent
// Size: 0x28(Inherited: 0x28)
struct FEventFMsgSoundEvent : FEventFMsgSoundEvent
{
	struct FMsgSoundEvent Msg;  // 0x0 (0x0)


}; 
 
 // Function BP_Cockatrice.BP_Cockatrice_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 
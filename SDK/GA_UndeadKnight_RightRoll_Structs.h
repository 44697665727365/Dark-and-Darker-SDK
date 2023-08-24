#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_UndeadKnight_RightRoll.GA_UndeadKnight_RightRoll_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_UndeadKnight_RightRoll.GA_UndeadKnight_RightRoll_C.ExecuteUbergraph_GA_UndeadKnight_RightRoll
struct FExecuteUbergraph_GA_UndeadKnight_RightRoll
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xC0 (0xC0)


}; 
 
 
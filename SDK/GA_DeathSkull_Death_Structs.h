#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DeathSkull_Death.GA_DeathSkull_Death_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DeathSkull_Death.GA_DeathSkull_Death_C.ExecuteUbergraph_GA_DeathSkull_Death
struct FExecuteUbergraph_GA_DeathSkull_Death
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct ABP_DeathSkull_Common_Summoned_C* K2Node_DynamicCast_AsBP_Death_Skull_Common_Summoned;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x20 (0x20)


}; 
 
 
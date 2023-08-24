#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LavaMonster_WakeUp.GA_LavaMonster_WakeUp_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_LavaMonster_WakeUp.GA_LavaMonster_WakeUp_C.ExecuteUbergraph_GA_LavaMonster_WakeUp
struct FExecuteUbergraph_GA_LavaMonster_WakeUp
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xB8 (0xB8)
	struct ABP_LavaMonster_Common_C* K2Node_DynamicCast_AsBP_Lava_Monster_Common;  // [xC0 ([xC0)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xC8 (0xC8)


}; 
 
 
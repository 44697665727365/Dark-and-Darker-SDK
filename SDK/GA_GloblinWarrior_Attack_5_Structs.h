#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GloblinWarrior_Attack_5.GA_GloblinWarrior_Attack_4_C.ExecuteUbergraph_GA_GloblinWarrior_Attack_5
struct FExecuteUbergraph_GA_GloblinWarrior_Attack_5
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool Temp_bool_Variable : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool K2Node_Event_bWasCancelled : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xB8 (0xB8)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0xC0 (0xC0)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xD0 (0xD0)
	char pad_209_1 : 7;  // 0xD1 (0xD1)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0xD1 (0xD1)


}; 
 
 // Function GA_GloblinWarrior_Attack_5.GA_GloblinWarrior_Attack_4_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GloblinWarrior_Attack_5.GA_GloblinWarrior_Attack_4_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 
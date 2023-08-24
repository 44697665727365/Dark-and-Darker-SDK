#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LavaMonster_Death.GA_LavaMonster_Death_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_LavaMonster_Death.GA_LavaMonster_Death_C.ExecuteUbergraph_GA_LavaMonster_Death
struct FExecuteUbergraph_GA_LavaMonster_Death
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool Temp_bool_Variable : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xB8 (0xB8)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0xC0 (0xC0)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xD0 (0xD0)
	char pad_209_1 : 7;  // 0xD1 (0xD1)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0xD1 (0xD1)


}; 
 
 
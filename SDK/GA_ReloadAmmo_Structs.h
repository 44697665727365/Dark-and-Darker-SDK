#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ReloadAmmo.GA_ReloadAmmo_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_ReloadAmmo.GA_ReloadAmmo_C.ExecuteUbergraph_GA_ReloadAmmo
struct FExecuteUbergraph_GA_ReloadAmmo
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayTagContainer CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool Temp_bool_Variable : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x30 (0x30)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xE0 (0xE0)
	struct FGameplayTagContainer CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2;  // 0xE8 (0xE8)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x108 (0x108)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x118 (0x118)
	char pad_281_1 : 7;  // 0x119 (0x119)
	bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue : 1;  // 0x119 (0x119)


}; 
 
 
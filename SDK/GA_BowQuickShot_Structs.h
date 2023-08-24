#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_BowQuickShot.GA_BowQuickShot_C.ExecuteUbergraph_GA_BowQuickShot
struct FExecuteUbergraph_GA_BowQuickShot
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Temp_bool_Variable : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x29 (0x29)
	char pad_42[6];  // 0x2A (0x2A)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x30 (0x30)
	struct FGameplayTagContainer CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;  // 0xE0 (0xE0)


}; 
 
 // Function GA_BowQuickShot.GA_BowQuickShot_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 
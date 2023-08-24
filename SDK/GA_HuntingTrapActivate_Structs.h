#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_HuntingTrapActivate.GA_HuntingTrapActivate_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_HuntingTrapActivate.GA_HuntingTrapActivate_C.ExecuteUbergraph_GA_HuntingTrapActivate
struct FExecuteUbergraph_GA_HuntingTrapActivate
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0xB8 (0xB8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0xC8 (0xC8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_3;  // 0xD8 (0xD8)
	struct ABP_DCMonsterBase_C* K2Node_DynamicCast_AsBP_DCMonster_Base;  // 0xE8 (0xE8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xF0 (0xF0)
	char pad_241[7];  // 0xF1 (0xF1)
	struct ADCPlayerCharacterBase* K2Node_DynamicCast_AsDCPlayer_Character_Base;  // 0xF8 (0xF8)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x100 (0x100)


}; 
 
 
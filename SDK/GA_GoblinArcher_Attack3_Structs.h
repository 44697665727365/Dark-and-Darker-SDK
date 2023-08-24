#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GoblinArcher_Attack3.GA_GoblinArcher_Attack3_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GoblinArcher_Attack3.GA_GoblinArcher_Attack3_C.ExecuteUbergraph_GA_GoblinArcher_Attack3
struct FExecuteUbergraph_GA_GoblinArcher_Attack3
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool Temp_bool_Variable : 1;  // 0xB8 (0xB8)
	char pad_185_1 : 7;  // 0xB9 (0xB9)
	bool K2Node_Event_bWasCancelled : 1;  // 0xB9 (0xB9)
	char pad_186[6];  // 0xBA (0xBA)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xC0 (0xC0)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0xC8 (0xC8)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xD8 (0xD8)
	char pad_217_1 : 7;  // 0xD9 (0xD9)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0xD9 (0xD9)


}; 
 
 // Function GA_GoblinArcher_Attack3.GA_GoblinArcher_Attack3_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 
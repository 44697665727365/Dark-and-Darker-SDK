#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ZombieAttackPhase.GA_ZombieAttackPhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_ZombieAttackPhase.GA_ZombieAttackPhase_C.EventReceived_5F8B5C6D458A326FAED185915655BF55
struct FEventReceived_5F8B5C6D458A326FAED185915655BF55
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_ZombieAttackPhase.GA_ZombieAttackPhase_C.ExecuteUbergraph_GA_ZombieAttackPhase
struct FExecuteUbergraph_GA_ZombieAttackPhase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385_1 : 7;  // 0x181 (0x181)
	bool Temp_bool_Variable : 1;  // 0x181 (0x181)
	char pad_386_1 : 7;  // 0x182 (0x182)
	bool CallFunc_RandomBool_ReturnValue : 1;  // 0x182 (0x182)
	char pad_387[5];  // 0x183 (0x183)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x188 (0x188)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x238 (0x238)
	struct TScriptInterface<IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;  // 0x240 (0x240)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x250 (0x250)
	char pad_593_1 : 7;  // 0x251 (0x251)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x251 (0x251)


}; 
 
 
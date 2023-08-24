#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ZombiePoisonCloud.GA_ZombiePoisonCloud_C.ExecuteUbergraph_GA_ZombiePoisonCloud
struct FExecuteUbergraph_GA_ZombiePoisonCloud
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xB8 (0xB8)
	struct FVector Temp_struct_Variable;  // 0xC0 (0xC0)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0xD8 (0xD8)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xE0 (0xE0)
	char pad_225_1 : 7;  // 0xE1 (0xE1)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0xE1 (0xE1)
	char pad_226[6];  // 0xE2 (0xE2)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0xE8 (0xE8)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x198 (0x198)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool K2Node_Event_bWasCancelled : 1;  // 0x1A8 (0x1A8)
	char pad_425[3];  // 0x1A9 (0x1A9)
	int32_t CallFunc_Array_Add_ReturnValue;  // 0x1AC (0x1AC)


}; 
 
 // Function GA_ZombiePoisonCloud.GA_ZombiePoisonCloud_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_ZombiePoisonCloud.GA_ZombiePoisonCloud_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 
#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_MummySpawn1.GA_MummySpawn1_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_MummySpawn1.GA_MummySpawn1_C.ExecuteUbergraph_GA_MummySpawn1
struct FExecuteUbergraph_GA_MummySpawn1
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xB8 (0xB8)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0xC0 (0xC0)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0xD8 (0xD8)


}; 
 
 
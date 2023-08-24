#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DemonBat_FlyToHanging.GA_DemonBat_FlyToHanging_C.ExecuteUbergraph_GA_DemonBat_FlyToHanging
struct FExecuteUbergraph_GA_DemonBat_FlyToHanging
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_Event_bWasCancelled : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x20 (0x20)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xD0 (0xD0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function GA_DemonBat_FlyToHanging.GA_DemonBat_FlyToHanging_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DemonBat_FlyToHanging.GA_DemonBat_FlyToHanging_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 
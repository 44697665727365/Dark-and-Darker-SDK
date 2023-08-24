#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_UndeadKnight_SprintAttack.GA_UndeadKnight_SprintAttack_C.ExecuteUbergraph_GA_UndeadKnight_SprintAttack
struct FExecuteUbergraph_GA_UndeadKnight_SprintAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_Event_bWasCancelled : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x20 (0x20)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function GA_UndeadKnight_SprintAttack.GA_UndeadKnight_SprintAttack_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 
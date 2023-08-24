#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_LocustsSwarmAttack.GA_LocustsSwarmAttack_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_LocustsSwarmAttack.GA_LocustsSwarmAttack_C.ExecuteUbergraph_GA_LocustsSwarmAttack
struct FExecuteUbergraph_GA_LocustsSwarmAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x8 (0x8)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool CallFunc_K2_CommitAbility_ReturnValue : 1;  // 0xB8 (0xB8)
	char pad_185_1 : 7;  // 0xB9 (0xB9)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xB9 (0xB9)
	char pad_186[6];  // 0xBA (0xBA)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xC0 (0xC0)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0xC8 (0xC8)
	char pad_201[7];  // 0xC9 (0xC9)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0xD0 (0xD0)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyPremadeSpecArray_ReturnValue;  // 0x180 (0x180)


}; 
 
 
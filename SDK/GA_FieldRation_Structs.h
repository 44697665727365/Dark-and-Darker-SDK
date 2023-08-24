#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_FieldRation.GA_FieldRation_C.ExecuteUbergraph_GA_FieldRation
struct FExecuteUbergraph_GA_FieldRation
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x4 (0x4)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x18 (0x18)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x20 (0x20)
	struct USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;  // 0xD0 (0xD0)
	struct FGameplayCueParameters CallFunc_MakeGameplayCueParameters_ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function GA_FieldRation.GA_FieldRation_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_FieldRation.GA_FieldRation_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 
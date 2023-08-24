#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SecondWind.GA_SecondWind_C.ExecuteUbergraph_GA_SecondWind
struct FExecuteUbergraph_GA_SecondWind
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_Event_SkillTag;  // 0x4 (0x4)
	struct FGameplayTag K2Node_Event_CooldownTag;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;  // 0x18 (0x18)
	struct UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;  // 0x38 (0x38)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x48 (0x48)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x58 (0x58)


}; 
 
 // Function GA_SecondWind.GA_SecondWind_C.ServerOnSkillActivate
// Size: 0x10(Inherited: 0x10)
struct FServerOnSkillActivate : FServerOnSkillActivate
{
	struct FGameplayTag SkillTag;  // 0x0 (0x0)
	struct FGameplayTag CooldownTag;  // 0x8 (0x8)


}; 
 
 
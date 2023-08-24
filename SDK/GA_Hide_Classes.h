#pragma once 
#include <GA_Hide_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Hide.GA_Hide_C
// Size: 0x6E0(Inherited: 0x680)
struct UGA_Hide_C : UGA_PlayerSkillInstantAndWaitForEnd_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x680 (0x680)
	struct FText lightSourceMSG;  // 0x688 (0x688)
	struct FLinearColor Color;  // 0x6A0 (0x6A0)
	struct FGameplayTag Tag to Check;  // 0x6B0 (0x6B0)
	struct FText InLightAreaMessage;  // 0x6B8 (0x6B8)
	struct FGameplayTag LightSourceEquippedStateTag;  // 0x6D0 (0x6D0)
	struct FGameplayTag InLightAreaStateTag;  // 0x6D8 (0x6D8)


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_Hide.GA_Hide_C.K2_CanActivateAbility
	void EventReceived_4E31C2814B584A132D94CB837DF6501D(struct FGameplayEventData Payload); // Function GA_Hide.GA_Hide_C.EventReceived_4E31C2814B584A132D94CB837DF6501D
	void Added_1ED887114F55437A29F67D82626B5D70(); // Function GA_Hide.GA_Hide_C.Added_1ED887114F55437A29F67D82626B5D70
	void Added_40502DB04EA0EDBB14D55C912E356636(); // Function GA_Hide.GA_Hide_C.Added_40502DB04EA0EDBB14D55C912E356636
	void OnOverlap_3D5EB7E94BCEDEC27E42A881ABEFEC36(struct FGameplayAbilityTargetDataHandle& TargetData); // Function GA_Hide.GA_Hide_C.OnOverlap_3D5EB7E94BCEDEC27E42A881ABEFEC36
	void Added_6006FEFF4AFD4D44772019B0CAD4EAAD(); // Function GA_Hide.GA_Hide_C.Added_6006FEFF4AFD4D44772019B0CAD4EAAD
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Hide.GA_Hide_C.AbilityActivated
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_Hide.GA_Hide_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_Hide(int32_t EntryPoint); // Function GA_Hide.GA_Hide_C.ExecuteUbergraph_GA_Hide
}; 
 
 



#pragma once 
#include <GA_Judgement_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Judgement.GA_Judgement_C
// Size: 0x79A(Inherited: 0x758)
struct UGA_Judgement_C : UGA_PlayerSkillCast_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x758 (0x758)
	struct AActor* Target;  // 0x760 (0x760)
	struct FText TargetEmptyMessage;  // 0x768 (0x768)
	struct FText TargetOutRangeMessage;  // 0x780 (0x780)
	char pad_1944_1 : 7;  // 0x798 (0x798)
	bool PrevCheckInvisible : 1;  // 0x798 (0x798)
	char pad_1945_1 : 7;  // 0x799 (0x799)
	bool AfterCheckInvisible : 1;  // 0x799 (0x799)


	void IsTargetOutOfRange(bool& Result); // Function GA_Judgement.GA_Judgement_C.IsTargetOutOfRange
	void GetAimTraceTarget(double MaxRange, bool& Result); // Function GA_Judgement.GA_Judgement_C.GetAimTraceTarget
	void BroadcastSystemMessage(struct FText SystemMessage); // Function GA_Judgement.GA_Judgement_C.BroadcastSystemMessage
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Judgement.GA_Judgement_C.AbilityActivated
	void ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag); // Function GA_Judgement.GA_Judgement_C.ServerOnSkillActivate
	void ExecuteUbergraph_GA_Judgement(int32_t EntryPoint); // Function GA_Judgement.GA_Judgement_C.ExecuteUbergraph_GA_Judgement
}; 
 
 



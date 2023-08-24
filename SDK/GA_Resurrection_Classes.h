#pragma once 
#include <GA_Resurrection_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Resurrection.GA_Resurrection_C
// Size: 0x770(Inherited: 0x618)
struct UGA_Resurrection_C : UGA_Spell_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x618 (0x618)
	struct ABP_PlayerCharacter_C* CorpseActor;  // 0x620 (0x620)
	char pad_1576_1 : 7;  // 0x628 (0x628)
	bool IsPartyMember : 1;  // 0x628 (0x628)
	char pad_1577[7];  // 0x629 (0x629)
	struct FString AccountId;  // 0x630 (0x630)
	char pad_1600_1 : 7;  // 0x640 (0x640)
	bool OnResurrection : 1;  // 0x640 (0x640)
	char pad_1601[7];  // 0x641 (0x641)
	struct UDCAT_WaitVelocityChange* Task_VelocityChange;  // 0x648 (0x648)
	double ResurrectionHealth;  // 0x650 (0x650)
	struct UAbilityTask_WaitGameplayEvent* Task_Cnacel;  // 0x658 (0x658)
	struct FText Msg_ChannelingCancel;  // 0x660 (0x660)
	struct FText Msg_NotValidTarget;  // 0x678 (0x678)
	struct FText Msg_IsTargetLiving;  // 0x690 (0x690)
	struct FText Msg_IsNotSoulHeart;  // 0x6A8 (0x6A8)
	struct FText Msg_IsNotSoulHeart_2;  // 0x6C0 (0x6C0)
	struct FText Msg_IsPartiMember;  // 0x6D8 (0x6D8)
	struct FText Msg_AimOverDir;  // 0x6F0 (0x6F0)
	struct FText Msg_SpellActorEmpty;  // 0x708 (0x708)
	struct FDCGameplayEffectData RespawnHealthEffectData;  // 0x720 (0x720)
	ADCCharacterProduction* CharacterProduction;  // 0x768 (0x768)


	void BroadcastSystemMessage(struct FText SystemMessage); // Function GA_Resurrection.GA_Resurrection_C.BroadcastSystemMessage
	void CheckSoulHeartEquip(bool& Result); // Function GA_Resurrection.GA_Resurrection_C.CheckSoulHeartEquip
	void Check Corpse Is Party Member(struct FString PartyId); // Function GA_Resurrection.GA_Resurrection_C.Check Corpse Is Party Member
	void Cancelled_EA1ED724476E505943D50C8012DA1AF4(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Resurrection.GA_Resurrection_C.Cancelled_EA1ED724476E505943D50C8012DA1AF4
	void ValidData_EA1ED724476E505943D50C8012DA1AF4(struct FGameplayAbilityTargetDataHandle& Data); // Function GA_Resurrection.GA_Resurrection_C.ValidData_EA1ED724476E505943D50C8012DA1AF4
	void OnDirectionChanged_CF4D66C54B0F5708CE4F1D9E3DBB3CF7(); // Function GA_Resurrection.GA_Resurrection_C.OnDirectionChanged_CF4D66C54B0F5708CE4F1D9E3DBB3CF7
	void EventReceived_BE736C43450D5B046C0B1F9F28997628(struct FGameplayEventData Payload); // Function GA_Resurrection.GA_Resurrection_C.EventReceived_BE736C43450D5B046C0B1F9F28997628
	void EventReceived_9BDC3DCE498E0FDB511BA29F64F2685F(struct FGameplayEventData Payload); // Function GA_Resurrection.GA_Resurrection_C.EventReceived_9BDC3DCE498E0FDB511BA29F64F2685F
	void AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked); // Function GA_Resurrection.GA_Resurrection_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Resurrection.GA_Resurrection_C.K2_OnEndAbility
	void StartResurrection(); // Function GA_Resurrection.GA_Resurrection_C.StartResurrection
	void EndSpell(struct FText SystemMessage, bool IsEndAbilty); // Function GA_Resurrection.GA_Resurrection_C.EndSpell
	void ExecuteUbergraph_GA_Resurrection(int32_t EntryPoint); // Function GA_Resurrection.GA_Resurrection_C.ExecuteUbergraph_GA_Resurrection
}; 
 
 



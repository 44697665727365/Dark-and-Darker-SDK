#pragma once 
#include <GA_CentaurDemon_SprintPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C
// Size: 0x6F0(Inherited: 0x580)
struct UGA_CentaurDemon_SprintPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FGameplayEventData Event Data;  // 0x588 (0x588)
	struct ABP_DCMonsterBaseWithOptions_C* Caster;  // 0x638 (0x638)
	struct ADCCharacterBase* Target;  // 0x640 (0x640)
	struct FVector Caster Location;  // 0x648 (0x648)
	struct FVector Target Location;  // 0x660 (0x660)
	struct FVector Caster Forward Location;  // 0x678 (0x678)
	struct FRotator Caster To Target Rotation;  // 0x690 (0x690)
	struct FVector Caster To Target Forward Location;  // 0x6A8 (0x6A8)
	double Caster To Target Distance;  // 0x6C0 (0x6C0)
	struct FTimerHandle MoveFail TimerHandle;  // 0x6C8 (0x6C8)
	struct FTimerHandle Input Movement TimerHandle;  // 0x6D0 (0x6D0)
	char pad_1752_1 : 7;  // 0x6D8 (0x6D8)
	bool Reached : 1;  // 0x6D8 (0x6D8)
	char pad_1753[7];  // 0x6D9 (0x6D9)
	double DistanceToCharge;  // 0x6E0 (0x6E0)
	struct FGameplayTag Attack Choice Event Tag;  // 0x6E8 (0x6E8)


	void Set Variables(struct FGameplayEventData Event Data, bool& Result); // Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.Set Variables
	void EventReceived_235F91F447562B0F4256E28837D68907(struct FGameplayEventData Payload); // Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.EventReceived_235F91F447562B0F4256E28837D68907
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.AbilityActivated
	void MoveTimer(); // Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.MoveTimer
	void Add Input Movement(); // Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.Add Input Movement
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_CentaurDemon_SprintPhase(int32_t EntryPoint); // Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.ExecuteUbergraph_GA_CentaurDemon_SprintPhase
}; 
 
 



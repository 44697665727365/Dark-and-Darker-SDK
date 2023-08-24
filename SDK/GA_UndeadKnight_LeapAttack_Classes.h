#pragma once 
#include <GA_UndeadKnight_LeapAttack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C
// Size: 0x700(Inherited: 0x6C9)
struct UGA_UndeadKnight_LeapAttack_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct ADCCharacterBase* Controlled Pawn;  // 0x6D8 (0x6D8)
	struct ADCCharacterBase* As DCCharacter Base;  // 0x6E0 (0x6E0)
	int32_t DistanceSwitch;  // 0x6E8 (0x6E8)
	char pad_1772[4];  // 0x6EC (0x6EC)
	double JumpHeightValue;  // 0x6F0 (0x6F0)
	double DefaultJumpHeight;  // 0x6F8 (0x6F8)


	void EventReceived_72C25031498FC089C1AC9D9A4F6521BD(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.EventReceived_72C25031498FC089C1AC9D9A4F6521BD
	void OnChange_7D22AAB54594BBCBA38D60B6F1252082(enum class EMovementMode NewMovementMode); // Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.OnChange_7D22AAB54594BBCBA38D60B6F1252082
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.AbilityActivated
	void ExecuteUbergraph_GA_UndeadKnight_LeapAttack(int32_t EntryPoint); // Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.ExecuteUbergraph_GA_UndeadKnight_LeapAttack
}; 
 
 



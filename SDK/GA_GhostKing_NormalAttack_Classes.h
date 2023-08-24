#pragma once 
#include <GA_GhostKing_NormalAttack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C
// Size: 0x73C(Inherited: 0x6C0)
struct UGA_GhostKing_NormalAttack_C : UGA_MonsterChargedRangedAttackBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6C0 (0x6C0)
	struct ABP_GhostKing_Common_C* As BP Ghost King;  // 0x6C8 (0x6C8)
	struct FGameplayAbilityTargetDataHandle Payload Target Data;  // 0x6D0 (0x6D0)
	double Start Z Rotation;  // 0x6F8 (0x6F8)
	double Random Range;  // 0x700 (0x700)
	double Rotate Z Angle;  // 0x708 (0x708)
	double Interval;  // 0x710 (0x710)
	double Temp Z Rotation;  // 0x718 (0x718)
	struct ADCCharacterBase* As DCCharacter Base;  // 0x720 (0x720)
	struct TArray<struct FRotator> Temp Rotation Array;  // 0x728 (0x728)
	int32_t Temp Index;  // 0x738 (0x738)


	void Set Variables(struct FGameplayEventData Trigger Event Data); // Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.Set Variables
	void EventReceived_442DA6E34A7324E0185013B9B8192AE7(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.EventReceived_442DA6E34A7324E0185013B9B8192AE7
	void OnSuccess_C7A010454D363CFFE342A88C155A0B81(struct AActor* ProjectileActor); // Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.OnSuccess_C7A010454D363CFFE342A88C155A0B81
	void EventReceived_808334F54FC668822F461982A5C1F828(struct FGameplayEventData Payload); // Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.EventReceived_808334F54FC668822F461982A5C1F828
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.AbilityActivated
	void CreateProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower, struct FVector StartLocation); // Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.CreateProjectiles
	void ExecuteUbergraph_GA_GhostKing_NormalAttack(int32_t EntryPoint); // Function GA_GhostKing_NormalAttack.GA_GhostKing_NormalAttack_C.ExecuteUbergraph_GA_GhostKing_NormalAttack
}; 
 
 



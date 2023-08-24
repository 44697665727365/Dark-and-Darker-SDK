#pragma once 
#include <GA_GhostKing_NormalAttack_Return_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C
// Size: 0x708(Inherited: 0x6C0)
struct UGA_GhostKing_NormalAttack_Return_C : UGA_MonsterChargedRangedAttackBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6C0 (0x6C0)
	struct ABP_GhostKing_Common_C* As BP Ghost King;  // 0x6C8 (0x6C8)
	struct FVector Spawn Location;  // 0x6D0 (0x6D0)
	struct FRotator Spawn Rotation;  // 0x6E8 (0x6E8)
	double Random Angle;  // 0x700 (0x700)


	void OnSuccess_FEEF2ADC496CDFE7AE74449D038508D7(struct AActor* ProjectileActor); // Function GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C.OnSuccess_FEEF2ADC496CDFE7AE74449D038508D7
	void OnSuccess_5F7376234ACAB284769674B6CAA713A2(struct AActor* ProjectileActor); // Function GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C.OnSuccess_5F7376234ACAB284769674B6CAA713A2
	void OnSuccess_FB2F52A3488E48849B6EEB88441917EB(struct AActor* ProjectileActor); // Function GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C.OnSuccess_FB2F52A3488E48849B6EEB88441917EB
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C.AbilityActivated
	void ExecuteUbergraph_GA_GhostKing_NormalAttack_Return(int32_t EntryPoint); // Function GA_GhostKing_NormalAttack_Return.GA_GhostKing_NormalAttack_Return_C.ExecuteUbergraph_GA_GhostKing_NormalAttack_Return
}; 
 
 



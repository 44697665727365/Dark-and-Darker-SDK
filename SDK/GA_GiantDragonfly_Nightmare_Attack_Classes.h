#pragma once 
#include <GA_GiantDragonfly_Nightmare_Attack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C
// Size: 0x7C0(Inherited: 0x774)
struct UGA_GiantDragonfly_Nightmare_Attack_C : UGA_MonsterProjectileAttackBase_C
{
	char pad_1908[4];  // 0x774 (0x774)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x778 (0x778)
	double Interval;  // 0x780 (0x780)
	double StartZAngle;  // 0x788 (0x788)
	double RotateZValue;  // 0x790 (0x790)
	double StartYAngle;  // 0x798 (0x798)
	double RotateYValue;  // 0x7A0 (0x7A0)
	double Probability;  // 0x7A8 (0x7A8)
	struct FName Key TargetActor;  // 0x7B0 (0x7B0)
	double Shot Num;  // 0x7B8 (0x7B8)


	void Get Angle And Interval Per Shot Num(double ShotNum, double& Interval, double& Final Y Angle, double& Final Z Angle); // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.Get Angle And Interval Per Shot Num
	void OnSuccess_9E9F6B0B4BA065DB8AF30BBB0F498205(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBB0F498205
	void OnSuccess_9E9F6B0B4BA065DB8AF30BBB05DFD7FC(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBB05DFD7FC
	void OnSuccess_9E9F6B0B4BA065DB8AF30BBBE92421A0(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBBE92421A0
	void OnSuccess_9E9F6B0B4BA065DB8AF30BBBBFFEABE2(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBBBFFEABE2
	void OnSuccess_9E9F6B0B4BA065DB8AF30BBB5D40B8EA(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBB5D40B8EA
	void OnSuccess_9E9F6B0B4BA065DB8AF30BBB08113BB4(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBB08113BB4
	void OnSuccess_9E9F6B0B4BA065DB8AF30BBBCAD85734(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBBCAD85734
	void OnSuccess_9E9F6B0B4BA065DB8AF30BBBE9D06A9E(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBBE9D06A9E
	void OnSuccess_9E9F6B0B4BA065DB8AF30BBB5E67680C(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBB5E67680C
	void OnSuccess_9E9F6B0B4BA065DB8AF30BBB7AB1E0EC(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.OnSuccess_9E9F6B0B4BA065DB8AF30BBB7AB1E0EC
	void EventReceived_7BF99EE2479BE6473270DA8A6330CECE(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.EventReceived_7BF99EE2479BE6473270DA8A6330CECE
	void CreateProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower, struct FVector StartLocation); // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.CreateProjectiles
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.AbilityActivated
	void ExecuteUbergraph_GA_GiantDragonfly_Nightmare_Attack(int32_t EntryPoint); // Function GA_GiantDragonfly_Nightmare_Attack.GA_GiantDragonfly_Nightmare_Attack_C.ExecuteUbergraph_GA_GiantDragonfly_Nightmare_Attack
}; 
 
 



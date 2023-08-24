#pragma once 
#include <GA_GiantDragonfly_Attack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C
// Size: 0x7B8(Inherited: 0x774)
struct UGA_GiantDragonfly_Attack_C : UGA_MonsterProjectileAttackBase_C
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


	void Get Angle And Interval Per Shot Num(double ShotNum, double& Interval, double& Final Y Angle, double& Final Z Angle); // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.Get Angle And Interval Per Shot Num
	void OnSuccess_CDC5EED6459E6038C7E9AF8563E48374(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_CDC5EED6459E6038C7E9AF8563E48374
	void OnSuccess_071F11194890A77D250DD8981AE1965F(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_071F11194890A77D250DD8981AE1965F
	void OnSuccess_8D0746724A5BB8C55BD729A85796F151(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_8D0746724A5BB8C55BD729A85796F151
	void OnSuccess_B006B21D49F0C69A4B3DBFB20E8708E8(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_B006B21D49F0C69A4B3DBFB20E8708E8
	void OnSuccess_170067C34A65D85FB84E42B93D304C35(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_170067C34A65D85FB84E42B93D304C35
	void OnSuccess_DB727C2149FAF71130EEA6BD7E2097BD(struct AActor* ProjectileActor); // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.OnSuccess_DB727C2149FAF71130EEA6BD7E2097BD
	void EventReceived_D5ACA6FE440316AD030BBD9DAFC03B8C(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.EventReceived_D5ACA6FE440316AD030BBD9DAFC03B8C
	void CreateProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower, struct FVector StartLocation); // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.CreateProjectiles
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.AbilityActivated
	void ExecuteUbergraph_GA_GiantDragonfly_Attack(int32_t EntryPoint); // Function GA_GiantDragonfly_Attack.GA_GiantDragonfly_Attack_C.ExecuteUbergraph_GA_GiantDragonfly_Attack
}; 
 
 



#pragma once 
#include <GA_AoeCallerAtLocation_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C
// Size: 0x5B8(Inherited: 0x558)
struct UGA_AoeCallerAtLocation_C : UDCGameplayAbilityBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	enum class E_TargetType TargetType;  // 0x560 (0x560)
	char pad_1377[7];  // 0x561 (0x561)
	ADCAoeBase* Aoe Class;  // 0x568 (0x568)
	struct TArray<struct FVector> SpawnLocation;  // 0x570 (0x570)
	double RandomSpawnRadius;  // 0x580 (0x580)
	double Interval;  // 0x588 (0x588)
	double Life Time;  // 0x590 (0x590)
	struct ADCCharacterBase* As DCCharacter Base;  // 0x598 (0x598)
	int32_t CountingAoe;  // 0x5A0 (0x5A0)
	char pad_1444[4];  // 0x5A4 (0x5A4)
	struct FTimerHandle Interval TimerHandle;  // 0x5A8 (0x5A8)
	struct FTimerHandle Expire TimerHandle;  // 0x5B0 (0x5B0)


	void K2_ActivateAbility(); // Function GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C.K2_ActivateAbility
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C.K2_OnEndAbility
	void SpawnAoe(); // Function GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C.SpawnAoe
	void Expire(); // Function GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C.Expire
	void ExecuteUbergraph_GA_AoeCallerAtLocation(int32_t EntryPoint); // Function GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C.ExecuteUbergraph_GA_AoeCallerAtLocation
}; 
 
 



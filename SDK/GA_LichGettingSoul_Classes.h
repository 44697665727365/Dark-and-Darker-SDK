#pragma once 
#include <GA_LichGettingSoul_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LichGettingSoul.GA_LichGettingSoul_C
// Size: 0x708(Inherited: 0x6C0)
struct UGA_LichGettingSoul_C : UGA_MonsterChargedRangedAttackBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6C0 (0x6C0)
	struct FGameplayAbilityTargetDataHandle Hit Result;  // 0x6C8 (0x6C8)
	struct TArray<struct ADCCharacterBase*> Target Array;  // 0x6F0 (0x6F0)
	struct ADCCharacterBase* DCCharacter Base;  // 0x700 (0x700)


	void OnFinish_E5007C9E42916C8FCF424BAE68C22CB5(); // Function GA_LichGettingSoul.GA_LichGettingSoul_C.OnFinish_E5007C9E42916C8FCF424BAE68C22CB5
	void OnSuccess_EA869A204A64C395D509E9B47D4CA2F2(struct AActor* ProjectileActor); // Function GA_LichGettingSoul.GA_LichGettingSoul_C.OnSuccess_EA869A204A64C395D509E9B47D4CA2F2
	void OnFinish_D88957B147BE64E8579E43A01CBAC343(); // Function GA_LichGettingSoul.GA_LichGettingSoul_C.OnFinish_D88957B147BE64E8579E43A01CBAC343
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_LichGettingSoul.GA_LichGettingSoul_C.AbilityActivated
	void ExecuteUbergraph_GA_LichGettingSoul(int32_t EntryPoint); // Function GA_LichGettingSoul.GA_LichGettingSoul_C.ExecuteUbergraph_GA_LichGettingSoul
}; 
 
 



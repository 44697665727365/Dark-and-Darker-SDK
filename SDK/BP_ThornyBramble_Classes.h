#pragma once 
#include <BP_ThornyBramble_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_ThornyBramble.BP_ThornyBramble_C
// Size: 0x628(Inherited: 0x554)
struct ABP_ThornyBramble_C : ABP_TrapBase_C
{
	char pad_1364[4];  // 0x554 (0x554)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct UBoxComponent* BlockBox;  // 0x560 (0x560)
	struct UBoxComponent* CollisionBox;  // 0x568 (0x568)
	struct UStaticMeshComponent* SM_Type_C2;  // 0x570 (0x570)
	struct UStaticMeshComponent* SM_Type_A4;  // 0x578 (0x578)
	struct UStaticMeshComponent* SM_Type_A3;  // 0x580 (0x580)
	struct UStaticMeshComponent* SM_Type_A2;  // 0x588 (0x588)
	struct UStaticMeshComponent* SM_Type_C1;  // 0x590 (0x590)
	struct UStaticMeshComponent* SM_Type_A1;  // 0x598 (0x598)
	struct UStaticMeshComponent* SM_Type_C;  // 0x5A0 (0x5A0)
	struct UStaticMeshComponent* SM_Type_B;  // 0x5A8 (0x5A8)
	struct UStaticMeshComponent* SM_Type_A;  // 0x5B0 (0x5B0)
	struct UFieldSystemComponent* FieldSystem;  // 0x5B8 (0x5B8)
	struct UDCGeometryCollectionComponent* DCGeometryCollection;  // 0x5C0 (0x5C0)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x5C8 (0x5C8)
	char pad_1488_1 : 7;  // 0x5D0 (0x5D0)
	bool OnImmuneToDamage : 1;  // 0x5D0 (0x5D0)
	char pad_1489[3];  // 0x5D1 (0x5D1)
	int32_t MaxDestroyHitCount;  // 0x5D4 (0x5D4)
	char pad_1496_1 : 7;  // 0x5D8 (0x5D8)
	bool OnRecovery : 1;  // 0x5D8 (0x5D8)
	char pad_1497[7];  // 0x5D9 (0x5D9)
	double RecoveryTime;  // 0x5E0 (0x5E0)
	struct UMaterialInstance* MI_Transition_Type_A;  // 0x5E8 (0x5E8)
	struct UMaterialInstance* MI_Transition_Type_B;  // 0x5F0 (0x5F0)
	struct UMaterialInstance* MI_Transition_Type_C;  // 0x5F8 (0x5F8)
	double Transition Duration;  // 0x600 (0x600)
	double Transition Duration Random;  // 0x608 (0x608)
	struct UMaterialInstanceDynamic* Dynamic Material InstnaceA;  // 0x610 (0x610)
	struct UMaterialInstanceDynamic* Dynamic Material InstnaceB;  // 0x618 (0x618)
	struct UMaterialInstanceDynamic* Dynamic Material InstnaceC;  // 0x620 (0x620)


	void CreateThornyBrambleMaterial(); // Function BP_ThornyBramble.BP_ThornyBramble_C.CreateThornyBrambleMaterial
	void UpdateThornyBrambleMaterial(bool IsActivate); // Function BP_ThornyBramble.BP_ThornyBramble_C.UpdateThornyBrambleMaterial
	void SetMIDParameterValue(struct UMaterialInstanceDynamic* Material Instance, double StartFrame, double EndFrame); // Function BP_ThornyBramble.BP_ThornyBramble_C.SetMIDParameterValue
	void IsImmuneToDamage(bool& Result); // Function BP_ThornyBramble.BP_ThornyBramble_C.IsImmuneToDamage
	void GetRecoveryTime(double& Result); // Function BP_ThornyBramble.BP_ThornyBramble_C.GetRecoveryTime
	void IsRecovery(bool& Result); // Function BP_ThornyBramble.BP_ThornyBramble_C.IsRecovery
	void GetDestroyHitCount(int32_t& Result); // Function BP_ThornyBramble.BP_ThornyBramble_C.GetDestroyHitCount
	void ReceiveBeginPlay(); // Function BP_ThornyBramble.BP_ThornyBramble_C.ReceiveBeginPlay
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_ThornyBramble.BP_ThornyBramble_C.GameplayTagUpdated
	void ExecuteUbergraph_BP_ThornyBramble(int32_t EntryPoint); // Function BP_ThornyBramble.BP_ThornyBramble_C.ExecuteUbergraph_BP_ThornyBramble
}; 
 
 



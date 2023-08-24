#pragma once 
#include <BP_AOE_ExplosionBottle_Area_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_AOE_ExplosionBottle_Area.BP_AOE_ExplosionBottle_Area_C
// Size: 0xBC8(Inherited: 0xB98)
struct ABP_AOE_ExplosionBottle_Area_C : ABP_DCAoeDefineBase_AutoActive_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xB98 (0xB98)
	double RemainTime;  // 0xBA0 (0xBA0)
	int32_t SpawingCount;  // 0xBA8 (0xBA8)
	char pad_2988[4];  // 0xBAC (0xBAC)
	struct FVector PivotLocation;  // 0xBB0 (0xBB0)


	void ReceiveBeginPlay(); // Function BP_AOE_ExplosionBottle_Area.BP_AOE_ExplosionBottle_Area_C.ReceiveBeginPlay
	void Spawing(); // Function BP_AOE_ExplosionBottle_Area.BP_AOE_ExplosionBottle_Area_C.Spawing
	void ExecuteUbergraph_BP_AOE_ExplosionBottle_Area(int32_t EntryPoint); // Function BP_AOE_ExplosionBottle_Area.BP_AOE_ExplosionBottle_Area_C.ExecuteUbergraph_BP_AOE_ExplosionBottle_Area
}; 
 
 



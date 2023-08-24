#pragma once 
#include <BP_AOE_LocustsSwarm_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C
// Size: 0xBB0(Inherited: 0xB98)
struct ABP_AOE_LocustsSwarm_C : ABP_DCAoeDefineBase_AutoActive_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xB98 (0xB98)
	double Radius;  // 0xBA0 (0xBA0)
	double Height;  // 0xBA8 (0xBA8)


	void OnRep_Radius(); // Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.OnRep_Radius
	void SpawnCollision(); // Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.SpawnCollision
	void DespawnFiringFX(); // Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.DespawnFiringFX
	void SpawnFiringFX(); // Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.SpawnFiringFX
	void SetData(double AreaRadius); // Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.SetData
	void DestroyEvent(double DestroyDelayTime); // Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.DestroyEvent
	void ExecuteUbergraph_BP_AOE_LocustsSwarm(int32_t EntryPoint); // Function BP_AOE_LocustsSwarm.BP_AOE_LocustsSwarm_C.ExecuteUbergraph_BP_AOE_LocustsSwarm
}; 
 
 



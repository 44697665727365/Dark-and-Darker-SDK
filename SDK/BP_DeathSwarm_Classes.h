#pragma once 
#include <BP_DeathSwarm_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_DeathSwarm.BP_DeathSwarm_C
// Size: 0x5B0(Inherited: 0x530)
struct ABP_DeathSwarm_C : ADeathSwarmBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x530 (0x530)
	struct UStaticMeshComponent* SpawnRejectionIndicator;  // 0x538 (0x538)
	struct UNiagaraComponent* BugSpawner;  // 0x540 (0x540)
	struct UStaticMeshComponent* ST_Surface_Bug_Swarming_Wavy;  // 0x548 (0x548)
	struct UStaticMeshComponent* ST_Surface_Bug_Swarming_Surface;  // 0x550 (0x550)
	struct UStaticMeshComponent* ST_Surface_Inner_Fog;  // 0x558 (0x558)
	struct UStaticMeshComponent* ST_Surface_Main;  // 0x560 (0x560)
	struct UMaterialInstanceDynamic* Material_BugSwarming_Wavy;  // 0x568 (0x568)
	struct UMaterialInstanceDynamic* Material_BugSwarming_Surface;  // 0x570 (0x570)
	struct UMaterialInstanceDynamic* Material_FieldMain;  // 0x578 (0x578)
	struct UMaterialInstanceDynamic* Material_InnerFog;  // 0x580 (0x580)
	double UV Multiplier_X;  // 0x588 (0x588)
	double UV Multiplier_Y;  // 0x590 (0x590)
	double BeetleSpawnRate;  // 0x598 (0x598)
	double Initiail Field Size;  // 0x5A0 (0x5A0)
	double SpawnRejectionRadius;  // 0x5A8 (0x5A8)


	void UserConstructionScript(); // Function BP_DeathSwarm.BP_DeathSwarm_C.UserConstructionScript
	void ReceiveTick(float DeltaSeconds); // Function BP_DeathSwarm.BP_DeathSwarm_C.ReceiveTick
	void ExecuteUbergraph_BP_DeathSwarm(int32_t EntryPoint); // Function BP_DeathSwarm.BP_DeathSwarm_C.ExecuteUbergraph_BP_DeathSwarm
}; 
 
 



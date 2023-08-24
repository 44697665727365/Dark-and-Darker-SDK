#pragma once 
#include <BP_Lich_DeathSwarm_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C
// Size: 0x6F0(Inherited: 0x6B8)
struct ABP_Lich_DeathSwarm_C : ABP_DCAoeBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6B8 (0x6B8)
	struct UNiagaraComponent* FXS_Lich_DarkSwarm;  // 0x6C0 (0x6C0)
	struct UCapsuleComponent* AntiAura;  // 0x6C8 (0x6C8)
	struct UBoxComponent* Aura;  // 0x6D0 (0x6D0)
	struct UStaticMeshComponent* ST_Surface_Main;  // 0x6D8 (0x6D8)
	struct FAoeScaleData AoeScaleData;  // 0x6E0 (0x6E0)


	void UpdateBorderMaterial(bool Off, double Transition); // Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.UpdateBorderMaterial
	void UserConstructionScript(); // Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.UserConstructionScript
	void EventReceived_1A39A2D34C7FB40840D2729BBC7F2F56(struct FGameplayEventData Payload); // Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.EventReceived_1A39A2D34C7FB40840D2729BBC7F2F56
	void ReceiveTick(float DeltaSeconds); // Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.ReceiveTick
	void UpdateDeathSwarm(); // Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.UpdateDeathSwarm
	void SetTargetAoeScale(double TargetScale, double DurationSeconds); // Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.SetTargetAoeScale
	void ReceiveBeginPlay(); // Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.ReceiveBeginPlay
	void OnSetAI(); // Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.OnSetAI
	void ExecuteUbergraph_BP_Lich_DeathSwarm(int32_t EntryPoint); // Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.ExecuteUbergraph_BP_Lich_DeathSwarm
}; 
 
 



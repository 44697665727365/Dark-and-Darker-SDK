#pragma once 
#include <BP_DCAoeDefineBase_AutoActive_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C
// Size: 0xB98(Inherited: 0x6B8)
struct ABP_DCAoeDefineBase_AutoActive_C : ABP_DCAoeBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6B8 (0x6B8)
	enum class E_AoeDefineType E_AoeType;  // 0x6C0 (0x6C0)
	enum class E_AoeDefineType SavedAoeType;  // 0x6C1 (0x6C1)
	char pad_1730[6];  // 0x6C2 (0x6C2)
	struct TArray<struct FGameplayTag> Event Tag;  // 0x6C8 (0x6C8)
	enum class E_BrushShapeType Launch Shape;  // 0x6D8 (0x6D8)
	char pad_1753_1 : 7;  // 0x6D9 (0x6D9)
	bool Spawn Anti Aura : 1;  // 0x6D9 (0x6D9)
	char pad_1754[6];  // 0x6DA (0x6DA)
	double Preceding Time;  // 0x6E0 (0x6E0)
	struct TArray<struct UParticleSystem*> Preceding Particle;  // 0x6E8 (0x6E8)
	struct TArray<struct UNiagaraSystem*> Preceding Niagara;  // 0x6F8 (0x6F8)
	struct TArray<struct UParticleSystemComponent*> SavedPrecedingParticle;  // 0x708 (0x708)
	struct TArray<struct UNiagaraComponent*> SavedPrecedingNiagara;  // 0x718 (0x718)
	double Firing Time;  // 0x728 (0x728)
	struct TArray<struct UParticleSystem*> Firing Particle;  // 0x730 (0x730)
	struct TArray<struct UNiagaraSystem*> Firing Niagara;  // 0x740 (0x740)
	struct TArray<struct UDecalComponent*> SavedPrecedingMaterialInstance;  // 0x750 (0x750)
	struct TArray<struct UParticleSystemComponent*> SavedFiringParticle;  // 0x760 (0x760)
	struct TArray<struct UNiagaraComponent*> SavedFiringNiagara;  // 0x770 (0x770)
	enum class E_BrushShapeType Anti Aura Shape;  // 0x780 (0x780)
	char pad_1921[7];  // 0x781 (0x781)
	double Launch Time;  // 0x788 (0x788)
	double Launch Interval;  // 0x790 (0x790)
	struct FVector Launch Location;  // 0x798 (0x798)
	struct FVector Launch Scale;  // 0x7B0 (0x7B0)
	double Sector Angle;  // 0x7C8 (0x7C8)
	double Sector Direction;  // 0x7D0 (0x7D0)
	struct FVector Launch Scale AntiAura;  // 0x7D8 (0x7D8)
	struct TArray<struct UMaterialInstance*> Preceding Material Instance;  // 0x7F0 (0x7F0)
	struct FVector Preceding Particle Location;  // 0x800 (0x800)
	struct FRotator Preceding Particle Rotation;  // 0x818 (0x818)
	struct FVector Preceding Particle Scale;  // 0x830 (0x830)
	struct FVector Preceding Niagara Location;  // 0x848 (0x848)
	struct FRotator Preceding Niagara Rotation;  // 0x860 (0x860)
	struct FVector Preceding Niagara Scale;  // 0x878 (0x878)
	struct TArray<struct UMaterialInstance*> Firing Material Instance;  // 0x890 (0x890)
	struct FVector Firing Particle Location;  // 0x8A0 (0x8A0)
	struct FRotator Firing Particle Rotation;  // 0x8B8 (0x8B8)
	struct FVector Firing Particle Scale;  // 0x8D0 (0x8D0)
	struct FVector Firing Niagara Location;  // 0x8E8 (0x8E8)
	struct FRotator Firing Niagara Rotation;  // 0x900 (0x900)
	struct FVector Firing Niagara Scale;  // 0x918 (0x918)
	struct TArray<struct UDecalComponent*> SavedFiringMaterialInstance;  // 0x930 (0x930)
	struct FName SpawnLocation;  // 0x940 (0x940)
	struct FTimerHandle LuanchTimerHandle;  // 0x948 (0x948)
	struct TArray<struct ADCCharacterBase*> Applied Target On Sector;  // 0x950 (0x950)
	struct TArray<struct FName> ;  // 0x960 (0x960)
	struct FVector Preceding Material Instance Location;  // 0x970 (0x970)
	struct FRotator Preceding Material Instance Rotation;  // 0x988 (0x988)
	struct FVector Preceding Material Instance Scale;  // 0x9A0 (0x9A0)
	struct FVector Firing Material Instance Location;  // 0x9B8 (0x9B8)
	struct FRotator Firing Material Instance Rotation;  // 0x9D0 (0x9D0)
	struct FVector Firing Material Instance Scale;  // 0x9E8 (0x9E8)
	char pad_2560_1 : 7;  // 0xA00 (0xA00)
	bool IsDamageByActorStatus : 1;  // 0xA00 (0xA00)
	char pad_2561_1 : 7;  // 0xA01 (0xA01)
	bool Player : 1;  // 0xA01 (0xA01)
	char pad_2562_1 : 7;  // 0xA02 (0xA02)
	bool Monster : 1;  // 0xA02 (0xA02)
	char pad_2563[5];  // 0xA03 (0xA03)
	struct FGameplayTagContainer RemoveActorStatusTags_Player;  // 0xA08 (0xA08)
	struct FGameplayTagContainer RemoveActorStatusTags_Monster;  // 0xA28 (0xA28)
	struct FGameplayTagContainer ApplyEventTrrigerTags_Player;  // 0xA48 (0xA48)
	struct FGameplayTagContainer ApplyEventTrrigerTags_Monster;  // 0xA68 (0xA68)
	enum class E_GameplayCueApplyType GameplayCue Type;  // 0xA88 (0xA88)
	char pad_2697[3];  // 0xA89 (0xA89)
	struct FGameplayTag GameplayCue Tag Player;  // 0xA8C (0xA8C)
	struct FGameplayTag GameplayCue Tag Monster;  // 0xA94 (0xA94)
	char pad_2716_1 : 7;  // 0xA9C (0xA9C)
	bool UseDespawnEffect : 1;  // 0xA9C (0xA9C)
	char pad_2717[3];  // 0xA9D (0xA9D)
	double DespawnEffectTime;  // 0xAA0 (0xAA0)
	char pad_2728_1 : 7;  // 0xAA8 (0xAA8)
	bool Ignore Instigator : 1;  // 0xAA8 (0xAA8)
	char pad_2729_1 : 7;  // 0xAA9 (0xAA9)
	bool Draw Debug Launch Radius : 1;  // 0xAA9 (0xAA9)
	char pad_2730[6];  // 0xAAA (0xAAA)
	struct UPrimitiveComponent* CollisionComponent;  // 0xAB0 (0xAB0)
	struct TArray<struct ADCCharacterBase*> Characters in Sector;  // 0xAB8 (0xAB8)
	struct TArray<struct ADCCharacterBase*> Temp Characters in Sector;  // 0xAC8 (0xAC8)
	struct TArray<struct ADCCharacterBase*> Target Array For Sector;  // 0xAD8 (0xAD8)
	struct FGameplayEventData Gameplay Event Data For Sector;  // 0xAE8 (0xAE8)


	void Remove Gameplay Cue(struct UObject* Input Pin); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.Remove Gameplay Cue
	void Trigger GameplayCue(struct UObject* Input Pin); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.Trigger GameplayCue
	void Remove(struct ADCCharacterBase* InputPin); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.Remove
	void Trigger(struct ADCCharacterBase* InputPin); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.Trigger
	void SetComponentTag(struct UActorComponent* InComponent); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.SetComponentTag
	void Send Gameplay Event To Hit(struct ADCCharacterBase* DCCharacterBase); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.Send Gameplay Event To Hit
	void ProcessDespawn(); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.ProcessDespawn
	void DespawnFiringFX(); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.DespawnFiringFX
	void DespawnPrecedingFX(); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.DespawnPrecedingFX
	void SpawnFiringFX(); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.SpawnFiringFX
	void SpawnPrecedingFX(); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.SpawnPrecedingFX
	void ClearVariables(); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.ClearVariables
	void SetVariables(); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.SetVariables
	void SpawnAntiAuraCollision(); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.SpawnAntiAuraCollision
	void SpawnCollision(); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.SpawnCollision
	void ReceiveBeginPlay(); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.ReceiveBeginPlay
	void OnSetAI(); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.OnSetAI
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.ReceiveEndPlay
	void AddBeginOverlapActor(struct ADCCharacterBase* CharacterBase); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.AddBeginOverlapActor
	void RemoveEndOverlapActor(struct ADCCharacterBase* CharacterBase); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.RemoveEndOverlapActor
	void ReceiveTick(float DeltaSeconds); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.ReceiveTick
	void ExecuteUbergraph_BP_DCAoeDefineBase_AutoActive(int32_t EntryPoint); // Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.ExecuteUbergraph_BP_DCAoeDefineBase_AutoActive
}; 
 
 



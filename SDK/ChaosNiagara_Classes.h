#pragma once 
#include <ChaosNiagara_Structs.h>
 
 
 
// Class ChaosNiagara.NiagaraDataInterfaceGeometryCollection
// Size: 0x40(Inherited: 0x38)
struct UNiagaraDataInterfaceGeometryCollection : UNiagaraDataInterface
{
	struct AGeometryCollectionActor* GeometryCollectionActor;  // 0x38 (0x38)


}; 
 
 


// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
// Size: 0x348(Inherited: 0x38)
struct UNiagaraDataInterfaceChaosDestruction : UNiagaraDataInterface
{
	struct TSet<struct AChaosSolverActor*> ChaosSolverActorSet;  // 0x38 (0x38)
	uint8_t DataSourceType;  // 0x88 (0x88)
	char pad_137[3];  // 0x89 (0x89)
	int32_t DataProcessFrequency;  // 0x8C (0x8C)
	int32_t MaxNumberOfDataEntriesToSpawn;  // 0x90 (0x90)
	char pad_148_1 : 7;  // 0x94 (0x94)
	bool DoSpawn : 1;  // 0x94 (0x94)
	char pad_149[3];  // 0x95 (0x95)
	struct FVector2D SpawnMultiplierMinMax;  // 0x98 (0x98)
	float SpawnChance;  // 0xA8 (0xA8)
	char pad_172[4];  // 0xAC (0xAC)
	struct FVector2D ImpulseToSpawnMinMax;  // 0xB0 (0xB0)
	struct FVector2D SpeedToSpawnMinMax;  // 0xC0 (0xC0)
	struct FVector2D MassToSpawnMinMax;  // 0xD0 (0xD0)
	struct FVector2D ExtentMinToSpawnMinMax;  // 0xE0 (0xE0)
	struct FVector2D ExtentMaxToSpawnMinMax;  // 0xF0 (0xF0)
	struct FVector2D VolumeToSpawnMinMax;  // 0x100 (0x100)
	struct FVector2D SolverTimeToSpawnMinMax;  // 0x110 (0x110)
	int32_t SurfaceTypeToSpawn;  // 0x120 (0x120)
	uint8_t LocationFilteringMode;  // 0x124 (0x124)
	uint8_t LocationXToSpawn;  // 0x125 (0x125)
	char pad_294[2];  // 0x126 (0x126)
	struct FVector2D LocationXToSpawnMinMax;  // 0x128 (0x128)
	uint8_t LocationYToSpawn;  // 0x138 (0x138)
	char pad_313[7];  // 0x139 (0x139)
	struct FVector2D LocationYToSpawnMinMax;  // 0x140 (0x140)
	uint8_t LocationZToSpawn;  // 0x150 (0x150)
	char pad_337[7];  // 0x151 (0x151)
	struct FVector2D LocationZToSpawnMinMax;  // 0x158 (0x158)
	float TrailMinSpeedToSpawn;  // 0x168 (0x168)
	uint8_t DataSortingType;  // 0x16C (0x16C)
	char pad_365_1 : 7;  // 0x16D (0x16D)
	bool bGetExternalCollisionData : 1;  // 0x16D (0x16D)
	char pad_366_1 : 7;  // 0x16E (0x16E)
	bool DoSpatialHash : 1;  // 0x16E (0x16E)
	char pad_367[1];  // 0x16F (0x16F)
	struct FVector SpatialHashVolumeMin;  // 0x170 (0x170)
	struct FVector SpatialHashVolumeMax;  // 0x188 (0x188)
	struct FVector SpatialHashVolumeCellSize;  // 0x1A0 (0x1A0)
	int32_t MaxDataPerCell;  // 0x1B8 (0x1B8)
	char pad_444_1 : 7;  // 0x1BC (0x1BC)
	bool bApplyMaterialsFilter : 1;  // 0x1BC (0x1BC)
	char pad_445[3];  // 0x1BD (0x1BD)
	struct TSet<struct UPhysicalMaterial*> ChaosBreakingMaterialSet;  // 0x1C0 (0x1C0)
	char pad_528_1 : 7;  // 0x210 (0x210)
	bool bGetExternalBreakingData : 1;  // 0x210 (0x210)
	char pad_529_1 : 7;  // 0x211 (0x211)
	bool bGetExternalTrailingData : 1;  // 0x211 (0x211)
	char pad_530[6];  // 0x212 (0x212)
	struct FVector2D RandomPositionMagnitudeMinMax;  // 0x218 (0x218)
	float InheritedVelocityMultiplier;  // 0x228 (0x228)
	uint8_t RandomVelocityGenerationType;  // 0x22C (0x22C)
	char pad_557[3];  // 0x22D (0x22D)
	struct FVector2D RandomVelocityMagnitudeMinMax;  // 0x230 (0x230)
	float SpreadAngleMax;  // 0x240 (0x240)
	char pad_580[4];  // 0x244 (0x244)
	struct FVector VelocityOffsetMin;  // 0x248 (0x248)
	struct FVector VelocityOffsetMax;  // 0x260 (0x260)
	struct FVector2D FinalVelocityMagnitudeMinMax;  // 0x278 (0x278)
	float MaxLatency;  // 0x288 (0x288)
	uint8_t DebugType;  // 0x28C (0x28C)
	char pad_653[3];  // 0x28D (0x28D)
	int32_t LastSpawnedPointID;  // 0x290 (0x290)
	float LastSpawnTime;  // 0x294 (0x294)
	char pad_664[16];  // 0x298 (0x298)
	float SolverTime;  // 0x2A8 (0x2A8)
	float TimeStampOfLastProcessedData;  // 0x2AC (0x2AC)
	char pad_688[152];  // 0x2B0 (0x2B0)


}; 
 
 


// Class ChaosNiagara.NiagaraDataInterfacePhysicsField
// Size: 0x38(Inherited: 0x38)
struct UNiagaraDataInterfacePhysicsField : UNiagaraDataInterface
{


}; 
 
 



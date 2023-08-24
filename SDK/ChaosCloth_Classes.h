#pragma once 
#include <ChaosCloth_Structs.h>
 
 
 
// Class ChaosCloth.ChaosClothConfig
// Size: 0x118(Inherited: 0x28)
struct UChaosClothConfig : UClothConfigCommon
{
	uint8_t MassMode;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	float UniformMass;  // 0x2C (0x2C)
	float TotalMass;  // 0x30 (0x30)
	float Density;  // 0x34 (0x34)
	float MinPerParticleMass;  // 0x38 (0x38)
	struct FChaosClothWeightedValue EdgeStiffnessWeighted;  // 0x3C (0x3C)
	struct FChaosClothWeightedValue BendingStiffnessWeighted;  // 0x44 (0x44)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bUseBendingElements : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	float BucklingRatio;  // 0x50 (0x50)
	struct FChaosClothWeightedValue BucklingStiffnessWeighted;  // 0x54 (0x54)
	struct FChaosClothWeightedValue AreaStiffnessWeighted;  // 0x5C (0x5C)
	float VolumeStiffness;  // 0x64 (0x64)
	struct FChaosClothWeightedValue TetherStiffness;  // 0x68 (0x68)
	struct FChaosClothWeightedValue TetherScale;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool bUseGeodesicDistance : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	float ShapeTargetStiffness;  // 0x7C (0x7C)
	float CollisionThickness;  // 0x80 (0x80)
	float FrictionCoefficient;  // 0x84 (0x84)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool bUseCCD : 1;  // 0x88 (0x88)
	char pad_137_1 : 7;  // 0x89 (0x89)
	bool bUseSelfCollisions : 1;  // 0x89 (0x89)
	char pad_138[2];  // 0x8A (0x8A)
	float SelfCollisionThickness;  // 0x8C (0x8C)
	float SelfCollisionFriction;  // 0x90 (0x90)
	char pad_148_1 : 7;  // 0x94 (0x94)
	bool bUseSelfIntersections : 1;  // 0x94 (0x94)
	char pad_149_1 : 7;  // 0x95 (0x95)
	bool bUseLegacyBackstop : 1;  // 0x95 (0x95)
	char pad_150[2];  // 0x96 (0x96)
	float DampingCoefficient;  // 0x98 (0x98)
	float LocalDampingCoefficient;  // 0x9C (0x9C)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool bUsePointBasedWindModel : 1;  // 0xA0 (0xA0)
	char pad_161[3];  // 0xA1 (0xA1)
	struct FChaosClothWeightedValue Drag;  // 0xA4 (0xA4)
	struct FChaosClothWeightedValue Lift;  // 0xAC (0xAC)
	char pad_180_1 : 7;  // [xB4 ([xB4)
	bool bUseGravityOverride : 1;  // 000032772] ited: 0x28)
 (000032772] Package Id_S)
	char pad_181[3];  // 0xB5 (0xB5)
	float GravityScale;  // 0xB8 (0xB8)
	char pad_188[4];  // 0xBC (0xBC)
	struct FVector Gravity;  // 0xC0 (0xC0)
	struct FChaosClothWeightedValue Pressure;  // 0xD8 (0xD8)
	struct FChaosClothWeightedValue AnimDriveStiffness;  // 0xE0 (0xE0)
	struct FChaosClothWeightedValue AnimDriveDamping;  // 0xE8 (0xE8)
	struct FVector LinearVelocityScale;  // 0xF0 (0xF0)
	float AngularVelocityScale;  // 0x108 (0x108)
	float FictitiousAngularScale;  // 0x10C (0x10C)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool bUseTetrahedralConstraints : 1;  // 0x110 (0x110)
	char pad_273_1 : 7;  // 0x111 (0x111)
	bool bUseThinShellVolumeConstraints : 1;  // 0x111 (0x111)
	char pad_274_1 : 7;  // 0x112 (0x112)
	bool bUseContinuousCollisionDetection : 1;  // 0x112 (0x112)
	char pad_275[5];  // 0x113 (0x113)


}; 
 
 


// Class ChaosCloth.ChaosClothSharedSimConfig
// Size: 0x38(Inherited: 0x28)
struct UChaosClothSharedSimConfig : UClothSharedConfigCommon
{
	int32_t IterationCount;  // 0x28 (0x28)
	int32_t MaxIterationCount;  // 0x2C (0x2C)
	int32_t SubdivisionCount;  // 0x30 (0x30)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool bUseLocalSpaceSimulation : 1;  // 0x34 (0x34)
	char pad_53_1 : 7;  // 0x35 (0x35)
	bool bUseXPBDConstraints : 1;  // 0x35 (0x35)
	char pad_54[2];  // 0x36 (0x36)


}; 
 
 


// Class ChaosCloth.ChaosClothingSimulationInteractor
// Size: 0xA0(Inherited: 0x90)
struct UChaosClothingSimulationInteractor : UClothingSimulationInteractor
{
	char pad_144[16];  // 0x90 (0x90)


}; 
 
 


// Class ChaosCloth.ChaosClothingSimulationFactory
// Size: 0x28(Inherited: 0x28)
struct UChaosClothingSimulationFactory : UClothingSimulationFactory
{


}; 
 
 


// Class ChaosCloth.ChaosClothingInteractor
// Size: 0x40(Inherited: 0x30)
struct UChaosClothingInteractor : UClothingInteractor
{
	char pad_48[16];  // 0x30 (0x30)


	void SetWind(struct FVector2D Drag, struct FVector2D Lift, float AirDensity, struct FVector WindVelocity); // Function ChaosCloth.ChaosClothingInteractor.SetWind
	void SetVelocityScale(struct FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale); // Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
	void SetPressure(struct FVector2D Pressure); // Function ChaosCloth.ChaosClothingInteractor.SetPressure
	void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
	void SetMaterial(struct FVector2D EdgeStiffness, struct FVector2D BendingStiffness, struct FVector2D AreaStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetMaterial
	void SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
	void SetLongRangeAttachment(struct FVector2D TetherStiffness, struct FVector2D TetherScale); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
	void SetGravity(float GravityScale, bool bIsGravityOverridden, struct FVector GravityOverride); // Function ChaosCloth.ChaosClothingInteractor.SetGravity
	void SetDamping(float DampingCoefficient, float LocalDampingCoefficient); // Function ChaosCloth.ChaosClothingInteractor.SetDamping
	void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness); // Function ChaosCloth.ChaosClothingInteractor.SetCollision
	void SetBackstop(bool bEnabled); // Function ChaosCloth.ChaosClothingInteractor.SetBackstop
	void SetAnimDriveLinear(float AnimDriveStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
	void SetAnimDrive(struct FVector2D AnimDriveStiffness, struct FVector2D AnimDriveDamping); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
	void SetAerodynamics(float DragCoefficient, float LiftCoefficient, struct FVector WindVelocity); // Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
	void ResetAndTeleport(bool bReset, bool bTeleport); // Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
}; 
 
 



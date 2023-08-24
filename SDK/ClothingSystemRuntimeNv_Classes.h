#pragma once 
#include <ClothingSystemRuntimeNv_Structs.h>
 
 
 
// Class ClothingSystemRuntimeNv.ClothConfigNv
// Size: 0x1A0(Inherited: 0x28)
struct UClothConfigNv : UClothConfigCommon
{
	uint8_t ClothingWindMethod;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	struct FClothConstraintSetupNv VerticalConstraint;  // 0x2C (0x2C)
	struct FClothConstraintSetupNv HorizontalConstraint;  // 0x3C (0x3C)
	struct FClothConstraintSetupNv BendConstraint;  // 0x4C (0x4C)
	struct FClothConstraintSetupNv ShearConstraint;  // 0x5C (0x5C)
	float SelfCollisionRadius;  // 0x6C (0x6C)
	float SelfCollisionStiffness;  // 0x70 (0x70)
	float SelfCollisionCullScale;  // 0x74 (0x74)
	struct FVector Damping;  // 0x78 (0x78)
	float Friction;  // 0x90 (0x90)
	float WindDragCoefficient;  // 0x94 (0x94)
	float WindLiftCoefficient;  // 0x98 (0x98)
	char pad_156[4];  // 0x9C (0x9C)
	struct FVector LinearDrag;  // 0xA0 (0xA0)
	struct FVector AngularDrag;  // 0xB8 (0xB8)
	struct FVector LinearInertiaScale;  // 0xD0 (0xD0)
	struct FVector AngularInertiaScale;  // 0xE8 (0xE8)
	struct FVector CentrifugalInertiaScale;  // 0x100 (0x100)
	float SolverFrequency;  // 0x118 (0x118)
	float StiffnessFrequency;  // 0x11C (0x11C)
	float GravityScale;  // 0x120 (0x120)
	char pad_292[4];  // 0x124 (0x124)
	struct FVector GravityOverride;  // 0x128 (0x128)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool bUseGravityOverride : 1;  // 0x140 (0x140)
	char pad_321[3];  // 0x141 (0x141)
	float TetherStiffness;  // 0x144 (0x144)
	float TetherLimit;  // 0x148 (0x148)
	float CollisionThickness;  // 0x14C (0x14C)
	float AnimDriveSpringStiffness;  // 0x150 (0x150)
	float AnimDriveDamperStiffness;  // 0x154 (0x154)
	uint8_t WindMethod;  // 0x158 (0x158)
	char pad_345[3];  // 0x159 (0x159)
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig;  // 0x15C (0x15C)
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig;  // 0x16C (0x16C)
	struct FClothConstraintSetup_Legacy BendConstraintConfig;  // 0x17C (0x17C)
	struct FClothConstraintSetup_Legacy ShearConstraintConfig;  // 0x18C (0x18C)
	char pad_412[4];  // 0x19C (0x19C)


}; 
 
 


// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// Size: 0x28(Inherited: 0x28)
struct UClothingSimulationFactoryNv : UClothingSimulationFactory
{


}; 
 
 


// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// Size: 0x90(Inherited: 0x90)
struct UClothingSimulationInteractorNv : UClothingSimulationInteractor
{


	void SetAnimDriveDamperStiffness(float InStiffness); // Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
}; 
 
 


// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// Size: 0x120(Inherited: 0xE0)
struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy
{
	struct TArray<float> MaxDistances;  // 0xE0 (0xE0)
	struct TArray<float> BackstopDistances;  // 0xF0 (0xF0)
	struct TArray<float> BackstopRadiuses;  // 0x100 (0x100)
	struct TArray<float> AnimDriveMultipliers;  // 0x110 (0x110)


}; 
 
 



#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function ChaosCloth.ChaosClothingInteractor.SetCollision
struct FSetCollision
{
	float CollisionThickness;  // 0x0 (0x0)
	float FrictionCoefficient;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bUseCCD : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float SelfCollisionThickness;  // 0xC (0xC)


}; 
 
 // ScriptStruct ChaosCloth.ChaosClothWeightedValue
struct FChaosClothWeightedValue
{
	float Low;  // 0x0 (0x0)
	float High;  // 0x4 (0x4)


}; 
 
 // Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
struct FResetAndTeleport
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bReset : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bTeleport : 1;  // 0x1 (0x1)


}; 
 
 // Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
struct FSetAerodynamics
{
	float DragCoefficient;  // 0x0 (0x0)
	float LiftCoefficient;  // 0x4 (0x4)
	struct FVector WindVelocity;  // 0x8 (0x8)


}; 
 
 // Function ChaosCloth.ChaosClothingInteractor.SetBackstop
struct FSetBackstop
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
struct FSetAnimDrive
{
	struct FVector2D AnimDriveStiffness;  // 0x0 (0x0)
	struct FVector2D AnimDriveDamping;  // 0x10 (0x10)


}; 
 
 // Function ChaosCloth.ChaosClothingInteractor.SetDamping
struct FSetDamping
{
	float DampingCoefficient;  // 0x0 (0x0)
	float LocalDampingCoefficient;  // 0x4 (0x4)


}; 
 
 // Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
struct FSetAnimDriveLinear
{
	float AnimDriveStiffness;  // 0x0 (0x0)


}; 
 
 // Function ChaosCloth.ChaosClothingInteractor.SetGravity
struct FSetGravity
{
	float GravityScale;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bIsGravityOverridden : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FVector GravityOverride;  // 0x8 (0x8)


}; 
 
 // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
struct FSetLongRangeAttachment
{
	struct FVector2D TetherStiffness;  // 0x0 (0x0)
	struct FVector2D TetherScale;  // 0x10 (0x10)


}; 
 
 // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
struct FSetLongRangeAttachmentLinear
{
	float TetherStiffness;  // 0x0 (0x0)
	float TetherScale;  // 0x4 (0x4)


}; 
 
 // Function ChaosCloth.ChaosClothingInteractor.SetMaterial
struct FSetMaterial
{
	struct FVector2D EdgeStiffness;  // 0x0 (0x0)
	struct FVector2D BendingStiffness;  // 0x10 (0x10)
	struct FVector2D AreaStiffness;  // 0x20 (0x20)


}; 
 
 // Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
struct FSetMaterialLinear
{
	float EdgeStiffness;  // 0x0 (0x0)
	float BendingStiffness;  // 0x4 (0x4)
	float AreaStiffness;  // 0x8 (0x8)


}; 
 
 // Function ChaosCloth.ChaosClothingInteractor.SetPressure
struct FSetPressure
{
	struct FVector2D Pressure;  // 0x0 (0x0)


}; 
 
 // Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
struct FSetVelocityScale
{
	struct FVector LinearVelocityScale;  // 0x0 (0x0)
	float AngularVelocityScale;  // 0x18 (0x18)
	float FictitiousAngularScale;  // 0x1C (0x1C)


}; 
 
 // Function ChaosCloth.ChaosClothingInteractor.SetWind
struct FSetWind
{
	struct FVector2D Drag;  // 0x0 (0x0)
	struct FVector2D Lift;  // 0x10 (0x10)
	float AirDensity;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FVector WindVelocity;  // 0x28 (0x28)


}; 
 
 
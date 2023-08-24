#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct PBIK.PBIKBoneSetting
struct FPBIKBoneSetting
{
	struct FName bone;  // 0x0 (0x0)
	float RotationStiffness;  // 0x8 (0x8)
	float PositionStiffness;  // 0xC (0xC)
	uint8_t X;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float MinX;  // 0x14 (0x14)
	float MaxX;  // 0x18 (0x18)
	uint8_t Y;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	float MinY;  // 0x20 (0x20)
	float MaxY;  // 0x24 (0x24)
	uint8_t Z;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	float MinZ;  // 0x2C (0x2C)
	float MaxZ;  // 0x30 (0x30)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool bUsePreferredAngles : 1;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	struct FVector PreferredAngles;  // 0x38 (0x38)


}; 
 
 // ScriptStruct PBIK.PBIKSolverSettings
struct FPBIKSolverSettings
{
	int32_t Iterations;  // 0x0 (0x0)
	float MassMultiplier;  // 0x4 (0x4)
	float MinMassMultiplier;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bAllowStretch : 1;  // 0xC (0xC)
	uint8_t RootBehavior;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool bStartSolveFromInputPose : 1;  // 0xE (0xE)
	char pad_15[1];  // 0xF (0xF)


}; 
 
 // ScriptStruct PBIK.PBIKSolver
struct FPBIKSolver
{
	char pad_0[104];  // 0x0 (0x0)


}; 
 
 // ScriptStruct PBIK.PBIKDebug
struct FPBIKDebug
{
	float DrawScale;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bDrawDebug : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // ScriptStruct PBIK.PBIKEffector
struct FPBIKEffector
{
	struct FName bone;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Transform;  // 0x10 (0x10)
	float PositionAlpha;  // 0x70 (0x70)
	float RotationAlpha;  // 0x74 (0x74)
	float StrengthAlpha;  // 0x78 (0x78)
	float PullChainAlpha;  // 0x7C (0x7C)
	float PinRotation;  // 0x80 (0x80)
	char pad_132[12];  // 0x84 (0x84)


}; 
 
 // ScriptStruct PBIK.RigUnit_PBIK
// Size: 0x130(Inherited: 0x40)
struct FRigUnit_PBIK : FRigUnit_HighlevelBaseMutable
{
	struct FName Root;  // 0x40 (0x40)
	struct TArray<struct FPBIKEffector> Effectors;  // 0x48 (0x48)
	struct TArray<int32_t> EffectorSolverIndices;  // 0x58 (0x58)
	struct TArray<struct FPBIKBoneSetting> BoneSettings;  // 0x68 (0x68)
	struct TArray<struct FName> ExcludedBones;  // 0x78 (0x78)
	struct FPBIKSolverSettings Settings;  // 0x88 (0x88)
	struct FPBIKDebug Debug;  // 0x98 (0x98)
	struct TArray<int32_t> BoneSettingToSolverBoneIndex;  // 0xA0 (0xA0)
	struct TArray<int32_t> SolverBoneToElementIndex;  // 0xB0 (0xB0)
	struct FPBIKSolver Solver;  // 0xC0 (0xC0)
	char pad_296_1 : 7;  // 0x128 (0x128)
	bool bNeedsInit : 1;  // 0x128 (0x128)
	char pad_297[7];  // 0x129 (0x129)


}; 
 
 
#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct FullBodyIK.FBIKBoneLimit
struct FFBIKBoneLimit
{
	uint8_t LimitType_X;  // 0x0 (0x0)
	uint8_t LimitType_Y;  // 0x1 (0x1)
	uint8_t LimitType_Z;  // 0x2 (0x2)
	char pad_3[5];  // 0x3 (0x3)
	struct FVector Limit;  // 0x8 (0x8)


}; 
 
 // ScriptStruct FullBodyIK.FBIKConstraintOption
struct FFBIKConstraintOption
{
	struct FRigElementKey Item;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bEnabled : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bUseStiffness : 1;  // 0xD (0xD)
	char pad_14[2];  // 0xE (0xE)
	struct FVector LinearStiffness;  // 0x10 (0x10)
	struct FVector AngularStiffness;  // 0x28 (0x28)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bUseAngularLimit : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct FFBIKBoneLimit AngularLimit;  // 0x48 (0x48)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool bUsePoleVector : 1;  // 0x68 (0x68)
	uint8_t PoleVectorOption;  // 0x69 (0x69)
	char pad_106[6];  // 0x6A (0x6A)
	struct FVector PoleVector;  // 0x70 (0x70)
	struct FRotator OffsetRotation;  // 0x88 (0x88)


}; 
 
 // ScriptStruct FullBodyIK.MotionProcessInput
struct FMotionProcessInput
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bForceEffectorRotationTarget : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bOnlyApplyWhenReachedToTarget : 1;  // 0x1 (0x1)


}; 
 
 // ScriptStruct FullBodyIK.FBIKDebugOption
struct FFBIKDebugOption
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bDrawDebugHierarchy : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bColorAngularMotionStrength : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bColorLinearMotionStrength : 1;  // 0x2 (0x2)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool bDrawDebugAxes : 1;  // 0x3 (0x3)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bDrawDebugEffector : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool bDrawDebugConstraints : 1;  // 0x5 (0x5)
	char pad_6[10];  // 0x6 (0x6)
	struct FTransform DrawWorldOffset;  // 0x10 (0x10)
	float DrawSize;  // 0x70 (0x70)
	char pad_116[12];  // 0x74 (0x74)


}; 
 
 // ScriptStruct FullBodyIK.FBIKEndEffector
struct FFBIKEndEffector
{
	struct FRigElementKey Item;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct FVector Position;  // 0x10 (0x10)
	float PositionAlpha;  // 0x28 (0x28)
	int32_t PositionDepth;  // 0x2C (0x2C)
	struct FQuat Rotation;  // 0x30 (0x30)
	float RotationAlpha;  // 0x50 (0x50)
	int32_t RotationDepth;  // 0x54 (0x54)
	float Pull;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)


}; 
 
 // ScriptStruct FullBodyIK.SolverInput
struct FSolverInput
{
	float LinearMotionStrength;  // 0x0 (0x0)
	float MinLinearMotionStrength;  // 0x4 (0x4)
	float AngularMotionStrength;  // 0x8 (0x8)
	float MinAngularMotionStrength;  // 0xC (0xC)
	float DefaultTargetClamp;  // 0x10 (0x10)
	float Precision;  // 0x14 (0x14)
	float Damping;  // 0x18 (0x18)
	int32_t MaxIterations;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bUseJacobianTranspose : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)


}; 
 
 // ScriptStruct FullBodyIK.RigUnit_FullbodyIK
// Size: 0x2C0(Inherited: 0x40)
struct FRigUnit_FullbodyIK : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey Root;  // 0x40 (0x40)
	char pad_76[4];  // 0x4C (0x4C)
	struct TArray<struct FFBIKEndEffector> Effectors;  // 0x50 (0x50)
	struct TArray<struct FFBIKConstraintOption> Constraints;  // 0x60 (0x60)
	struct FSolverInput SolverProperty;  // 0x70 (0x70)
	struct FMotionProcessInput MotionProperty;  // 0x94 (0x94)
	char pad_150_1 : 7;  // 0x96 (0x96)
	bool bPropagateToChildren : 1;  // 0x96 (0x96)
	char pad_151[9];  // 0x97 (0x97)
	struct FFBIKDebugOption DebugOption;  // 0xA0 (0xA0)
	struct FRigUnit_FullbodyIK_WorkData WorkData;  // 0x120 (0x120)
	char pad_696[8];  // 0x2B8 (0x2B8)


}; 
 
 // ScriptStruct FullBodyIK.RigUnit_FullbodyIK_WorkData
struct FRigUnit_FullbodyIK_WorkData
{
	char pad_0[408];  // 0x0 (0x0)


}; 
 
 
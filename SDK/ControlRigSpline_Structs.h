#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_ControlRigSplineBase : FRigUnit
{


}; 
 
 // ScriptStruct ControlRigSpline.ControlRigSplineImpl
struct FControlRigSplineImpl
{
	char pad_0[88];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRigSpline.RigUnit_TangentFromControlRigSpline
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_TangentFromControlRigSpline : FRigUnit_ControlRigSplineBase
{
	struct FControlRigSpline Spline;  // 0x8 (0x8)
	float U;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FVector Tangent;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRigSpline.ControlRigSpline
struct FControlRigSpline
{
	char pad_0[24];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRigSpline.RigUnit_PositionFromControlRigSpline
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_PositionFromControlRigSpline : FRigUnit_ControlRigSplineBase
{
	struct FControlRigSpline Spline;  // 0x8 (0x8)
	float U;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FVector Position;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
// Size: 0x210(Inherited: 0x40)
struct FRigUnit_FitChainToSplineCurveItemArray : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigElementKey> Items;  // 0x40 (0x40)
	struct FControlRigSpline Spline;  // 0x50 (0x50)
	uint8_t Alignment;  // [x68 ([x68)
	char pad_105[3];  // 0x69 (0x69)
	float Minimum;  // 0x6C (0x6C)
	float Maximum;  // 0x70 (0x70)
	int32_t SamplingPrecision;  // 0x74 (0x74)
	struct FVector PrimaryAxis;  // 0x78 (0x78)
	struct FVector SecondaryAxis;  // 0x90 (0x90)
	struct FVector PoleVectorPosition;  // 0xA8 (0xA8)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;  // 0xC0 (0xC0)
	uint8_t RotationEaseType;  // 0xD0 (0xD0)
	char pad_209[3];  // 0xD1 (0xD1)
	float Weight;  // 0xD4 (0xD4)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool bPropagateToChildren : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;  // 0xE0 (0xE0)
	struct FRigUnit_FitChainToCurve_WorkData WorkData;  // 0x170 (0x170)
	char pad_520[8];  // 0x208 (0x208)


}; 
 
 // ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineFromPoints
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_ControlRigSplineFromPoints : FRigUnit_ControlRigSplineBase
{
	struct TArray<struct FVector> Points;  // 0x8 (0x8)
	uint8_t SplineMode;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	int32_t SamplesPerSegment;  // 0x1C (0x1C)
	float Compression;  // 0x20 (0x20)
	float Stretch;  // 0x24 (0x24)
	struct FControlRigSpline Spline;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRigSpline.RigUnit_SetSplinePoints
// Size: 0x68(Inherited: 0x40)
struct FRigUnit_SetSplinePoints : FRigUnitMutable
{
	struct TArray<struct FVector> Points;  // 0x40 (0x40)
	struct FControlRigSpline Spline;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRigSpline.RigUnit_TransformFromControlRigSpline
// Size: 0xA0(Inherited: 0x8)
struct FRigUnit_TransformFromControlRigSpline : FRigUnit_ControlRigSplineBase
{
	struct FControlRigSpline Spline;  // 0x8 (0x8)
	struct FVector UpVector;  // 0x20 (0x20)
	float Roll;  // 0x38 (0x38)
	float U;  // 0x3C (0x3C)
	struct FTransform Transform;  // 0x40 (0x40)


}; 
 
 // ScriptStruct ControlRigSpline.RigUnit_DrawControlRigSpline
// Size: 0x70(Inherited: 0x40)
struct FRigUnit_DrawControlRigSpline : FRigUnitMutable
{
	struct FControlRigSpline Spline;  // 0x40 (0x40)
	struct FLinearColor Color;  // 0x58 (0x58)
	float Thickness;  // 0x68 (0x68)
	int32_t Detail;  // 0x6C (0x6C)


}; 
 
 // ScriptStruct ControlRigSpline.RigUnit_GetLengthControlRigSpline
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_GetLengthControlRigSpline : FRigUnit
{
	struct FControlRigSpline Spline;  // 0x8 (0x8)
	float Length;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurve
// Size: 0x210(Inherited: 0x40)
struct FRigUnit_FitChainToSplineCurve : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items;  // 0x40 (0x40)
	struct FControlRigSpline Spline;  // 0x50 (0x50)
	uint8_t Alignment;  // 0x68 (0x68)
	char pad_105[3];  // 0x69 (0x69)
	float Minimum;  // 0x6C (0x6C)
	float Maximum;  // 0x70 (0x70)
	int32_t SamplingPrecision;  // 0x74 (0x74)
	struct FVector PrimaryAxis;  // 0x78 (0x78)
	struct FVector SecondaryAxis;  // 0x90 (0x90)
	struct FVector PoleVectorPosition;  // 0xA8 (0xA8)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;  // 0xC0 (0xC0)
	uint8_t RotationEaseType;  // 0xD0 (0xD0)
	char pad_209[3];  // 0xD1 (0xD1)
	float Weight;  // 0xD4 (0xD4)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool bPropagateToChildren : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;  // 0xE0 (0xE0)
	struct FRigUnit_FitChainToCurve_WorkData WorkData;  // 0x170 (0x170)
	char pad_520[8];  // 0x208 (0x208)


}; 
 
 // ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChain
// Size: 0x68(Inherited: 0x40)
struct FRigUnit_FitSplineCurveToChain : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items;  // 0x40 (0x40)
	struct FControlRigSpline Spline;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
// Size: 0x68(Inherited: 0x40)
struct FRigUnit_FitSplineCurveToChainItemArray : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigElementKey> Items;  // 0x40 (0x40)
	struct FControlRigSpline Spline;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_ClosestParameterFromControlRigSpline : FRigUnit_ControlRigSplineBase
{
	struct FControlRigSpline Spline;  // 0x8 (0x8)
	struct FVector Position;  // 0x20 (0x20)
	float U;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 // ScriptStruct ControlRigSpline.RigUnit_ParameterAtPercentage
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_ParameterAtPercentage : FRigUnit_ControlRigSplineBase
{
	struct FControlRigSpline Spline;  // 0x8 (0x8)
	float Percentage;  // 0x20 (0x20)
	float U;  // 0x24 (0x24)


}; 
 
 
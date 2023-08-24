#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct CoreUObject.Vector2D
struct FVector2D
{
	double X;  // 0x0 (0x0)
	double Y;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.Guid
struct FGuid
{
	int32_t A;  // 0x0 (0x0)
	int32_t B;  // 0x4 (0x4)
	int32_t C;  // 0x8 (0x8)
	int32_t D;  // 0xC (0xC)


}; 
 
 // ScriptStruct CoreUObject.ARFilter
struct FARFilter
{
	struct TArray<struct FName> PackageNames;  // 0x0 (0x0)
	struct TArray<struct FName> PackagePaths;  // 0x10 (0x10)
	struct TArray<struct FSoftObjectPath> SoftObjectPaths;  // 0x20 (0x20)
	struct TArray<struct FName> ClassNames;  // 0x30 (0x30)
	struct TArray<struct FTopLevelAssetPath> ClassPaths;  // 0x40 (0x40)
	char pad_80[80];  // 0x50 (0x50)
	struct TSet<struct FName> RecursiveClassesExclusionSet;  // 0xA0 (0xA0)
	struct TSet<struct FTopLevelAssetPath> RecursiveClassPathsExclusionSet;  // 0xF0 (0xF0)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool bRecursivePaths : 1;  // 0x140 (0x140)
	char pad_321_1 : 7;  // 0x141 (0x141)
	bool bRecursiveClasses : 1;  // 0x141 (0x141)
	char pad_322_1 : 7;  // 0x142 (0x142)
	bool bIncludeOnlyOnDiskAssets : 1;  // 0x142 (0x142)
	char pad_323[13];  // 0x143 (0x143)


}; 
 
 // ScriptStruct CoreUObject.AssetBundleEntry
struct FAssetBundleEntry
{
	struct FName BundleName;  // 0x0 (0x0)
	struct TArray<struct FTopLevelAssetPath> AssetPaths;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.DoubleRange
struct FDoubleRange
{
	struct FDoubleRangeBound LowerBound;  // 0x0 (0x0)
	struct FDoubleRangeBound UpperBound;  // 0x10 (0x10)


}; 
 
 // ScriptStruct CoreUObject.Plane4f
// Size: 0x10(Inherited: 0xC)
struct FPlane4f : FVector3f
{
	float W;  // 0xC (0xC)


}; 
 
 // ScriptStruct CoreUObject.BoxSphereBounds3d
struct FBoxSphereBounds3d
{
	struct FVector3d Origin;  // 0x0 (0x0)
	struct FVector3d BoxExtent;  // 0x18 (0x18)
	double SphereRadius;  // 0x30 (0x30)


}; 
 
 // ScriptStruct CoreUObject.UintPoint
struct FUintPoint
{
	int32_t X;  // 0x0 (0x0)
	int32_t Y;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.TopLevelAssetPath
struct FTopLevelAssetPath
{
	struct FName PackageName;  // 0x0 (0x0)
	struct FName AssetName;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.SoftObjectPath
struct FSoftObjectPath
{
	struct FTopLevelAssetPath AssetPath;  // 0x0 (0x0)
	struct FString SubPathString;  // 0x10 (0x10)


}; 
 
 // ScriptStruct CoreUObject.AssetData
struct FAssetData
{
	struct FName PackageName;  // 0x0 (0x0)
	struct FName PackagePath;  // 0x8 (0x8)
	struct FName AssetName;  // 0x10 (0x10)
	struct FName AssetClass;  // 0x18 (0x18)
	struct FTopLevelAssetPath AssetClassPath;  // 0x20 (0x20)
	char pad_48[56];  // 0x30 (0x30)


}; 
 
 // ScriptStruct CoreUObject.FrameNumber
struct FFrameNumber
{
	int32_t Value;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CoreUObject.AssetBundleData
struct FAssetBundleData
{
	struct TArray<struct FAssetBundleEntry> Bundles;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CoreUObject.AutomationEvent
struct FAutomationEvent
{
	uint8_t Type;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FString Message;  // 0x8 (0x8)
	struct FString Context;  // 0x18 (0x18)
	struct FGuid Artifact;  // 0x28 (0x28)


}; 
 
 // ScriptStruct CoreUObject.InterpCurveTwoVectors
struct FInterpCurveTwoVectors
{
	struct TArray<struct FInterpCurvePointTwoVectors> Points;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bIsLooped : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float LoopKeyOffset;  // 0x14 (0x14)


}; 
 
 // ScriptStruct CoreUObject.AutomationExecutionEntry
struct FAutomationExecutionEntry
{
	struct FAutomationEvent Event;  // 0x0 (0x0)
	struct FString Filename;  // 0x38 (0x38)
	int32_t LineNumber;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct FDateTime Timestamp;  // 0x50 (0x50)


}; 
 
 // ScriptStruct CoreUObject.DateTime
struct FDateTime
{
	char pad_0[8];  // 0x0 (0x0)


}; 
 
 // ScriptStruct CoreUObject.FallbackStruct
struct FFallbackStruct
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct CoreUObject.Int64Point
struct FInt64Point
{
	int64_t X;  // 0x0 (0x0)
	int64_t Y;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.Box
struct FBox
{
	struct FVector Min;  // 0x0 (0x0)
	struct FVector Max;  // 0x18 (0x18)
	char IsValid;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // ScriptStruct CoreUObject.Vector
struct FVector
{
	double X;  // 0x0 (0x0)
	double Y;  // 0x8 (0x8)
	double Z;  // 0x10 (0x10)


}; 
 
 // ScriptStruct CoreUObject.Int32Vector
struct FInt32Vector
{
	int32_t X;  // 0x0 (0x0)
	int32_t Y;  // 0x4 (0x4)
	int32_t Z;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.Box2D
struct FBox2D
{
	struct FVector2D Min;  // 0x0 (0x0)
	struct FVector2D Max;  // 0x10 (0x10)
	char bIsValid;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // ScriptStruct CoreUObject.Uint32Point
struct FUint32Point
{
	int32_t X;  // 0x0 (0x0)
	int32_t Y;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.InterpCurveLinearColor
struct FInterpCurveLinearColor
{
	struct TArray<struct FInterpCurvePointLinearColor> Points;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bIsLooped : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float LoopKeyOffset;  // 0x14 (0x14)


}; 
 
 // ScriptStruct CoreUObject.Box2f
struct FBox2f
{
	struct FVector2f Min;  // 0x0 (0x0)
	struct FVector2f Max;  // 0x8 (0x8)
	char bIsValid;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // ScriptStruct CoreUObject.Int32Vector2
struct FInt32Vector2
{
	int32_t X;  // 0x0 (0x0)
	int32_t Y;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.Vector2f
struct FVector2f
{
	float X;  // 0x0 (0x0)
	float Y;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.Box3d
struct FBox3d
{
	struct FVector3d Min;  // 0x0 (0x0)
	struct FVector3d Max;  // 0x18 (0x18)
	char IsValid;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // ScriptStruct CoreUObject.InterpCurvePointVector2D
struct FInterpCurvePointVector2D
{
	float InVal;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector2D OutVal;  // 0x8 (0x8)
	struct FVector2D ArriveTangent;  // 0x18 (0x18)
	struct FVector2D LeaveTangent;  // 0x28 (0x28)
	enum class EInterpCurveMode InterpMode;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // ScriptStruct CoreUObject.Vector3d
struct FVector3d
{
	double X;  // 0x0 (0x0)
	double Y;  // 0x8 (0x8)
	double Z;  // 0x10 (0x10)


}; 
 
 // ScriptStruct CoreUObject.TwoVectors
struct FTwoVectors
{
	struct FVector v1;  // 0x0 (0x0)
	struct FVector v2;  // 0x18 (0x18)


}; 
 
 // ScriptStruct CoreUObject.Box3f
struct FBox3f
{
	struct FVector3f Min;  // 0x0 (0x0)
	struct FVector3f Max;  // 0xC (0xC)
	char IsValid;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)


}; 
 
 // ScriptStruct CoreUObject.FrameTime
struct FFrameTime
{
	struct FFrameNumber FrameNumber;  // 0x0 (0x0)
	float SubFrame;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.Vector3f
struct FVector3f
{
	float X;  // 0x0 (0x0)
	float Y;  // 0x4 (0x4)
	float Z;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.InterpCurvePointTwoVectors
struct FInterpCurvePointTwoVectors
{
	float InVal;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FTwoVectors OutVal;  // 0x8 (0x8)
	struct FTwoVectors ArriveTangent;  // 0x38 (0x38)
	struct FTwoVectors LeaveTangent;  // 0x68 (0x68)
	enum class EInterpCurveMode InterpMode;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)


}; 
 
 // ScriptStruct CoreUObject.FloatRange
struct FFloatRange
{
	struct FFloatRangeBound LowerBound;  // 0x0 (0x0)
	struct FFloatRangeBound UpperBound;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.BoxSphereBounds
struct FBoxSphereBounds
{
	struct FVector Origin;  // 0x0 (0x0)
	struct FVector BoxExtent;  // 0x18 (0x18)
	double SphereRadius;  // 0x30 (0x30)


}; 
 
 // ScriptStruct CoreUObject.BoxSphereBounds3f
struct FBoxSphereBounds3f
{
	struct FVector3f Origin;  // 0x0 (0x0)
	struct FVector3f BoxExtent;  // 0xC (0xC)
	float SphereRadius;  // 0x18 (0x18)


}; 
 
 // ScriptStruct CoreUObject.FrameNumberRangeBound
struct FFrameNumberRangeBound
{
	enum class ERangeBoundTypes Type;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FFrameNumber Value;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.Color
struct FColor
{
	char B;  // 0x0 (0x0)
	char G;  // 0x1 (0x1)
	char R;  // 0x2 (0x2)
	char A;  // 0x3 (0x3)


}; 
 
 // ScriptStruct CoreUObject.DirectoryPath
struct FDirectoryPath
{
	struct FString Path;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CoreUObject.InterpCurvePointVector
struct FInterpCurvePointVector
{
	float InVal;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector OutVal;  // 0x8 (0x8)
	struct FVector ArriveTangent;  // 0x20 (0x20)
	struct FVector LeaveTangent;  // 0x38 (0x38)
	enum class EInterpCurveMode InterpMode;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)


}; 
 
 // ScriptStruct CoreUObject.Uint32Vector
struct FUint32Vector
{
	uint32_t X;  // 0x0 (0x0)
	uint32_t Y;  // 0x4 (0x4)
	uint32_t Z;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.Int64Vector2
struct FInt64Vector2
{
	int64_t X;  // 0x0 (0x0)
	int64_t Y;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.DoubleRangeBound
struct FDoubleRangeBound
{
	enum class ERangeBoundTypes Type;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	double Value;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.FrameRate
struct FFrameRate
{
	int32_t Numerator;  // 0x0 (0x0)
	int32_t Denominator;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.FilePath
struct FFilePath
{
	struct FString FilePath;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CoreUObject.FloatInterval
struct FFloatInterval
{
	float Min;  // 0x0 (0x0)
	float Max;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.FloatRangeBound
struct FFloatRangeBound
{
	enum class ERangeBoundTypes Type;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float Value;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.FrameNumberRange
struct FFrameNumberRange
{
	struct FFrameNumberRangeBound LowerBound;  // 0x0 (0x0)
	struct FFrameNumberRangeBound UpperBound;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.InputDeviceId
struct FInputDeviceId
{
	int32_t InternalId;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CoreUObject.PackedNormal
struct FPackedNormal
{
	char X;  // 0x0 (0x0)
	char Y;  // 0x1 (0x1)
	char Z;  // 0x2 (0x2)
	char W;  // 0x3 (0x3)


}; 
 
 // ScriptStruct CoreUObject.Quat
struct FQuat
{
	double X;  // 0x0 (0x0)
	double Y;  // 0x8 (0x8)
	double Z;  // 0x10 (0x10)
	double W;  // 0x18 (0x18)


}; 
 
 // ScriptStruct CoreUObject.Int32Interval
struct FInt32Interval
{
	int32_t Min;  // 0x0 (0x0)
	int32_t Max;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.Int32Point
struct FInt32Point
{
	int32_t X;  // 0x0 (0x0)
	int32_t Y;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.Int32Range
struct FInt32Range
{
	struct FInt32RangeBound LowerBound;  // 0x0 (0x0)
	struct FInt32RangeBound UpperBound;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.Int32RangeBound
struct FInt32RangeBound
{
	enum class ERangeBoundTypes Type;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t Value;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.Int32Vector4
struct FInt32Vector4
{
	int32_t X;  // 0x0 (0x0)
	int32_t Y;  // 0x4 (0x4)
	int32_t Z;  // 0x8 (0x8)
	int32_t W;  // 0xC (0xC)


}; 
 
 // ScriptStruct CoreUObject.Int64Vector
struct FInt64Vector
{
	int64_t X;  // 0x0 (0x0)
	int64_t Y;  // 0x8 (0x8)
	int64_t Z;  // 0x10 (0x10)


}; 
 
 // ScriptStruct CoreUObject.IntVector
struct FIntVector
{
	int32_t X;  // 0x0 (0x0)
	int32_t Y;  // 0x4 (0x4)
	int32_t Z;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.Int64Vector4
struct FInt64Vector4
{
	int64_t X;  // 0x0 (0x0)
	int64_t Y;  // 0x8 (0x8)
	int64_t Z;  // 0x10 (0x10)
	int64_t W;  // 0x18 (0x18)


}; 
 
 // ScriptStruct CoreUObject.InterpCurveFloat
struct FInterpCurveFloat
{
	struct TArray<struct FInterpCurvePointFloat> Points;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bIsLooped : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float LoopKeyOffset;  // 0x14 (0x14)


}; 
 
 // ScriptStruct CoreUObject.InterpCurvePointFloat
struct FInterpCurvePointFloat
{
	float InVal;  // 0x0 (0x0)
	float OutVal;  // 0x4 (0x4)
	float ArriveTangent;  // 0x8 (0x8)
	float LeaveTangent;  // 0xC (0xC)
	enum class EInterpCurveMode InterpMode;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // ScriptStruct CoreUObject.InterpCurvePointLinearColor
struct FInterpCurvePointLinearColor
{
	float InVal;  // 0x0 (0x0)
	struct FLinearColor OutVal;  // 0x4 (0x4)
	struct FLinearColor ArriveTangent;  // 0x14 (0x14)
	struct FLinearColor LeaveTangent;  // 0x24 (0x24)
	enum class EInterpCurveMode InterpMode;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)


}; 
 
 // ScriptStruct CoreUObject.LinearColor
struct FLinearColor
{
	float R;  // 0x0 (0x0)
	float G;  // 0x4 (0x4)
	float B;  // 0x8 (0x8)
	float A;  // 0xC (0xC)


}; 
 
 // ScriptStruct CoreUObject.InterpCurvePointQuat
struct FInterpCurvePointQuat
{
	float InVal;  // 0x0 (0x0)
	char pad_4[12];  // 0x4 (0x4)
	struct FQuat OutVal;  // 0x10 (0x10)
	struct FQuat ArriveTangent;  // 0x30 (0x30)
	struct FQuat LeaveTangent;  // 0x50 (0x50)
	enum class EInterpCurveMode InterpMode;  // 0x70 (0x70)
	char pad_113[15];  // 0x71 (0x71)


}; 
 
 // ScriptStruct CoreUObject.InterpCurveQuat
struct FInterpCurveQuat
{
	struct TArray<struct FInterpCurvePointQuat> Points;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bIsLooped : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float LoopKeyOffset;  // 0x14 (0x14)


}; 
 
 // ScriptStruct CoreUObject.InterpCurveVector
struct FInterpCurveVector
{
	struct TArray<struct FInterpCurvePointVector> Points;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bIsLooped : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float LoopKeyOffset;  // 0x14 (0x14)


}; 
 
 // ScriptStruct CoreUObject.InterpCurveVector2D
struct FInterpCurveVector2D
{
	struct TArray<struct FInterpCurvePointVector2D> Points;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bIsLooped : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float LoopKeyOffset;  // 0x14 (0x14)


}; 
 
 // ScriptStruct CoreUObject.IntPoint
struct FIntPoint
{
	int32_t X;  // 0x0 (0x0)
	int32_t Y;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.IntVector2
struct FIntVector2
{
	int32_t X;  // 0x0 (0x0)
	int32_t Y;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.IntVector4
struct FIntVector4
{
	int32_t X;  // 0x0 (0x0)
	int32_t Y;  // 0x4 (0x4)
	int32_t Z;  // 0x8 (0x8)
	int32_t W;  // 0xC (0xC)


}; 
 
 // ScriptStruct CoreUObject.Matrix
struct FMatrix
{
	struct FPlane XPlane;  // 0x0 (0x0)
	struct FPlane YPlane;  // 0x20 (0x20)
	struct FPlane ZPlane;  // 0x40 (0x40)
	struct FPlane WPlane;  // 0x60 (0x60)


}; 
 
 // ScriptStruct CoreUObject.TemplateString
struct FTemplateString
{
	struct FString Template;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CoreUObject.Plane
// Size: 0x20(Inherited: 0x18)
struct FPlane : FVector
{
	double W;  // 0x18 (0x18)


}; 
 
 // ScriptStruct CoreUObject.Matrix44d
struct FMatrix44d
{
	struct FPlane4d XPlane;  // 0x0 (0x0)
	struct FPlane4d YPlane;  // 0x20 (0x20)
	struct FPlane4d ZPlane;  // 0x40 (0x40)
	struct FPlane4d WPlane;  // 0x60 (0x60)


}; 
 
 // ScriptStruct CoreUObject.Plane4d
// Size: 0x20(Inherited: 0x18)
struct FPlane4d : FVector3d
{
	double W;  // 0x18 (0x18)


}; 
 
 // ScriptStruct CoreUObject.Matrix44f
struct FMatrix44f
{
	struct FPlane4f XPlane;  // 0x0 (0x0)
	struct FPlane4f YPlane;  // 0x10 (0x10)
	struct FPlane4f ZPlane;  // 0x20 (0x20)
	struct FPlane4f WPlane;  // 0x30 (0x30)


}; 
 
 // ScriptStruct CoreUObject.OrientedBox
struct FOrientedBox
{
	struct FVector Center;  // 0x0 (0x0)
	struct FVector AxisX;  // 0x18 (0x18)
	struct FVector AxisY;  // 0x30 (0x30)
	struct FVector AxisZ;  // 0x48 (0x48)
	double ExtentX;  // 0x60 (0x60)
	double ExtentY;  // 0x68 (0x68)
	double ExtentZ;  // 0x70 (0x70)


}; 
 
 // ScriptStruct CoreUObject.PackedRGB10A2N
struct FPackedRGB10A2N
{
	int32_t Packed;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CoreUObject.PackedRGBA16N
struct FPackedRGBA16N
{
	int32_t XY;  // 0x0 (0x0)
	int32_t ZW;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.PlatformInputDeviceState
struct FPlatformInputDeviceState
{
	struct FPlatformUserId OwningPlatformUser;  // 0x0 (0x0)
	uint8_t ConnectionState;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // ScriptStruct CoreUObject.PlatformUserId
struct FPlatformUserId
{
	int32_t InternalId;  // 0x0 (0x0)


}; 
 
 // Function CoreUObject.Object.ExecuteUbergraph
struct FExecuteUbergraph
{
	int32_t EntryPoint;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CoreUObject.PolyglotTextData
struct FPolyglotTextData
{
	uint8_t Category;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FString NativeCulture;  // 0x8 (0x8)
	struct FString Namespace;  // 0x18 (0x18)
	struct FString Key;  // 0x28 (0x28)
	struct FString NativeString;  // 0x38 (0x38)
	struct TMap<struct FString, struct FString> LocalizedStrings;  // 0x48 (0x48)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool bIsMinimalPatch : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)
	struct FText CachedText;  // 0xA0 (0xA0)


}; 
 
 // ScriptStruct CoreUObject.PrimaryAssetId
struct FPrimaryAssetId
{
	struct FPrimaryAssetType PrimaryAssetType;  // 0x0 (0x0)
	struct FName PrimaryAssetName;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.PrimaryAssetType
struct FPrimaryAssetType
{
	struct FName Name;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CoreUObject.QualifiedFrameTime
struct FQualifiedFrameTime
{
	struct FFrameTime Time;  // 0x0 (0x0)
	struct FFrameRate Rate;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.Quat4d
struct FQuat4d
{
	double X;  // 0x0 (0x0)
	double Y;  // 0x8 (0x8)
	double Z;  // 0x10 (0x10)
	double W;  // 0x18 (0x18)


}; 
 
 // ScriptStruct CoreUObject.Quat4f
struct FQuat4f
{
	float X;  // 0x0 (0x0)
	float Y;  // 0x4 (0x4)
	float Z;  // 0x8 (0x8)
	float W;  // 0xC (0xC)


}; 
 
 // ScriptStruct CoreUObject.RandomStream
struct FRandomStream
{
	int32_t InitialSeed;  // 0x0 (0x0)
	int32_t Seed;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.Transform3f
struct FTransform3f
{
	struct FQuat4f Rotation;  // 0x0 (0x0)
	struct FVector3f Translation;  // 0x10 (0x10)
	char pad_28[4];  // 0x1C (0x1C)
	struct FVector3f Scale3D;  // 0x20 (0x20)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct CoreUObject.Rotator
struct FRotator
{
	double Pitch;  // 0x0 (0x0)
	double Yaw;  // 0x8 (0x8)
	double Roll;  // 0x10 (0x10)


}; 
 
 // ScriptStruct CoreUObject.Rotator3d
struct FRotator3d
{
	double Pitch;  // 0x0 (0x0)
	double Yaw;  // 0x8 (0x8)
	double Roll;  // 0x10 (0x10)


}; 
 
 // ScriptStruct CoreUObject.Rotator3f
struct FRotator3f
{
	float Pitch;  // 0x0 (0x0)
	float Yaw;  // 0x4 (0x4)
	float Roll;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.SoftClassPath
// Size: 0x20(Inherited: 0x20)
struct FSoftClassPath : FSoftObjectPath
{


}; 
 
 // ScriptStruct CoreUObject.TestUninitializedScriptStructMembersTest
struct FTestUninitializedScriptStructMembersTest
{
	struct UObject* UninitializedObjectReference;  // 0x0 (0x0)
	struct UObject* InitializedObjectReference;  // 0x8 (0x8)
	float UnusedValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct CoreUObject.Timecode
struct FTimecode
{
	int32_t Hours;  // 0x0 (0x0)
	int32_t Minutes;  // 0x4 (0x4)
	int32_t Seconds;  // 0x8 (0x8)
	int32_t Frames;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bDropFrameFormat : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // ScriptStruct CoreUObject.Timespan
struct FTimespan
{
	char pad_0[8];  // 0x0 (0x0)


}; 
 
 // ScriptStruct CoreUObject.Transform
struct FTransform
{
	struct FQuat Rotation;  // 0x0 (0x0)
	struct FVector Translation;  // 0x20 (0x20)
	char pad_56[8];  // 0x38 (0x38)
	struct FVector Scale3D;  // 0x40 (0x40)
	char pad_88[8];  // 0x58 (0x58)


}; 
 
 // ScriptStruct CoreUObject.Transform3d
struct FTransform3d
{
	struct FQuat4d Rotation;  // 0x0 (0x0)
	struct FVector3d Translation;  // 0x20 (0x20)
	char pad_56[8];  // 0x38 (0x38)
	struct FVector3d Scale3D;  // 0x40 (0x40)
	char pad_88[8];  // 0x58 (0x58)


}; 
 
 // ScriptStruct CoreUObject.Uint32Vector2
struct FUint32Vector2
{
	uint32_t X;  // 0x0 (0x0)
	uint32_t Y;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.Uint32Vector4
struct FUint32Vector4
{
	uint32_t X;  // 0x0 (0x0)
	uint32_t Y;  // 0x4 (0x4)
	uint32_t Z;  // 0x8 (0x8)
	uint32_t W;  // 0xC (0xC)


}; 
 
 // ScriptStruct CoreUObject.Uint64Point
struct FUint64Point
{
	int64_t X;  // 0x0 (0x0)
	int64_t Y;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.Uint64Vector
struct FUint64Vector
{
	uint64_t X;  // 0x0 (0x0)
	uint64_t Y;  // 0x8 (0x8)
	uint64_t Z;  // 0x10 (0x10)


}; 
 
 // ScriptStruct CoreUObject.Uint64Vector2
struct FUint64Vector2
{
	uint64_t X;  // 0x0 (0x0)
	uint64_t Y;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.Uint64Vector4
struct FUint64Vector4
{
	uint64_t X;  // 0x0 (0x0)
	uint64_t Y;  // 0x8 (0x8)
	uint64_t Z;  // 0x10 (0x10)
	uint64_t W;  // 0x18 (0x18)


}; 
 
 // ScriptStruct CoreUObject.UintVector
struct FUintVector
{
	uint32_t X;  // 0x0 (0x0)
	uint32_t Y;  // 0x4 (0x4)
	uint32_t Z;  // 0x8 (0x8)


}; 
 
 // ScriptStruct CoreUObject.UintVector2
struct FUintVector2
{
	uint32_t X;  // 0x0 (0x0)
	uint32_t Y;  // 0x4 (0x4)


}; 
 
 // ScriptStruct CoreUObject.UintVector4
struct FUintVector4
{
	uint32_t X;  // 0x0 (0x0)
	uint32_t Y;  // 0x4 (0x4)
	uint32_t Z;  // 0x8 (0x8)
	uint32_t W;  // 0xC (0xC)


}; 
 
 // ScriptStruct CoreUObject.Vector4
struct FVector4
{
	double X;  // 0x0 (0x0)
	double Y;  // 0x8 (0x8)
	double Z;  // 0x10 (0x10)
	double W;  // 0x18 (0x18)


}; 
 
 // ScriptStruct CoreUObject.Vector4d
struct FVector4d
{
	double X;  // 0x0 (0x0)
	double Y;  // 0x8 (0x8)
	double Z;  // 0x10 (0x10)
	double W;  // 0x18 (0x18)


}; 
 
 // ScriptStruct CoreUObject.Vector4f
struct FVector4f
{
	float X;  // 0x0 (0x0)
	float Y;  // 0x4 (0x4)
	float Z;  // 0x8 (0x8)
	float W;  // 0xC (0xC)


}; 
 
 
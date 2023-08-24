#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct GeometryCollectionNodes.ExpandVectorDataflowNode
// Size: 0xF8(Inherited: 0xD0)
struct FExpandVectorDataflowNode : FDataflowNode
{
	struct FVector Vector;  // 0xD0 (0xD0)
	float X;  // 0xE8 (0xE8)
	float Y;  // 0xEC (0xEC)
	float Z;  // 0xF0 (0xF0)
	char pad_244[4];  // 0xF4 (0xF4)


}; 
 
 // ScriptStruct GeometryCollectionNodes.CloseGeometryOnCollectionDataflowNode
// Size: 0x180(Inherited: 0xD0)
struct FCloseGeometryOnCollectionDataflowNode : FDataflowNode
{
	struct FManagedArrayCollection Collection;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct GeometryCollectionNodes.SkeletalMeshToCollectionDataflowNode
// Size: 0x188(Inherited: 0xD0)
struct FSkeletalMeshToCollectionDataflowNode : FDataflowNode
{
	struct USkeletalMesh* SkeletalMesh;  // 0xD0 (0xD0)
	struct FManagedArrayCollection Collection;  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct GeometryCollectionNodes.GenerateTetrahedralCollectionDataflowNodes
// Size: 0x180(Inherited: 0xD0)
struct FGenerateTetrahedralCollectionDataflowNodes : FDataflowNode
{
	struct FManagedArrayCollection Collection;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct GeometryCollectionNodes.PrintStringDataflowNode
// Size: 0xF0(Inherited: 0xD0)
struct FPrintStringDataflowNode : FDataflowNode
{
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool PrintToScreen : 1;  // 0xD0 (0xD0)
	char pad_209_1 : 7;  // 0xD1 (0xD1)
	bool PrintToLog : 1;  // 0xD1 (0xD1)
	char pad_210[2];  // 0xD2 (0xD2)
	struct FColor Color;  // 0xD4 (0xD4)
	float Duration;  // 0xD8 (0xD8)
	char pad_220[4];  // 0xDC (0xDC)
	struct FString String;  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct GeometryCollectionNodes.ExampleCollectionEditDataflowNode
// Size: 0x188(Inherited: 0xD0)
struct FExampleCollectionEditDataflowNode : FDataflowNode
{
	float Scale;  // 0xD0 (0xD0)
	char pad_212[4];  // 0xD4 (0xD4)
	struct FManagedArrayCollection Collection;  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct GeometryCollectionNodes.RadiansToDegreesDataflowNode
// Size: 0xD8(Inherited: 0xD0)
struct FRadiansToDegreesDataflowNode : FDataflowNode
{
	float Radians;  // 0xD0 (0xD0)
	float Degrees;  // 0xD4 (0xD4)


}; 
 
 // ScriptStruct GeometryCollectionNodes.GetCollectionAssetDataflowNode
// Size: 0x180(Inherited: 0xD0)
struct FGetCollectionAssetDataflowNode : FDataflowNode
{
	struct FManagedArrayCollection Output;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct GeometryCollectionNodes.FloatToStringDataflowNode
// Size: 0xE8(Inherited: 0xD0)
struct FFloatToStringDataflowNode : FDataflowNode
{
	float float;  // 0xD0 (0xD0)
	char pad_212[4];  // 0xD4 (0xD4)
	struct FString String;  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct GeometryCollectionNodes.SetCollectionAssetDataflowNode
// Size: 0x180(Inherited: 0xD0)
struct FSetCollectionAssetDataflowNode : FDataflowNode
{
	struct FManagedArrayCollection Collection;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct GeometryCollectionNodes.RandomFloatInRangeDataflowNode
// Size: 0xE8(Inherited: 0xD0)
struct FRandomFloatInRangeDataflowNode : FDataflowNode
{
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool Deterministic : 1;  // 0xD0 (0xD0)
	char pad_209[3];  // 0xD1 (0xD1)
	float RandomSeed;  // 0xD4 (0xD4)
	float Min;  // 0xD8 (0xD8)
	float Max;  // 0xDC (0xDC)
	float float;  // 0xE0 (0xE0)
	char pad_228[4];  // 0xE4 (0xE4)


}; 
 
 // ScriptStruct GeometryCollectionNodes.LogStringDataflowNode
// Size: 0xE8(Inherited: 0xD0)
struct FLogStringDataflowNode : FDataflowNode
{
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool PrintToLog : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct FString String;  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct GeometryCollectionNodes.ResetGeometryCollectionDataflowNode
// Size: 0x180(Inherited: 0xD0)
struct FResetGeometryCollectionDataflowNode : FDataflowNode
{
	struct FManagedArrayCollection Collection;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct GeometryCollectionNodes.MakeLiteralStringDataflowNode
// Size: 0xF0(Inherited: 0xD0)
struct FMakeLiteralStringDataflowNode : FDataflowNode
{
	struct FString Value;  // 0xD0 (0xD0)
	struct FString String;  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct GeometryCollectionNodes.VectorToStringDataflowNode
// Size: 0xF8(Inherited: 0xD0)
struct FVectorToStringDataflowNode : FDataflowNode
{
	struct FVector Vector;  // 0xD0 (0xD0)
	struct FString String;  // 0xE8 (0xE8)


}; 
 
 // ScriptStruct GeometryCollectionNodes.BoundingBoxDataflowNode
// Size: 0x1B8(Inherited: 0xD0)
struct FBoundingBoxDataflowNode : FDataflowNode
{
	struct FManagedArrayCollection Collection;  // 0xD0 (0xD0)
	struct FBox BoundingBox;  // 0x180 (0x180)


}; 
 
 // ScriptStruct GeometryCollectionNodes.ExpandBoundingBoxDataflowNode
// Size: 0x170(Inherited: 0xD0)
struct FExpandBoundingBoxDataflowNode : FDataflowNode
{
	struct FBox BoundingBox;  // 0xD0 (0xD0)
	struct FVector Min;  // 0x108 (0x108)
	struct FVector Max;  // 0x120 (0x120)
	struct FVector Center;  // 0x138 (0x138)
	struct FVector HalfExtents;  // 0x150 (0x150)
	float Volume;  // 0x168 (0x168)
	char pad_364[4];  // 0x16C (0x16C)


}; 
 
 // ScriptStruct GeometryCollectionNodes.HashStringDataflowNode
// Size: 0xE8(Inherited: 0xD0)
struct FHashStringDataflowNode : FDataflowNode
{
	struct FString String;  // 0xD0 (0xD0)
	int32_t Hash;  // 0xE0 (0xE0)
	char pad_228[4];  // 0xE4 (0xE4)


}; 
 
 // ScriptStruct GeometryCollectionNodes.CreateNonOverlappingConvexHullsDataflowNode
// Size: 0x190(Inherited: 0xD0)
struct FCreateNonOverlappingConvexHullsDataflowNode : FDataflowNode
{
	struct FManagedArrayCollection Collection;  // 0xD0 (0xD0)
	float CanRemoveFraction;  // 0x180 (0x180)
	float CanExceedFraction;  // 0x184 (0x184)
	float SimplificationDistanceThreshold;  // 0x188 (0x188)
	char pad_396[4];  // 0x18C (0x18C)


}; 
 
 // ScriptStruct GeometryCollectionNodes.MakePointsDataflowNode
// Size: 0xF0(Inherited: 0xD0)
struct FMakePointsDataflowNode : FDataflowNode
{
	struct TArray<struct FVector> Point;  // 0xD0 (0xD0)
	struct TArray<struct FVector> Points;  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct GeometryCollectionNodes.MakeBoxDataflowNode
// Size: 0x170(Inherited: 0xD0)
struct FMakeBoxDataflowNode : FDataflowNode
{
	uint8_t DataType;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct FVector Min;  // 0xD8 (0xD8)
	struct FVector Max;  // 0xF0 (0xF0)
	struct FVector Center;  // 0x108 (0x108)
	struct FVector Size;  // 0x120 (0x120)
	struct FBox Box;  // 0x138 (0x138)


}; 
 
 // ScriptStruct GeometryCollectionNodes.MakeLiteralFloatDataflowNode
// Size: 0xD8(Inherited: 0xD0)
struct FMakeLiteralFloatDataflowNode : FDataflowNode
{
	float Value;  // 0xD0 (0xD0)
	float float;  // 0xD4 (0xD4)


}; 
 
 // ScriptStruct GeometryCollectionNodes.UniformScatterPointsDataflowNode
// Size: 0x128(Inherited: 0xD0)
struct FUniformScatterPointsDataflowNode : FDataflowNode
{
	int32_t MinNumberOfPoints;  // 0xD0 (0xD0)
	int32_t MaxNumberOfPoints;  // 0xD4 (0xD4)
	float RandomSeed;  // 0xD8 (0xD8)
	char pad_220[4];  // 0xDC (0xDC)
	struct FBox BoundingBox;  // 0xE0 (0xE0)
	struct TArray<struct FVector> Points;  // 0x118 (0x118)


}; 
 
 // ScriptStruct GeometryCollectionNodes.RadialScatterPointsDataflowNode
// Size: 0x128(Inherited: 0xD0)
struct FRadialScatterPointsDataflowNode : FDataflowNode
{
	struct FVector Center;  // 0xD0 (0xD0)
	struct FVector Normal;  // 0xE8 (0xE8)
	float Radius;  // 0x100 (0x100)
	int32_t AngularSteps;  // 0x104 (0x104)
	int32_t RadialSteps;  // 0x108 (0x108)
	float AngleOffset;  // 0x10C (0x10C)
	float Variability;  // 0x110 (0x110)
	float RandomSeed;  // 0x114 (0x114)
	struct TArray<struct FVector> Points;  // 0x118 (0x118)


}; 
 
 // ScriptStruct GeometryCollectionNodes.IntToFloatDataflowNode
// Size: 0xD8(Inherited: 0xD0)
struct FIntToFloatDataflowNode : FDataflowNode
{
	int32_t Int;  // 0xD0 (0xD0)
	float float;  // 0xD4 (0xD4)


}; 
 
 // ScriptStruct GeometryCollectionNodes.MakeLiteralIntDataflowNode
// Size: 0xD8(Inherited: 0xD0)
struct FMakeLiteralIntDataflowNode : FDataflowNode
{
	int32_t Value;  // 0xD0 (0xD0)
	int32_t Int;  // 0xD4 (0xD4)


}; 
 
 // ScriptStruct GeometryCollectionNodes.MakeLiteralBoolDataflowNode
// Size: 0xD8(Inherited: 0xD0)
struct FMakeLiteralBoolDataflowNode : FDataflowNode
{
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool Value : 1;  // 0xD0 (0xD0)
	char pad_209_1 : 7;  // 0xD1 (0xD1)
	bool bool : 1;  // 0xD1 (0xD1)
	char pad_210[6];  // 0xD2 (0xD2)


}; 
 
 // ScriptStruct GeometryCollectionNodes.MakeLiteralVectorDataflowNode
// Size: 0x100(Inherited: 0xD0)
struct FMakeLiteralVectorDataflowNode : FDataflowNode
{
	struct FVector Value;  // 0xD0 (0xD0)
	struct FVector Vector;  // 0xE8 (0xE8)


}; 
 
 // ScriptStruct GeometryCollectionNodes.PlaneCutterDataflowNode
// Size: 0x1E8(Inherited: 0xD0)
struct FPlaneCutterDataflowNode : FDataflowNode
{
	struct FManagedArrayCollection Collection;  // 0xD0 (0xD0)
	struct FBox BoundingBox;  // 0x180 (0x180)
	int32_t NumPlanes;  // 0x1B8 (0x1B8)
	float RandomSeed;  // 0x1BC (0x1BC)
	float Grout;  // 0x1C0 (0x1C0)
	float Amplitude;  // 0x1C4 (0x1C4)
	float Frequency;  // 0x1C8 (0x1C8)
	float Persistence;  // 0x1CC (0x1CC)
	float Lacunarity;  // 0x1D0 (0x1D0)
	int32_t OctaveNumber;  // 0x1D4 (0x1D4)
	float PointSpacing;  // 0x1D8 (0x1D8)
	char pad_476_1 : 7;  // 0x1DC (0x1DC)
	bool AddSamplesForCollision : 1;  // 0x1DC (0x1DC)
	char pad_477[3];  // 0x1DD (0x1DD)
	float CollisionSampleSpacing;  // 0x1E0 (0x1E0)
	char pad_484[4];  // 0x1E4 (0x1E4)


}; 
 
 // ScriptStruct GeometryCollectionNodes.IntToStringDataflowNode
// Size: 0xE8(Inherited: 0xD0)
struct FIntToStringDataflowNode : FDataflowNode
{
	int32_t Int;  // 0xD0 (0xD0)
	char pad_212[4];  // 0xD4 (0xD4)
	struct FString String;  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct GeometryCollectionNodes.BoolToStringDataflowNode
// Size: 0xE8(Inherited: 0xD0)
struct FBoolToStringDataflowNode : FDataflowNode
{
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool bool : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct FString String;  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct GeometryCollectionNodes.VoronoiFractureDataflowNode
// Size: 0x1C0(Inherited: 0xD0)
struct FVoronoiFractureDataflowNode : FDataflowNode
{
	struct FManagedArrayCollection Collection;  // 0xD0 (0xD0)
	struct TArray<struct FVector> Points;  // 0x180 (0x180)
	float RandomSeed;  // 0x190 (0x190)
	float ChanceToFracture;  // 0x194 (0x194)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool GroupFracture : 1;  // 0x198 (0x198)
	char pad_409[3];  // 0x199 (0x199)
	float Grout;  // 0x19C (0x19C)
	float Amplitude;  // 0x1A0 (0x1A0)
	float Frequency;  // 0x1A4 (0x1A4)
	float Persistence;  // 0x1A8 (0x1A8)
	float Lacunarity;  // 0x1AC (0x1AC)
	int32_t OctaveNumber;  // 0x1B0 (0x1B0)
	float PointSpacing;  // 0x1B4 (0x1B4)
	char pad_440_1 : 7;  // 0x1B8 (0x1B8)
	bool AddSamplesForCollision : 1;  // 0x1B8 (0x1B8)
	char pad_441[3];  // 0x1B9 (0x1B9)
	float CollisionSampleSpacing;  // 0x1BC (0x1BC)


}; 
 
 // ScriptStruct GeometryCollectionNodes.StringAppendDataflowNode
// Size: 0x100(Inherited: 0xD0)
struct FStringAppendDataflowNode : FDataflowNode
{
	struct FString String1;  // 0xD0 (0xD0)
	struct FString String2;  // 0xE0 (0xE0)
	struct FString String;  // 0xF0 (0xF0)


}; 
 
 // ScriptStruct GeometryCollectionNodes.MathConstantsDataflowNode
// Size: 0xD8(Inherited: 0xD0)
struct FMathConstantsDataflowNode : FDataflowNode
{
	uint8_t Constant;  // 0xD0 (0xD0)
	char pad_209[3];  // 0xD1 (0xD1)
	float float;  // 0xD4 (0xD4)


}; 
 
 // ScriptStruct GeometryCollectionNodes.RandomFloatDataflowNode
// Size: 0xE0(Inherited: 0xD0)
struct FRandomFloatDataflowNode : FDataflowNode
{
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool Deterministic : 1;  // 0xD0 (0xD0)
	char pad_209[3];  // 0xD1 (0xD1)
	float RandomSeed;  // 0xD4 (0xD4)
	float float;  // 0xD8 (0xD8)
	char pad_220[4];  // 0xDC (0xDC)


}; 
 
 // ScriptStruct GeometryCollectionNodes.RandomUnitVectorDataflowNode
// Size: 0xF0(Inherited: 0xD0)
struct FRandomUnitVectorDataflowNode : FDataflowNode
{
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool Deterministic : 1;  // 0xD0 (0xD0)
	char pad_209[3];  // 0xD1 (0xD1)
	float RandomSeed;  // 0xD4 (0xD4)
	struct FVector Vector;  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct GeometryCollectionNodes.RandomUnitVectorInConeDataflowNode
// Size: 0x110(Inherited: 0xD0)
struct FRandomUnitVectorInConeDataflowNode : FDataflowNode
{
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool Deterministic : 1;  // 0xD0 (0xD0)
	char pad_209[3];  // 0xD1 (0xD1)
	float RandomSeed;  // 0xD4 (0xD4)
	struct FVector ConeDirection;  // 0xD8 (0xD8)
	float ConeHalfAngle;  // 0xF0 (0xF0)
	char pad_244[4];  // 0xF4 (0xF4)
	struct FVector Vector;  // 0xF8 (0xF8)


}; 
 
 // ScriptStruct GeometryCollectionNodes.DegreesToRadiansDataflowNode
// Size: 0xD8(Inherited: 0xD0)
struct FDegreesToRadiansDataflowNode : FDataflowNode
{
	float Degrees;  // 0xD0 (0xD0)
	float Radians;  // 0xD4 (0xD4)


}; 
 
 // ScriptStruct GeometryCollectionNodes.ExplodedViewDataflowNode
// Size: 0x1A0(Inherited: 0xD0)
struct FExplodedViewDataflowNode : FDataflowNode
{
	struct FManagedArrayCollection Collection;  // 0xD0 (0xD0)
	float UniformScale;  // 0x180 (0x180)
	char pad_388[4];  // 0x184 (0x184)
	struct FVector Scale;  // 0x188 (0x188)


}; 
 
 // ScriptStruct GeometryCollectionNodes.HashVectorDataflowNode
// Size: 0xF0(Inherited: 0xD0)
struct FHashVectorDataflowNode : FDataflowNode
{
	struct FVector Vector;  // 0xD0 (0xD0)
	int32_t Hash;  // 0xE8 (0xE8)
	char pad_236[4];  // 0xEC (0xEC)


}; 
 
 // ScriptStruct GeometryCollectionNodes.FloatToIntDataflowNode
// Size: 0xE0(Inherited: 0xD0)
struct FFloatToIntDataflowNode : FDataflowNode
{
	uint8_t Function;  // 0xD0 (0xD0)
	char pad_209[3];  // 0xD1 (0xD1)
	float float;  // 0xD4 (0xD4)
	int32_t Int;  // 0xD8 (0xD8)
	char pad_220[4];  // 0xDC (0xDC)


}; 
 
 
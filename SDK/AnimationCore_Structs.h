#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct AnimationCore.NodeHierarchyData
struct FNodeHierarchyData
{
	struct TArray<struct FNodeObject> Nodes;  // 0x0 (0x0)
	struct TArray<struct FTransform> Transforms;  // 0x10 (0x10)
	struct TMap<struct FName, int32_t> NodeNameToIndexMapping;  // 0x20 (0x20)


}; 
 
 // ScriptStruct AnimationCore.FilterOptionPerAxis
struct FFilterOptionPerAxis
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bX : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bY : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bZ : 1;  // 0x2 (0x2)


}; 
 
 // ScriptStruct AnimationCore.TransformConstraint
struct FTransformConstraint
{
	struct FConstraintDescription Operator;  // 0x0 (0x0)
	char pad_13[3];  // 0xD (0xD)
	struct FName SourceNode;  // 0x10 (0x10)
	struct FName TargetNode;  // 0x18 (0x18)
	float Weight;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool bMaintainOffset : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)


}; 
 
 // ScriptStruct AnimationCore.ConstraintDescription
struct FConstraintDescription
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bTranslation : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bRotation : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bScale : 1;  // 0x2 (0x2)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool bParent : 1;  // 0x3 (0x3)
	struct FFilterOptionPerAxis TranslationAxes;  // 0x4 (0x4)
	struct FFilterOptionPerAxis RotationAxes;  // 0x7 (0x7)
	struct FFilterOptionPerAxis ScaleAxes;  // 0xA (0xA)


}; 
 
 // ScriptStruct AnimationCore.TransformFilter
struct FTransformFilter
{
	struct FFilterOptionPerAxis TranslationFilter;  // 0x0 (0x0)
	struct FFilterOptionPerAxis RotationFilter;  // 0x3 (0x3)
	struct FFilterOptionPerAxis ScaleFilter;  // 0x6 (0x6)


}; 
 
 // ScriptStruct AnimationCore.ConstraintOffset
struct FConstraintOffset
{
	struct FVector Translation;  // 0x0 (0x0)
	char pad_24[8];  // 0x18 (0x18)
	struct FQuat Rotation;  // 0x20 (0x20)
	struct FVector Scale;  // 0x40 (0x40)
	char pad_88[8];  // 0x58 (0x58)
	struct FTransform Parent;  // 0x60 (0x60)


}; 
 
 // ScriptStruct AnimationCore.NodeHierarchyWithUserData
struct FNodeHierarchyWithUserData
{
	char pad_0[8];  // 0x0 (0x0)
	struct FNodeHierarchyData Hierarchy;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AnimationCore.NodeObject
struct FNodeObject
{
	struct FName Name;  // 0x0 (0x0)
	struct FName ParentName;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AnimationCore.EulerTransform
struct FEulerTransform
{
	struct FVector Location;  // 0x0 (0x0)
	struct FRotator Rotation;  // 0x18 (0x18)
	struct FVector Scale;  // 0x30 (0x30)


}; 
 
 // ScriptStruct AnimationCore.ConstraintData
struct FConstraintData
{
	struct FConstraintDescriptor Constraint;  // 0x0 (0x0)
	float Weight;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bMaintainOffset : 1;  // 0x14 (0x14)
	char pad_21[11];  // 0x15 (0x15)
	struct FTransform Offset;  // 0x20 (0x20)
	struct FTransform CurrentTransform;  // 0x80 (0x80)


}; 
 
 // ScriptStruct AnimationCore.ConstraintDescriptor
struct FConstraintDescriptor
{
	uint8_t Type;  // 0x0 (0x0)
	char pad_1[15];  // 0x1 (0x1)


}; 
 
 // ScriptStruct AnimationCore.CCDIKChainLink
struct FCCDIKChainLink
{
	char pad_0[224];  // 0x0 (0x0)


}; 
 
 // ScriptStruct AnimationCore.FABRIKChainLink
struct FFABRIKChainLink
{
	char pad_0[80];  // 0x0 (0x0)


}; 
 
 // ScriptStruct AnimationCore.Axis
struct FAxis
{
	struct FVector Axis;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bInLocalSpace : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct AnimationCore.NodeChain
struct FNodeChain
{
	struct TArray<struct FName> Nodes;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AnimationCore.AimConstraintDescription
// Size: 0x70(Inherited: 0x10)
struct FAimConstraintDescription : FConstraintDescriptionEx
{
	struct FAxis LookAt_Axis;  // 0x10 (0x10)
	struct FAxis LookUp_Axis;  // 0x30 (0x30)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bUseLookUp : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct FVector LookUpTarget;  // 0x58 (0x58)


}; 
 
 // ScriptStruct AnimationCore.ConstraintDescriptionEx
struct FConstraintDescriptionEx
{
	char pad_0[8];  // 0x0 (0x0)
	struct FFilterOptionPerAxis AxesFilterOption;  // 0x8 (0x8)
	char pad_11[5];  // 0xB (0xB)


}; 
 
 // ScriptStruct AnimationCore.TransformConstraintDescription
// Size: 0x18(Inherited: 0x10)
struct FTransformConstraintDescription : FConstraintDescriptionEx
{
	uint8_t TransformType;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct AnimationCore.TransformNoScale
struct FTransformNoScale
{
	struct FVector Location;  // 0x0 (0x0)
	char pad_24[8];  // 0x18 (0x18)
	struct FQuat Rotation;  // 0x20 (0x20)


}; 
 
 
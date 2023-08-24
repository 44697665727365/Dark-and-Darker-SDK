#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct FieldSystemEngine.FieldObjectCommands
struct FFieldObjectCommands
{
	struct TArray<struct FName> TargetNames;  // 0x0 (0x0)
	struct TArray<struct UFieldNodeBase*> RootNodes;  // 0x10 (0x10)
	struct TArray<struct UFieldSystemMetaData*> MetaDatas;  // 0x20 (0x20)


}; 
 
 // Function FieldSystemEngine.NoiseField.SetNoiseField
struct FSetNoiseField
{
	float MinRange;  // 0x0 (0x0)
	float MaxRange;  // 0x4 (0x4)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Transform;  // 0x10 (0x10)
	struct UNoiseField* ReturnValue;  // 0x70 (0x70)
	char pad_120[8];  // 0x78 (0x78)


}; 
 
 // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
struct FAddFieldCommand
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Enabled : 1;  // 0x0 (0x0)
	enum class EFieldPhysicsType Target;  // 0x1 (0x1)
	char pad_2[6];  // 0x2 (0x2)
	struct UFieldSystemMetaData* MetaData;  // 0x8 (0x8)
	struct UFieldNodeBase* Field;  // 0x10 (0x10)


}; 
 
 // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
struct FApplyStayDynamicField
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Enabled : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector Position;  // 0x8 (0x8)
	float Radius;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
struct FApplyRadialForce
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Enabled : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector Position;  // 0x8 (0x8)
	float Magnitude;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function FieldSystemEngine.FieldSystemComponent.AddPersistentField
struct FAddPersistentField
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Enabled : 1;  // 0x0 (0x0)
	enum class EFieldPhysicsType Target;  // 0x1 (0x1)
	char pad_2[6];  // 0x2 (0x2)
	struct UFieldSystemMetaData* MetaData;  // 0x8 (0x8)
	struct UFieldNodeBase* Field;  // 0x10 (0x10)


}; 
 
 // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
struct FSetReturnResultsTerminal
{
	struct UReturnResultsTerminal* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function FieldSystemEngine.UniformScalar.SetUniformScalar
struct FSetUniformScalar
{
	float Magnitude;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UUniformScalar* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
struct FApplyLinearForce
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Enabled : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector Direction;  // 0x8 (0x8)
	float Magnitude;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
struct FApplyPhysicsField
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Enabled : 1;  // 0x0 (0x0)
	enum class EFieldPhysicsType Target;  // 0x1 (0x1)
	char pad_2[6];  // 0x2 (0x2)
	struct UFieldSystemMetaData* MetaData;  // 0x8 (0x8)
	struct UFieldNodeBase* Field;  // 0x10 (0x10)


}; 
 
 // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
struct FApplyRadialVectorFalloffForce
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Enabled : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector Position;  // 0x8 (0x8)
	float Radius;  // 0x20 (0x20)
	float Magnitude;  // 0x24 (0x24)


}; 
 
 // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
struct FSetRadialFalloff
{
	float Magnitude;  // 0x0 (0x0)
	float MinRange;  // 0x4 (0x4)
	float MaxRange;  // 0x8 (0x8)
	float Default;  // 0xC (0xC)
	float Radius;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FVector Position;  // 0x18 (0x18)
	enum class EFieldFalloffType Falloff;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct URadialFalloff* ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
struct FApplyStrainField
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Enabled : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector Position;  // 0x8 (0x8)
	float Radius;  // 0x20 (0x20)
	float Magnitude;  // 0x24 (0x24)
	int32_t Iterations;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
struct FApplyUniformVectorFalloffForce
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Enabled : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector Position;  // 0x8 (0x8)
	struct FVector Direction;  // 0x20 (0x20)
	float Radius;  // 0x38 (0x38)
	float Magnitude;  // 0x3C (0x3C)


}; 
 
 // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
struct FSetMetaDataIteration
{
	int32_t Iterations;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UFieldSystemMetaDataIteration* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
struct FSetMetaDataaProcessingResolutionType
{
	enum class EFieldResolutionType ResolutionType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UFieldSystemMetaDataProcessingResolution* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
struct FSetMetaDataFilterType
{
	enum class EFieldFilterType FilterType;  // 0x0 (0x0)
	enum class EFieldObjectType ObjectType;  // 0x1 (0x1)
	enum class EFieldPositionType PositionType;  // 0x2 (0x2)
	char pad_3[5];  // 0x3 (0x3)
	struct UFieldSystemMetaDataFilter* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function FieldSystemEngine.UniformInteger.SetUniformInteger
struct FSetUniformInteger
{
	int32_t Magnitude;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UUniformInteger* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function FieldSystemEngine.OperatorField.SetOperatorField
struct FSetOperatorField
{
	float Magnitude;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UFieldNodeBase* LeftField;  // 0x8 (0x8)
	struct UFieldNodeBase* RightField;  // 0x10 (0x10)
	enum class EFieldOperationType Operation;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct UOperatorField* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
struct FSetRadialIntMask
{
	float Radius;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector Position;  // 0x8 (0x8)
	int32_t InteriorValue;  // 0x20 (0x20)
	int32_t ExteriorValue;  // 0x24 (0x24)
	enum class ESetMaskConditionType SetMaskConditionIn;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct URadialIntMask* ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
struct FSetBoxFalloff
{
	float Magnitude;  // 0x0 (0x0)
	float MinRange;  // 0x4 (0x4)
	float MaxRange;  // 0x8 (0x8)
	float Default;  // 0xC (0xC)
	struct FTransform Transform;  // 0x10 (0x10)
	enum class EFieldFalloffType Falloff;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)
	struct UBoxFalloff* ReturnValue;  // 0x78 (0x78)


}; 
 
 // Function FieldSystemEngine.WaveScalar.SetWaveScalar
struct FSetWaveScalar
{
	float Magnitude;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector Position;  // 0x8 (0x8)
	float WaveLength;  // 0x20 (0x20)
	float Period;  // 0x24 (0x24)
	float Time;  // 0x28 (0x28)
	enum class EWaveFunctionType Function;  // 0x2C (0x2C)
	enum class EFieldFalloffType Falloff;  // 0x2D (0x2D)
	char pad_46[2];  // 0x2E (0x2E)
	struct UWaveScalar* ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function FieldSystemEngine.RadialVector.SetRadialVector
struct FSetRadialVector
{
	float Magnitude;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector Position;  // 0x8 (0x8)
	struct URadialVector* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
struct FSetPlaneFalloff
{
	float Magnitude;  // 0x0 (0x0)
	float MinRange;  // 0x4 (0x4)
	float MaxRange;  // 0x8 (0x8)
	float Default;  // 0xC (0xC)
	float Distance;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FVector Position;  // 0x18 (0x18)
	struct FVector Normal;  // 0x30 (0x30)
	enum class EFieldFalloffType Falloff;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct UPlaneFalloff* ReturnValue;  // 0x50 (0x50)


}; 
 
 // Function FieldSystemEngine.UniformVector.SetUniformVector
struct FSetUniformVector
{
	float Magnitude;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector Direction;  // 0x8 (0x8)
	struct UUniformVector* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function FieldSystemEngine.RandomVector.SetRandomVector
struct FSetRandomVector
{
	float Magnitude;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct URandomVector* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function FieldSystemEngine.ToIntegerField.SetToIntegerField
struct FSetToIntegerField
{
	struct UFieldNodeFloat* FloatField;  // 0x0 (0x0)
	struct UToIntegerField* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function FieldSystemEngine.ToFloatField.SetToFloatField
struct FSetToFloatField
{
	struct UFieldNodeInt* IntegerField;  // 0x0 (0x0)
	struct UToFloatField* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function FieldSystemEngine.CullingField.SetCullingField
struct FSetCullingField
{
	struct UFieldNodeBase* Culling;  // 0x0 (0x0)
	struct UFieldNodeBase* Field;  // 0x8 (0x8)
	enum class EFieldCullingOperationType Operation;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct UCullingField* ReturnValue;  // 0x18 (0x18)


}; 
 
 
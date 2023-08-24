#pragma once 
#include <FieldSystemEngine_Structs.h>
 
 
 
// Class FieldSystemEngine.FieldSystemActor
// Size: 0x298(Inherited: 0x290)
struct AFieldSystemActor : AActor
{
	struct UFieldSystemComponent* FieldSystemComponent;  // 0x290 (0x290)


}; 
 
 


// Class FieldSystemEngine.FieldSystem
// Size: 0x38(Inherited: 0x28)
struct UFieldSystem : UObject
{
	char pad_40[16];  // 0x28 (0x28)


}; 
 
 


// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x610(Inherited: 0x540)
struct UFieldSystemComponent : UPrimitiveComponent
{
	struct UFieldSystem* FieldSystem;  // 0x538 (0x538)
	char pad_1352_1 : 7;  // 0x548 (0x548)
	bool bIsWorldField : 1;  // 0x540 (0x540)
	char pad_1353_1 : 7;  // 0x549 (0x549)
	bool bIsChaosField : 1;  // 0x541 (0x541)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers;  // 0x548 (0x548)
	struct FFieldObjectCommands ConstructionCommands;  // 0x558 (0x558)
	struct FFieldObjectCommands BufferCommands;  // 0x588 (0x588)
	char pad_1466[86];  // 0x5BA (0x5BA)


	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	void RemovePersistentFields(); // Function FieldSystemEngine.FieldSystemComponent.RemovePersistentFields
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	void ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	void AddPersistentField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddPersistentField
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
}; 
 
 


// Class FieldSystemEngine.FieldSystemMetaDataFilter
// Size: 0xA8(Inherited: 0xA0)
struct UFieldSystemMetaDataFilter : UFieldSystemMetaData
{
	enum class EFieldFilterType FilterType;  // 0xA0 (0xA0)
	enum class EFieldObjectType ObjectType;  // 0xA1 (0xA1)
	enum class EFieldPositionType PositionType;  // 0xA2 (0xA2)
	char pad_163[5];  // 0xA3 (0xA3)


	struct UFieldSystemMetaDataFilter* SetMetaDataFilterType(enum class EFieldFilterType FilterType, enum class EFieldObjectType ObjectType, enum class EFieldPositionType PositionType); // Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
}; 
 
 


// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xA0(Inherited: 0xA0)
struct UFieldSystemMetaData : UActorComponent
{


}; 
 
 


// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xA0(Inherited: 0xA0)
struct UReturnResultsTerminal : UFieldNodeBase
{


	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
}; 
 
 


// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xA8(Inherited: 0xA0)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData
{
	int32_t Iterations;  // 0xA0 (0xA0)
	char pad_164[4];  // 0xA4 (0xA4)


	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
}; 
 
 


// Class FieldSystemEngine.FieldNodeBase
// Size: 0xA0(Inherited: 0xA0)
struct UFieldNodeBase : UActorComponent
{


}; 
 
 


// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xA8(Inherited: 0xA0)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData
{
	enum class EFieldResolutionType ResolutionType;  // 0xA0 (0xA0)
	char pad_161[7];  // 0xA1 (0xA1)


	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
}; 
 
 


// Class FieldSystemEngine.FieldNodeInt
// Size: 0xA0(Inherited: 0xA0)
struct UFieldNodeInt : UFieldNodeBase
{


}; 
 
 


// Class FieldSystemEngine.RandomVector
// Size: 0xA8(Inherited: 0xA0)
struct URandomVector : UFieldNodeVector
{
	float Magnitude;  // 0xA0 (0xA0)
	char pad_164[4];  // 0xA4 (0xA4)


	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector
}; 
 
 


// Class FieldSystemEngine.FieldNodeFloat
// Size: 0xA0(Inherited: 0xA0)
struct UFieldNodeFloat : UFieldNodeBase
{


}; 
 
 


// Class FieldSystemEngine.FieldNodeVector
// Size: 0xA0(Inherited: 0xA0)
struct UFieldNodeVector : UFieldNodeBase
{


}; 
 
 


// Class FieldSystemEngine.UniformInteger
// Size: 0xA8(Inherited: 0xA0)
struct UUniformInteger : UFieldNodeInt
{
	int32_t Magnitude;  // 0xA0 (0xA0)
	char pad_164[4];  // 0xA4 (0xA4)


	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger
}; 
 
 


// Class FieldSystemEngine.RadialIntMask
// Size: 0xD0(Inherited: 0xA0)
struct URadialIntMask : UFieldNodeInt
{
	float Radius;  // 0xA0 (0xA0)
	char pad_164[4];  // 0xA4 (0xA4)
	struct FVector Position;  // 0xA8 (0xA8)
	int32_t InteriorValue;  // 0xC0 (0xC0)
	int32_t ExteriorValue;  // 0xC4 (0xC4)
	enum class ESetMaskConditionType SetMaskCondition;  // 0xC8 (0xC8)
	char pad_201[7];  // 0xC9 (0xC9)


	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
}; 
 
 


// Class FieldSystemEngine.UniformScalar
// Size: 0xA8(Inherited: 0xA0)
struct UUniformScalar : UFieldNodeFloat
{
	float Magnitude;  // 0xA0 (0xA0)
	char pad_164[4];  // 0xA4 (0xA4)


	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar
}; 
 
 


// Class FieldSystemEngine.WaveScalar
// Size: 0xD0(Inherited: 0xA0)
struct UWaveScalar : UFieldNodeFloat
{
	float Magnitude;  // 0xA0 (0xA0)
	char pad_164[4];  // 0xA4 (0xA4)
	struct FVector Position;  // 0xA8 (0xA8)
	float WaveLength;  // 0xC0 (0xC0)
	float Period;  // 0xC4 (0xC4)
	enum class EWaveFunctionType Function;  // 0xC8 (0xC8)
	enum class EFieldFalloffType Falloff;  // 0xC9 (0xC9)
	char pad_202[6];  // 0xCA (0xCA)


	struct UWaveScalar* SetWaveScalar(float Magnitude, struct FVector Position, float WaveLength, float Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.WaveScalar.SetWaveScalar
}; 
 
 


// Class FieldSystemEngine.RadialFalloff
// Size: 0xD8(Inherited: 0xA0)
struct URadialFalloff : UFieldNodeFloat
{
	float Magnitude;  // 0xA0 (0xA0)
	float MinRange;  // 0xA4 (0xA4)
	float MaxRange;  // 0xA8 (0xA8)
	float Default;  // 0xAC (0xAC)
	float Radius;  // 0xB0 (0xB0)
	char pad_180[4];  // 0xB4 (0xB4)
	struct FVector Position;  // 0xB8 (0xB8)
	enum class EFieldFalloffType Falloff;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)


	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
}; 
 
 


// Class FieldSystemEngine.PlaneFalloff
// Size: 0xF0(Inherited: 0xA0)
struct UPlaneFalloff : UFieldNodeFloat
{
	float Magnitude;  // 0xA0 (0xA0)
	float MinRange;  // 0xA4 (0xA4)
	float MaxRange;  // 0xA8 (0xA8)
	float Default;  // 0xAC (0xAC)
	float Distance;  // 0xB0 (0xB0)
	char pad_180[4];  // 0xB4 (0xB4)
	struct FVector Position;  // 0xB8 (0xB8)
	struct FVector Normal;  // 0xD0 (0xD0)
	enum class EFieldFalloffType Falloff;  // 0xE8 (0xE8)
	char pad_233[7];  // 0xE9 (0xE9)


	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
}; 
 
 


// Class FieldSystemEngine.BoxFalloff
// Size: 0x120(Inherited: 0xA0)
struct UBoxFalloff : UFieldNodeFloat
{
	float Magnitude;  // 0xA0 (0xA0)
	float MinRange;  // 0xA4 (0xA4)
	float MaxRange;  // 0xA8 (0xA8)
	float Default;  // 0xAC (0xAC)
	struct FTransform Transform;  // 0xB0 (0xB0)
	enum class EFieldFalloffType Falloff;  // 0x110 (0x110)
	char pad_273[15];  // 0x111 (0x111)


	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
}; 
 
 


// Class FieldSystemEngine.NoiseField
// Size: 0x110(Inherited: 0xA0)
struct UNoiseField : UFieldNodeFloat
{
	float MinRange;  // 0xA0 (0xA0)
	float MaxRange;  // 0xA4 (0xA4)
	char pad_168[8];  // 0xA8 (0xA8)
	struct FTransform Transform;  // 0xB0 (0xB0)


	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField
}; 
 
 


// Class FieldSystemEngine.UniformVector
// Size: 0xC0(Inherited: 0xA0)
struct UUniformVector : UFieldNodeVector
{
	float Magnitude;  // 0xA0 (0xA0)
	char pad_164[4];  // 0xA4 (0xA4)
	struct FVector Direction;  // 0xA8 (0xA8)


	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector
}; 
 
 


// Class FieldSystemEngine.RadialVector
// Size: 0xC0(Inherited: 0xA0)
struct URadialVector : UFieldNodeVector
{
	float Magnitude;  // 0xA0 (0xA0)
	char pad_164[4];  // 0xA4 (0xA4)
	struct FVector Position;  // 0xA8 (0xA8)


	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector
}; 
 
 


// Class FieldSystemEngine.OperatorField
// Size: 0xC0(Inherited: 0xA0)
struct UOperatorField : UFieldNodeBase
{
	float Magnitude;  // 0xA0 (0xA0)
	char pad_164[4];  // 0xA4 (0xA4)
	struct UFieldNodeBase* RightField;  // 0xA8 (0xA8)
	struct UFieldNodeBase* LeftField;  // 0xB0 (0xB0)
	enum class EFieldOperationType Operation;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)


	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* LeftField, struct UFieldNodeBase* RightField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField
}; 
 
 


// Class FieldSystemEngine.ToIntegerField
// Size: 0xA8(Inherited: 0xA0)
struct UToIntegerField : UFieldNodeInt
{
	struct UFieldNodeFloat* FloatField;  // 0xA0 (0xA0)


	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField
}; 
 
 


// Class FieldSystemEngine.ToFloatField
// Size: 0xA8(Inherited: 0xA0)
struct UToFloatField : UFieldNodeFloat
{
	struct UFieldNodeInt* IntField;  // 0xA0 (0xA0)


	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField
}; 
 
 


// Class FieldSystemEngine.CullingField
// Size: 0xB8(Inherited: 0xA0)
struct UCullingField : UFieldNodeBase
{
	struct UFieldNodeBase* Culling;  // 0xA0 (0xA0)
	struct UFieldNodeBase* Field;  // 0xA8 (0xA8)
	enum class EFieldCullingOperationType Operation;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)


	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField
}; 
 
 



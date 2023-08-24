#include "pch.h"
#include "SDK.h"

void UFieldSystemComponent::ResetFieldSystem(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem");

	FResetFieldSystem parms{};	

	ProcessEvent(fn, &parms);
}

void UFieldSystemComponent::RemovePersistentFields(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.RemovePersistentFields");

	FRemovePersistentFields parms{};	

	ProcessEvent(fn, &parms);
}

void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce");

	FApplyUniformVectorFalloffForce parms{};	
	parms.Enabled = Enabled;
	parms.Position = Position;
	parms.Direction = Direction;
	parms.Radius = Radius;
	parms.Magnitude = Magnitude;

	ProcessEvent(fn, &parms);
}

void UFieldSystemComponent::ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField");

	FApplyStrainField parms{};	
	parms.Enabled = Enabled;
	parms.Position = Position;
	parms.Radius = Radius;
	parms.Magnitude = Magnitude;
	parms.Iterations = Iterations;

	ProcessEvent(fn, &parms);
}

void UFieldSystemComponent::ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField");

	FApplyStayDynamicField parms{};	
	parms.Enabled = Enabled;
	parms.Position = Position;
	parms.Radius = Radius;

	ProcessEvent(fn, &parms);
}

void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce");

	FApplyRadialVectorFalloffForce parms{};	
	parms.Enabled = Enabled;
	parms.Position = Position;
	parms.Radius = Radius;
	parms.Magnitude = Magnitude;

	ProcessEvent(fn, &parms);
}

void UFieldSystemComponent::ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce");

	FApplyRadialForce parms{};	
	parms.Enabled = Enabled;
	parms.Position = Position;
	parms.Magnitude = Magnitude;

	ProcessEvent(fn, &parms);
}

void UFieldSystemComponent::ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField");

	FApplyPhysicsField parms{};	
	parms.Enabled = Enabled;
	parms.Target = Target;
	parms.MetaData = MetaData;
	parms.Field = Field;

	ProcessEvent(fn, &parms);
}

void UFieldSystemComponent::ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce");

	FApplyLinearForce parms{};	
	parms.Enabled = Enabled;
	parms.Direction = Direction;
	parms.Magnitude = Magnitude;

	ProcessEvent(fn, &parms);
}

void UFieldSystemComponent::AddPersistentField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.AddPersistentField");

	FAddPersistentField parms{};	
	parms.Enabled = Enabled;
	parms.Target = Target;
	parms.MetaData = MetaData;
	parms.Field = Field;

	ProcessEvent(fn, &parms);
}

void UFieldSystemComponent::AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand");

	FAddFieldCommand parms{};	
	parms.Enabled = Enabled;
	parms.Target = Target;
	parms.MetaData = MetaData;
	parms.Field = Field;

	ProcessEvent(fn, &parms);
}

struct UFieldSystemMetaDataFilter* UFieldSystemMetaDataFilter::SetMetaDataFilterType(enum class EFieldFilterType FilterType, enum class EFieldObjectType ObjectType, enum class EFieldPositionType PositionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType");

	FSetMetaDataFilterType parms{};	
	parms.FilterType = FilterType;
	parms.ObjectType = ObjectType;
	parms.PositionType = PositionType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UReturnResultsTerminal* UReturnResultsTerminal::SetReturnResultsTerminal(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal");

	FSetReturnResultsTerminal parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::SetMetaDataIteration(int32_t Iterations){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration");

	FSetMetaDataIteration parms{};	
	parms.Iterations = Iterations;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType");

	FSetMetaDataaProcessingResolutionType parms{};	
	parms.ResolutionType = ResolutionType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct URandomVector* URandomVector::SetRandomVector(float Magnitude){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.RandomVector.SetRandomVector");

	FSetRandomVector parms{};	
	parms.Magnitude = Magnitude;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UUniformInteger* UUniformInteger::SetUniformInteger(int32_t Magnitude){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformInteger.SetUniformInteger");

	FSetUniformInteger parms{};	
	parms.Magnitude = Magnitude;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct URadialIntMask* URadialIntMask::SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialIntMask.SetRadialIntMask");

	FSetRadialIntMask parms{};	
	parms.Radius = Radius;
	parms.Position = Position;
	parms.InteriorValue = InteriorValue;
	parms.ExteriorValue = ExteriorValue;
	parms.SetMaskConditionIn = SetMaskConditionIn;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UUniformScalar* UUniformScalar::SetUniformScalar(float Magnitude){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformScalar.SetUniformScalar");

	FSetUniformScalar parms{};	
	parms.Magnitude = Magnitude;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UWaveScalar* UWaveScalar::SetWaveScalar(float Magnitude, struct FVector Position, float WaveLength, float Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType Falloff){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.WaveScalar.SetWaveScalar");

	FSetWaveScalar parms{};	
	parms.Magnitude = Magnitude;
	parms.Position = Position;
	parms.WaveLength = WaveLength;
	parms.Period = Period;
	parms.Time = Time;
	parms.Function = Function;
	parms.Falloff = Falloff;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct URadialFalloff* URadialFalloff::SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialFalloff.SetRadialFalloff");

	FSetRadialFalloff parms{};	
	parms.Magnitude = Magnitude;
	parms.MinRange = MinRange;
	parms.MaxRange = MaxRange;
	parms.Default = Default;
	parms.Radius = Radius;
	parms.Position = Position;
	parms.Falloff = Falloff;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UPlaneFalloff* UPlaneFalloff::SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff");

	FSetPlaneFalloff parms{};	
	parms.Magnitude = Magnitude;
	parms.MinRange = MinRange;
	parms.MaxRange = MaxRange;
	parms.Default = Default;
	parms.Distance = Distance;
	parms.Position = Position;
	parms.Normal = Normal;
	parms.Falloff = Falloff;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UBoxFalloff* UBoxFalloff::SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.BoxFalloff.SetBoxFalloff");

	FSetBoxFalloff parms{};	
	parms.Magnitude = Magnitude;
	parms.MinRange = MinRange;
	parms.MaxRange = MaxRange;
	parms.Default = Default;
	parms.Transform = Transform;
	parms.Falloff = Falloff;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UNoiseField* UNoiseField::SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.NoiseField.SetNoiseField");

	FSetNoiseField parms{};	
	parms.MinRange = MinRange;
	parms.MaxRange = MaxRange;
	parms.Transform = Transform;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UUniformVector* UUniformVector::SetUniformVector(float Magnitude, struct FVector Direction){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformVector.SetUniformVector");

	FSetUniformVector parms{};	
	parms.Magnitude = Magnitude;
	parms.Direction = Direction;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct URadialVector* URadialVector::SetRadialVector(float Magnitude, struct FVector Position){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialVector.SetRadialVector");

	FSetRadialVector parms{};	
	parms.Magnitude = Magnitude;
	parms.Position = Position;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UOperatorField* UOperatorField::SetOperatorField(float Magnitude, struct UFieldNodeBase* LeftField, struct UFieldNodeBase* RightField, enum class EFieldOperationType Operation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.OperatorField.SetOperatorField");

	FSetOperatorField parms{};	
	parms.Magnitude = Magnitude;
	parms.LeftField = LeftField;
	parms.RightField = RightField;
	parms.Operation = Operation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UToIntegerField* UToIntegerField::SetToIntegerField(struct UFieldNodeFloat* FloatField){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.ToIntegerField.SetToIntegerField");

	FSetToIntegerField parms{};	
	parms.FloatField = FloatField;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UToFloatField* UToFloatField::SetToFloatField(struct UFieldNodeInt* IntegerField){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.ToFloatField.SetToFloatField");

	FSetToFloatField parms{};	
	parms.IntegerField = IntegerField;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UCullingField* UCullingField::SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function FieldSystemEngine.CullingField.SetCullingField");

	FSetCullingField parms{};	
	parms.Culling = Culling;
	parms.Field = Field;
	parms.Operation = Operation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


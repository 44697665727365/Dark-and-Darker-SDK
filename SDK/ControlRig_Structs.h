#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// DelegateFunction ControlRig.ControlRigComponentDelegate__DelegateSignature
struct FControlRigComponentDelegate__DelegateSignature
{
	struct UControlRigComponent* Component;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleSqrt
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathDoubleSqrt : FRigUnit_MathDoubleUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
// Size: 0x50(Inherited: 0x50)
struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp
{


}; 
 
 // ScriptStruct ControlRig.SpaceControlNameAndChannel
struct FSpaceControlNameAndChannel
{
	struct FName ControlName;  // 0x0 (0x0)
	struct FMovieSceneControlRigSpaceChannel SpaceCurve;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigInfluenceEntry
struct FRigInfluenceEntry
{
	struct FRigElementKey Source;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct TArray<struct FRigElementKey> AffectedList;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchy.ResetPoseToInitial
struct FResetPoseToInitial
{
	uint8_t InTypeFilter;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRig.ExecuteEvent
struct FExecuteEvent
{
	struct FName InEventName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetTransform
// Size: 0xA0(Inherited: 0x8)
struct FRigUnit_GetTransform : FRigUnit
{
	struct FRigElementKey Item;  // 0x8 (0x8)
	uint8_t Space;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool bInitial : 1;  // 0x15 (0x15)
	char pad_22[10];  // 0x16 (0x16)
	struct FTransform Transform;  // 0x20 (0x20)
	struct FCachedRigElement CachedIndex;  // 0x80 (0x80)


}; 
 
 // ScriptStruct ControlRig.RigDispatch_GetAnimAttribute
// Size: 0x50(Inherited: 0x50)
struct FRigDispatch_GetAnimAttribute : FRigDispatch_AnimAttributeBase
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionToAxisAndAngle
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_MathQuaternionToAxisAndAngle : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Value;  // 0x10 (0x10)
	struct FVector Axis;  // 0x30 (0x30)
	float Angle;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorMax
// Size: 0x50(Inherited: 0x50)
struct FRigUnit_MathVectorMax : FRigUnit_MathVectorBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_AimItem
// Size: 0x1C0(Inherited: 0x40)
struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey Item;  // 0x40 (0x40)
	char pad_76[4];  // 0x4C (0x4C)
	struct FRigUnit_AimItem_Target Primary;  // 0x50 (0x50)
	struct FRigUnit_AimItem_Target Secondary;  // 0x98 (0x98)
	float Weight;  // 0xE0 (0xE0)
	char pad_228[12];  // 0xE4 (0xE4)
	struct FRigUnit_AimBone_DebugSettings DebugSettings;  // 0xF0 (0xF0)
	struct FCachedRigElement CachedItem;  // 0x160 (0x160)
	struct FCachedRigElement PrimaryCachedSpace;  // 0x180 (0x180)
	struct FCachedRigElement SecondaryCachedSpace;  // 0x1A0 (0x1A0)


}; 
 
 // Function ControlRig.ControlRig.Execute
struct FExecute
{
	uint8_t State;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FName InEventName;  // 0x4 (0x4)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function ControlRig.ControlRig.ContainsEvent
struct FContainsEvent
{
	struct FName InEventName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AimConstraintLocalSpaceOffset
// Size: 0x1A0(Inherited: 0x40)
struct FRigUnit_AimConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey Child;  // 0x40 (0x40)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bMaintainOffset : 1;  // 0x4C (0x4C)
	struct FFilterOptionPerAxis Filter;  // 0x4D (0x4D)
	struct FVector AimAxis;  // 0x50 (0x50)
	struct FVector UpAxis;  // 0x68 (0x68)
	struct FRigUnit_AimConstraint_WorldUp WorldUp;  // 0x80 (0x80)
	struct TArray<struct FConstraintParent> Parents;  // 0xA8 (0xA8)
	char pad_184[8];  // 0xB8 (0xB8)
	struct FRigUnit_AimConstraint_AdvancedSettings AdvancedSettings;  // 0xC0 (0xC0)
	float Weight;  // 0x140 (0x140)
	char pad_324[4];  // 0x144 (0x144)
	struct FCachedRigElement WorldUpSpaceCache;  // 0x148 (0x148)
	struct FCachedRigElement ChildCache;  // 0x168 (0x168)
	struct TArray<struct FCachedRigElement> ParentCaches;  // 0x188 (0x188)
	char pad_408[8];  // 0x198 (0x198)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleLawOfCosine
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathDoubleLawOfCosine : FRigUnit_MathDoubleBase
{
	double A;  // 0x8 (0x8)
	double B;  // 0x10 (0x10)
	double C;  // 0x18 (0x18)
	double AlphaAngle;  // 0x20 (0x20)
	double BetaAngle;  // 0x28 (0x28)
	double GammaAngle;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bValid : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AnimBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_AnimBase : FRigUnit
{


}; 
 
 // Function ControlRig.ControlRigComponent.CanExecute
struct FCanExecute
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SphereTraceByObjectTypes
// Size: 0x80(Inherited: 0x8)
struct FRigUnit_SphereTraceByObjectTypes : FRigUnit
{
	struct FVector Start;  // 0x8 (0x8)
	struct FVector End;  // 0x20 (0x20)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes;  // 0x38 (0x38)
	float Radius;  // 0x48 (0x48)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bHit : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	struct FVector HitLocation;  // 0x50 (0x50)
	struct FVector HitNormal;  // 0x68 (0x68)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyZero
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_MathVectorIsNearlyZero : FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8 (0x8)
	float Tolerance;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool Result : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)


}; 
 
 // ScriptStruct ControlRig.RigPreferredEulerAngles
struct FRigPreferredEulerAngles
{
	uint8_t RotationOrder;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector Current;  // 0x8 (0x8)
	struct FVector Initial;  // 0x20 (0x20)


}; 
 
 // Function ControlRig.ControlRig.GetScriptAccessibleVariables
struct FGetScriptAccessibleVariables
{
	struct TArray<struct FName> ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_ConvertVectorToQuaternion : FRigUnit
{
	struct FVector Input;  // 0x8 (0x8)
	struct FQuat Result;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_EndProfilingTimer
// Size: 0x60(Inherited: 0x40)
struct FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable
{
	int32_t NumberOfMeasurements;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)
	struct FString Prefix;  // 0x48 (0x48)
	float AccumulatedTime;  // 0x58 (0x58)
	int32_t MeasurementsLeft;  // 0x5C (0x5C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntBinaryAggregateOp
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathIntBinaryAggregateOp : FRigUnit_MathIntBase
{
	int32_t A;  // 0x8 (0x8)
	int32_t B;  // 0xC (0xC)
	int32_t Result;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetRotatorAnimationChannel
// Size: 0x80(Inherited: 0x68)
struct FRigUnit_SetRotatorAnimationChannel : FRigUnit_SetAnimationChannelBase
{
	struct FRotator Value;  // 0x68 (0x68)


}; 
 
 // Function ControlRig.ControlRig.GetInteractionRigClass
struct FGetInteractionRigClass
{
	UControlRig* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigNameMetadata
// Size: 0x30(Inherited: 0x28)
struct FRigNameMetadata : FRigBaseMetadata
{
	struct FName Value;  // 0x28 (0x28)


}; 
 
 // Function ControlRig.ControlRig.CurrentControlSelection
struct FCurrentControlSelection
{
	struct TArray<struct FName> ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.ConstraintTarget
struct FConstraintTarget
{
	struct FTransform Transform;  // 0x0 (0x0)
	float Weight;  // 0x60 (0x60)
	char pad_100_1 : 7;  // 0x64 (0x64)
	bool bMaintainOffset : 1;  // 0x64 (0x64)
	struct FTransformFilter Filter;  // 0x65 (0x65)
	char pad_110[2];  // 0x6E (0x6E)


}; 
 
 // Function ControlRig.RigHierarchyController.ImportBones
struct FImportBones
{
	struct USkeleton* InSkeleton;  // 0x0 (0x0)
	struct FName InNameSpace;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bReplaceExistingBones : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool bRemoveObsoleteBones : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool bSelectBones : 1;  // 0x12 (0x12)
	char pad_19_1 : 7;  // 0x13 (0x13)
	bool bSetupUndo : 1;  // 0x13 (0x13)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bPrintPythonCommand : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function ControlRig.ControlRig.SupportsEvent
struct FSupportsEvent
{
	struct FName InEventName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
// Size: 0x70(Inherited: 0x70)
struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp
{


}; 
 
 // ScriptStruct ControlRig.RigCurrentAndInitialTransform
struct FRigCurrentAndInitialTransform
{
	struct FRigLocalAndGlobalTransform Current;  // 0x0 (0x0)
	struct FRigLocalAndGlobalTransform Initial;  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
// Size: 0x58(Inherited: 0x8)
struct FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase
{
	struct FRigElementKey Item;  // 0x8 (0x8)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bIncludeItem : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FRigElementKeyCollection Siblings;  // 0x18 (0x18)
	struct FCachedRigElement CachedItem;  // 0x28 (0x28)
	struct FRigElementKeyCollection CachedSiblings;  // 0x48 (0x48)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionDifference
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_CollectionDifference : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection A;  // 0x8 (0x8)
	struct FRigElementKeyCollection B;  // 0x18 (0x18)
	struct FRigElementKeyCollection Collection;  // 0x28 (0x28)


}; 
 
 // Function ControlRig.ControlRig.ClearControlSelection
struct FClearControlSelection
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetFloatAnimationChannel
// Size: 0x70(Inherited: 0x68)
struct FRigUnit_SetFloatAnimationChannel : FRigUnit_SetAnimationChannelBase
{
	float Value;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 // Function ControlRig.ControlRig.GetSupportedEvents
struct FGetSupportedEvents
{
	struct TArray<struct FName> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRig.CreateTransformableControlHandle
struct FCreateTransformableControlHandle
{
	struct UObject* Outer;  // 0x0 (0x0)
	struct FName ControlName;  // 0x8 (0x8)
	struct UTransformableControlHandle* ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringConcat
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_StringConcat : FRigUnit_StringBase
{
	struct FString A;  // 0x8 (0x8)
	struct FString B;  // 0x18 (0x18)
	struct FString Result;  // 0x28 (0x28)


}; 
 
 // Function ControlRig.ControlRig.SetFramesPerSecond
struct FSetFramesPerSecond
{
	float InFramesPerSecond;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_Timeline
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_Timeline : FRigUnit_SimBase
{
	float Speed;  // 0x8 (0x8)
	float Time;  // 0xC (0xC)
	float AccumulatedValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct ControlRig.RigTransformElement
// Size: 0x2F0(Inherited: 0xF0)
struct FRigTransformElement : FRigBaseElement
{
	struct FRigCurrentAndInitialTransform Pose;  // 0xF0 (0xF0)
	char pad_688[64];  // 0x2B0 (0x2B0)


}; 
 
 // Function ControlRig.ControlRig.FindControlRigs
struct FFindControlRigs
{
	struct UObject* Outer;  // 0x0 (0x0)
	UControlRig* OptionalClass;  // 0x8 (0x8)
	struct TArray<struct UControlRig*> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.ControlRig.GetHostingActor
struct FGetHostingActor
{
	struct AActor* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorOrthogonal
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathVectorOrthogonal : FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8 (0x8)
	struct FVector B;  // 0x20 (0x20)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool Result : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // ScriptStruct ControlRig.RigFloatArrayMetadata
// Size: 0x38(Inherited: 0x28)
struct FRigFloatArrayMetadata : FRigBaseMetadata
{
	struct TArray<float> Value;  // 0x28 (0x28)


}; 
 
 // Function ControlRig.RigHierarchyController.SetParent
struct FSetParent
{
	struct FRigElementKey InChild;  // 0x0 (0x0)
	struct FRigElementKey InParent;  // 0xC (0xC)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bMaintainGlobalTransform : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bSetupUndo : 1;  // 0x19 (0x19)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	bool bPrintPythonCommand : 1;  // 0x1A (0x1A)
	char pad_27_1 : 7;  // 0x1B (0x1B)
	bool ReturnValue : 1;  // 0x1B (0x1B)


}; 
 
 // ScriptStruct ControlRig.RegionScaleFactors
struct FRegionScaleFactors
{
	float PositiveWidth;  // 0x0 (0x0)
	float NegativeWidth;  // 0x4 (0x4)
	float PositiveHeight;  // 0x8 (0x8)
	float NegativeHeight;  // 0xC (0xC)


}; 
 
 // Function ControlRig.ControlRig.GetVariableType
struct FGetVariableType
{
	struct FName InVariableName;  // 0x0 (0x0)
	struct FName ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function ControlRig.ControlRigComponent.GetAbsoluteTime
struct FGetAbsoluteTime
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnitMutable
// Size: 0x40(Inherited: 0x8)
struct FRigUnitMutable : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext;  // 0x8 (0x8)


}; 
 
 // Function ControlRig.RigHierarchy.GetFloatFromControlValue
struct FGetFloatFromControlValue
{
	struct FRigControlValue InValue;  // 0x0 (0x0)
	float ReturnValue;  // 0xF0 (0xF0)
	char pad_244[12];  // 0xF4 (0xF4)


}; 
 
 // ScriptStruct ControlRig.RigHierarchySettings
struct FRigHierarchySettings
{
	int32_t ProceduralElementLimit;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRig.GetCurrentFramesPerSecond
struct FGetCurrentFramesPerSecond
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigRigidBodySettings
struct FRigRigidBodySettings
{
	float Mass;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigElementKeyCollection
struct FRigElementKeyCollection
{
	struct TArray<struct FRigElementKey> Keys;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRig.GetVM
struct FGetVM
{
	struct URigVM* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ParentSwitchConstraintArray
// Size: 0x1E0(Inherited: 0x40)
struct FRigUnit_ParentSwitchConstraintArray : FRigUnitMutable
{
	struct FRigElementKey Subject;  // 0x40 (0x40)
	int32_t ParentIndex;  // 0x4C (0x4C)
	struct TArray<struct FRigElementKey> Parents;  // 0x50 (0x50)
	struct FTransform InitialGlobalTransform;  // 0x60 (0x60)
	float Weight;  // 0xC0 (0xC0)
	char pad_196[12];  // 0xC4 (0xC4)
	struct FTransform Transform;  // 0xD0 (0xD0)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool Switched : 1;  // 0x130 (0x130)
	char pad_305[7];  // 0x131 (0x131)
	struct FCachedRigElement CachedSubject;  // 0x138 (0x138)
	struct FCachedRigElement CachedParent;  // 0x158 (0x158)
	char pad_376[8];  // 0x178 (0x178)
	struct FTransform RelativeOffset;  // 0x180 (0x180)


}; 
 
 // Function ControlRig.ControlRig.GetEvents
struct FGetEvents
{
	struct TArray<struct FName> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.RigHierarchyController.GetHierarchy
struct FGetHierarchy
{
	struct URigHierarchy* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Collection;  // 0x8 (0x8)
	int32_t Index;  // 0x18 (0x18)
	struct FRigElementKey Item;  // 0x1C (0x1C)


}; 
 
 // Function ControlRig.ControlRigComponent.OnPreForwardsSolve
struct FOnPreForwardsSolve
{
	struct UControlRigComponent* Component;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.CRSimPointForce
struct FCRSimPointForce
{
	uint8_t ForceType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector Vector;  // 0x8 (0x8)
	float Coefficient;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool bNormalize : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)


}; 
 
 // Function ControlRig.RigHierarchy.SetLocalTransformByIndex
struct FSetLocalTransformByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4[12];  // 0x4 (0x4)
	struct FTransform InTransform;  // 0x10 (0x10)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bInitial : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool bAffectChildren : 1;  // 0x71 (0x71)
	char pad_114_1 : 7;  // 0x72 (0x72)
	bool bSetupUndo : 1;  // 0x72 (0x72)
	char pad_115_1 : 7;  // 0x73 (0x73)
	bool bPrintPythonCommands : 1;  // 0x73 (0x73)
	char pad_116[12];  // 0x74 (0x74)


}; 
 
 // ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
// Size: 0xC0(Inherited: 0x80)
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate
{
	struct TArray<struct FEnumParameterNameAndCurve> Enums;  // 0x80 (0x80)
	struct TArray<struct FIntegerParameterNameAndCurve> Integers;  // 0x90 (0x90)
	struct TArray<struct FSpaceControlNameAndChannel> Spaces;  // 0xA0 (0xA0)
	struct TArray<struct FConstraintAndActiveChannel> Constraints;  // 0xB0 (0xB0)


}; 
 
 // Function ControlRig.ControlRig.GetInteractionRig
struct FGetInteractionRig
{
	struct UControlRig* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SimBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_SimBase : FRigUnit
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetTransformItemArray
// Size: 0x80(Inherited: 0x40)
struct FRigUnit_SetTransformItemArray : FRigUnitMutable
{
	struct TArray<struct FRigElementKey> Items;  // 0x40 (0x40)
	uint8_t Space;  // 0x50 (0x50)
	char pad_81_1 : 7;  // 0x51 (0x51)
	bool bInitial : 1;  // 0x51 (0x51)
	char pad_82[6];  // 0x52 (0x52)
	struct TArray<struct FTransform> Transforms;  // 0x58 (0x58)
	float Weight;  // 0x68 (0x68)
	char pad_108_1 : 7;  // 0x6C (0x6C)
	bool bPropagateToChildren : 1;  // 0x6C (0x6C)
	char pad_109[3];  // 0x6D (0x6D)
	struct TArray<struct FCachedRigElement> CachedIndex;  // 0x70 (0x70)


}; 
 
 // Function ControlRig.ControlRig.GetVariableAsString
struct FGetVariableAsString
{
	struct FName InVariableName;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformRotateVector
// Size: 0xA0(Inherited: 0x8)
struct FRigUnit_MathTransformRotateVector : FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Transform;  // 0x10 (0x10)
	struct FVector Vector;  // 0x70 (0x70)
	struct FVector Result;  // 0x88 (0x88)


}; 
 
 // Function ControlRig.ControlRig.IsControlSelected
struct FIsControlSelected
{
	struct FName InControlName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function ControlRig.ControlRigComponent.SetBoneTransform
struct FSetBoneTransform
{
	struct FName BoneName;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Transform;  // 0x10 (0x10)
	uint8_t Space;  // 0x70 (0x70)
	char pad_113[3];  // 0x71 (0x71)
	float Weight;  // 0x74 (0x74)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool bPropagateToChildren : 1;  // 0x78 (0x78)
	char pad_121[7];  // 0x79 (0x79)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_CollectionBase : FRigUnit
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorRemap
// Size: 0xA0(Inherited: 0x8)
struct FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8 (0x8)
	struct FVector SourceMinimum;  // 0x20 (0x20)
	struct FVector SourceMaximum;  // 0x38 (0x38)
	struct FVector TargetMinimum;  // 0x50 (0x50)
	struct FVector TargetMaximum;  // 0x68 (0x68)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bClamp : 1;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)
	struct FVector Result;  // 0x88 (0x88)


}; 
 
 // SparseDelegateFunction ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature
struct FOnControlSelectedBP__DelegateSignature
{
	struct UControlRig* Rig;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FRigControlElement Control;  // 0x10 (0x10)
	char pad_2624_1 : 7;  // 0xA40 (0xA40)
	bool bSelected : 1;  // 0xA40 (0xA40)
	char pad_2625[15];  // 0xA41 (0xA41)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleIsNearlyZero
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_MathDoubleIsNearlyZero : FRigUnit_MathDoubleBase
{
	double Value;  // 0x8 (0x8)
	double Tolerance;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Result : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringReverse
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_StringReverse : FRigUnit_StringBase
{
	struct FString Value;  // 0x8 (0x8)
	struct FString Reverse;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigBaseElement
struct FRigBaseElement
{
	char pad_0[8];  // 0x0 (0x0)
	struct FRigElementKey Key;  // 0x8 (0x8)
	char pad_20[4];  // 0x14 (0x14)
	struct FString NameString;  // 0x18 (0x18)
	int32_t Index;  // 0x28 (0x28)
	int32_t SubIndex;  // 0x2C (0x2C)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bSelected : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	int32_t CreatedAtInstructionIndex;  // 0x34 (0x34)
	char pad_56[184];  // 0x38 (0x38)


}; 
 
 // ScriptStruct ControlRig.RigDispatch_AnimAttributeBase
// Size: 0x50(Inherited: 0x18)
struct FRigDispatch_AnimAttributeBase : FRigDispatchFactory
{
	char pad_24[56];  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigNameArrayMetadata
// Size: 0x38(Inherited: 0x28)
struct FRigNameArrayMetadata : FRigBaseMetadata
{
	struct TArray<struct FName> Value;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigInfluenceMap
struct FRigInfluenceMap
{
	struct FName EventName;  // 0x0 (0x0)
	struct TArray<struct FRigInfluenceEntry> Entries;  // 0x8 (0x8)
	struct TMap<struct FRigElementKey, int32_t> KeyToIndex;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigElementKey
struct FRigElementKey
{
	uint8_t Type;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FName Name;  // 0x4 (0x4)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformSelectBool
// Size: 0x130(Inherited: 0x8)
struct FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Condition : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FTransform IfTrue;  // 0x10 (0x10)
	struct FTransform IfFalse;  // 0x70 (0x70)
	struct FTransform Result;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
// Size: 0xC0(Inherited: 0x8)
struct FRigUnit_GetRelativeBoneTransform : FRigUnit
{
	struct FName bone;  // 0x8 (0x8)
	struct FName Space;  // 0x10 (0x10)
	char pad_24[8];  // 0x18 (0x18)
	struct FTransform Transform;  // 0x20 (0x20)
	struct FCachedRigElement CachedBone;  // 0x80 (0x80)
	struct FCachedRigElement CachedSpace;  // 0xA0 (0xA0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
// Size: 0xF0(Inherited: 0x10)
struct FRigUnit_HierarchyAddControlVector2D_Settings : FRigUnit_HierarchyAddControl_Settings
{
	uint8_t PrimaryAxis;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FRigUnit_HierarchyAddControlVector2D_LimitSettings Limits;  // 0x18 (0x18)
	char pad_72[8];  // 0x48 (0x48)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;  // 0x50 (0x50)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct ControlRig.RigLocalAndGlobalTransform
struct FRigLocalAndGlobalTransform
{
	struct FRigComputedTransform Local;  // 0x0 (0x0)
	struct FRigComputedTransform Global;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_InteractionExecution
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_InteractionExecution : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.ControlRigDrawInstruction
struct FControlRigDrawInstruction
{
	struct FName Name;  // 0x0 (0x0)
	enum class EControlRigDrawSettings PrimitiveType;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct TArray<struct FVector> Positions;  // 0x10 (0x10)
	struct FLinearColor Color;  // 0x20 (0x20)
	float Thickness;  // 0x30 (0x30)
	char pad_52[12];  // 0x34 (0x34)
	struct FTransform Transform;  // 0x40 (0x40)
	char pad_160[48];  // 0xA0 (0xA0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_HierarchyBase : FRigUnit
{


}; 
 
 // Function ControlRig.ControlRig.SetAbsoluteAndDeltaTime
struct FSetAbsoluteAndDeltaTime
{
	float InAbsoluteTime;  // 0x0 (0x0)
	float InDeltaTime;  // 0x4 (0x4)


}; 
 
 // ScriptStruct ControlRig.RigFloatMetadata
// Size: 0x30(Inherited: 0x28)
struct FRigFloatMetadata : FRigBaseMetadata
{
	float Value;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ItemBaseMutable
// Size: 0x40(Inherited: 0x40)
struct FRigUnit_ItemBaseMutable : FRigUnitMutable
{


}; 
 
 // ScriptStruct ControlRig.RigComputedTransform
struct FRigComputedTransform
{
	struct FTransform Transform;  // 0x0 (0x0)
	char pad_96[16];  // 0x60 (0x60)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AimConstraint
// Size: 0xB0(Inherited: 0x40)
struct FRigUnit_AimConstraint : FRigUnitMutable
{
	struct FName Joint;  // 0x40 (0x40)
	uint8_t AimMode;  // 0x48 (0x48)
	uint8_t UpMode;  // 0x49 (0x49)
	char pad_74[6];  // 0x4A (0x4A)
	struct FVector AimVector;  // 0x50 (0x50)
	struct FVector UpVector;  // 0x68 (0x68)
	struct TArray<struct FAimTarget> AimTargets;  // 0x80 (0x80)
	struct TArray<struct FAimTarget> UpTargets;  // 0x90 (0x90)
	struct FRigUnit_AimConstraint_WorkData WorkData;  // 0xA0 (0xA0)


}; 
 
 // Function ControlRig.RigHierarchy.GetParentWeightArray
struct FGetParentWeightArray
{
	struct FRigElementKey InChild;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bInitial : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct TArray<struct FRigElementWeight> ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetRelativeRotationForItem
// Size: 0xD0(Inherited: 0x40)
struct FRigUnit_SetRelativeRotationForItem : FRigUnitMutable
{
	struct FRigElementKey Child;  // 0x40 (0x40)
	struct FRigElementKey Parent;  // 0x4C (0x4C)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool bParentInitial : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct FQuat Value;  // 0x60 (0x60)
	float Weight;  // 0x80 (0x80)
	char pad_132_1 : 7;  // 0x84 (0x84)
	bool bPropagateToChildren : 1;  // 0x84 (0x84)
	char pad_133[3];  // 0x85 (0x85)
	struct FCachedRigElement CachedChild;  // 0x88 (0x88)
	struct FCachedRigElement CachedParent;  // 0xA8 (0xA8)
	char pad_200[8];  // 0xC8 (0xC8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
struct FRigUnit_FitChainToCurve_WorkData
{
	float ChainLength;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVector> ItemPositions;  // 0x8 (0x8)
	struct TArray<float> ItemSegments;  // 0x18 (0x18)
	struct TArray<struct FVector> CurvePositions;  // 0x28 (0x28)
	struct TArray<float> CurveSegments;  // 0x38 (0x38)
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x48 (0x48)
	struct TArray<int32_t> ItemRotationA;  // 0x58 (0x58)
	struct TArray<int32_t> ItemRotationB;  // 0x68 (0x68)
	struct TArray<float> ItemRotationT;  // 0x78 (0x78)
	struct TArray<struct FTransform> ItemLocalTransforms;  // 0x88 (0x88)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetRotation
// Size: 0xA0(Inherited: 0x40)
struct FRigUnit_SetRotation : FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x40 (0x40)
	uint8_t Space;  // 0x4C (0x4C)
	char pad_77_1 : 7;  // 0x4D (0x4D)
	bool bInitial : 1;  // 0x4D (0x4D)
	char pad_78[2];  // 0x4E (0x4E)
	struct FQuat Value;  // 0x50 (0x50)
	float Weight;  // 0x70 (0x70)
	char pad_116_1 : 7;  // 0x74 (0x74)
	bool bPropagateToChildren : 1;  // 0x74 (0x74)
	char pad_117[3];  // 0x75 (0x75)
	struct FCachedRigElement CachedIndex;  // 0x78 (0x78)
	char pad_152[8];  // 0x98 (0x98)


}; 
 
 // ScriptStruct ControlRig.RigMultiParentElement
// Size: 0x3F0(Inherited: 0x2F0)
struct FRigMultiParentElement : FRigTransformElement
{
	char pad_752[256];  // 0x2F0 (0x2F0)


}; 
 
 // ScriptStruct ControlRig.AnimNode_ControlRigInputPose
// Size: 0x30(Inherited: 0x10)
struct FAnimNode_ControlRigInputPose : FAnimNode_Base
{
	struct FPoseLink InputPose;  // 0x10 (0x10)
	char pad_32[16];  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_RemoveAllMetadata
// Size: 0x70(Inherited: 0x40)
struct FRigUnit_RemoveAllMetadata : FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x40 (0x40)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool Removed : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	struct FCachedRigElement CachedIndex;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_MathDoubleBase : FRigUnit_MathBase
{


}; 
 
 // ScriptStruct ControlRig.ControlRigLayerInstanceProxy
// Size: 0x920(Inherited: 0x880)
struct FControlRigLayerInstanceProxy : FAnimInstanceProxy
{
	char pad_2176[160];  // 0x880 (0x880)


}; 
 
 // ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
struct FControlRigSequenceObjectReferenceMap
{
	struct TArray<struct FGuid> BindingIds;  // 0x0 (0x0)
	struct TArray<struct FControlRigSequenceObjectReferences> References;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigTransformStackEntry
struct FRigTransformStackEntry
{
	struct FRigElementKey Key;  // 0x0 (0x0)
	enum class ERigTransformStackEntryType EntryType;  // 0xC (0xC)
	enum class ERigTransformType TransformType;  // 0xD (0xD)
	char pad_14[2];  // 0xE (0xE)
	struct FTransform OldTransform;  // 0x10 (0x10)
	struct FTransform NewTransform;  // 0x70 (0x70)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool bAffectChildren : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct TArray<struct FString> Callstack;  // 0xD8 (0xD8)
	char pad_232[8];  // 0xE8 (0xE8)


}; 
 
 // Function ControlRig.ControlRigComponent.OnPreInitialize
struct FOnPreInitialize
{
	struct UControlRigComponent* Component;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigControlSettings
struct FRigControlSettings
{
	uint8_t AnimationType;  // 0x0 (0x0)
	uint8_t ControlType;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	struct FName DisplayName;  // 0x4 (0x4)
	uint8_t PrimaryAxis;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bIsCurve : 1;  // 0xD (0xD)
	char pad_14[2];  // 0xE (0xE)
	struct TArray<struct FRigControlLimitEnabled> LimitEnabled;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bDrawLimits : 1;  // 0x20 (0x20)
	char pad_33[15];  // 0x21 (0x21)
	struct FRigControlValue MinimumValue;  // 0x30 (0x30)
	struct FRigControlValue MaximumValue;  // 0x120 (0x120)
	char pad_528_1 : 7;  // 0x210 (0x210)
	bool bShapeVisible : 1;  // 0x210 (0x210)
	uint8_t ShapeVisibility;  // 0x211 (0x211)
	char pad_530[2];  // 0x212 (0x212)
	struct FName ShapeName;  // 0x214 (0x214)
	struct FLinearColor ShapeColor;  // 0x21C (0x21C)
	char pad_556_1 : 7;  // 0x22C (0x22C)
	bool bIsTransientControl : 1;  // 0x22C (0x22C)
	char pad_557[3];  // 0x22D (0x22D)
	struct UEnum* ControlEnum;  // 0x230 (0x230)
	struct FRigControlElementCustomization Customization;  // 0x238 (0x238)
	struct TArray<struct FRigElementKey> DrivenControls;  // 0x258 (0x258)
	char pad_616[16];  // 0x268 (0x268)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool bGroupWithParentControl : 1;  // 0x278 (0x278)
	char pad_633_1 : 7;  // 0x279 (0x279)
	bool bAnimatable : 1;  // 0x279 (0x279)
	char pad_634_1 : 7;  // 0x27A (0x27A)
	bool bShapeEnabled : 1;  // 0x27A (0x27A)
	char pad_635[5];  // 0x27B (0x27B)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
struct FRigUnit_SetMultiControlInteger_Entry
{
	struct FName Control;  // 0x0 (0x0)
	int32_t IntegerValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigControlElement
// Size: 0xA30(Inherited: 0x3F0)
struct FRigControlElement : FRigMultiParentElement
{
	struct FRigControlSettings Settings;  // 0x3F0 (0x3F0)
	struct FRigCurrentAndInitialTransform Offset;  // 0x670 (0x670)
	struct FRigCurrentAndInitialTransform Shape;  // 0x830 (0x830)
	struct FRigPreferredEulerAngles PreferredEulerAngles;  // 0x9F0 (0x9F0)
	char pad_2600[8];  // 0xA28 (0xA28)


}; 
 
 // Function ControlRig.ControlRig.SetInteractionRigClass
struct FSetInteractionRigClass
{
	UControlRig* InInteractionRigClass;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigControlElementCustomization
struct FRigControlElementCustomization
{
	struct TArray<struct FRigElementKey> AvailableSpaces;  // 0x0 (0x0)
	struct TArray<struct FRigElementKey> RemovedSpaces;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
// Size: 0x80(Inherited: 0x8)
struct FRigUnit_DrawContainerGetInstruction : FRigUnit
{
	struct FName InstructionName;  // 0x8 (0x8)
	struct FLinearColor Color;  // 0x10 (0x10)
	struct FTransform Transform;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MultiplyTransform
// Size: 0x130(Inherited: 0x130)
struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp
{


}; 
 
 // ScriptStruct ControlRig.RigControlValue
struct FRigControlValue
{
	struct FRigControlValueStorage FloatStorage;  // 0x0 (0x0)
	char pad_132[12];  // 0x84 (0x84)
	struct FTransform Storage;  // 0x90 (0x90)


}; 
 
 // ScriptStruct ControlRig.RigUnit_FABRIK
// Size: 0x110(Inherited: 0x40)
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone;  // 0x40 (0x40)
	struct FName EffectorBone;  // 0x48 (0x48)
	struct FTransform EffectorTransform;  // 0x50 (0x50)
	float Precision;  // 0xB0 (0xB0)
	float Weight;  // 0xB4 (0xB4)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool bPropagateToChildren : 1;  // 0xB8 (0xB8)
	char pad_185[3];  // 0xB9 (0xB9)
	int32_t MaxIterations;  // 0xBC (0xBC)
	struct FRigUnit_FABRIK_WorkData WorkData;  // 0xC0 (0xC0)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool bSetEffectorTransform : 1;  // 0x100 (0x100)
	char pad_257[15];  // 0x101 (0x101)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorFloor
// Size: 0x38(Inherited: 0x38)
struct FRigUnit_MathVectorFloor : FRigUnit_MathVectorUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntClamp
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathIntClamp : FRigUnit_MathIntBase
{
	int32_t Value;  // 0x8 (0x8)
	int32_t Minimum;  // 0xC (0xC)
	int32_t Maximum;  // 0x10 (0x10)
	int32_t Result;  // 0x14 (0x14)


}; 
 
 // ScriptStruct ControlRig.ControlRigShapeDefinition
struct FControlRigShapeDefinition
{
	struct FName ShapeName;  // 0x0 (0x0)
	struct TSoftObjectPtr<UStaticMesh> StaticMesh;  // 0x8 (0x8)
	char pad_56[8];  // 0x38 (0x38)
	struct FTransform Transform;  // 0x40 (0x40)
	char pad_160[16];  // 0xA0 (0xA0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatSign
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatSign : FRigUnit_MathFloatUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigControlValueStorage
struct FRigControlValueStorage
{
	float Float00;  // 0x0 (0x0)
	float Float01;  // 0x4 (0x4)
	float Float02;  // 0x8 (0x8)
	float Float03;  // 0xC (0xC)
	float Float10;  // 0x10 (0x10)
	float Float11;  // 0x14 (0x14)
	float Float12;  // 0x18 (0x18)
	float Float13;  // 0x1C (0x1C)
	float Float20;  // 0x20 (0x20)
	float Float21;  // 0x24 (0x24)
	float Float22;  // 0x28 (0x28)
	float Float23;  // 0x2C (0x2C)
	float Float30;  // 0x30 (0x30)
	float Float31;  // 0x34 (0x34)
	float Float32;  // 0x38 (0x38)
	float Float33;  // 0x3C (0x3C)
	float Float00_3;  // 0x40 (0x40)
	float Float01_3;  // 0x44 (0x44)
	float Float02_3;  // 0x48 (0x48)
	float Float03_3;  // 0x4C (0x4C)
	float Float10_3;  // 0x50 (0x50)
	float Float11_3;  // 0x54 (0x54)
	float Float12_3;  // 0x58 (0x58)
	float Float13_3;  // 0x5C (0x5C)
	float Float20_3;  // 0x60 (0x60)
	float Float21_3;  // 0x64 (0x64)
	float Float22_3;  // 0x68 (0x68)
	float Float23_3;  // 0x6C (0x6C)
	float Float30_3;  // 0x70 (0x70)
	float Float31_3;  // 0x74 (0x74)
	float Float32_3;  // 0x78 (0x78)
	float Float33_3;  // 0x7C (0x7C)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bValid : 1;  // 0x80 (0x80)
	char pad_129[3];  // 0x81 (0x81)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatGreaterEqual
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatGreaterEqual : FRigUnit_MathFloatBase
{
	float A;  // 0x8 (0x8)
	float B;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function ControlRig.RigHierarchy.SetControlVisibility
struct FSetControlVisibility
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bVisibility : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AccumulateVectorRange
// Size: 0x80(Inherited: 0x8)
struct FRigUnit_AccumulateVectorRange : FRigUnit_AccumulateBase
{
	struct FVector Value;  // 0x8 (0x8)
	struct FVector Minimum;  // 0x20 (0x20)
	struct FVector Maximum;  // 0x38 (0x38)
	struct FVector AccumulatedMinimum;  // 0x50 (0x50)
	struct FVector AccumulatedMaximum;  // 0x68 (0x68)


}; 
 
 // ScriptStruct ControlRig.RigControlLimitEnabled
struct FRigControlLimitEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bMinimum : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bMaximum : 1;  // 0x1 (0x1)


}; 
 
 // ScriptStruct ControlRig.RigDispatch_CoreNotEquals
// Size: 0x18(Inherited: 0x18)
struct FRigDispatch_CoreNotEquals : FRigDispatch_CoreEquals
{


}; 
 
 // ScriptStruct ControlRig.MathRBFInterpolateVectorQuat_Target
struct FMathRBFInterpolateVectorQuat_Target
{
	struct FVector Target;  // 0x0 (0x0)
	char pad_24[8];  // 0x18 (0x18)
	struct FQuat Value;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorDiv
// Size: 0x50(Inherited: 0x50)
struct FRigUnit_MathVectorDiv : FRigUnit_MathVectorBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigBoneHierarchy
struct FRigBoneHierarchy
{
	struct TArray<struct FRigBone> Bones;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRig.SetVariableFromString
struct FSetVariableFromString
{
	struct FName InVariableName;  // 0x0 (0x0)
	struct FString InValue;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetControlVector
// Size: 0x80(Inherited: 0x8)
struct FRigUnit_GetControlVector : FRigUnit
{
	struct FName Control;  // 0x8 (0x8)
	uint8_t Space;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FVector Vector;  // 0x18 (0x18)
	struct FVector Minimum;  // 0x30 (0x30)
	struct FVector Maximum;  // 0x48 (0x48)
	struct FCachedRigElement CachedControlIndex;  // 0x60 (0x60)


}; 
 
 // Function ControlRig.ControlRig.SelectControl
struct FSelectControl
{
	struct FName InControlName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bSelect : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntMin
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathIntMin : FRigUnit_MathIntBinaryAggregateOp
{


}; 
 
 // Function ControlRig.ControlRig.SetAbsoluteTime
struct FSetAbsoluteTime
{
	float InAbsoluteTime;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool InSetDeltaTimeZero : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function ControlRig.RigHierarchy.CopyHierarchy
struct FCopyHierarchy
{
	struct URigHierarchy* InHierarchy;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_BinaryFloatOp
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_BinaryFloatOp : FRigUnit
{
	float Argument0;  // 0x8 (0x8)
	float Argument1;  // 0xC (0xC)
	float Result;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function ControlRig.ControlRig.SetDeltaTime
struct FSetDeltaTime
{
	float InDeltaTime;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AlphaInterpVector
// Size: 0xA0(Inherited: 0x8)
struct FRigUnit_AlphaInterpVector : FRigUnit_SimBase
{
	struct FVector Value;  // 0x8 (0x8)
	float Scale;  // 0x20 (0x20)
	float Bias;  // 0x24 (0x24)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bMapRange : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	struct FInputRange InRange;  // 0x2C (0x2C)
	struct FInputRange OutRange;  // 0x34 (0x34)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool bClampResult : 1;  // 0x3C (0x3C)
	char pad_61[3];  // 0x3D (0x3D)
	float ClampMin;  // 0x40 (0x40)
	float ClampMax;  // 0x44 (0x44)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bInterpResult : 1;  // 0x48 (0x48)
	char pad_73[3];  // 0x49 (0x49)
	float InterpSpeedIncreasing;  // 0x4C (0x4C)
	float InterpSpeedDecreasing;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)
	struct FVector Result;  // 0x58 (0x58)
	struct FInputScaleBiasClamp ScaleBiasClamp;  // 0x70 (0x70)


}; 
 
 // Function ControlRig.ControlRig.SetInteractionRig
struct FSetInteractionRig
{
	struct UControlRig* InInteractionRig;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetControlDrivenList
// Size: 0x78(Inherited: 0x40)
struct FRigUnit_SetControlDrivenList : FRigUnitMutable
{
	struct FName Control;  // 0x40 (0x40)
	struct TArray<struct FRigElementKey> Driven;  // 0x48 (0x48)
	struct FCachedRigElement CachedControlIndex;  // 0x58 (0x58)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyRemoveElement
// Size: 0x50(Inherited: 0x40)
struct FRigUnit_HierarchyRemoveElement : FRigUnit_DynamicHierarchyBaseMutable
{
	struct FRigElementKey Item;  // 0x40 (0x40)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bSuccess : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ModifyTransforms
// Size: 0x70(Inherited: 0x40)
struct FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_ModifyTransforms_PerItem> ItemToModify;  // 0x40 (0x40)
	float Weight;  // 0x50 (0x50)
	float WeightMinimum;  // 0x54 (0x54)
	float WeightMaximum;  // 0x58 (0x58)
	uint8_t Mode;  // 0x5C (0x5C)
	char pad_93[3];  // 0x5D (0x5D)
	struct FRigUnit_ModifyTransforms_WorkData WorkData;  // 0x60 (0x60)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
// Size: 0xA8(Inherited: 0x60)
struct FRigUnit_HierarchyAddAnimationChannelRotator : FRigUnit_HierarchyAddElement
{
	struct FRotator InitialValue;  // 0x60 (0x60)
	struct FRotator MinimumValue;  // 0x78 (0x78)
	struct FRotator MaximumValue;  // 0x90 (0x90)


}; 
 
 // ScriptStruct ControlRig.RigSpace
// Size: 0xF0(Inherited: 0x18)
struct FRigSpace : FRigElement
{
	uint8_t SpaceType;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FName ParentName;  // 0x1C (0x1C)
	int32_t ParentIndex;  // 0x24 (0x24)
	char pad_40[8];  // 0x28 (0x28)
	struct FTransform InitialTransform;  // 0x30 (0x30)
	struct FTransform LocalTransform;  // 0x90 (0x90)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AccumulateVectorMul
// Size: 0x70(Inherited: 0x8)
struct FRigUnit_AccumulateVectorMul : FRigUnit_AccumulateBase
{
	struct FVector Multiplier;  // 0x8 (0x8)
	struct FVector InitialValue;  // 0x20 (0x20)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bIntegrateDeltaTime : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FVector Result;  // 0x40 (0x40)
	struct FVector AccumulatedValue;  // 0x58 (0x58)


}; 
 
 // ScriptStruct ControlRig.RigInfluenceMapPerEvent
struct FRigInfluenceMapPerEvent
{
	struct TArray<struct FRigInfluenceMap> Maps;  // 0x0 (0x0)
	struct TMap<struct FName, int32_t> EventToIndex;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
struct FRigUnit_HierarchyAddControlRotator_LimitSettings
{
	struct FRigControlLimitEnabled LimitPitch;  // 0x0 (0x0)
	struct FRigControlLimitEnabled LimitYaw;  // 0x2 (0x2)
	struct FRigControlLimitEnabled LimitRoll;  // 0x4 (0x4)
	char pad_6[2];  // 0x6 (0x6)
	struct FRotator MinValue;  // 0x8 (0x8)
	struct FRotator MaxValue;  // 0x20 (0x20)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bDrawLimits : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // ScriptStruct ControlRig.ControlRigDrawContainer
struct FControlRigDrawContainer
{
	char pad_0[8];  // 0x0 (0x0)
	struct TArray<struct FControlRigDrawInstruction> Instructions;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
struct FRigUnit_MathRBFInterpolateVectorWorkData
{
	char pad_0[144];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugTransformMutableItemSpace
// Size: 0x140(Inherited: 0x40)
struct FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable
{
	struct FTransform Transform;  // 0x40 (0x40)
	uint8_t Mode;  // 0xA0 (0xA0)
	char pad_161[3];  // 0xA1 (0xA1)
	struct FLinearColor Color;  // 0xA4 (0xA4)
	float Thickness;  // 0xB4 (0xB4)
	float Scale;  // 0xB8 (0xB8)
	struct FRigElementKey Space;  // 0xBC (0xBC)
	char pad_200[8];  // 0xC8 (0xC8)
	struct FTransform WorldOffset;  // 0xD0 (0xD0)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool bEnabled : 1;  // 0x130 (0x130)
	char pad_305[15];  // 0x131 (0x131)


}; 
 
 // ScriptStruct ControlRig.RigUnit
// Size: 0x8(Inherited: 0x8)
struct FRigUnit : FRigVMStruct
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetControlVisibility
// Size: 0x78(Inherited: 0x40)
struct FRigUnit_SetControlVisibility : FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x40 (0x40)
	char pad_76[4];  // 0x4C (0x4C)
	struct FString Pattern;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bVisible : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct TArray<struct FCachedRigElement> CachedControlIndices;  // 0x68 (0x68)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyGetParents
// Size: 0x58(Inherited: 0x8)
struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase
{
	struct FRigElementKey Child;  // 0x8 (0x8)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bIncludeChild : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool bReverse : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)
	struct FRigElementKeyCollection Parents;  // 0x18 (0x18)
	struct FCachedRigElement CachedChild;  // 0x28 (0x28)
	struct FRigElementKeyCollection CachedParents;  // 0x48 (0x48)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DynamicHierarchyBaseMutable
// Size: 0x40(Inherited: 0x40)
struct FRigUnit_DynamicHierarchyBaseMutable : FRigUnitMutable
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatSin
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatSin : FRigUnit_MathFloatUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
struct FRigUnit_FitChainToCurve_Rotation
{
	struct FQuat Rotation;  // 0x0 (0x0)
	float Ratio;  // 0x20 (0x20)
	char pad_36[12];  // 0x24 (0x24)


}; 
 
 // ScriptStruct ControlRig.ControlRigExecuteContext
// Size: 0x38(Inherited: 0x30)
struct FControlRigExecuteContext : FRigVMExecuteContext
{
	char pad_48[8];  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoublePow
// Size: 0x20(Inherited: 0x20)
struct FRigUnit_MathDoublePow : FRigUnit_MathDoubleBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotator
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathQuaternionFromRotator : FRigUnit_MathQuaternionBase
{
	struct FRotator Rotator;  // 0x8 (0x8)
	struct FQuat Result;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.CachedRigElement
struct FCachedRigElement
{
	struct FRigElementKey Key;  // 0x0 (0x0)
	uint16_t Index;  // 0xC (0xC)
	char pad_14[2];  // 0xE (0xE)
	int32_t ContainerVersion;  // 0x10 (0x10)
	char pad_20[12];  // 0x14 (0x14)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetTranslation
// Size: 0x90(Inherited: 0x40)
struct FRigUnit_SetTranslation : FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x40 (0x40)
	uint8_t Space;  // 0x4C (0x4C)
	char pad_77_1 : 7;  // 0x4D (0x4D)
	bool bInitial : 1;  // 0x4D (0x4D)
	char pad_78[2];  // 0x4E (0x4E)
	struct FVector Value;  // 0x50 (0x50)
	float Weight;  // 0x68 (0x68)
	char pad_108_1 : 7;  // 0x6C (0x6C)
	bool bPropagateToChildren : 1;  // 0x6C (0x6C)
	char pad_109[3];  // 0x6D (0x6D)
	struct FCachedRigElement CachedIndex;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.CRFourPointBezier
struct FCRFourPointBezier
{
	struct FVector A;  // 0x0 (0x0)
	struct FVector B;  // 0x18 (0x18)
	struct FVector C;  // 0x30 (0x30)
	struct FVector D;  // 0x48 (0x48)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
// Size: 0x40(Inherited: 0x40)
struct FRigUnit_HighlevelBaseMutable : FRigUnitMutable
{


}; 
 
 // ScriptStruct ControlRig.MovieSceneControlRigInstanceData
// Size: 0x148(Inherited: 0x8)
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bAdditive : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool bApplyBoneFilter : 1;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)
	struct FInputBlendPose BoneFilter;  // 0x10 (0x10)
	struct FMovieSceneFloatChannel Weight;  // 0x20 (0x20)
	struct FMovieSceneEvaluationOperand Operand;  // 0x130 (0x130)
	char pad_324[4];  // 0x144 (0x144)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatConstE
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatConstE : FRigUnit_MathFloatConstant
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetControlDrivenList
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_GetControlDrivenList : FRigUnit
{
	struct FName Control;  // 0x8 (0x8)
	struct TArray<struct FRigElementKey> Driven;  // 0x10 (0x10)
	struct FCachedRigElement CachedControlIndex;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
struct FRigUnit_FitChainToCurve_DebugSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float Scale;  // 0x4 (0x4)
	struct FLinearColor CurveColor;  // 0x8 (0x8)
	struct FLinearColor SegmentsColor;  // 0x18 (0x18)
	char pad_40[8];  // 0x28 (0x28)
	struct FTransform WorldOffset;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigSingleParentElement
// Size: 0x300(Inherited: 0x2F0)
struct FRigSingleParentElement : FRigTransformElement
{
	char pad_752[16];  // 0x2F0 (0x2F0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetControlFloat
// Size: 0x70(Inherited: 0x40)
struct FRigUnit_SetControlFloat : FRigUnitMutable
{
	struct FName Control;  // 0x40 (0x40)
	float Weight;  // 0x48 (0x48)
	float FloatValue;  // 0x4C (0x4C)
	struct FCachedRigElement CachedControlIndex;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigElementWeight
struct FRigElementWeight
{
	float Location;  // 0x0 (0x0)
	float Rotation;  // 0x4 (0x4)
	float Scale;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_Settings
// Size: 0xF0(Inherited: 0x10)
struct FRigUnit_HierarchyAddControlRotator_Settings : FRigUnit_HierarchyAddControl_Settings
{
	struct FRigUnit_HierarchyAddControlRotator_LimitSettings Limits;  // 0x10 (0x10)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;  // 0x50 (0x50)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct ControlRig.RigElementParentConstraint
struct FRigElementParentConstraint
{
	char pad_0[144];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigBoneElement
// Size: 0x300(Inherited: 0x300)
struct FRigBoneElement : FRigSingleParentElement
{
	uint8_t BoneType;  // 0x2F8 (0x2F8)


}; 
 
 // ScriptStruct ControlRig.RigNullElement
// Size: 0x3F0(Inherited: 0x3F0)
struct FRigNullElement : FRigMultiParentElement
{


}; 
 
 // Function ControlRig.RigHierarchy.SetControlOffsetTransform
struct FSetControlOffsetTransform
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct FTransform InTransform;  // 0x10 (0x10)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bInitial : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool bAffectChildren : 1;  // 0x71 (0x71)
	char pad_114_1 : 7;  // 0x72 (0x72)
	bool bSetupUndo : 1;  // 0x72 (0x72)
	char pad_115_1 : 7;  // 0x73 (0x73)
	bool bPrintPythonCommands : 1;  // 0x73 (0x73)
	char pad_116[12];  // 0x74 (0x74)


}; 
 
 // ScriptStruct ControlRig.RigBaseMetadata
struct FRigBaseMetadata
{
	char pad_0[16];  // 0x0 (0x0)
	struct FName Name;  // 0x10 (0x10)
	uint8_t Type;  // 0x18 (0x18)
	char pad_25[15];  // 0x19 (0x19)


}; 
 
 // Function ControlRig.ControlRigComponent.GetControlInt
struct FGetControlInt
{
	struct FName ControlName;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigCurveElement
// Size: 0xF8(Inherited: 0xF0)
struct FRigCurveElement : FRigBaseElement
{
	char pad_240[8];  // 0xF0 (0xF0)


}; 
 
 // ScriptStruct ControlRig.RigRigidBodyElement
// Size: 0x300(Inherited: 0x300)
struct FRigRigidBodyElement : FRigSingleParentElement
{
	struct FRigRigidBodySettings Settings;  // 0x2F8 (0x2F8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugBaseMutable
// Size: 0x40(Inherited: 0x40)
struct FRigUnit_DebugBaseMutable : FRigUnitMutable
{


}; 
 
 // ScriptStruct ControlRig.RigDispatch_GetMetadata
// Size: 0x48(Inherited: 0x48)
struct FRigDispatch_GetMetadata : FRigDispatch_MetadataBase
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
// Size: 0xD0(Inherited: 0x8)
struct FRigUnit_GetRelativeTransformForItem : FRigUnit
{
	struct FRigElementKey Child;  // 0x8 (0x8)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bChildInitial : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FRigElementKey Parent;  // 0x18 (0x18)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool bParentInitial : 1;  // 0x24 (0x24)
	char pad_37[11];  // 0x25 (0x25)
	struct FTransform RelativeTransform;  // 0x30 (0x30)
	struct FCachedRigElement CachedChild;  // 0x90 (0x90)
	struct FCachedRigElement CachedParent;  // 0xB0 (0xB0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ItemExists
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_ItemExists : FRigUnit_ItemBase
{
	struct FRigElementKey Item;  // 0x8 (0x8)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool Exists : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FCachedRigElement CachedIndex;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.ControlRigAnimInstanceProxy
// Size: 0x920(Inherited: 0x880)
struct FControlRigAnimInstanceProxy : FAnimInstanceProxy
{
	char pad_2176[160];  // 0x880 (0x880)


}; 
 
 // ScriptStruct ControlRig.RigReferenceElement
// Size: 0x310(Inherited: 0x300)
struct FRigReferenceElement : FRigSingleParentElement
{
	char pad_768[16];  // 0x300 (0x300)


}; 
 
 // Function ControlRig.RigHierarchy.GetDefaultParent
struct FGetDefaultParent
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	struct FRigElementKey ReturnValue;  // 0xC (0xC)


}; 
 
 // Function ControlRig.RigHierarchy.GetReferenceKeys
struct FGetReferenceKeys
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bTraverse : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathColorMul
// Size: 0x38(Inherited: 0x38)
struct FRigUnit_MathColorMul : FRigUnit_MathColorBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigHierarchyCopyPasteContentPerElement
struct FRigHierarchyCopyPasteContentPerElement
{
	struct FRigElementKey Key;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct FString Content;  // 0x10 (0x10)
	struct TArray<struct FRigElementKey> Parents;  // 0x20 (0x20)
	struct TArray<struct FRigElementWeight> ParentWeights;  // 0x30 (0x30)
	struct FRigCurrentAndInitialTransform Pose;  // 0x40 (0x40)


}; 
 
 // ScriptStruct ControlRig.RigHierarchyCopyPasteContent
struct FRigHierarchyCopyPasteContent
{
	struct TArray<struct FRigHierarchyCopyPasteContentPerElement> Elements;  // 0x0 (0x0)
	struct TArray<uint8_t> Types;  // 0x10 (0x10)
	struct TArray<struct FString> Contents;  // 0x20 (0x20)
	struct TArray<struct FTransform> LocalTransforms;  // 0x30 (0x30)
	struct TArray<struct FTransform> GlobalTransforms;  // 0x40 (0x40)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionSwingTwist
// Size: 0x90(Inherited: 0x8)
struct FRigUnit_MathQuaternionSwingTwist : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Input;  // 0x10 (0x10)
	struct FVector TwistAxis;  // 0x30 (0x30)
	char pad_72[8];  // 0x48 (0x48)
	struct FQuat Swing;  // 0x50 (0x50)
	struct FQuat Twist;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_DebugBase : FRigUnit
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugPointMutable
// Size: 0xF0(Inherited: 0x40)
struct FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable
{
	struct FVector Vector;  // 0x40 (0x40)
	uint8_t Mode;  // 0x58 (0x58)
	char pad_89[3];  // 0x59 (0x59)
	struct FLinearColor Color;  // 0x5C (0x5C)
	float Scale;  // 0x6C (0x6C)
	float Thickness;  // 0x70 (0x70)
	struct FName Space;  // 0x74 (0x74)
	char pad_124[4];  // 0x7C (0x7C)
	struct FTransform WorldOffset;  // 0x80 (0x80)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool bEnabled : 1;  // 0xE0 (0xE0)
	char pad_225[15];  // 0xE1 (0xE1)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AnimEasingType
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_AnimEasingType : FRigUnit_AnimBase
{
	uint8_t Type;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HighlevelBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_HighlevelBase : FRigUnit
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_MathBase : FRigUnit
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathMutableBase
// Size: 0x40(Inherited: 0x40)
struct FRigUnit_MathMutableBase : FRigUnitMutable
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetBoneRotation
// Size: 0xA0(Inherited: 0x40)
struct FRigUnit_SetBoneRotation : FRigUnitMutable
{
	struct FName bone;  // 0x40 (0x40)
	char pad_72[8];  // 0x48 (0x48)
	struct FQuat Rotation;  // 0x50 (0x50)
	uint8_t Space;  // 0x70 (0x70)
	char pad_113[3];  // 0x71 (0x71)
	float Weight;  // 0x74 (0x74)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool bPropagateToChildren : 1;  // 0x78 (0x78)
	char pad_121[7];  // 0x79 (0x79)
	struct FCachedRigElement CachedBone;  // 0x80 (0x80)


}; 
 
 // Function ControlRig.RigHierarchy.GetVectorFromControlValue
struct FGetVectorFromControlValue
{
	struct FRigControlValue InValue;  // 0x0 (0x0)
	struct FVector ReturnValue;  // 0xF0 (0xF0)
	char pad_264[8];  // 0x108 (0x108)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SimBaseMutable
// Size: 0x40(Inherited: 0x40)
struct FRigUnit_SimBaseMutable : FRigUnitMutable
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatLess
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatLess : FRigUnit_MathFloatBase
{
	float A;  // 0x8 (0x8)
	float B;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ProxySettings
struct FRigUnit_HierarchyAddControl_ProxySettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsProxy : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FRigElementKey> DrivenControls;  // 0x8 (0x8)
	uint8_t ShapeVisibility;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct ControlRig.StructReference
struct FStructReference
{
	char pad_0[8];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_FABRIKPerItem
// Size: 0x110(Inherited: 0x40)
struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items;  // 0x40 (0x40)
	struct FTransform EffectorTransform;  // 0x50 (0x50)
	float Precision;  // 0xB0 (0xB0)
	float Weight;  // 0xB4 (0xB4)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool bPropagateToChildren : 1;  // 0xB8 (0xB8)
	char pad_185[3];  // 0xB9 (0xB9)
	int32_t MaxIterations;  // 0xBC (0xBC)
	struct FRigUnit_FABRIK_WorkData WorkData;  // 0xC0 (0xC0)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool bSetEffectorTransform : 1;  // 0x100 (0x100)
	char pad_257[15];  // 0x101 (0x101)


}; 
 
 // ScriptStruct ControlRig.AnimNode_ControlRigBase
// Size: 0x270(Inherited: 0x58)
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty
{
	struct FPoseLink Source;  // 0x58 (0x58)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool bResetInputPoseToInitial : 1;  // 0x68 (0x68)
	char pad_105_1 : 7;  // 0x69 (0x69)
	bool bTransferInputPose : 1;  // 0x69 (0x69)
	char pad_106_1 : 7;  // 0x6A (0x6A)
	bool bTransferInputCurves : 1;  // 0x6A (0x6A)
	char pad_107_1 : 7;  // 0x6B (0x6B)
	bool bTransferPoseInGlobalSpace : 1;  // 0x6B (0x6B)
	char pad_108[4];  // 0x6C (0x6C)
	struct TArray<struct FBoneReference> InputBonesToTransfer;  // 0x70 (0x70)
	char pad_128[448];  // 0x80 (0x80)
	struct TWeakObjectPtr<UNodeMappingContainer> NodeMappingContainer;  // 0x240 (0x240)
	struct FControlRigIOSettings InputSettings;  // 0x248 (0x248)
	struct FControlRigIOSettings OutputSettings;  // 0x24A (0x24A)
	char pad_588_1 : 7;  // 0x24C (0x24C)
	bool bExecute : 1;  // 0x24C (0x24C)
	char pad_589[11];  // 0x24D (0x24D)
	struct TArray<struct FControlRigAnimNodeEventName> EventQueue;  // 0x258 (0x258)
	char pad_616[8];  // 0x268 (0x268)


}; 
 
 // Function ControlRig.RigHierarchy.SetParentWeightArray
struct FSetParentWeightArray
{
	struct FRigElementKey InChild;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct TArray<struct FRigElementWeight> InWeights;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bInitial : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool bAffectChildren : 1;  // 0x21 (0x21)
	char pad_34_1 : 7;  // 0x22 (0x22)
	bool ReturnValue : 1;  // 0x22 (0x22)
	char pad_35[5];  // 0x23 (0x23)


}; 
 
 // ScriptStruct ControlRig.ControlRigAnimNodeEventName
struct FControlRigAnimNodeEventName
{
	struct FName EventName;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionIntersection
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_CollectionIntersection : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection A;  // 0x8 (0x8)
	struct FRigElementKeyCollection B;  // 0x18 (0x18)
	struct FRigElementKeyCollection Collection;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.ControlRigIOSettings
struct FControlRigIOSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bUpdatePose : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bUpdateCurves : 1;  // 0x1 (0x1)


}; 
 
 // Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
struct FGetAllKeys_ForBlueprint
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bTraverse : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.AnimNode_ControlRig
// Size: 0x470(Inherited: 0x270)
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase
{
	UControlRig* ControlRigClass;  // 0x270 (0x270)
	struct UControlRig* ControlRig;  // 0x278 (0x278)
	float Alpha;  // 0x280 (0x280)
	uint8_t AlphaInputType;  // 0x284 (0x284)
	char bAlphaBoolEnabled : 1;  // 0x285 (0x285)
	char bSetRefPoseFromSkeleton : 1;  // 0x285 (0x285)
	char pad_645_1 : 6;  // 0x285 (0x285)
	char pad_646[3];  // 0x286 (0x286)
	struct FInputScaleBias AlphaScaleBias;  // 0x288 (0x288)
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // 0x290 (0x290)
	struct FName AlphaCurveName;  // 0x2D8 (0x2D8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0x2E0 (0x2E0)
	struct TMap<struct FName, struct FName> InputMapping;  // 0x310 (0x310)
	struct TMap<struct FName, struct FName> OutputMapping;  // 0x360 (0x360)
	char pad_944[176];  // 0x3B0 (0x3B0)
	int32_t LODThreshold;  // 0x460 (0x460)
	char pad_1124[12];  // 0x464 (0x464)


}; 
 
 // ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
// Size: 0x278(Inherited: 0x270)
struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase
{
	struct TWeakObjectPtr<UControlRig> ControlRig;  // 0x270 (0x270)


}; 
 
 // ScriptStruct ControlRig.ControlRigComponentMappedElement
struct FControlRigComponentMappedElement
{
	struct FComponentReference ComponentReference;  // 0x0 (0x0)
	int32_t TransformIndex;  // 0x28 (0x28)
	struct FName TransformName;  // 0x2C (0x2C)
	uint8_t ElementType;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	struct FName ElementName;  // 0x38 (0x38)
	uint8_t Direction;  // 0x40 (0x40)
	char pad_65[15];  // 0x41 (0x41)
	struct FTransform Offset;  // 0x50 (0x50)
	float Weight;  // 0xB0 (0xB0)
	uint8_t Space;  // 0xB4 (0xB4)
	char pad_181[3];  // 0xB5 (0xB5)
	struct USceneComponent* SceneComponent;  // 0xB8 (0xB8)
	int32_t ElementIndex;  // 0xC0 (0xC0)
	int32_t SubIndex;  // 0xC4 (0xC4)
	char pad_200[8];  // 0xC8 (0xC8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
struct FRigUnit_SetMultiControlFloat_Entry
{
	struct FName Control;  // 0x0 (0x0)
	float FloatValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.ControlRigComponentMappedComponent
struct FControlRigComponentMappedComponent
{
	struct USceneComponent* Component;  // 0x0 (0x0)
	struct FName ElementName;  // 0x8 (0x8)
	uint8_t ElementType;  // 0x10 (0x10)
	uint8_t Direction;  // 0x11 (0x11)
	char pad_18[6];  // 0x12 (0x12)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ItemBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_ItemBase : FRigUnit
{


}; 
 
 // ScriptStruct ControlRig.ControlRigComponentMappedBone
struct FControlRigComponentMappedBone
{
	struct FName Source;  // 0x0 (0x0)
	struct FName Target;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetControlInteger
// Size: 0x70(Inherited: 0x40)
struct FRigUnit_SetControlInteger : FRigUnitMutable
{
	struct FName Control;  // 0x40 (0x40)
	int32_t Weight;  // 0x48 (0x48)
	int32_t IntegerValue;  // 0x4C (0x4C)
	struct FCachedRigElement CachedControlIndex;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SpringIK
// Size: 0x210(Inherited: 0x40)
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone;  // 0x40 (0x40)
	struct FName EndBone;  // 0x48 (0x48)
	float HierarchyStrength;  // 0x50 (0x50)
	float EffectorStrength;  // 0x54 (0x54)
	float EffectorRatio;  // 0x58 (0x58)
	float RootStrength;  // 0x5C (0x5C)
	float RootRatio;  // 0x60 (0x60)
	float Damping;  // 0x64 (0x64)
	struct FVector PoleVector;  // 0x68 (0x68)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bFlipPolePlane : 1;  // 0x80 (0x80)
	uint8_t PoleVectorKind;  // 0x81 (0x81)
	char pad_130[2];  // 0x82 (0x82)
	struct FName PoleVectorSpace;  // 0x84 (0x84)
	char pad_140[4];  // 0x8C (0x8C)
	struct FVector PrimaryAxis;  // 0x90 (0x90)
	struct FVector SecondaryAxis;  // 0xA8 (0xA8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool bLiveSimulation : 1;  // 0xC0 (0xC0)
	char pad_193[3];  // 0xC1 (0xC1)
	int32_t Iterations;  // 0xC4 (0xC4)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool bLimitLocalPosition : 1;  // 0xC8 (0xC8)
	char pad_201_1 : 7;  // 0xC9 (0xC9)
	bool bPropagateToChildren : 1;  // 0xC9 (0xC9)
	char pad_202[6];  // 0xCA (0xCA)
	struct FRigUnit_SpringIK_DebugSettings DebugSettings;  // 0xD0 (0xD0)
	struct FRigUnit_SpringIK_WorkData WorkData;  // 0x150 (0x150)
	char pad_520[8];  // 0x208 (0x208)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D
// Size: 0x1C0(Inherited: 0x60)
struct FRigUnit_HierarchyAddControlVector2D : FRigUnit_HierarchyAddElement
{
	struct FTransform OffsetTransform;  // 0x60 (0x60)
	struct FVector2D InitialValue;  // 0xC0 (0xC0)
	struct FRigUnit_HierarchyAddControlVector2D_Settings Settings;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleConstE
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathDoubleConstE : FRigUnit_MathDoubleConstant
{


}; 
 
 // ScriptStruct ControlRig.ControlRigComponentMappedCurve
struct FControlRigComponentMappedCurve
{
	struct FName Source;  // 0x0 (0x0)
	struct FName Target;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatConstant
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathFloatConstant : FRigUnit_MathFloatBase
{
	float Value;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.ControlShapeActorCreationParam
struct FControlShapeActorCreationParam
{
	char pad_0[464];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_IsInteracting
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_IsInteracting : FRigUnit
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsInteracting : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool bIsTranslating : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool bIsRotating : 1;  // 0xA (0xA)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool bIsScaling : 1;  // 0xB (0xB)
	char pad_12[4];  // 0xC (0xC)
	struct TArray<struct FRigElementKey> Items;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchy.GetIntFromControlValue
struct FGetIntFromControlValue
{
	struct FRigControlValue InValue;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0xF0 (0xF0)
	char pad_244[12];  // 0xF4 (0xF4)


}; 
 
 // Function ControlRig.RigHierarchy.GetPreviousParent
struct FGetPreviousParent
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	struct FRigElementKey ReturnValue;  // 0xC (0xC)


}; 
 
 // Function ControlRig.RigHierarchy.SetCurveValueByIndex
struct FSetCurveValueByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	float InValue;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bSetupUndo : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct ControlRig.ControlRigValidationContext
struct FControlRigValidationContext
{
	char pad_0[40];  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigComponent.GetControlFloat
struct FGetControlFloat
{
	struct FName ControlName;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringReplace
// Size: 0x48(Inherited: 0x8)
struct FRigUnit_StringReplace : FRigUnit_StringBase
{
	struct FString Name;  // 0x8 (0x8)
	struct FString Old;  // 0x18 (0x18)
	struct FString New;  // 0x28 (0x28)
	struct FString Result;  // 0x38 (0x38)


}; 
 
 // ScriptStruct ControlRig.ControlRigDrawInterface
// Size: 0x18(Inherited: 0x18)
struct FControlRigDrawInterface : FControlRigDrawContainer
{


}; 
 
 // ScriptStruct ControlRig.RigTransformArrayMetadata
// Size: 0x38(Inherited: 0x28)
struct FRigTransformArrayMetadata : FRigBaseMetadata
{
	struct TArray<struct FTransform> Value;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.CRSimContainer
struct FCRSimContainer
{
	char pad_0[8];  // 0x0 (0x0)
	float TimeStep;  // 0x8 (0x8)
	float AccumulatedTime;  // 0xC (0xC)
	float TimeLeftForStep;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetAnimationChannelBase
// Size: 0x68(Inherited: 0x30)
struct FRigUnit_SetAnimationChannelBase : FRigUnit_GetAnimationChannelBase
{
	struct FControlRigExecuteContext ExecuteContext;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.CRSimLinearSpring
struct FCRSimLinearSpring
{
	int32_t SubjectA;  // 0x0 (0x0)
	int32_t SubjectB;  // 0x4 (0x4)
	float Coefficient;  // 0x8 (0x8)
	float Equilibrium;  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.CRSimPoint
struct FCRSimPoint
{
	float Mass;  // 0x0 (0x0)
	float Size;  // 0x4 (0x4)
	float LinearDamping;  // 0x8 (0x8)
	float InheritMotion;  // 0xC (0xC)
	struct FVector Position;  // 0x10 (0x10)
	struct FVector LinearVelocity;  // 0x28 (0x28)


}; 
 
 // Function ControlRig.RigHierarchy.SetGlobalTransformByIndex
struct FSetGlobalTransformByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4[12];  // 0x4 (0x4)
	struct FTransform InTransform;  // 0x10 (0x10)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bInitial : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool bAffectChildren : 1;  // 0x71 (0x71)
	char pad_114_1 : 7;  // 0x72 (0x72)
	bool bSetupUndo : 1;  // 0x72 (0x72)
	char pad_115_1 : 7;  // 0x73 (0x73)
	bool bPrintPythonCommand : 1;  // 0x73 (0x73)
	char pad_116[12];  // 0x74 (0x74)


}; 
 
 // ScriptStruct ControlRig.SphericalPoseReaderDebugSettings
struct FSphericalPoseReaderDebugSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bDrawDebug : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bDraw2D : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bDrawLocalAxes : 1;  // 0x2 (0x2)
	char pad_3[1];  // 0x3 (0x3)
	float DebugScale;  // 0x4 (0x4)
	int32_t DebugSegments;  // 0x8 (0x8)
	float DebugThickness;  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorCeil
// Size: 0x38(Inherited: 0x38)
struct FRigUnit_MathVectorCeil : FRigUnit_MathVectorUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.CRSimPointConstraint
struct FCRSimPointConstraint
{
	uint8_t Type;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t SubjectA;  // 0x4 (0x4)
	int32_t SubjectB;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FVector DataA;  // 0x10 (0x10)
	struct FVector DataB;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleLess
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_MathDoubleLess : FRigUnit_MathDoubleBase
{
	double A;  // 0x8 (0x8)
	double B;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Result : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct ControlRig.CRSimPointContainer
// Size: 0x78(Inherited: 0x18)
struct FCRSimPointContainer : FCRSimContainer
{
	struct TArray<struct FCRSimPoint> Points;  // 0x18 (0x18)
	struct TArray<struct FCRSimLinearSpring> Springs;  // 0x28 (0x28)
	struct TArray<struct FCRSimPointForce> Forces;  // 0x38 (0x38)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes;  // 0x48 (0x48)
	struct TArray<struct FCRSimPointConstraint> Constraints;  // 0x58 (0x58)
	struct TArray<struct FCRSimPoint> PreviousStep;  // 0x68 (0x68)


}; 
 
 // ScriptStruct ControlRig.RigUnit_Item
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_Item : FRigUnit
{
	struct FRigElementKey Item;  // 0x8 (0x8)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function ControlRig.ControlRigPoseAsset.SavePose
struct FSavePose
{
	struct UControlRig* InControlRig;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bUseAll : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // ScriptStruct ControlRig.CRSimSoftCollision
struct FCRSimSoftCollision
{
	struct FTransform Transform;  // 0x0 (0x0)
	uint8_t ShapeType;  // 0x60 (0x60)
	char pad_97[3];  // 0x61 (0x61)
	float MinimumDistance;  // 0x64 (0x64)
	float MaximumDistance;  // 0x68 (0x68)
	uint8_t FalloffType;  // 0x6C (0x6C)
	char pad_109[3];  // 0x6D (0x6D)
	float Coefficient;  // 0x70 (0x70)
	char pad_116_1 : 7;  // 0x74 (0x74)
	bool bInverted : 1;  // 0x74 (0x74)
	char pad_117[11];  // 0x75 (0x75)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformAccumulateArray
// Size: 0xD0(Inherited: 0x40)
struct FRigUnit_MathTransformAccumulateArray : FRigUnit_MathTransformMutableBase
{
	struct TArray<struct FTransform> Transforms;  // 0x40 (0x40)
	uint8_t TargetSpace;  // 0x50 (0x50)
	char pad_81[15];  // 0x51 (0x51)
	struct FTransform Root;  // 0x60 (0x60)
	struct TArray<int32_t> ParentIndices;  // 0xC0 (0xC0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformInverse
// Size: 0xD0(Inherited: 0xD0)
struct FRigUnit_MathTransformInverse : FRigUnit_MathTransformUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.ConstraintNodeData
struct FConstraintNodeData
{
	struct FTransform RelativeParent;  // 0x0 (0x0)
	struct FConstraintOffset ConstraintOffset;  // 0x60 (0x60)
	struct FName LinkedNode;  // 0x120 (0x120)
	struct TArray<struct FTransformConstraint> Constraints;  // 0x128 (0x128)
	char pad_312[8];  // 0x138 (0x138)


}; 
 
 // Function ControlRig.RigHierarchy.GetFloatMetadata
struct FGetFloatMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	float DefaultValue;  // 0x14 (0x14)
	float ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PoseGetItemsItemArray
// Size: [x90(Inherited: 0x8)
struct FRigUnit_PoseGetItemsItemArray : FRigUnit_HierarchyBase
{
	struct FRigPose Pose;  // 0x8 (0x8)
	uint8_t ElementType;  // 0x78 (0x78)
	char pad_121[7];  // 0x79 (0x79)
	struct TArray<struct FRigElementKey> Items;  // 0x80 (0x80)


}; 
 
 // ScriptStruct ControlRig.AnimationHierarchy
// Size: 0x88(Inherited: 0x78)
struct FAnimationHierarchy : FNodeHierarchyWithUserData
{
	struct TArray<struct FConstraintNodeData> UserData;  // 0x78 (0x78)


}; 
 
 // ScriptStruct ControlRig.RigUnit_TimeLoop
// Size: 0x30(Inherited: 0x8)
struct FRigUnit_TimeLoop : FRigUnit_SimBase
{
	float Speed;  // 0x8 (0x8)
	float Duration;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Normalize : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float Absolute;  // 0x14 (0x14)
	float Relative;  // 0x18 (0x18)
	float FlipFlop;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Even : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	float AccumulatedAbsolute;  // 0x24 (0x24)
	float AccumulatedRelative;  // 0x28 (0x28)
	int32_t NumIterations;  // 0x2C (0x2C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_Distance_VectorVector
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_Distance_VectorVector : FRigUnit
{
	struct FVector Argument0;  // 0x8 (0x8)
	struct FVector Argument1;  // 0x20 (0x20)
	float Result;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 // ScriptStruct ControlRig.RigDispatch_FromString
// Size: 0x18(Inherited: 0x18)
struct FRigDispatch_FromString : FRigDispatchFactory
{


}; 
 
 // ScriptStruct ControlRig.RigElement
struct FRigElement
{
	char pad_0[8];  // 0x0 (0x0)
	struct FName Name;  // 0x8 (0x8)
	int32_t Index;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolBinaryAggregateOp
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathBoolBinaryAggregateOp : FRigUnit_MathBoolBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool A : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool B : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool Result : 1;  // 0xA (0xA)
	char pad_11[5];  // 0xB (0xB)


}; 
 
 // ScriptStruct ControlRig.RigHierarchyRef
struct FRigHierarchyRef
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringLeft
// Size: 0x30(Inherited: 0x8)
struct FRigUnit_StringLeft : FRigUnit_StringBase
{
	struct FString Value;  // 0x8 (0x8)
	int32_t Count;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FString Result;  // 0x20 (0x20)


}; 
 
 // Function ControlRig.ControlRigComponent.GetInitialBoneTransform
struct FGetInitialBoneTransform
{
	struct FName BoneName;  // 0x0 (0x0)
	uint8_t Space;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathColorAdd
// Size: 0x38(Inherited: 0x38)
struct FRigUnit_MathColorAdd : FRigUnit_MathColorBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigBone
// Size: 0x170(Inherited: 0x18)
struct FRigBone : FRigElement
{
	struct FName ParentName;  // 0x18 (0x18)
	int32_t ParentIndex;  // 0x20 (0x20)
	char pad_36[12];  // 0x24 (0x24)
	struct FTransform InitialTransform;  // 0x30 (0x30)
	struct FTransform GlobalTransform;  // 0x90 (0x90)
	struct FTransform LocalTransform;  // 0xF0 (0xF0)
	struct TArray<int32_t> Dependents;  // 0x150 (0x150)
	uint8_t Type;  // 0x160 (0x160)
	char pad_353[15];  // 0x161 (0x161)


}; 
 
 // Function ControlRig.RigHierarchy.MakeControlValueFromVector2D
struct FMakeControlValueFromVector2D
{
	struct FVector2D InValue;  // 0x0 (0x0)
	struct FRigControlValue ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddElement
// Size: 0x60(Inherited: 0x40)
struct FRigUnit_HierarchyAddElement : FRigUnit_DynamicHierarchyBaseMutable
{
	struct FRigElementKey Parent;  // 0x40 (0x40)
	struct FName Name;  // 0x4C (0x4C)
	struct FRigElementKey Item;  // 0x54 (0x54)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathRBFInterpolateBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_MathRBFInterpolateBase : FRigUnit_MathBase
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformMakeRelative
// Size: 0x130(Inherited: 0x8)
struct FRigUnit_MathTransformMakeRelative : FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Global;  // 0x10 (0x10)
	struct FTransform Parent;  // 0x70 (0x70)
	struct FTransform Local;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringJoin
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_StringJoin : FRigUnit_StringBase
{
	struct TArray<struct FString> Values;  // 0x8 (0x8)
	struct FString Separator;  // 0x18 (0x18)
	struct FString Result;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigControl
// Size: 0x510(Inherited: 0x18)
struct FRigControl : FRigElement
{
	uint8_t ControlType;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FName DisplayName;  // 0x1C (0x1C)
	struct FName ParentName;  // 0x24 (0x24)
	int32_t ParentIndex;  // 0x2C (0x2C)
	struct FName SpaceName;  // 0x30 (0x30)
	int32_t SpaceIndex;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct FTransform OffsetTransform;  // 0x40 (0x40)
	struct FRigControlValue InitialValue;  // 0xA0 (0xA0)
	struct FRigControlValue Value;  // 0x190 (0x190)
	uint8_t PrimaryAxis;  // 0x280 (0x280)
	char pad_641_1 : 7;  // 0x281 (0x281)
	bool bIsCurve : 1;  // 0x281 (0x281)
	char pad_642_1 : 7;  // 0x282 (0x282)
	bool bAnimatable : 1;  // 0x282 (0x282)
	char pad_643_1 : 7;  // 0x283 (0x283)
	bool bLimitTranslation : 1;  // 0x283 (0x283)
	char pad_644_1 : 7;  // 0x284 (0x284)
	bool bLimitRotation : 1;  // 0x284 (0x284)
	char pad_645_1 : 7;  // 0x285 (0x285)
	bool bLimitScale : 1;  // 0x285 (0x285)
	char pad_646_1 : 7;  // 0x286 (0x286)
	bool bDrawLimits : 1;  // 0x286 (0x286)
	char pad_647[9];  // 0x287 (0x287)
	struct FRigControlValue MinimumValue;  // 0x290 (0x290)
	struct FRigControlValue MaximumValue;  // 0x380 (0x380)
	char pad_1136_1 : 7;  // 0x470 (0x470)
	bool bGizmoEnabled : 1;  // 0x470 (0x470)
	char pad_1137_1 : 7;  // 0x471 (0x471)
	bool bGizmoVisible : 1;  // 0x471 (0x471)
	char pad_1138[2];  // 0x472 (0x472)
	struct FName GizmoName;  // 0x474 (0x474)
	char pad_1148[4];  // 0x47C (0x47C)
	struct FTransform GizmoTransform;  // 0x480 (0x480)
	struct FLinearColor GizmoColor;  // 0x4E0 (0x4E0)
	struct TArray<int32_t> Dependents;  // 0x4F0 (0x4F0)
	char pad_1280_1 : 7;  // 0x500 (0x500)
	bool bIsTransientControl : 1;  // 0x500 (0x500)
	char pad_1281[7];  // 0x501 (0x501)
	struct UEnum* ControlEnum;  // 0x508 (0x508)


}; 
 
 // ScriptStruct ControlRig.RigControlHierarchy
struct FRigControlHierarchy
{
	struct TArray<struct FRigControl> Controls;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.RigHierarchy.IsParentedTo
struct FIsParentedTo
{
	struct FRigElementKey InChild;  // 0x0 (0x0)
	struct FRigElementKey InParent;  // 0xC (0xC)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)


}; 
 
 // ScriptStruct ControlRig.RigCurve
// Size: 0x20(Inherited: 0x18)
struct FRigCurve : FRigElement
{
	float Value;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetControlBool
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_GetControlBool : FRigUnit
{
	struct FName Control;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool BoolValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FCachedRigElement CachedControlIndex;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorSub
// Size: 0x50(Inherited: 0x50)
struct FRigUnit_MathVectorSub : FRigUnit_MathVectorBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigCurveContainer
struct FRigCurveContainer
{
	struct TArray<struct FRigCurve> Curves;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigHierarchyContainer
struct FRigHierarchyContainer
{
	struct FRigBoneHierarchy BoneHierarchy;  // 0x0 (0x0)
	struct FRigSpaceHierarchy SpaceHierarchy;  // 0x10 (0x10)
	struct FRigControlHierarchy ControlHierarchy;  // 0x20 (0x20)
	struct FRigCurveContainer CurveContainer;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_KalmanFloat
// Size: 0x30(Inherited: 0x8)
struct FRigUnit_KalmanFloat : FRigUnit_SimBase
{
	float Value;  // 0x8 (0x8)
	int32_t BufferSize;  // 0xC (0xC)
	float Result;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<float> Buffer;  // 0x18 (0x18)
	int32_t LastInsertIndex;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyReset
// Size: 0x40(Inherited: 0x40)
struct FRigUnit_HierarchyReset : FRigUnit_DynamicHierarchyBaseMutable
{


}; 
 
 // ScriptStruct ControlRig.RigSpaceHierarchy
struct FRigSpaceHierarchy
{
	struct TArray<struct FRigSpace> Spaces;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigControlModifiedContext
struct FRigControlModifiedContext
{
	char pad_0[24];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigEventContext
struct FRigEventContext
{
	char pad_0[40];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_NoiseVector2
// Size: 0x90(Inherited: 0x8)
struct FRigUnit_NoiseVector2 : FRigUnit_MathBase
{
	struct FVector Value;  // 0x8 (0x8)
	struct FVector Speed;  // 0x20 (0x20)
	struct FVector Frequency;  // 0x38 (0x38)
	double Minimum;  // 0x50 (0x50)
	double Maximum;  // 0x58 (0x58)
	struct FVector Result;  // 0x60 (0x60)
	struct FVector Time;  // 0x78 (0x78)


}; 
 
 // ScriptStruct ControlRig.RigMirrorSettings
struct FRigMirrorSettings
{
	enum class EAxis MirrorAxis;  // 0x0 (0x0)
	enum class EAxis AxisToFlip;  // 0x1 (0x1)
	char pad_2[6];  // 0x2 (0x2)
	struct FString SearchString;  // 0x8 (0x8)
	struct FString ReplaceString;  // 0x18 (0x18)


}; 
 
 // Function ControlRig.RigHierarchyController.SetHierarchy
struct FSetHierarchy
{
	struct URigHierarchy* InHierarchy;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionRotationOrder
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathQuaternionRotationOrder : FRigUnit_MathBase
{
	uint8_t RotationOrder;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // ScriptStruct ControlRig.RigBoolMetadata
// Size: 0x30(Inherited: 0x28)
struct FRigBoolMetadata : FRigBaseMetadata
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool Value : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionScale
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathQuaternionScale : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Value;  // 0x10 (0x10)
	float Scale;  // 0x30 (0x30)
	char pad_52[12];  // 0x34 (0x34)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeightsArray
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_HierarchyGetParentWeightsArray : FRigUnit_DynamicHierarchyBase
{
	struct FRigElementKey Child;  // 0x8 (0x8)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FRigElementWeight> Weights;  // 0x18 (0x18)
	struct TArray<struct FRigElementKey> Parents;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AccumulateFloatRange
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_AccumulateFloatRange : FRigUnit_AccumulateBase
{
	float Value;  // 0x8 (0x8)
	float Minimum;  // 0xC (0xC)
	float Maximum;  // 0x10 (0x10)
	float AccumulatedMinimum;  // 0x14 (0x14)
	float AccumulatedMaximum;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct ControlRig.RigBoolArrayMetadata
// Size: 0x38(Inherited: 0x28)
struct FRigBoolArrayMetadata : FRigBaseMetadata
{
	struct TArray<bool> Value;  // 0x28 (0x28)


}; 
 
 // Function ControlRig.RigHierarchy.GetTransformFromControlValue
struct FGetTransformFromControlValue
{
	struct FRigControlValue InValue;  // 0x0 (0x0)
	struct FTransform ReturnValue;  // 0xF0 (0xF0)


}; 
 
 // ScriptStruct ControlRig.RigInt32Metadata
// Size: 0x30(Inherited: 0x28)
struct FRigInt32Metadata : FRigBaseMetadata
{
	int32_t Value;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorMod
// Size: 0x50(Inherited: 0x50)
struct FRigUnit_MathVectorMod : FRigUnit_MathVectorBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigInt32ArrayMetadata
// Size: 0x38(Inherited: 0x28)
struct FRigInt32ArrayMetadata : FRigBaseMetadata
{
	struct TArray<int32_t> Value;  // 0x28 (0x28)


}; 
 
 // Function ControlRig.RigHierarchyController.AddRigidBody
struct FAddRigidBody
{
	struct FName InName;  // 0x0 (0x0)
	struct FRigElementKey InParent;  // 0x8 (0x8)
	struct FRigRigidBodySettings InSettings;  // 0x14 (0x14)
	char pad_24[8];  // 0x18 (0x18)
	struct FTransform InLocalTransform;  // 0x20 (0x20)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bSetupUndo : 1;  // 0x80 (0x80)
	char pad_129_1 : 7;  // 0x81 (0x81)
	bool bPrintPythonCommand : 1;  // 0x81 (0x81)
	char pad_130[2];  // 0x82 (0x82)
	struct FRigElementKey ReturnValue;  // 0x84 (0x84)


}; 
 
 // ScriptStruct ControlRig.RigVectorMetadata
// Size: 0x40(Inherited: 0x28)
struct FRigVectorMetadata : FRigBaseMetadata
{
	struct FVector Value;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathColorBinaryAggregateOp
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_MathColorBinaryAggregateOp : FRigUnit_MathColorBase
{
	struct FLinearColor A;  // 0x8 (0x8)
	struct FLinearColor B;  // 0x18 (0x18)
	struct FLinearColor Result;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigVectorArrayMetadata
// Size: 0x38(Inherited: 0x28)
struct FRigVectorArrayMetadata : FRigBaseMetadata
{
	struct TArray<struct FVector> Value;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetIntAnimationChannel
// Size: 0x70(Inherited: 0x68)
struct FRigUnit_SetIntAnimationChannel : FRigUnit_SetAnimationChannelBase
{
	int32_t Value;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 // ScriptStruct ControlRig.RigRotatorMetadata
// Size: 0x40(Inherited: 0x28)
struct FRigRotatorMetadata : FRigBaseMetadata
{
	struct FRotator Value;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AimConstraint_WorldUp
struct FRigUnit_AimConstraint_WorldUp
{
	struct FVector Target;  // 0x0 (0x0)
	uint8_t Kind;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FRigElementKey Space;  // 0x1C (0x1C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetTransformAnimationChannel
// Size: 0xD0(Inherited: 0x68)
struct FRigUnit_SetTransformAnimationChannel : FRigUnit_SetAnimationChannelBase
{
	char pad_104[8];  // 0x68 (0x68)
	struct FTransform Value;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CCDIK
// Size: 0x140(Inherited: 0x40)
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone;  // 0x40 (0x40)
	struct FName EffectorBone;  // 0x48 (0x48)
	struct FTransform EffectorTransform;  // 0x50 (0x50)
	float Precision;  // 0xB0 (0xB0)
	float Weight;  // 0xB4 (0xB4)
	int32_t MaxIterations;  // 0xB8 (0xB8)
	char pad_188_1 : 7;  // 0xBC (0xBC)
	bool bStartFromTail : 1;  // 0xBC (0xBC)
	char pad_189[3];  // 0xBD (0xBD)
	float BaseRotationLimit;  // 0xC0 (0xC0)
	char pad_196[4];  // 0xC4 (0xC4)
	struct TArray<struct FRigUnit_CCDIK_RotationLimit> RotationLimits;  // 0xC8 (0xC8)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool bPropagateToChildren : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct FRigUnit_CCDIK_WorkData WorkData;  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct ControlRig.RigRotatorArrayMetadata
// Size: 0x38(Inherited: 0x28)
struct FRigRotatorArrayMetadata : FRigBaseMetadata
{
	struct TArray<struct FRotator> Value;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigQuatMetadata
// Size: 0x50(Inherited: 0x28)
struct FRigQuatMetadata : FRigBaseMetadata
{
	char pad_40[8];  // 0x28 (0x28)
	struct FQuat Value;  // 0x30 (0x30)


}; 
 
 // Function ControlRig.ControlRigShapeActor.SetGlobalTransform
struct FSetGlobalTransform
{
	struct FTransform InTransform;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigQuatArrayMetadata
// Size: 0x38(Inherited: 0x28)
struct FRigQuatArrayMetadata : FRigBaseMetadata
{
	struct TArray<struct FQuat> Value;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigTransformMetadata
// Size: 0x90(Inherited: 0x28)
struct FRigTransformMetadata : FRigBaseMetadata
{
	char pad_40[8];  // 0x28 (0x28)
	struct FTransform Value;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugTransformMutable
// Size: 0x140(Inherited: 0x40)
struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable
{
	struct FTransform Transform;  // 0x40 (0x40)
	uint8_t Mode;  // 0xA0 (0xA0)
	char pad_161[3];  // 0xA1 (0xA1)
	struct FLinearColor Color;  // 0xA4 (0xA4)
	float Thickness;  // 0xB4 (0xB4)
	float Scale;  // 0xB8 (0xB8)
	struct FName Space;  // 0xBC (0xBC)
	char pad_196[12];  // 0xC4 (0xC4)
	struct FTransform WorldOffset;  // 0xD0 (0xD0)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool bEnabled : 1;  // 0x130 (0x130)
	char pad_305[15];  // 0x131 (0x131)


}; 
 
 // ScriptStruct ControlRig.RigPoseElement
struct FRigPoseElement
{
	struct FCachedRigElement Index;  // 0x0 (0x0)
	struct FTransform GlobalTransform;  // 0x20 (0x20)
	struct FTransform LocalTransform;  // 0x80 (0x80)
	float CurveValue;  // 0xE0 (0xE0)
	char pad_228[12];  // 0xE4 (0xE4)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PoseGetDelta
// Size: 0x128(Inherited: 0x8)
struct FRigUnit_PoseGetDelta : FRigUnit_HierarchyBase
{
	struct FRigPose PoseA;  // 0x8 (0x8)
	struct FRigPose PoseB;  // 0x78 (0x78)
	float PositionThreshold;  // 0xE8 (0xE8)
	float RotationThreshold;  // 0xEC (0xEC)
	float ScaleThreshold;  // 0xF0 (0xF0)
	float CurveThreshold;  // 0xF4 (0xF4)
	uint8_t ElementType;  // 0xF8 (0xF8)
	uint8_t Space;  // 0xF9 (0xF9)
	char pad_250[6];  // 0xFA (0xFA)
	struct FRigElementKeyCollection ItemsToCompare;  // 0x100 (0x100)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool PosesAreEqual : 1;  // 0x110 (0x110)
	char pad_273[7];  // 0x111 (0x111)
	struct FRigElementKeyCollection ItemsWithDelta;  // 0x118 (0x118)


}; 
 
 // ScriptStruct ControlRig.RigLinearColorMetadata
// Size: 0x38(Inherited: 0x28)
struct FRigLinearColorMetadata : FRigBaseMetadata
{
	struct FLinearColor Value;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigLinearColorArrayMetadata
// Size: 0x38(Inherited: 0x28)
struct FRigLinearColorArrayMetadata : FRigBaseMetadata
{
	struct TArray<struct FLinearColor> Value;  // 0x28 (0x28)


}; 
 
 // Function ControlRig.RigHierarchy.SetNameMetadata
struct FSetNameMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	struct FName InValue;  // 0x14 (0x14)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool ReturnValue : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
// Size: 0x1E0(Inherited: 0x40)
struct FRigUnit_ParentSwitchConstraint : FRigUnitMutable
{
	struct FRigElementKey Subject;  // 0x40 (0x40)
	int32_t ParentIndex;  // 0x4C (0x4C)
	struct FRigElementKeyCollection Parents;  // 0x50 (0x50)
	struct FTransform InitialGlobalTransform;  // 0x60 (0x60)
	float Weight;  // 0xC0 (0xC0)
	char pad_196[12];  // 0xC4 (0xC4)
	struct FTransform Transform;  // 0xD0 (0xD0)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool Switched : 1;  // 0x130 (0x130)
	char pad_305[7];  // 0x131 (0x131)
	struct FCachedRigElement CachedSubject;  // 0x138 (0x138)
	struct FCachedRigElement CachedParent;  // 0x158 (0x158)
	char pad_376[8];  // 0x178 (0x178)
	struct FTransform RelativeOffset;  // 0x180 (0x180)


}; 
 
 // Function ControlRig.RigHierarchy.GetRigElementKeyMetadata
struct FGetRigElementKeyMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	struct FRigElementKey DefaultValue;  // 0x14 (0x14)
	struct FRigElementKey ReturnValue;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugArcItemSpace
// Size: 0x140(Inherited: 0x40)
struct FRigUnit_DebugArcItemSpace : FRigUnit_DebugBaseMutable
{
	struct FTransform Transform;  // 0x40 (0x40)
	struct FLinearColor Color;  // 0xA0 (0xA0)
	float Radius;  // 0xB0 (0xB0)
	float MinimumDegrees;  // 0xB4 (0xB4)
	float MaximumDegrees;  // 0xB8 (0xB8)
	float Thickness;  // 0xBC (0xBC)
	int32_t Detail;  // 0xC0 (0xC0)
	struct FRigElementKey Space;  // 0xC4 (0xC4)
	struct FTransform WorldOffset;  // 0xD0 (0xD0)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool bEnabled : 1;  // 0x130 (0x130)
	char pad_305[15];  // 0x131 (0x131)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ItemTypeEquals
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_ItemTypeEquals : FRigUnit_ItemBase
{
	struct FRigElementKey A;  // 0x8 (0x8)
	struct FRigElementKey B;  // 0x14 (0x14)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Result : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // ScriptStruct ControlRig.RigElementKeyMetadata
// Size: 0x38(Inherited: 0x28)
struct FRigElementKeyMetadata : FRigBaseMetadata
{
	struct FRigElementKey Value;  // 0x28 (0x28)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // ScriptStruct ControlRig.RigUnit_BinaryVectorOp
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_BinaryVectorOp : FRigUnit
{
	struct FVector Argument0;  // 0x8 (0x8)
	struct FVector Argument1;  // 0x20 (0x20)
	struct FVector Result;  // 0x38 (0x38)


}; 
 
 // ScriptStruct ControlRig.RigUnit_Control
// Size: 0x180(Inherited: 0x8)
struct FRigUnit_Control : FRigUnit
{
	struct FEulerTransform Transform;  // 0x8 (0x8)
	struct FTransform Base;  // 0x50 (0x50)
	struct FTransform InitTransform;  // 0xB0 (0xB0)
	struct FTransform Result;  // 0x110 (0x110)
	struct FTransformFilter Filter;  // 0x170 (0x170)
	char pad_377[7];  // 0x179 (0x179)


}; 
 
 // ScriptStruct ControlRig.RigUnit_QuaternionToAngle
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_QuaternionToAngle : FRigUnit
{
	struct FVector Axis;  // 0x8 (0x8)
	struct FQuat Argument;  // 0x20 (0x20)
	float Angle;  // 0x40 (0x40)
	char pad_68[12];  // 0x44 (0x44)


}; 
 
 // ScriptStruct ControlRig.RigElementKeyArrayMetadata
// Size: 0x38(Inherited: 0x28)
struct FRigElementKeyArrayMetadata : FRigBaseMetadata
{
	struct TArray<struct FRigElementKey> Value;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigPose
struct FRigPose
{
	struct TArray<struct FRigPoseElement> Elements;  // 0x0 (0x0)
	int32_t HierarchyTopologyVersion;  // 0x10 (0x10)
	int32_t PoseHash;  // 0x14 (0x14)
	char pad_24[88];  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionUnaryOp
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_MathQuaternionUnaryOp : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Value;  // 0x10 (0x10)
	struct FQuat Result;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigInfluenceEntryModifier
struct FRigInfluenceEntryModifier
{
	struct TArray<struct FRigElementKey> AffectedList;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTagArray
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_FindItemsWithMetadataTagArray : FRigUnit
{
	struct TArray<struct FName> Tags;  // 0x8 (0x8)
	struct TArray<struct FRigElementKey> Items;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugHierarchy
// Size: 0xD0(Inherited: 0x40)
struct FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable
{
	float Scale;  // 0x40 (0x40)
	struct FLinearColor Color;  // 0x44 (0x44)
	float Thickness;  // 0x54 (0x54)
	char pad_88[8];  // 0x58 (0x58)
	struct FTransform WorldOffset;  // 0x60 (0x60)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool bEnabled : 1;  // 0xC0 (0xC0)
	char pad_193[15];  // 0xC1 (0xC1)


}; 
 
 // ScriptStruct ControlRig.ControlRigSequenceObjectReference
struct FControlRigSequenceObjectReference
{
	UControlRig* ControlRigClass;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SendEvent
// Size: 0x58(Inherited: 0x40)
struct FRigUnit_SendEvent : FRigUnitMutable
{
	uint8_t Event;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	struct FRigElementKey Item;  // 0x44 (0x44)
	float OffsetInSeconds;  // 0x50 (0x50)
	char pad_84_1 : 7;  // 0x54 (0x54)
	bool bEnable : 1;  // 0x54 (0x54)
	char pad_85_1 : 7;  // 0x55 (0x55)
	bool bOnlyDuringInteraction : 1;  // 0x55 (0x55)
	char pad_86[2];  // 0x56 (0x56)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorFromFloat
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_MathVectorFromFloat : FRigUnit_MathVectorBase
{
	float Value;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FVector Result;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.ControlRigSequenceObjectReferences
struct FControlRigSequenceObjectReferences
{
	struct TArray<struct FControlRigSequenceObjectReference> Array;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.EnumParameterNameAndCurve
struct FEnumParameterNameAndCurve
{
	struct FName ParameterName;  // 0x0 (0x0)
	struct FMovieSceneByteChannel ParameterCurve;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringLength
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_StringLength : FRigUnit_StringBase
{
	struct FString Value;  // 0x8 (0x8)
	int32_t Length;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function ControlRig.RigHierarchyController.AddCurve
struct FAddCurve
{
	struct FName InName;  // 0x0 (0x0)
	float InValue;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bSetupUndo : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bPrintPythonCommand : 1;  // 0xD (0xD)
	char pad_14[2];  // 0xE (0xE)
	struct FRigElementKey ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.IntegerParameterNameAndCurve
struct FIntegerParameterNameAndCurve
{
	struct FName ParameterName;  // 0x0 (0x0)
	struct FMovieSceneIntegerChannel ParameterCurve;  // 0x8 (0x8)


}; 
 
 // Function ControlRig.RigHierarchy.IsSelectedByIndex
struct FIsSelectedByIndex
{
	int32_t InIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // ScriptStruct ControlRig.MathRBFInterpolateVectorXform_Target
struct FMathRBFInterpolateVectorXform_Target
{
	struct FVector Target;  // 0x0 (0x0)
	char pad_24[8];  // 0x18 (0x18)
	struct FTransform Value;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.MovieSceneControlRigSpaceChannel
// Size: 0x110(Inherited: 0x50)
struct FMovieSceneControlRigSpaceChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes;  // 0x50 (0x50)
	struct TArray<struct FMovieSceneControlRigSpaceBaseKey> KeyValues;  // 0x60 (0x60)
	char pad_112[160];  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionRotateVector
// Size: 0x60(Inherited: 0x8)
struct FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Transform;  // 0x10 (0x10)
	struct FVector Vector;  // 0x30 (0x30)
	struct FVector Result;  // 0x48 (0x48)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleGreater
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_MathDoubleGreater : FRigUnit_MathDoubleBase
{
	double A;  // 0x8 (0x8)
	double B;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Result : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct ControlRig.MovieSceneControlRigSpaceBaseKey
struct FMovieSceneControlRigSpaceBaseKey
{
	uint8_t SpaceType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FRigElementKey ControlRigElement;  // 0x4 (0x4)


}; 
 
 // Function ControlRig.RigHierarchyController.DeselectElement
struct FDeselectElement
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // ScriptStruct ControlRig.ChannelMapInfo
struct FChannelMapInfo
{
	int32_t ControlIndex;  // 0x0 (0x0)
	int32_t TotalChannelIndex;  // 0x4 (0x4)
	int32_t ChannelIndex;  // 0x8 (0x8)
	int32_t ParentControlIndex;  // 0xC (0xC)
	struct FName ChannelTypeName;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bDoesHaveSpace : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	int32_t SpaceChannelIndex;  // 0x1C (0x1C)
	int32_t MaskIndex;  // 0x20 (0x20)
	int32_t CategoryIndex;  // 0x24 (0x24)
	char pad_40[8];  // 0x28 (0x28)
	struct TArray<uint32_t> ConstraintsIndex;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatMin
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathFloatMin : FRigUnit_MathFloatBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit
{
	struct FVector Axis;  // 0x8 (0x8)
	float Angle;  // 0x20 (0x20)
	char pad_36[12];  // 0x24 (0x24)
	struct FQuat Result;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.ControlRigSettingsPerPinBool
struct FControlRigSettingsPerPinBool
{
	struct TMap<struct FString, bool> Values;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetControlInteger
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_GetControlInteger : FRigUnit
{
	struct FName Control;  // 0x8 (0x8)
	int32_t IntegerValue;  // 0x10 (0x10)
	int32_t Minimum;  // 0x14 (0x14)
	int32_t Maximum;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FCachedRigElement CachedControlIndex;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ConvertRotation
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_ConvertRotation : FRigUnit
{
	struct FRotator Input;  // 0x8 (0x8)
	struct FQuat Result;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DynamicHierarchyBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_DynamicHierarchyBase : FRigUnit
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionChildren
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_CollectionChildren : FRigUnit_CollectionBase
{
	struct FRigElementKey Parent;  // 0x8 (0x8)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bIncludeParent : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool bRecursive : 1;  // 0x15 (0x15)
	uint8_t TypeToSearch;  // 0x16 (0x16)
	char pad_23[1];  // 0x17 (0x17)
	struct FRigElementKeyCollection Collection;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntSub
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathIntSub : FRigUnit_MathIntBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigControlCopy
struct FRigControlCopy
{
	char pad_0[16];  // 0x0 (0x0)
	struct FName Name;  // 0x10 (0x10)
	uint8_t ControlType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FRigControlValue Value;  // 0x20 (0x20)
	struct FRigElementKey ParentKey;  // 0x110 (0x110)
	char pad_284[4];  // 0x11C (0x11C)
	struct FTransform OffsetTransform;  // 0x120 (0x120)
	struct FTransform ParentTransform;  // 0x180 (0x180)
	struct FTransform LocalTransform;  // 0x1E0 (0x1E0)
	struct FTransform GlobalTransform;  // 0x240 (0x240)


}; 
 
 // ScriptStruct ControlRig.ControlRigControlPose
struct FControlRigControlPose
{
	struct TArray<struct FRigControlCopy> CopyOfControls;  // 0x0 (0x0)
	char pad_16[80];  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleFloor
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_MathDoubleFloor : FRigUnit_MathDoubleBase
{
	double Value;  // 0x8 (0x8)
	double Result;  // 0x10 (0x10)
	int32_t Int;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct ControlRig.RigDispatchFactory
// Size: 0x18(Inherited: 0x18)
struct FRigDispatchFactory : FRigVMDispatchFactory
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_BinaryTransformOp
// Size: 0x130(Inherited: 0x8)
struct FRigUnit_BinaryTransformOp : FRigUnit
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Argument0;  // 0x10 (0x10)
	struct FTransform Argument1;  // 0x70 (0x70)
	struct FTransform Result;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct ControlRig.RigDispatch_SetAnimAttribute
// Size: 0x50(Inherited: 0x50)
struct FRigDispatch_SetAnimAttribute : FRigDispatch_AnimAttributeBase
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleIsNearlyEqual
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_MathDoubleIsNearlyEqual : FRigUnit_MathDoubleBase
{
	double A;  // 0x8 (0x8)
	double B;  // 0x10 (0x10)
	double Tolerance;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Result : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_Settings
// Size: 0xD0(Inherited: 0x10)
struct FRigUnit_HierarchyAddControlFloat_Settings : FRigUnit_HierarchyAddControl_Settings
{
	uint8_t PrimaryAxis;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	struct FRigUnit_HierarchyAddControlFloat_LimitSettings Limits;  // 0x14 (0x14)
	char pad_36[12];  // 0x24 (0x24)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;  // 0x30 (0x30)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;  // 0xB0 (0xB0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SphereTraceByTraceChannel
// Size: 0x78(Inherited: 0x8)
struct FRigUnit_SphereTraceByTraceChannel : FRigUnit
{
	struct FVector Start;  // 0x8 (0x8)
	struct FVector End;  // 0x20 (0x20)
	enum class ETraceTypeQuery TraceChannel;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	float Radius;  // 0x3C (0x3C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bHit : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct FVector HitLocation;  // 0x48 (0x48)
	struct FVector HitNormal;  // 0x60 (0x60)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AnimEasing
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_AnimEasing : FRigUnit_AnimBase
{
	float Value;  // 0x8 (0x8)
	uint8_t Type;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	float SourceMinimum;  // 0x10 (0x10)
	float SourceMaximum;  // 0x14 (0x14)
	float TargetMinimum;  // 0x18 (0x18)
	float TargetMaximum;  // 0x1C (0x1C)
	float Result;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AnimEvalRichCurve
// Size: 0xB0(Inherited: 0x8)
struct FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase
{
	float Value;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FRuntimeFloatCurve Curve;  // 0x10 (0x10)
	float SourceMinimum;  // 0x98 (0x98)
	float SourceMaximum;  // 0x9C (0x9C)
	float TargetMinimum;  // 0xA0 (0xA0)
	float TargetMaximum;  // 0xA4 (0xA4)
	float Result;  // 0xA8 (0xA8)
	char pad_172[4];  // 0xAC (0xAC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
// Size: 0xA0(Inherited: 0x8)
struct FRigUnit_GetControlInitialTransform : FRigUnit
{
	struct FName Control;  // 0x8 (0x8)
	uint8_t Space;  // 0x10 (0x10)
	char pad_17[15];  // 0x11 (0x11)
	struct FTransform Transform;  // 0x20 (0x20)
	struct FCachedRigElement CachedControlIndex;  // 0x80 (0x80)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AnimRichCurve
// Size: 0x90(Inherited: 0x8)
struct FRigUnit_AnimRichCurve : FRigUnit_AnimBase
{
	struct FRuntimeFloatCurve Curve;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleSub
// Size: 0x20(Inherited: 0x20)
struct FRigUnit_MathDoubleSub : FRigUnit_MathDoubleBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
// Size: 0x140(Inherited: 0x40)
struct FRigUnit_DebugBezierItemSpace : FRigUnit_DebugBaseMutable
{
	struct FCRFourPointBezier Bezier;  // 0x40 (0x40)
	float MinimumU;  // 0xA0 (0xA0)
	float MaximumU;  // 0xA4 (0xA4)
	struct FLinearColor Color;  // 0xA8 (0xA8)
	float Thickness;  // 0xB8 (0xB8)
	int32_t Detail;  // 0xBC (0xBC)
	struct FRigElementKey Space;  // 0xC0 (0xC0)
	char pad_204[4];  // 0xCC (0xCC)
	struct FTransform WorldOffset;  // 0xD0 (0xD0)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool bEnabled : 1;  // 0x130 (0x130)
	char pad_305[15];  // 0x131 (0x131)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetDeltaTime
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_GetDeltaTime : FRigUnit_AnimBase
{
	float Result;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function ControlRig.RigHierarchy.GetVector2DFromControlValue
struct FGetVector2DFromControlValue
{
	struct FRigControlValue InValue;  // 0x0 (0x0)
	struct FVector2D ReturnValue;  // 0xF0 (0xF0)


}; 
 
 // Function ControlRig.RigHierarchy.SetInt32Metadata
struct FSetInt32Metadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	int32_t InValue;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetWorldTime
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_GetWorldTime : FRigUnit_AnimBase
{
	float Year;  // 0x8 (0x8)
	float Month;  // 0xC (0xC)
	float Day;  // 0x10 (0x10)
	float WeekDay;  // 0x14 (0x14)
	float Hours;  // 0x18 (0x18)
	float Minutes;  // 0x1C (0x1C)
	float Seconds;  // 0x20 (0x20)
	float OverallSeconds;  // 0x24 (0x24)


}; 
 
 // ScriptStruct ControlRig.RigUnit_FramesToSeconds
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_FramesToSeconds : FRigUnit_AnimBase
{
	float Frames;  // 0x8 (0x8)
	float Seconds;  // 0xC (0xC)


}; 
 
 // Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
struct FFindBone_ForBlueprintOnly
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct FRigBoneElement ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SecondsToFrames
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_SecondsToFrames : FRigUnit_AnimBase
{
	float Seconds;  // 0x8 (0x8)
	float Frames;  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SphereTraceWorld
// Size: 0x78(Inherited: 0x8)
struct FRigUnit_SphereTraceWorld : FRigUnit
{
	struct FVector Start;  // 0x8 (0x8)
	struct FVector End;  // 0x20 (0x20)
	enum class ECollisionChannel Channel;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	float Radius;  // 0x3C (0x3C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bHit : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct FVector HitLocation;  // 0x48 (0x48)
	struct FVector HitNormal;  // 0x60 (0x60)


}; 
 
 // Function ControlRig.RigHierarchy.GetBoolArrayMetadata
struct FGetBoolArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<bool> ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_Control_StaticMesh
// Size: 0x1E0(Inherited: 0x180)
struct FRigUnit_Control_StaticMesh : FRigUnit_Control
{
	struct FTransform MeshTransform;  // 0x180 (0x180)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetMultiControlBool
// Size: 0x60(Inherited: 0x40)
struct FRigUnit_SetMultiControlBool : FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlBool_Entry> Entries;  // 0x40 (0x40)
	struct TArray<struct FCachedRigElement> CachedControlIndices;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_Settings
// Size: 0x100(Inherited: 0x10)
struct FRigUnit_HierarchyAddControlVector_Settings : FRigUnit_HierarchyAddControl_Settings
{
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bIsPosition : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FRigUnit_HierarchyAddControlVector_LimitSettings Limits;  // 0x18 (0x18)
	char pad_88[8];  // 0x58 (0x58)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;  // 0x60 (0x60)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathColorFromFloat
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_MathColorFromFloat : FRigUnit_MathColorBase
{
	float Value;  // 0x8 (0x8)
	struct FLinearColor Result;  // 0xC (0xC)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelBool
// Size: 0x68(Inherited: 0x60)
struct FRigUnit_HierarchyAddAnimationChannelBool : FRigUnit_HierarchyAddElement
{
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool InitialValue : 1;  // 0x60 (0x60)
	char pad_97_1 : 7;  // 0x61 (0x61)
	bool MinimumValue : 1;  // 0x61 (0x61)
	char pad_98_1 : 7;  // 0x62 (0x62)
	bool MaximumValue : 1;  // 0x62 (0x62)
	char pad_99[5];  // 0x63 (0x63)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionAddItem
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_CollectionAddItem : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Collection;  // 0x8 (0x8)
	struct FRigElementKey Item;  // 0x18 (0x18)
	char pad_36[4];  // 0x24 (0x24)
	struct FRigElementKeyCollection Result;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionItems
// Size: 0x30(Inherited: 0x8)
struct FRigUnit_CollectionItems : FRigUnit_CollectionBase
{
	struct TArray<struct FRigElementKey> Items;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bAllowDuplicates : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FRigElementKeyCollection Collection;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigDispatch_CoreBase
// Size: 0x18(Inherited: 0x18)
struct FRigDispatch_CoreBase : FRigDispatchFactory
{


}; 
 
 // ScriptStruct ControlRig.RigDispatch_CoreEquals
// Size: 0x18(Inherited: 0x18)
struct FRigDispatch_CoreEquals : FRigDispatch_CoreBase
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_NameBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_NameBase : FRigUnit
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_NameConcat
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_NameConcat : FRigUnit_NameBase
{
	struct FName A;  // 0x8 (0x8)
	struct FName B;  // 0x10 (0x10)
	struct FName Result;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_NameTruncate
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_NameTruncate : FRigUnit_NameBase
{
	struct FName Name;  // 0x8 (0x8)
	int32_t Count;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool FromEnd : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FName Remainder;  // 0x18 (0x18)
	struct FName Chopped;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_NameReplace
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_NameReplace : FRigUnit_NameBase
{
	struct FName Name;  // 0x8 (0x8)
	struct FName Old;  // 0x10 (0x10)
	struct FName New;  // 0x18 (0x18)
	struct FName Result;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StartProfilingTimer
// Size: 0x40(Inherited: 0x40)
struct FRigUnit_StartProfilingTimer : FRigUnit_DebugBaseMutable
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_ConvertQuaternion
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_ConvertQuaternion : FRigUnit
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Input;  // 0x10 (0x10)
	struct FRotator Result;  // 0x30 (0x30)
	char pad_72[8];  // 0x48 (0x48)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathMatrixBinaryAggregateOp
// Size: 0x190(Inherited: 0x8)
struct FRigUnit_MathMatrixBinaryAggregateOp : FRigUnit_MathMatrixBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FMatrix A;  // 0x10 (0x10)
	struct FMatrix B;  // 0x90 (0x90)
	struct FMatrix Result;  // 0x110 (0x110)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleAtan
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathDoubleAtan : FRigUnit_MathDoubleUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntNegate
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathIntNegate : FRigUnit_MathIntUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_EndsWith
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_EndsWith : FRigUnit_NameBase
{
	struct FName Name;  // 0x8 (0x8)
	struct FName Ending;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Result : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StartsWith
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_StartsWith : FRigUnit_NameBase
{
	struct FName Name;  // 0x8 (0x8)
	struct FName Start;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Result : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function ControlRig.RigHierarchy.GetMetadataNames
struct FGetMetadataNames
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct TArray<struct FName> ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_Contains
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_Contains : FRigUnit_NameBase
{
	struct FName Name;  // 0x8 (0x8)
	struct FName Search;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Result : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionToRotator
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Value;  // 0x10 (0x10)
	struct FRotator Result;  // 0x30 (0x30)
	char pad_72[8];  // 0x48 (0x48)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PoseGetTransform
// Size: 0x100(Inherited: 0x8)
struct FRigUnit_PoseGetTransform : FRigUnit_HierarchyBase
{
	struct FRigPose Pose;  // 0x8 (0x8)
	struct FRigElementKey Item;  // 0x78 (0x78)
	uint8_t Space;  // 0x84 (0x84)
	char pad_133_1 : 7;  // 0x85 (0x85)
	bool Valid : 1;  // 0x85 (0x85)
	char pad_134[10];  // 0x86 (0x86)
	struct FTransform Transform;  // 0x90 (0x90)
	float CurveValue;  // 0xF0 (0xF0)
	int32_t CachedPoseElementIndex;  // 0xF4 (0xF4)
	int32_t CachedPoseHash;  // 0xF8 (0xF8)
	char pad_252[4];  // 0xFC (0xFC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatTan
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatTan : FRigUnit_MathFloatUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigDispatch_Print
// Size: 0x18(Inherited: 0x18)
struct FRigDispatch_Print : FRigDispatchFactory
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_FindItemsWithMetadata
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_FindItemsWithMetadata : FRigUnit
{
	struct FName Name;  // 0x8 (0x8)
	uint8_t Type;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct TArray<struct FRigElementKey> Items;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_StringBase : FRigUnit
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringTruncate
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_StringTruncate : FRigUnit_StringBase
{
	struct FString Name;  // 0x8 (0x8)
	int32_t Count;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool FromEnd : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FString Remainder;  // 0x20 (0x20)
	struct FString Chopped;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
// Size: 0x68(Inherited: 0x40)
struct FRigUnit_SetMultiControlInteger : FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlInteger_Entry> Entries;  // 0x40 (0x40)
	float Weight;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)
	struct TArray<struct FCachedRigElement> CachedControlIndices;  // 0x58 (0x58)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringEndsWith
// Size: 0x30(Inherited: 0x8)
struct FRigUnit_StringEndsWith : FRigUnit_StringBase
{
	struct FString Name;  // 0x8 (0x8)
	struct FString Ending;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool Result : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringStartsWith
// Size: 0x30(Inherited: 0x8)
struct FRigUnit_StringStartsWith : FRigUnit_StringBase
{
	struct FString Name;  // 0x8 (0x8)
	struct FString Start;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool Result : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringContains
// Size: 0x30(Inherited: 0x8)
struct FRigUnit_StringContains : FRigUnit_StringBase
{
	struct FString Name;  // 0x8 (0x8)
	struct FString Search;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool Result : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleCeil
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_MathDoubleCeil : FRigUnit_MathDoubleBase
{
	double Value;  // 0x8 (0x8)
	double Result;  // 0x10 (0x10)
	int32_t Int;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function ControlRig.RigHierarchy.SetFloatArrayMetadata
struct FSetFloatArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<float> InValue;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetShapeTransform
// Size: 0x90(Inherited: 0x8)
struct FRigUnit_GetShapeTransform : FRigUnit
{
	struct FName Control;  // 0x8 (0x8)
	struct FTransform Transform;  // 0x10 (0x10)
	struct FCachedRigElement CachedControlIndex;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringTrimWhitespace
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_StringTrimWhitespace : FRigUnit_StringBase
{
	struct FString Value;  // 0x8 (0x8)
	struct FString Result;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathMatrixToVectors
// Size: 0xF0(Inherited: 0x8)
struct FRigUnit_MathMatrixToVectors : FRigUnit_MathMatrixBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FMatrix Value;  // 0x10 (0x10)
	struct FVector Origin;  // 0x90 (0x90)
	struct FVector X;  // 0xA8 (0xA8)
	struct FVector Y;  // 0xC0 (0xC0)
	struct FVector Z;  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddBone
// Size: 0xD0(Inherited: 0x60)
struct FRigUnit_HierarchyAddBone : FRigUnit_HierarchyAddElement
{
	struct FTransform Transform;  // 0x60 (0x60)
	uint8_t Space;  // 0xC0 (0xC0)
	char pad_193[15];  // 0xC1 (0xC1)


}; 
 
 // ScriptStruct ControlRig.RigUnit_VisualDebugVector
// Size: 0x48(Inherited: 0x8)
struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase
{
	struct FVector Value;  // 0x8 (0x8)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bEnabled : 1;  // 0x20 (0x20)
	uint8_t Mode;  // 0x21 (0x21)
	char pad_34[2];  // 0x22 (0x22)
	struct FLinearColor Color;  // 0x24 (0x24)
	float Thickness;  // 0x34 (0x34)
	float Scale;  // 0x38 (0x38)
	struct FName BoneSpace;  // 0x3C (0x3C)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleAcos
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathDoubleAcos : FRigUnit_MathDoubleUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringToUppercase
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_StringToUppercase : FRigUnit_StringBase
{
	struct FString Value;  // 0x8 (0x8)
	struct FString Result;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionLoop
// Size: 0xA8(Inherited: 0x40)
struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable
{
	struct FRigElementKeyCollection Collection;  // 0x40 (0x40)
	struct FRigElementKey Item;  // 0x50 (0x50)
	int32_t Index;  // 0x5C (0x5C)
	int32_t Count;  // 0x60 (0x60)
	float Ratio;  // 0x64 (0x64)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool Continue : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct FControlRigExecuteContext Completed;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Items;  // 0x8 (0x8)
	struct FName Old;  // 0x18 (0x18)
	struct FName New;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool RemoveInvalidItems : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool bAllowDuplicates : 1;  // 0x29 (0x29)
	char pad_42[6];  // 0x2A (0x2A)
	struct FRigElementKeyCollection Collection;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringToLowercase
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_StringToLowercase : FRigUnit_StringBase
{
	struct FString Value;  // 0x8 (0x8)
	struct FString Result;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringRight
// Size: 0x30(Inherited: 0x8)
struct FRigUnit_StringRight : FRigUnit_StringBase
{
	struct FString Value;  // 0x8 (0x8)
	int32_t Count;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FString Result;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.BlendTarget
struct FBlendTarget
{
	struct FTransform Transform;  // 0x0 (0x0)
	float Weight;  // 0x60 (0x60)
	char pad_100[12];  // 0x64 (0x64)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringMiddle
// Size: 0x30(Inherited: 0x8)
struct FRigUnit_StringMiddle : FRigUnit_StringBase
{
	struct FString Value;  // 0x8 (0x8)
	int32_t Start;  // 0x18 (0x18)
	int32_t Count;  // 0x1C (0x1C)
	struct FString Result;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleClamp
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_MathDoubleClamp : FRigUnit_MathDoubleBase
{
	double Value;  // 0x8 (0x8)
	double Minimum;  // 0x10 (0x10)
	double Maximum;  // 0x18 (0x18)
	double Result;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringFind
// Size: 0x30(Inherited: 0x8)
struct FRigUnit_StringFind : FRigUnit_StringBase
{
	struct FString Value;  // 0x8 (0x8)
	struct FString Search;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool Found : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	int32_t Index;  // 0x2C (0x2C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatAtan
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatAtan : FRigUnit_MathFloatUnaryOp
{


}; 
 
 // Function ControlRig.RigHierarchy.IsCurveValueSet
struct FIsCurveValueSet
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // ScriptStruct ControlRig.RigUnit_NoiseFloat
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_NoiseFloat : FRigUnit_MathBase
{
	float Value;  // 0x8 (0x8)
	float Speed;  // 0xC (0xC)
	float Frequency;  // 0x10 (0x10)
	float Minimum;  // 0x14 (0x14)
	float Maximum;  // 0x18 (0x18)
	float Result;  // 0x1C (0x1C)
	float Time;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
struct FRigUnit_AimBone_DebugSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float Scale;  // 0x4 (0x4)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform WorldOffset;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchy.SetBoolMetadata
struct FSetBoolMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool InValue : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool ReturnValue : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringSplit
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_StringSplit : FRigUnit_StringBase
{
	struct FString Value;  // 0x8 (0x8)
	struct FString Separator;  // 0x18 (0x18)
	struct TArray<struct FString> Result;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigUnit_StringPadInteger
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_StringPadInteger : FRigUnit_StringBase
{
	int32_t Value;  // 0x8 (0x8)
	int32_t Digits;  // 0xC (0xC)
	struct FString Result;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigDispatch_ToString
// Size: 0x18(Inherited: 0x18)
struct FRigDispatch_ToString : FRigDispatchFactory
{


}; 
 
 // Function ControlRig.ControlRigComponent.GetControlRig
struct FGetControlRig
{
	struct UControlRig* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionChainArray
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_CollectionChainArray : FRigUnit_CollectionBase
{
	struct FRigElementKey FirstItem;  // 0x8 (0x8)
	struct FRigElementKey LastItem;  // 0x14 (0x14)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Reverse : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct TArray<struct FRigElementKey> Items;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AccumulateTransformLerp
// Size: 0x1A0(Inherited: 0x8)
struct FRigUnit_AccumulateTransformLerp : FRigUnit_AccumulateBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform TargetValue;  // 0x10 (0x10)
	struct FTransform InitialValue;  // 0x70 (0x70)
	float Blend;  // 0xD0 (0xD0)
	char pad_212_1 : 7;  // 0xD4 (0xD4)
	bool bIntegrateDeltaTime : 1;  // 0xD4 (0xD4)
	char pad_213[11];  // 0xD5 (0xD5)
	struct FTransform Result;  // 0xE0 (0xE0)
	struct FTransform AccumulatedValue;  // 0x140 (0x140)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugBezier
// Size: 0x140(Inherited: 0x40)
struct FRigUnit_DebugBezier : FRigUnit_DebugBaseMutable
{
	struct FCRFourPointBezier Bezier;  // 0x40 (0x40)
	float MinimumU;  // 0xA0 (0xA0)
	float MaximumU;  // 0xA4 (0xA4)
	struct FLinearColor Color;  // 0xA8 (0xA8)
	float Thickness;  // 0xB8 (0xB8)
	int32_t Detail;  // 0xBC (0xBC)
	struct FName Space;  // 0xC0 (0xC0)
	char pad_200[8];  // 0xC8 (0xC8)
	struct FTransform WorldOffset;  // 0xD0 (0xD0)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool bEnabled : 1;  // 0x130 (0x130)
	char pad_305[15];  // 0x131 (0x131)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ParentConstraint_AdvancedSettings
struct FRigUnit_ParentConstraint_AdvancedSettings
{
	uint8_t InterpolationType;  // 0x0 (0x0)
	uint8_t RotationOrderForFilter;  // 0x1 (0x1)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugPose
// Size: 0x140(Inherited: 0x40)
struct FRigUnit_DebugPose : FRigUnit_DebugBaseMutable
{
	struct FRigPose Pose;  // 0x40 (0x40)
	float Scale;  // 0xB0 (0xB0)
	struct FLinearColor Color;  // 0xB4 (0xB4)
	float Thickness;  // 0xC4 (0xC4)
	char pad_200[8];  // 0xC8 (0xC8)
	struct FTransform WorldOffset;  // 0xD0 (0xD0)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool bEnabled : 1;  // 0x130 (0x130)
	char pad_305[15];  // 0x131 (0x131)


}; 
 
 // ScriptStruct ControlRig.RigUnit_TwistBones
// Size: 0xC0(Inherited: 0x40)
struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone;  // 0x40 (0x40)
	struct FName EndBone;  // 0x48 (0x48)
	struct FVector TwistAxis;  // 0x50 (0x50)
	struct FVector PoleAxis;  // 0x68 (0x68)
	uint8_t TwistEaseType;  // 0x80 (0x80)
	char pad_129[3];  // 0x81 (0x81)
	float Weight;  // 0x84 (0x84)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool bPropagateToChildren : 1;  // 0x88 (0x88)
	char pad_137[7];  // 0x89 (0x89)
	struct FRigUnit_TwistBones_WorkData WorkData;  // 0x90 (0x90)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformClampSpatially
// Size: 0x160(Inherited: 0x8)
struct FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Value;  // 0x10 (0x10)
	enum class EAxis Axis;  // 0x70 (0x70)
	enum class EControlRigClampSpatialMode Type;  // 0x71 (0x71)
	char pad_114[2];  // 0x72 (0x72)
	float Minimum;  // 0x74 (0x74)
	float Maximum;  // 0x78 (0x78)
	char pad_124[4];  // 0x7C (0x7C)
	struct FTransform Space;  // 0x80 (0x80)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool bDrawDebug : 1;  // 0xE0 (0xE0)
	char pad_225[3];  // 0xE1 (0xE1)
	struct FLinearColor DebugColor;  // 0xE4 (0xE4)
	float DebugThickness;  // 0xF4 (0xF4)
	char pad_248[8];  // 0xF8 (0xF8)
	struct FTransform Result;  // 0x100 (0x100)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugLine
// Size: 0x100(Inherited: 0x40)
struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable
{
	struct FVector A;  // 0x40 (0x40)
	struct FVector B;  // 0x58 (0x58)
	struct FLinearColor Color;  // 0x70 (0x70)
	float Thickness;  // 0x80 (0x80)
	struct FName Space;  // 0x84 (0x84)
	char pad_140[4];  // 0x8C (0x8C)
	struct FTransform WorldOffset;  // 0x90 (0x90)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool bEnabled : 1;  // 0xF0 (0xF0)
	char pad_241[15];  // 0xF1 (0xF1)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugLineItemSpace
// Size: 0x100(Inherited: 0x40)
struct FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable
{
	struct FVector A;  // 0x40 (0x40)
	struct FVector B;  // 0x58 (0x58)
	struct FLinearColor Color;  // 0x70 (0x70)
	float Thickness;  // 0x80 (0x80)
	struct FRigElementKey Space;  // 0x84 (0x84)
	struct FTransform WorldOffset;  // 0x90 (0x90)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool bEnabled : 1;  // 0xF0 (0xF0)
	char pad_241[15];  // 0xF1 (0xF1)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionChildrenArray
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_CollectionChildrenArray : FRigUnit_CollectionBase
{
	struct FRigElementKey Parent;  // 0x8 (0x8)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bIncludeParent : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool bRecursive : 1;  // 0x15 (0x15)
	uint8_t TypeToSearch;  // 0x16 (0x16)
	char pad_23[1];  // 0x17 (0x17)
	struct TArray<struct FRigElementKey> Items;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugLineStrip
// Size: 0xE0(Inherited: 0x40)
struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable
{
	struct TArray<struct FVector> Points;  // 0x40 (0x40)
	struct FLinearColor Color;  // 0x50 (0x50)
	float Thickness;  // 0x60 (0x60)
	struct FName Space;  // 0x64 (0x64)
	char pad_108[4];  // 0x6C (0x6C)
	struct FTransform WorldOffset;  // 0x70 (0x70)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool bEnabled : 1;  // 0xD0 (0xD0)
	char pad_209[15];  // 0xD1 (0xD1)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugLineStripItemSpace
// Size: 0xE0(Inherited: 0x40)
struct FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable
{
	struct TArray<struct FVector> Points;  // 0x40 (0x40)
	struct FLinearColor Color;  // 0x50 (0x50)
	float Thickness;  // 0x60 (0x60)
	struct FRigElementKey Space;  // 0x64 (0x64)
	struct FTransform WorldOffset;  // 0x70 (0x70)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool bEnabled : 1;  // 0xD0 (0xD0)
	char pad_209[15];  // 0xD1 (0xD1)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugPoint
// Size: 0xC0(Inherited: 0x8)
struct FRigUnit_DebugPoint : FRigUnit_DebugBase
{
	struct FVector Vector;  // 0x8 (0x8)
	uint8_t Mode;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	struct FLinearColor Color;  // 0x24 (0x24)
	float Scale;  // 0x34 (0x34)
	float Thickness;  // 0x38 (0x38)
	struct FName Space;  // 0x3C (0x3C)
	char pad_68[12];  // 0x44 (0x44)
	struct FTransform WorldOffset;  // 0x50 (0x50)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool bEnabled : 1;  // 0xB0 (0xB0)
	char pad_177[15];  // 0xB1 (0xB1)


}; 
 
 // ScriptStruct ControlRig.RigUnit_Add_FloatFloat
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugRectangle
// Size: 0x130(Inherited: 0x40)
struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable
{
	struct FTransform Transform;  // 0x40 (0x40)
	struct FLinearColor Color;  // 0xA0 (0xA0)
	float Scale;  // 0xB0 (0xB0)
	float Thickness;  // 0xB4 (0xB4)
	struct FName Space;  // 0xB8 (0xB8)
	struct FTransform WorldOffset;  // 0xC0 (0xC0)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool bEnabled : 1;  // 0x120 (0x120)
	char pad_289[15];  // 0x121 (0x121)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugRectangleItemSpace
// Size: 0x140(Inherited: 0x40)
struct FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable
{
	struct FTransform Transform;  // 0x40 (0x40)
	struct FLinearColor Color;  // 0xA0 (0xA0)
	float Scale;  // 0xB0 (0xB0)
	float Thickness;  // 0xB4 (0xB4)
	struct FRigElementKey Space;  // 0xB8 (0xB8)
	char pad_196[12];  // 0xC4 (0xC4)
	struct FTransform WorldOffset;  // 0xD0 (0xD0)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool bEnabled : 1;  // 0x130 (0x130)
	char pad_305[15];  // 0x131 (0x131)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugArc
// Size: 0x140(Inherited: 0x40)
struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable
{
	struct FTransform Transform;  // 0x40 (0x40)
	struct FLinearColor Color;  // 0xA0 (0xA0)
	float Radius;  // 0xB0 (0xB0)
	float MinimumDegrees;  // 0xB4 (0xB4)
	float MaximumDegrees;  // 0xB8 (0xB8)
	float Thickness;  // 0xBC (0xBC)
	int32_t Detail;  // 0xC0 (0xC0)
	struct FName Space;  // 0xC4 (0xC4)
	char pad_204[4];  // 0xCC (0xCC)
	struct FTransform WorldOffset;  // 0xD0 (0xD0)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool bEnabled : 1;  // 0x130 (0x130)
	char pad_305[15];  // 0x131 (0x131)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugTransform
// Size: 0x110(Inherited: 0x8)
struct FRigUnit_DebugTransform : FRigUnit_DebugBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Transform;  // 0x10 (0x10)
	uint8_t Mode;  // 0x70 (0x70)
	char pad_113[3];  // 0x71 (0x71)
	struct FLinearColor Color;  // 0x74 (0x74)
	float Thickness;  // 0x84 (0x84)
	float Scale;  // 0x88 (0x88)
	struct FName Space;  // 0x8C (0x8C)
	char pad_148[12];  // 0x94 (0x94)
	struct FTransform WorldOffset;  // 0xA0 (0xA0)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool bEnabled : 1;  // 0x100 (0x100)
	char pad_257[15];  // 0x101 (0x101)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntGreaterEqual
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathIntGreaterEqual : FRigUnit_MathIntBase
{
	int32_t A;  // 0x8 (0x8)
	int32_t B;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
struct FRigUnit_DebugTransformArrayMutable_WorkData
{
	struct TArray<struct FTransform> DrawTransforms;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
// Size: 0x100(Inherited: 0x40)
struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable
{
	struct TArray<struct FTransform> Transforms;  // 0x40 (0x40)
	uint8_t Mode;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	struct FLinearColor Color;  // 0x54 (0x54)
	float Thickness;  // 0x64 (0x64)
	float Scale;  // 0x68 (0x68)
	struct FName Space;  // 0x6C (0x6C)
	char pad_116[12];  // 0x74 (0x74)
	struct FTransform WorldOffset;  // 0x80 (0x80)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool bEnabled : 1;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)
	struct FRigUnit_DebugTransformArrayMutable_WorkData WorkData;  // 0xE8 (0xE8)
	char pad_248[8];  // 0xF8 (0xF8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
// Size: 0x68(Inherited: 0x40)
struct FRigUnit_SetMultiControlFloat : FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlFloat_Entry> Entries;  // 0x40 (0x40)
	float Weight;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)
	struct TArray<struct FCachedRigElement> CachedControlIndices;  // 0x58 (0x58)


}; 
 
 // Function ControlRig.RigHierarchy.GetCurveValueByIndex
struct FGetCurveValueByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	float ReturnValue;  // 0x4 (0x4)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutableItemSpace
// Size: 0x100(Inherited: 0x40)
struct FRigUnit_DebugTransformArrayMutableItemSpace : FRigUnit_DebugBaseMutable
{
	struct TArray<struct FTransform> Transforms;  // 0x40 (0x40)
	struct TArray<int32_t> ParentIndices;  // 0x50 (0x50)
	uint8_t Mode;  // 0x60 (0x60)
	char pad_97[3];  // 0x61 (0x61)
	struct FLinearColor Color;  // 0x64 (0x64)
	float Thickness;  // 0x74 (0x74)
	float Scale;  // 0x78 (0x78)
	struct FRigElementKey Space;  // 0x7C (0x7C)
	char pad_136[8];  // 0x88 (0x88)
	struct FTransform WorldOffset;  // 0x90 (0x90)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool bEnabled : 1;  // 0xF0 (0xF0)
	char pad_241[15];  // 0xF1 (0xF1)


}; 
 
 // ScriptStruct ControlRig.RigUnit_VisualDebugVectorItemSpace
// Size: 0x48(Inherited: 0x8)
struct FRigUnit_VisualDebugVectorItemSpace : FRigUnit_DebugBase
{
	struct FVector Value;  // 0x8 (0x8)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bEnabled : 1;  // 0x20 (0x20)
	uint8_t Mode;  // 0x21 (0x21)
	char pad_34[2];  // 0x22 (0x22)
	struct FLinearColor Color;  // 0x24 (0x24)
	float Thickness;  // 0x34 (0x34)
	float Scale;  // 0x38 (0x38)
	struct FRigElementKey Space;  // 0x3C (0x3C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntMax
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathIntMax : FRigUnit_MathIntBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionNameSearchArray
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_CollectionNameSearchArray : FRigUnit_CollectionBase
{
	struct FName PartialName;  // 0x8 (0x8)
	uint8_t TypeToSearch;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct TArray<struct FRigElementKey> Items;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
// Size: 0xB0(Inherited: 0x8)
struct FRigUnit_ConvertEulerTransform : FRigUnit
{
	struct FEulerTransform Input;  // 0x8 (0x8)
	struct FTransform Result;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformMutableBase
// Size: 0x40(Inherited: 0x40)
struct FRigUnit_MathTransformMutableBase : FRigUnit_MathMutableBase
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_VisualDebugQuat
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Value;  // 0x10 (0x10)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bEnabled : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	float Thickness;  // 0x34 (0x34)
	float Scale;  // 0x38 (0x38)
	struct FName BoneSpace;  // 0x3C (0x3C)
	char pad_68[12];  // 0x44 (0x44)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
struct FRigUnit_SetMultiControlVector2D_Entry
{
	struct FName Control;  // 0x0 (0x0)
	struct FVector2D Vector;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatLawOfCosine
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_MathFloatLawOfCosine : FRigUnit_MathFloatBase
{
	float A;  // 0x8 (0x8)
	float B;  // 0xC (0xC)
	float C;  // 0x10 (0x10)
	float AlphaAngle;  // 0x14 (0x14)
	float BetaAngle;  // 0x18 (0x18)
	float GammaAngle;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bValid : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // ScriptStruct ControlRig.RigUnit_VisualDebugQuatItemSpace
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Value;  // 0x10 (0x10)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bEnabled : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	float Thickness;  // 0x34 (0x34)
	float Scale;  // 0x38 (0x38)
	struct FRigElementKey Space;  // 0x3C (0x3C)
	char pad_72[8];  // 0x48 (0x48)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetControlRotator
// Size: 0x80(Inherited: 0x8)
struct FRigUnit_GetControlRotator : FRigUnit
{
	struct FName Control;  // 0x8 (0x8)
	uint8_t Space;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FRotator Rotator;  // 0x18 (0x18)
	struct FRotator Minimum;  // 0x30 (0x30)
	struct FRotator Maximum;  // 0x48 (0x48)
	struct FCachedRigElement CachedControlIndex;  // 0x60 (0x60)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorXform
// Size: 0x130(Inherited: 0xC0)
struct FRigUnit_MathRBFInterpolateVectorXform : FRigUnit_MathRBFInterpolateVectorBase
{
	struct TArray<struct FMathRBFInterpolateVectorXform_Target> Targets;  // 0xC0 (0xC0)
	struct FTransform Output;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_VisualDebugTransform
// Size: 0x90(Inherited: 0x8)
struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Value;  // 0x10 (0x10)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bEnabled : 1;  // 0x70 (0x70)
	char pad_113[3];  // 0x71 (0x71)
	float Thickness;  // 0x74 (0x74)
	float Scale;  // 0x78 (0x78)
	struct FName BoneSpace;  // 0x7C (0x7C)
	char pad_132[12];  // 0x84 (0x84)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControl_Settings
struct FRigUnit_HierarchyAddControl_Settings
{
	char pad_0[8];  // 0x0 (0x0)
	struct FName DisplayName;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_MathQuaternionBase : FRigUnit_MathBase
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionReplaceItemsArray
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_CollectionReplaceItemsArray : FRigUnit_CollectionBase
{
	struct TArray<struct FRigElementKey> Items;  // 0x8 (0x8)
	struct FName Old;  // 0x18 (0x18)
	struct FName New;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool RemoveInvalidItems : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool bAllowDuplicates : 1;  // 0x29 (0x29)
	char pad_42[6];  // 0x2A (0x2A)
	struct TArray<struct FRigElementKey> Result;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_VisualDebugTransformItemSpace
// Size: 0x90(Inherited: 0x8)
struct FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Value;  // 0x10 (0x10)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bEnabled : 1;  // 0x70 (0x70)
	char pad_113[3];  // 0x71 (0x71)
	float Thickness;  // 0x74 (0x74)
	float Scale;  // 0x78 (0x78)
	struct FRigElementKey Space;  // 0x7C (0x7C)
	char pad_136[8];  // 0x88 (0x88)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ConvertTransform
// Size: 0xC0(Inherited: 0x8)
struct FRigUnit_ConvertTransform : FRigUnit
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Input;  // 0x10 (0x10)
	struct FEulerTransform Result;  // 0x70 (0x70)
	char pad_184[8];  // 0xB8 (0xB8)


}; 
 
 // Function ControlRig.ControlRigComponent.SetControlTransform
struct FSetControlTransform
{
	struct FName ControlName;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Value;  // 0x10 (0x10)
	uint8_t Space;  // 0x70 (0x70)
	char pad_113[15];  // 0x71 (0x71)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
// Size: 0x40(Inherited: 0x40)
struct FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
// Size: 0xD0(Inherited: 0x8)
struct FRigUnit_ToWorldSpace_Transform : FRigUnit
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Value;  // 0x10 (0x10)
	struct FTransform World;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_ConvertVectorToRotation : FRigUnit
{
	struct FVector Input;  // 0x8 (0x8)
	struct FRotator Result;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetShapeTransform
// Size: 0xD0(Inherited: 0x40)
struct FRigUnit_SetShapeTransform : FRigUnitMutable
{
	struct FName Control;  // 0x40 (0x40)
	char pad_72[8];  // 0x48 (0x48)
	struct FTransform Transform;  // 0x50 (0x50)
	struct FCachedRigElement CachedControlIndex;  // 0xB0 (0xB0)


}; 
 
 // Function ControlRig.RigHierarchy.GetRotatorMetadata
struct FGetRotatorMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct FRotator DefaultValue;  // 0x18 (0x18)
	struct FRotator ReturnValue;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetVectorAnimationChannel
// Size: 0x48(Inherited: 0x30)
struct FRigUnit_GetVectorAnimationChannel : FRigUnit_GetAnimationChannelBase
{
	struct FVector Value;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
struct FRigUnit_HierarchyAddControlVector_LimitSettings
{
	struct FRigControlLimitEnabled LimitX;  // 0x0 (0x0)
	struct FRigControlLimitEnabled LimitY;  // 0x2 (0x2)
	struct FRigControlLimitEnabled LimitZ;  // 0x4 (0x4)
	char pad_6[2];  // 0x6 (0x6)
	struct FVector MinValue;  // 0x8 (0x8)
	struct FVector MaxValue;  // 0x20 (0x20)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bDrawLimits : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_ConvertRotationToVector : FRigUnit
{
	struct FRotator Input;  // 0x8 (0x8)
	struct FVector Result;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionCount
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_CollectionCount : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Collection;  // 0x8 (0x8)
	int32_t Count;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_ConvertQuaternionToVector : FRigUnit
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Input;  // 0x10 (0x10)
	struct FVector Result;  // 0x30 (0x30)
	char pad_72[8];  // 0x48 (0x48)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
// Size: 0x90(Inherited: 0x8)
struct FRigUnit_ToSwingAndTwist : FRigUnit
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Input;  // 0x10 (0x10)
	struct FVector TwistAxis;  // 0x30 (0x30)
	char pad_72[8];  // 0x48 (0x48)
	struct FQuat Swing;  // 0x50 (0x50)
	struct FQuat Twist;  // 0x70 (0x70)


}; 
 
 // Function ControlRig.RigHierarchy.SetLinearColorArrayMetadata
struct FSetLinearColorArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FLinearColor> InValue;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp
{


}; 
 
 // Function ControlRig.RigHierarchy.GetPose
struct FGetPose
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInitial : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FRigPose ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleNotEquals
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_MathDoubleNotEquals : FRigUnit_MathDoubleBase
{
	double A;  // 0x8 (0x8)
	double B;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Result : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolAnd
// Size: [x10(Inherited: 0x10)
struct FRigUnit_MathBoolAnd : FRigUnit_MathBoolBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform_Settings
// Size: 0xB0(Inherited: 0x10)
struct FRigUnit_HierarchyAddControlTransform_Settings : FRigUnit_HierarchyAddControl_Settings
{
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;  // 0x10 (0x10)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;  // 0x90 (0x90)


}; 
 
 // ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyBaseMutable
// Size: 0x40(Inherited: 0x40)
struct FRigUnit_HierarchyBaseMutable : FRigUnitMutable
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatSelectBool
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatSelectBool : FRigUnit_MathFloatBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Condition : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float IfTrue;  // 0xC (0xC)
	float IfFalse;  // 0x10 (0x10)
	float Result;  // 0x14 (0x14)


}; 
 
 // Function ControlRig.RigHierarchy.SetFloatMetadata
struct FSetFloatMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	float InValue;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)


}; 
 
 // ScriptStruct ControlRig.RigUnit_Clamp_Float
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_Clamp_Float : FRigUnit
{
	float Value;  // 0x8 (0x8)
	float Min;  // 0xC (0xC)
	float Max;  // 0x10 (0x10)
	float Result;  // 0x14 (0x14)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MapRange_Float
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_MapRange_Float : FRigUnit
{
	float Value;  // 0x8 (0x8)
	float MinIn;  // 0xC (0xC)
	float MaxIn;  // 0x10 (0x10)
	float MinOut;  // 0x14 (0x14)
	float MaxOut;  // 0x18 (0x18)
	float Result;  // 0x1C (0x1C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
// Size: 0x70(Inherited: 0x8)
struct FRigUnit_BinaryQuaternionOp : FRigUnit
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Argument0;  // 0x10 (0x10)
	struct FQuat Argument1;  // 0x30 (0x30)
	struct FQuat Result;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_UnaryQuaternionOp : FRigUnit
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Argument;  // 0x10 (0x10)
	struct FQuat Result;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector
// Size: 0x1E0(Inherited: 0x60)
struct FRigUnit_HierarchyAddControlVector : FRigUnit_HierarchyAddElement
{
	struct FTransform OffsetTransform;  // 0x60 (0x60)
	struct FVector InitialValue;  // 0xC0 (0xC0)
	char pad_216[8];  // 0xD8 (0xD8)
	struct FRigUnit_HierarchyAddControlVector_Settings Settings;  // 0xE0 (0xE0)


}; 
 
 // Function ControlRig.RigHierarchy.GetQuatMetadata
struct FGetQuatMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[12];  // 0x14 (0x14)
	struct FQuat DefaultValue;  // 0x20 (0x20)
	struct FQuat ReturnValue;  // 0x40 (0x40)


}; 
 
 // ScriptStruct ControlRig.RigUnit_InverseQuaterion
// Size: 0x50(Inherited: 0x50)
struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp
{


}; 
 
 // Function ControlRig.RigHierarchy.GetFloatArrayMetadata
struct FGetFloatArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<float> ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolNot
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathBoolNot : FRigUnit_MathBoolUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatFloor
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatFloor : FRigUnit_MathFloatBase
{
	float Value;  // 0x8 (0x8)
	float Result;  // 0xC (0xC)
	int32_t Int;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Argument;  // 0x10 (0x10)
	struct FVector Axis;  // 0x30 (0x30)
	float Angle;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AccumulateFloatLerp
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_AccumulateFloatLerp : FRigUnit_AccumulateBase
{
	float TargetValue;  // 0x8 (0x8)
	float InitialValue;  // 0xC (0xC)
	float Blend;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bIntegrateDeltaTime : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	float Result;  // 0x18 (0x18)
	float AccumulatedValue;  // 0x1C (0x1C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetVector2DAnimationChannel
// Size: 0x40(Inherited: 0x30)
struct FRigUnit_GetVector2DAnimationChannel : FRigUnit_GetAnimationChannelBase
{
	struct FVector2D Value;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetRelativeTransform
// Size: 0x130(Inherited: 0x130)
struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatNegate
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatNegate : FRigUnit_MathFloatUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyGetPoseItemArray
// Size: 0x90(Inherited: 0x8)
struct FRigUnit_HierarchyGetPoseItemArray : FRigUnit_HierarchyBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Initial : 1;  // 0x8 (0x8)
	uint8_t ElementType;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)
	struct TArray<struct FRigElementKey> ItemsToGet;  // 0x10 (0x10)
	struct FRigPose Pose;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
// Size: 0x50(Inherited: 0x50)
struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_SlideChainItemArray
// Size: 0xA0(Inherited: 0x40)
struct FRigUnit_SlideChainItemArray : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigElementKey> Items;  // 0x40 (0x40)
	float SlideAmount;  // 0x50 (0x50)
	char pad_84_1 : 7;  // 0x54 (0x54)
	bool bPropagateToChildren : 1;  // 0x54 (0x54)
	char pad_85[3];  // 0x55 (0x55)
	struct FRigUnit_SlideChain_WorkData WorkData;  // 0x58 (0x58)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorSelectBool
// Size: 0x58(Inherited: 0x8)
struct FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Condition : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FVector IfTrue;  // 0x10 (0x10)
	struct FVector IfFalse;  // 0x28 (0x28)
	struct FVector Result;  // 0x40 (0x40)


}; 
 
 // ScriptStruct ControlRig.RigUnit_UserDefinedEvent
// Size: 0x48(Inherited: 0x8)
struct FRigUnit_UserDefinedEvent : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext;  // 0x8 (0x8)
	struct FName EventName;  // 0x40 (0x40)


}; 
 
 // ScriptStruct ControlRig.RigUnit_Add_VectorVector
// Size: 0x50(Inherited: 0x50)
struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp
{


}; 
 
 // Function ControlRig.RigHierarchy.SetLinearColorMetadata
struct FSetLinearColorMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	struct FLinearColor InValue;  // 0x14 (0x14)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool ReturnValue : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)


}; 
 
 // ScriptStruct ControlRig.RigUnit_Divide_VectorVector
// Size: 0x50(Inherited: 0x50)
struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp
{


}; 
 
 // ScriptStruct ControlRig.AimTarget
struct FAimTarget
{
	float Weight;  // 0x0 (0x0)
	char pad_4[12];  // 0x4 (0x4)
	struct FTransform Transform;  // 0x10 (0x10)
	struct FVector AlignVector;  // 0x70 (0x70)
	char pad_136[8];  // 0x88 (0x88)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
struct FRigUnit_AimConstraint_WorkData
{
	struct TArray<struct FConstraintData> ConstraintData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
struct FRigUnit_ChainHarmonics_Pendulum
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float PendulumStiffness;  // 0x4 (0x4)
	struct FVector PendulumGravity;  // 0x8 (0x8)
	float PendulumBlend;  // 0x20 (0x20)
	float PendulumDrag;  // 0x24 (0x24)
	float PendulumMinimum;  // 0x28 (0x28)
	float PendulumMaximum;  // 0x2C (0x2C)
	uint8_t PendulumEase;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct FVector UnwindAxis;  // 0x38 (0x38)
	float UnwindMinimum;  // 0x50 (0x50)
	float UnwindMaximum;  // 0x54 (0x54)


}; 
 
 // Function ControlRig.RigHierarchy.SetRigElementKeyMetadata
struct FSetRigElementKeyMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	struct FRigElementKey InValue;  // 0x14 (0x14)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ApplyFK
// Size: 0x130(Inherited: 0x40)
struct FRigUnit_ApplyFK : FRigUnitMutable
{
	struct FName Joint;  // 0x40 (0x40)
	char pad_72[8];  // 0x48 (0x48)
	struct FTransform Transform;  // 0x50 (0x50)
	struct FTransformFilter Filter;  // 0xB0 (0xB0)
	uint8_t ApplyTransformMode;  // 0xB9 (0xB9)
	uint8_t ApplyTransformSpace;  // 0xBA (0xBA)
	char pad_187[5];  // 0xBB (0xBB)
	struct FTransform BaseTransform;  // 0xC0 (0xC0)
	struct FName BaseJoint;  // 0x120 (0x120)
	char pad_296[8];  // 0x128 (0x128)


}; 
 
 // ScriptStruct ControlRig.RigUnit_BlendTransform
// Size: 0xE0(Inherited: 0x8)
struct FRigUnit_BlendTransform : FRigUnit
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Source;  // 0x10 (0x10)
	struct TArray<struct FBlendTarget> Targets;  // 0x70 (0x70)
	struct FTransform Result;  // 0x80 (0x80)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatConstPi
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatConstPi : FRigUnit_MathFloatConstant
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetJointTransform
// Size: 0x120(Inherited: 0x40)
struct FRigUnit_GetJointTransform : FRigUnitMutable
{
	struct FName Joint;  // 0x40 (0x40)
	uint8_t Type;  // 0x48 (0x48)
	uint8_t TransformSpace;  // 0x49 (0x49)
	char pad_74[6];  // 0x4A (0x4A)
	struct FTransform BaseTransform;  // 0x50 (0x50)
	struct FName BaseJoint;  // 0xB0 (0xB0)
	char pad_184[8];  // 0xB8 (0xB8)
	struct FTransform Output;  // 0xC0 (0xC0)


}; 
 
 // Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
struct FGetGlobalControlOffsetTransform
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bInitial : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
// Size: 0x350(Inherited: 0x40)
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable
{
	struct FName StartJoint;  // 0x40 (0x40)
	struct FName EndJoint;  // 0x48 (0x48)
	struct FVector PoleTarget;  // 0x50 (0x50)
	float Spin;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)
	struct FTransform EndEffector;  // 0x70 (0x70)
	float IKBlend;  // 0xD0 (0xD0)
	char pad_212[12];  // 0xD4 (0xD4)
	struct FTransform StartJointFKTransform;  // 0xE0 (0xE0)
	struct FTransform MidJointFKTransform;  // 0x140 (0x140)
	struct FTransform EndJointFKTransform;  // 0x1A0 (0x1A0)
	float PreviousFKIKBlend;  // 0x200 (0x200)
	char pad_516[12];  // 0x204 (0x204)
	struct FTransform StartJointIKTransform;  // 0x210 (0x210)
	struct FTransform MidJointIKTransform;  // 0x270 (0x270)
	struct FTransform EndJointIKTransform;  // 0x2D0 (0x2D0)
	int32_t StartJointIndex;  // 0x330 (0x330)
	int32_t MidJointIndex;  // 0x334 (0x334)
	int32_t EndJointIndex;  // 0x338 (0x338)
	float UpperLimbLength;  // 0x33C (0x33C)
	float LowerLimbLength;  // 0x340 (0x340)
	char pad_836[12];  // 0x344 (0x344)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
struct FRigUnit_ModifyTransforms_WorkData
{
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetBoneTransform
// Size: 0x140(Inherited: 0x40)
struct FRigUnit_SetBoneTransform : FRigUnitMutable
{
	struct FName bone;  // 0x40 (0x40)
	char pad_72[8];  // 0x48 (0x48)
	struct FTransform Transform;  // 0x50 (0x50)
	struct FTransform Result;  // 0xB0 (0xB0)
	uint8_t Space;  // 0x110 (0x110)
	char pad_273[3];  // 0x111 (0x111)
	float Weight;  // 0x114 (0x114)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool bPropagateToChildren : 1;  // 0x118 (0x118)
	char pad_281[7];  // 0x119 (0x119)
	struct FCachedRigElement CachedBone;  // 0x120 (0x120)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
struct FRigUnit_DistributeRotation_Rotation
{
	struct FQuat Rotation;  // 0x0 (0x0)
	float Ratio;  // 0x20 (0x20)
	char pad_36[12];  // 0x24 (0x24)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
// Size: 0x58(Inherited: 0x40)
struct FRigUnit_DrawContainerSetColor : FRigUnitMutable
{
	struct FName InstructionName;  // 0x40 (0x40)
	struct FLinearColor Color;  // 0x48 (0x48)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
// Size: 0x50(Inherited: 0x40)
struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable
{
	struct FName InstructionName;  // 0x40 (0x40)
	float Thickness;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
// Size: 0xB0(Inherited: 0x40)
struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable
{
	struct FName InstructionName;  // 0x40 (0x40)
	char pad_72[8];  // 0x48 (0x48)
	struct FTransform Transform;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyGetSiblingsItemArray
// Size: 0x58(Inherited: 0x8)
struct FRigUnit_HierarchyGetSiblingsItemArray : FRigUnit_HierarchyBase
{
	struct FRigElementKey Item;  // 0x8 (0x8)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bIncludeItem : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct TArray<struct FRigElementKey> Siblings;  // 0x18 (0x18)
	struct FCachedRigElement CachedItem;  // 0x28 (0x28)
	struct FRigElementKeyCollection CachedSiblings;  // 0x48 (0x48)


}; 
 
 // ScriptStruct ControlRig.RigUnit_BeginExecution
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_BeginExecution : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetTransformArray
// Size: 0x80(Inherited: 0x40)
struct FRigUnit_SetTransformArray : FRigUnitMutable
{
	struct FRigElementKeyCollection Items;  // 0x40 (0x40)
	uint8_t Space;  // 0x50 (0x50)
	char pad_81_1 : 7;  // 0x51 (0x51)
	bool bInitial : 1;  // 0x51 (0x51)
	char pad_82[6];  // 0x52 (0x52)
	struct TArray<struct FTransform> Transforms;  // 0x58 (0x58)
	float Weight;  // 0x68 (0x68)
	char pad_108_1 : 7;  // 0x6C (0x6C)
	bool bPropagateToChildren : 1;  // 0x6C (0x6C)
	char pad_109[3];  // 0x6D (0x6D)
	struct TArray<struct FCachedRigElement> CachedIndex;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
// Size: 0x40(Inherited: 0x40)
struct FRigUnit_CollectionBaseMutable : FRigUnitMutable
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionChain
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_CollectionChain : FRigUnit_CollectionBase
{
	struct FRigElementKey FirstItem;  // 0x8 (0x8)
	struct FRigElementKey LastItem;  // 0x14 (0x14)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Reverse : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct FRigElementKeyCollection Collection;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PoseIsEmpty
// Size: 0x80(Inherited: 0x8)
struct FRigUnit_PoseIsEmpty : FRigUnit_HierarchyBase
{
	struct FRigPose Pose;  // 0x8 (0x8)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool IsEmpty : 1;  // 0x78 (0x78)
	char pad_121[7];  // 0x79 (0x79)


}; 
 
 // Function ControlRig.RigHierarchy.GetLinearColorArrayMetadata
struct FGetLinearColorArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FLinearColor> ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionNameSearch
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase
{
	struct FName PartialName;  // 0x8 (0x8)
	uint8_t TypeToSearch;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FRigElementKeyCollection Collection;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDistanceToPlane
// Size: 0x70(Inherited: 0x8)
struct FRigUnit_MathDistanceToPlane : FRigUnit_MathVectorBase
{
	struct FVector Point;  // 0x8 (0x8)
	struct FVector PlanePoint;  // 0x20 (0x20)
	struct FVector PlaneNormal;  // 0x38 (0x38)
	struct FVector ClosestPointOnPlane;  // 0x50 (0x50)
	float SignedDistance;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionGetAll
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_CollectionGetAll : FRigUnit_CollectionBase
{
	uint8_t TypeToSearch;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct TArray<struct FRigElementKey> Items;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
struct FRigUnit_SpringIK_DebugSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float Scale;  // 0x4 (0x4)
	struct FLinearColor Color;  // 0x8 (0x8)
	char pad_24[8];  // 0x18 (0x18)
	struct FTransform WorldOffset;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionGetItems
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_CollectionGetItems : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Collection;  // 0x8 (0x8)
	struct TArray<struct FRigElementKey> Items;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatLerp
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatLerp : FRigUnit_MathFloatBase
{
	float A;  // 0x8 (0x8)
	float B;  // 0xC (0xC)
	float T;  // 0x10 (0x10)
	float Result;  // 0x14 (0x14)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionGetParentIndices
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_CollectionGetParentIndices : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Collection;  // 0x8 (0x8)
	struct TArray<int32_t> ParentIndices;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
struct FRigUnit_ChainHarmonics_Reach
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector ReachTarget;  // 0x8 (0x8)
	struct FVector ReachAxis;  // 0x20 (0x20)
	float ReachMinimum;  // 0x38 (0x38)
	float ReachMaximum;  // 0x3C (0x3C)
	uint8_t ReachEase;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
struct FRigUnit_PointSimulation_WorkData
{
	struct FCRSimPointContainer Simulation;  // 0x0 (0x0)
	struct TArray<struct FCachedRigElement> BoneIndices;  // 0x78 (0x78)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionGetParentIndicesItemArray
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_CollectionGetParentIndicesItemArray : FRigUnit_CollectionBase
{
	struct TArray<struct FRigElementKey> Items;  // 0x8 (0x8)
	struct TArray<int32_t> ParentIndices;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetVector2DAnimationChannel
// Size: 0x78(Inherited: 0x68)
struct FRigUnit_SetVector2DAnimationChannel : FRigUnit_SetAnimationChannelBase
{
	struct FVector2D Value;  // 0x68 (0x68)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyZero
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatIsNearlyZero : FRigUnit_MathFloatBase
{
	float Value;  // 0x8 (0x8)
	float Tolerance;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionUnion
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection A;  // 0x8 (0x8)
	struct FRigElementKeyCollection B;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bAllowDuplicates : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct FRigElementKeyCollection Collection;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CollectionReverse
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_CollectionReverse : FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Collection;  // 0x8 (0x8)
	struct FRigElementKeyCollection Reversed;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AddParent
// Size: 0x58(Inherited: 0x40)
struct FRigUnit_AddParent : FRigUnit_DynamicHierarchyBaseMutable
{
	struct FRigElementKey Child;  // 0x40 (0x40)
	struct FRigElementKey Parent;  // 0x4C (0x4C)


}; 
 
 // Function ControlRig.RigHierarchy.MakeControlValueFromFloat
struct FMakeControlValueFromFloat
{
	float InValue;  // 0x0 (0x0)
	char pad_4[12];  // 0x4 (0x4)
	struct FRigControlValue ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetDefaultParent
// Size: 0x58(Inherited: 0x40)
struct FRigUnit_SetDefaultParent : FRigUnit_DynamicHierarchyBaseMutable
{
	struct FRigElementKey Child;  // 0x40 (0x40)
	struct FRigElementKey Parent;  // 0x4C (0x4C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SwitchParent
// Size: 0x60(Inherited: 0x40)
struct FRigUnit_SwitchParent : FRigUnit_DynamicHierarchyBaseMutable
{
	uint8_t Mode;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	struct FRigElementKey Child;  // 0x44 (0x44)
	struct FRigElementKey Parent;  // 0x50 (0x50)
	char pad_92_1 : 7;  // 0x5C (0x5C)
	bool bMaintainGlobal : 1;  // 0x5C (0x5C)
	char pad_93[3];  // 0x5D (0x5D)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeights
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_HierarchyGetParentWeights : FRigUnit_DynamicHierarchyBase
{
	struct FRigElementKey Child;  // 0x8 (0x8)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FRigElementWeight> Weights;  // 0x18 (0x18)
	struct FRigElementKeyCollection Parents;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchySetParentWeights
// Size: 0x60(Inherited: 0x40)
struct FRigUnit_HierarchySetParentWeights : FRigUnit_DynamicHierarchyBaseMutable
{
	struct FRigElementKey Child;  // 0x40 (0x40)
	char pad_76[4];  // 0x4C (0x4C)
	struct TArray<struct FRigElementWeight> Weights;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyImportFromSkeleton
// Size: 0x60(Inherited: 0x40)
struct FRigUnit_HierarchyImportFromSkeleton : FRigUnit_DynamicHierarchyBaseMutable
{
	struct FName Namespace;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bIncludeCurves : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct TArray<struct FRigElementKey> Items;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddNull
// Size: 0xD0(Inherited: 0x60)
struct FRigUnit_HierarchyAddNull : FRigUnit_HierarchyAddElement
{
	struct FTransform Transform;  // 0x60 (0x60)
	uint8_t Space;  // 0xC0 (0xC0)
	char pad_193[15];  // 0xC1 (0xC1)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
struct FRigUnit_HierarchyAddControl_ShapeSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bVisible : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FName Name;  // 0x4 (0x4)
	struct FLinearColor Color;  // 0xC (0xC)
	char pad_28[4];  // 0x1C (0x1C)
	struct FTransform Transform;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
struct FRigUnit_HierarchyAddControlFloat_LimitSettings
{
	struct FRigControlLimitEnabled Limit;  // 0x0 (0x0)
	char pad_2[2];  // 0x2 (0x2)
	float MinValue;  // 0x4 (0x4)
	float MaxValue;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bDrawLimits : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat
// Size: 0x1A0(Inherited: 0x60)
struct FRigUnit_HierarchyAddControlFloat : FRigUnit_HierarchyAddElement
{
	struct FTransform OffsetTransform;  // 0x60 (0x60)
	float InitialValue;  // 0xC0 (0xC0)
	char pad_196[12];  // 0xC4 (0xC4)
	struct FRigUnit_HierarchyAddControlFloat_Settings Settings;  // 0xD0 (0xD0)


}; 
 
 // Function ControlRig.ControlRigShapeActor.IsEnabled
struct FIsEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
struct FRigUnit_HierarchyAddControlInteger_LimitSettings
{
	struct FRigControlLimitEnabled Limit;  // 0x0 (0x0)
	char pad_2[2];  // 0x2 (0x2)
	int32_t MinValue;  // 0x4 (0x4)
	int32_t MaxValue;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bDrawLimits : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function ControlRig.RigHierarchy.MakeControlValueFromBool
struct FMakeControlValueFromBool
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool InValue : 1;  // 0x0 (0x0)
	char pad_1[15];  // 0x1 (0x1)
	struct FRigControlValue ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_Settings
// Size: 0xD0(Inherited: 0x10)
struct FRigUnit_HierarchyAddControlInteger_Settings : FRigUnit_HierarchyAddControl_Settings
{
	uint8_t PrimaryAxis;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	struct FRigUnit_HierarchyAddControlInteger_LimitSettings Limits;  // 0x14 (0x14)
	char pad_36[12];  // 0x24 (0x24)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;  // 0x30 (0x30)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;  // 0xB0 (0xB0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformLerp
// Size: 0x140(Inherited: 0x8)
struct FRigUnit_MathTransformLerp : FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform A;  // 0x10 (0x10)
	struct FTransform B;  // 0x70 (0x70)
	float T;  // 0xD0 (0xD0)
	char pad_212[12];  // 0xD4 (0xD4)
	struct FTransform Result;  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct ControlRig.RigDispatch_SetMetadata
// Size: 0x48(Inherited: 0x48)
struct FRigDispatch_SetMetadata : FRigDispatch_MetadataBase
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger
// Size: 0x1A0(Inherited: 0x60)
struct FRigUnit_HierarchyAddControlInteger : FRigUnit_HierarchyAddElement
{
	struct FTransform OffsetTransform;  // 0x60 (0x60)
	int32_t InitialValue;  // 0xC0 (0xC0)
	char pad_196[12];  // 0xC4 (0xC4)
	struct FRigUnit_HierarchyAddControlInteger_Settings Settings;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatClamp
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatClamp : FRigUnit_MathFloatBase
{
	float Value;  // 0x8 (0x8)
	float Minimum;  // 0xC (0xC)
	float Maximum;  // 0x10 (0x10)
	float Result;  // 0x14 (0x14)


}; 
 
 // Function ControlRig.RigHierarchyController.RemoveElement
struct FRemoveElement
{
	struct FRigElementKey InElement;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bSetupUndo : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bPrintPythonCommand : 1;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool ReturnValue : 1;  // 0xE (0xE)
	char pad_15[1];  // 0xF (0xF)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
struct FRigUnit_HierarchyAddControlVector2D_LimitSettings
{
	struct FRigControlLimitEnabled LimitX;  // 0x0 (0x0)
	struct FRigControlLimitEnabled LimitY;  // 0x2 (0x2)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector2D MinValue;  // 0x8 (0x8)
	struct FVector2D MaxValue;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bDrawLimits : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function ControlRig.RigHierarchy.RemoveAllMetadata
struct FRemoveAllMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator
// Size: 0x1D0(Inherited: 0x60)
struct FRigUnit_HierarchyAddControlRotator : FRigUnit_HierarchyAddElement
{
	struct FTransform OffsetTransform;  // 0x60 (0x60)
	struct FRotator InitialValue;  // 0xC0 (0xC0)
	char pad_216[8];  // 0xD8 (0xD8)
	struct FRigUnit_HierarchyAddControlRotator_Settings Settings;  // 0xE0 (0xE0)


}; 
 
 // Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform
struct FGetGlobalControlShapeTransform
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bInitial : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform
// Size: 0x1D0(Inherited: 0x60)
struct FRigUnit_HierarchyAddControlTransform : FRigUnit_HierarchyAddElement
{
	struct FTransform OffsetTransform;  // 0x60 (0x60)
	struct FTransform InitialValue;  // 0xC0 (0xC0)
	struct FRigUnit_HierarchyAddControlTransform_Settings Settings;  // 0x120 (0x120)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DeltaFromPreviousTransform
// Size: 0x190(Inherited: 0x8)
struct FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Value;  // 0x10 (0x10)
	struct FTransform Delta;  // 0x70 (0x70)
	struct FTransform PreviousValue;  // 0xD0 (0xD0)
	struct FTransform Cache;  // 0x130 (0x130)


}; 
 
 // ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
struct FRigUnit_BoneHarmonics_BoneTarget
{
	struct FName bone;  // 0x0 (0x0)
	float Ratio;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
// Size: 0x70(Inherited: 0x60)
struct FRigUnit_HierarchyAddAnimationChannelFloat : FRigUnit_HierarchyAddElement
{
	float InitialValue;  // 0x60 (0x60)
	float MinimumValue;  // 0x64 (0x64)
	float MaximumValue;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AccumulateBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_AccumulateBase : FRigUnit_SimBase
{


}; 
 
 // Function ControlRig.RigHierarchy.GetQuatArrayMetadata
struct FGetQuatArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FQuat> ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
// Size: 0x70(Inherited: 0x60)
struct FRigUnit_HierarchyAddAnimationChannelInteger : FRigUnit_HierarchyAddElement
{
	int32_t InitialValue;  // 0x60 (0x60)
	int32_t MinimumValue;  // 0x64 (0x64)
	int32_t MaximumValue;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatDiv
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathFloatDiv : FRigUnit_MathFloatBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
// Size: 0x90(Inherited: 0x60)
struct FRigUnit_HierarchyAddAnimationChannelVector2D : FRigUnit_HierarchyAddElement
{
	struct FVector2D InitialValue;  // 0x60 (0x60)
	struct FVector2D MinimumValue;  // 0x70 (0x70)
	struct FVector2D MaximumValue;  // 0x80 (0x80)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SpaceName
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_SpaceName : FRigUnit
{
	struct FName Space;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector
// Size: 0xA8(Inherited: 0x60)
struct FRigUnit_HierarchyAddAnimationChannelVector : FRigUnit_HierarchyAddElement
{
	struct FVector InitialValue;  // 0x60 (0x60)
	struct FVector MinimumValue;  // 0x78 (0x78)
	struct FVector MaximumValue;  // 0x90 (0x90)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ForLoopCount
// Size: 0x88(Inherited: 0x40)
struct FRigUnit_ForLoopCount : FRigUnitMutable
{
	int32_t Count;  // 0x40 (0x40)
	int32_t Index;  // 0x44 (0x44)
	float Ratio;  // 0x48 (0x48)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool Continue : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	struct FControlRigExecuteContext Completed;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyGetParent
// Size: 0x60(Inherited: 0x8)
struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase
{
	struct FRigElementKey Child;  // 0x8 (0x8)
	struct FRigElementKey Parent;  // 0x14 (0x14)
	struct FCachedRigElement CachedChild;  // 0x20 (0x20)
	struct FCachedRigElement CachedParent;  // 0x40 (0x40)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyGetParentsItemArray
// Size: 0x58(Inherited: 0x8)
struct FRigUnit_HierarchyGetParentsItemArray : FRigUnit_HierarchyBase
{
	struct FRigElementKey Child;  // 0x8 (0x8)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bIncludeChild : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool bReverse : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)
	struct TArray<struct FRigElementKey> Parents;  // 0x18 (0x18)
	struct FCachedRigElement CachedChild;  // 0x28 (0x28)
	struct FRigElementKeyCollection CachedParents;  // 0x48 (0x48)


}; 
 
 // ScriptStruct ControlRig.RigUnit_RemoveMetadata
// Size: 0x78(Inherited: 0x40)
struct FRigUnit_RemoveMetadata : FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x40 (0x40)
	struct FName Name;  // 0x4C (0x4C)
	char pad_84_1 : 7;  // 0x54 (0x54)
	bool Removed : 1;  // 0x54 (0x54)
	char pad_85[3];  // 0x55 (0x55)
	struct FCachedRigElement CachedIndex;  // 0x58 (0x58)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
// Size: 0x58(Inherited: 0x8)
struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase
{
	struct FRigElementKey Parent;  // 0x8 (0x8)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bIncludeParent : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool bRecursive : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)
	struct FRigElementKeyCollection Children;  // 0x18 (0x18)
	struct FCachedRigElement CachedParent;  // 0x28 (0x28)
	struct FRigElementKeyCollection CachedChildren;  // [x48 ([x48)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchyGetPose
// Size: 0x90(Inherited: 0x8)
struct FRigUnit_HierarchyGetPose : FRigUnit_HierarchyBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Initial : 1;  // 0x8 (0x8)
	uint8_t ElementType;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)
	struct FRigElementKeyCollection ItemsToGet;  // 0x10 (0x10)
	struct FRigPose Pose;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AimBone_Target
struct FRigUnit_AimBone_Target
{
	float Weight;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector Axis;  // 0x8 (0x8)
	struct FVector Target;  // 0x20 (0x20)
	uint8_t Kind;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	struct FName Space;  // 0x3C (0x3C)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchySetPose
// Size: 0xD0(Inherited: 0x40)
struct FRigUnit_HierarchySetPose : FRigUnit_HierarchyBaseMutable
{
	struct FRigPose Pose;  // 0x40 (0x40)
	uint8_t ElementType;  // 0xB0 (0xB0)
	uint8_t Space;  // 0xB1 (0xB1)
	char pad_178[6];  // 0xB2 (0xB2)
	struct FRigElementKeyCollection ItemsToSet;  // 0xB8 (0xB8)
	float Weight;  // 0xC8 (0xC8)
	char pad_204[4];  // 0xCC (0xCC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleMod
// Size: 0x20(Inherited: 0x20)
struct FRigUnit_MathDoubleMod : FRigUnit_MathDoubleBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyEqual
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8 (0x8)
	struct FVector B;  // 0x20 (0x20)
	float Tolerance;  // 0x38 (0x38)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool Result : 1;  // 0x3C (0x3C)
	char pad_61[3];  // 0x3D (0x3D)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AddBoneTransform
// Size: 0xE0(Inherited: 0x40)
struct FRigUnit_AddBoneTransform : FRigUnitMutable
{
	struct FName bone;  // 0x40 (0x40)
	char pad_72[8];  // 0x48 (0x48)
	struct FTransform Transform;  // 0x50 (0x50)
	float Weight;  // 0xB0 (0xB0)
	char pad_180_1 : 7;  // 0xB4 (0xB4)
	bool bPostMultiply : 1;  // 0xB4 (0xB4)
	char pad_181_1 : 7;  // 0xB5 (0xB5)
	bool bPropagateToChildren : 1;  // 0xB5 (0xB5)
	char pad_182[2];  // 0xB6 (0xB6)
	struct FCachedRigElement CachedBone;  // 0xB8 (0xB8)
	char pad_216[8];  // 0xD8 (0xD8)


}; 
 
 // Function ControlRig.RigHierarchy.SetBoolArrayMetadata
struct FSetBoolArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<bool> InValue;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HasMetadataTag
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_HasMetadataTag : FRigUnit
{
	struct FRigElementKey Item;  // 0x8 (0x8)
	struct FName Tag;  // 0x14 (0x14)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool Found : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct FCachedRigElement CachedIndex;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_RemoveMetadataTag
// Size: 0x78(Inherited: 0x40)
struct FRigUnit_RemoveMetadataTag : FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x40 (0x40)
	struct FName Tag;  // 0x4C (0x4C)
	char pad_84_1 : 7;  // 0x54 (0x54)
	bool Removed : 1;  // 0x54 (0x54)
	char pad_85[3];  // 0x55 (0x55)
	struct FCachedRigElement CachedIndex;  // 0x58 (0x58)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HierarchySetPoseItemArray
// Size: 0xD0(Inherited: 0x40)
struct FRigUnit_HierarchySetPoseItemArray : FRigUnit_HierarchyBaseMutable
{
	struct FRigPose Pose;  // 0x40 (0x40)
	uint8_t ElementType;  // 0xB0 (0xB0)
	uint8_t Space;  // 0xB1 (0xB1)
	char pad_178[6];  // 0xB2 (0xB2)
	struct TArray<struct FRigElementKey> ItemsToSet;  // 0xB8 (0xB8)
	float Weight;  // 0xC8 (0xC8)
	char pad_204[4];  // 0xCC (0xCC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetControlVector2D
// Size: 0x80(Inherited: 0x40)
struct FRigUnit_SetControlVector2D : FRigUnitMutable
{
	struct FName Control;  // 0x40 (0x40)
	float Weight;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct FVector2D Vector;  // 0x50 (0x50)
	struct FCachedRigElement CachedControlIndex;  // 0x60 (0x60)


}; 
 
 // ScriptStruct ControlRig.RigUnit_FitChainToCurve
// Size: 0x260(Inherited: 0x40)
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone;  // 0x40 (0x40)
	struct FName EndBone;  // 0x48 (0x48)
	struct FCRFourPointBezier Bezier;  // 0x50 (0x50)
	uint8_t Alignment;  // 0xB0 (0xB0)
	char pad_177[3];  // 0xB1 (0xB1)
	float Minimum;  // 0xB4 (0xB4)
	float Maximum;  // 0xB8 (0xB8)
	int32_t SamplingPrecision;  // 0xBC (0xBC)
	struct FVector PrimaryAxis;  // 0xC0 (0xC0)
	struct FVector SecondaryAxis;  // 0xD8 (0xD8)
	struct FVector PoleVectorPosition;  // 0xF0 (0xF0)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;  // 0x108 (0x108)
	uint8_t RotationEaseType;  // 0x118 (0x118)
	char pad_281[3];  // 0x119 (0x119)
	float Weight;  // 0x11C (0x11C)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool bPropagateToChildren : 1;  // 0x120 (0x120)
	char pad_289[15];  // 0x121 (0x121)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;  // 0x130 (0x130)
	struct FRigUnit_FitChainToCurve_WorkData WorkData;  // 0x1C0 (0x1C0)
	char pad_600[8];  // 0x258 (0x258)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PoseGetItems
// Size: 0x90(Inherited: 0x8)
struct FRigUnit_PoseGetItems : FRigUnit_HierarchyBase
{
	struct FRigPose Pose;  // 0x8 (0x8)
	uint8_t ElementType;  // 0x78 (0x78)
	char pad_121[7];  // 0x79 (0x79)
	struct FRigElementKeyCollection Items;  // 0x80 (0x80)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PoseGetTransformArray
// Size: 0x90(Inherited: 0x8)
struct FRigUnit_PoseGetTransformArray : FRigUnit_HierarchyBase
{
	struct FRigPose Pose;  // 0x8 (0x8)
	uint8_t Space;  // 0x78 (0x78)
	char pad_121_1 : 7;  // 0x79 (0x79)
	bool Valid : 1;  // 0x79 (0x79)
	char pad_122[6];  // 0x7A (0x7A)
	struct TArray<struct FTransform> Transforms;  // 0x80 (0x80)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
struct FRigUnit_DistributeRotation_WorkData
{
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x0 (0x0)
	struct TArray<int32_t> ItemRotationA;  // 0x10 (0x10)
	struct TArray<int32_t> ItemRotationB;  // 0x20 (0x20)
	struct TArray<float> ItemRotationT;  // 0x30 (0x30)
	struct TArray<struct FTransform> ItemLocalTransforms;  // 0x40 (0x40)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
// Size: 0x98(Inherited: 0x40)
struct FRigUnit_ScaleConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey Child;  // 0x40 (0x40)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bMaintainOffset : 1;  // 0x4C (0x4C)
	struct FFilterOptionPerAxis Filter;  // 0x4D (0x4D)
	struct TArray<struct FConstraintParent> Parents;  // 0x50 (0x50)
	float Weight;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)
	struct FCachedRigElement ChildCache;  // 0x68 (0x68)
	struct TArray<struct FCachedRigElement> ParentCaches;  // 0x88 (0x88)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PoseGetCurve
// Size: 0x90(Inherited: 0x8)
struct FRigUnit_PoseGetCurve : FRigUnit_HierarchyBase
{
	struct FRigPose Pose;  // 0x8 (0x8)
	struct FName Curve;  // 0x78 (0x78)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool Valid : 1;  // 0x80 (0x80)
	char pad_129[3];  // 0x81 (0x81)
	float CurveValue;  // 0x84 (0x84)
	int32_t CachedPoseElementIndex;  // 0x88 (0x88)
	int32_t CachedPoseHash;  // 0x8C (0x8C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float Scale;  // 0x4 (0x4)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform WorldOffset;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntUnaryOp
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathIntUnaryOp : FRigUnit_MathIntBase
{
	int32_t Value;  // 0x8 (0x8)
	int32_t Result;  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ItemTypeNotEquals
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_ItemTypeNotEquals : FRigUnit_ItemBase
{
	struct FRigElementKey A;  // 0x8 (0x8)
	struct FRigElementKey B;  // 0x14 (0x14)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Result : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function ControlRig.RigHierarchy.GetControlPreferredRotator
struct FGetControlPreferredRotator
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bInitial : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FRotator ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PoseLoop
// Size: 0x1D0(Inherited: 0x40)
struct FRigUnit_PoseLoop : FRigUnit_HierarchyBaseMutable
{
	struct FRigPose Pose;  // 0x40 (0x40)
	struct FRigElementKey Item;  // 0xB0 (0xB0)
	char pad_188[4];  // 0xBC (0xBC)
	struct FTransform GlobalTransform;  // 0xC0 (0xC0)
	struct FTransform LocalTransform;  // 0x120 (0x120)
	float CurveValue;  // 0x180 (0x180)
	int32_t Index;  // 0x184 (0x184)
	int32_t Count;  // 0x188 (0x188)
	float Ratio;  // 0x18C (0x18C)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool Continue : 1;  // 0x190 (0x190)
	char pad_401[7];  // 0x191 (0x191)
	struct FControlRigExecuteContext Completed;  // 0x198 (0x198)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatAsin
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatAsin : FRigUnit_MathFloatUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_InverseExecution
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_InverseExecution : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatRound
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatRound : FRigUnit_MathFloatBase
{
	float Value;  // 0x8 (0x8)
	float Result;  // 0xC (0xC)
	int32_t Int;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function ControlRig.ControlRigComponent.SetControlRigClass
struct FSetControlRigClass
{
	UControlRig* InControlRigClass;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ItemReplace
// Size: 0x30(Inherited: 0x8)
struct FRigUnit_ItemReplace : FRigUnit_ItemBase
{
	struct FRigElementKey Item;  // 0x8 (0x8)
	struct FName Old;  // 0x14 (0x14)
	struct FName New;  // 0x1C (0x1C)
	struct FRigElementKey Result;  // 0x24 (0x24)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PositionConstraint
// Size: 0x68(Inherited: 0x40)
struct FRigUnit_PositionConstraint : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey Child;  // 0x40 (0x40)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bMaintainOffset : 1;  // 0x4C (0x4C)
	struct FFilterOptionPerAxis Filter;  // 0x4D (0x4D)
	struct TArray<struct FConstraintParent> Parents;  // 0x50 (0x50)
	float Weight;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
struct FRigUnit_ChainHarmonics_WorkData
{
	struct FVector Time;  // 0x0 (0x0)
	struct TArray<struct FCachedRigElement> Items;  // 0x18 (0x18)
	struct TArray<float> Ratio;  // 0x28 (0x28)
	struct TArray<struct FVector> LocalTip;  // 0x38 (0x38)
	struct TArray<struct FVector> PendulumTip;  // 0x48 (0x48)
	struct TArray<struct FVector> PendulumPosition;  // 0x58 (0x58)
	struct TArray<struct FVector> PendulumVelocity;  // 0x68 (0x68)
	struct TArray<struct FVector> HierarchyLine;  // 0x78 (0x78)
	struct TArray<struct FVector> VelocityLines;  // 0x88 (0x88)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ItemEquals
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_ItemEquals : FRigUnit_ItemBase
{
	struct FRigElementKey A;  // 0x8 (0x8)
	struct FRigElementKey B;  // 0x14 (0x14)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Result : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ItemNotEquals
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_ItemNotEquals : FRigUnit_ItemBase
{
	struct FRigElementKey A;  // 0x8 (0x8)
	struct FRigElementKey B;  // 0x14 (0x14)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Result : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTag
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_FindItemsWithMetadataTag : FRigUnit
{
	struct FName Tag;  // 0x8 (0x8)
	struct TArray<struct FRigElementKey> Items;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PrepareForExecution
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_PrepareForExecution : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SequenceExecution
// Size: 0x120(Inherited: 0x8)
struct FRigUnit_SequenceExecution : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext;  // 0x8 (0x8)
	struct FControlRigExecuteContext A;  // 0x40 (0x40)
	struct FControlRigExecuteContext B;  // 0x78 (0x78)
	struct FControlRigExecuteContext C;  // 0xB0 (0xB0)
	struct FControlRigExecuteContext D;  // 0xE8 (0xE8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetSpaceTransform
// Size: 0xE0(Inherited: 0x40)
struct FRigUnit_SetSpaceTransform : FRigUnitMutable
{
	struct FName Space;  // 0x40 (0x40)
	float Weight;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct FTransform Transform;  // 0x50 (0x50)
	uint8_t SpaceType;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)
	struct FCachedRigElement CachedSpaceIndex;  // 0xB8 (0xB8)
	char pad_216[8];  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorScale
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathVectorScale : FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8 (0x8)
	float Factor;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FVector Result;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SequenceAggregate
// Size: 0xB0(Inherited: 0x8)
struct FRigUnit_SequenceAggregate : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext;  // 0x8 (0x8)
	struct FControlRigExecuteContext A;  // 0x40 (0x40)
	struct FControlRigExecuteContext B;  // 0x78 (0x78)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleRad
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathDoubleRad : FRigUnit_MathDoubleUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_BoneName
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_BoneName : FRigUnit
{
	struct FName bone;  // 0x8 (0x8)


}; 
 
 // Function ControlRig.RigHierarchy.GetParentWeight
struct FGetParentWeight
{
	struct FRigElementKey InChild;  // 0x0 (0x0)
	struct FRigElementKey InParent;  // 0xC (0xC)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bInitial : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FRigElementWeight ReturnValue;  // 0x1C (0x1C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
// Size: 0xA0(Inherited: 0x8)
struct FRigUnit_GetInitialBoneTransform : FRigUnit
{
	struct FName bone;  // 0x8 (0x8)
	uint8_t Space;  // 0x10 (0x10)
	char pad_17[15];  // 0x11 (0x11)
	struct FTransform Transform;  // 0x20 (0x20)
	struct FCachedRigElement CachedBone;  // 0x80 (0x80)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ControlName
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_ControlName : FRigUnit
{
	struct FName Control;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetFloatAnimationChannel
// Size: 0x38(Inherited: 0x30)
struct FRigUnit_GetFloatAnimationChannel : FRigUnit_GetAnimationChannelBase
{
	float Value;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HasMetadataTagArray
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_HasMetadataTagArray : FRigUnit
{
	struct FRigElementKey Item;  // 0x8 (0x8)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FName> Tags;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool Found : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct FCachedRigElement CachedIndex;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetAnimationChannelBase
// Size: 0x30(Inherited: 0x8)
struct FRigUnit_GetAnimationChannelBase : FRigUnit
{
	struct FName Control;  // 0x8 (0x8)
	struct FName Channel;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bInitial : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	struct FRigElementKey CachedChannelKey;  // 0x1C (0x1C)
	int32_t CachedChannelHash;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetTransformAnimationChannel
// Size: 0x90(Inherited: 0x30)
struct FRigUnit_GetTransformAnimationChannel : FRigUnit_GetAnimationChannelBase
{
	struct FTransform Value;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetBoolAnimationChannel
// Size: 0x38(Inherited: 0x30)
struct FRigUnit_GetBoolAnimationChannel : FRigUnit_GetAnimationChannelBase
{
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool Value : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // ScriptStruct ControlRig.SphericalRegion
struct FSphericalRegion
{
	char pad_0[20];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetIntAnimationChannel
// Size: 0x38(Inherited: 0x30)
struct FRigUnit_GetIntAnimationChannel : FRigUnit_GetAnimationChannelBase
{
	int32_t Value;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetRotatorAnimationChannel
// Size: 0x48(Inherited: 0x30)
struct FRigUnit_GetRotatorAnimationChannel : FRigUnit_GetAnimationChannelBase
{
	struct FRotator Value;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AimBoneMath
// Size: 0x220(Inherited: 0x8)
struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform InputTransform;  // 0x10 (0x10)
	struct FRigUnit_AimItem_Target Primary;  // 0x70 (0x70)
	struct FRigUnit_AimItem_Target Secondary;  // 0xB8 (0xB8)
	float Weight;  // 0x100 (0x100)
	char pad_260[12];  // 0x104 (0x104)
	struct FTransform Result;  // 0x110 (0x110)
	struct FRigUnit_AimBone_DebugSettings DebugSettings;  // 0x170 (0x170)
	struct FCachedRigElement PrimaryCachedSpace;  // 0x1E0 (0x1E0)
	struct FCachedRigElement SecondaryCachedSpace;  // 0x200 (0x200)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetBoolAnimationChannel
// Size: 0x70(Inherited: 0x68)
struct FRigUnit_SetBoolAnimationChannel : FRigUnit_SetAnimationChannelBase
{
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool Value : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetVectorAnimationChannel
// Size: 0x80(Inherited: 0x68)
struct FRigUnit_SetVectorAnimationChannel : FRigUnit_SetAnimationChannelBase
{
	struct FVector Value;  // 0x68 (0x68)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorClampSpatially
// Size: 0xC0(Inherited: 0x8)
struct FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8 (0x8)
	enum class EAxis Axis;  // 0x20 (0x20)
	enum class EControlRigClampSpatialMode Type;  // 0x21 (0x21)
	char pad_34[2];  // 0x22 (0x22)
	float Minimum;  // 0x24 (0x24)
	float Maximum;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct FTransform Space;  // 0x30 (0x30)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool bDrawDebug : 1;  // 0x90 (0x90)
	char pad_145[3];  // 0x91 (0x91)
	struct FLinearColor DebugColor;  // 0x94 (0x94)
	float DebugThickness;  // 0xA4 (0xA4)
	struct FVector Result;  // 0xA8 (0xA8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetBoneTransform
// Size: 0xA0(Inherited: 0x8)
struct FRigUnit_GetBoneTransform : FRigUnit
{
	struct FName bone;  // 0x8 (0x8)
	uint8_t Space;  // 0x10 (0x10)
	char pad_17[15];  // 0x11 (0x11)
	struct FTransform Transform;  // 0x20 (0x20)
	struct FCachedRigElement CachedBone;  // 0x80 (0x80)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetControlFloat
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_GetControlFloat : FRigUnit
{
	struct FName Control;  // 0x8 (0x8)
	float FloatValue;  // 0x10 (0x10)
	float Minimum;  // 0x14 (0x14)
	float Maximum;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FCachedRigElement CachedControlIndex;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
struct FRigUnit_MultiFABRIK_WorkData
{
	char pad_0[104];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathMatrixBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_MathMatrixBase : FRigUnit_MathBase
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetControlVector2D
// Size: 0x60(Inherited: 0x8)
struct FRigUnit_GetControlVector2D : FRigUnit
{
	struct FName Control;  // 0x8 (0x8)
	struct FVector2D Vector;  // 0x10 (0x10)
	struct FVector2D Minimum;  // 0x20 (0x20)
	struct FVector2D Maximum;  // 0x30 (0x30)
	struct FCachedRigElement CachedControlIndex;  // 0x40 (0x40)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
// Size: 0x68(Inherited: 0x40)
struct FRigUnit_SetMultiControlVector2D : FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlVector2D_Entry> Entries;  // 0x40 (0x40)
	float Weight;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)
	struct TArray<struct FCachedRigElement> CachedControlIndices;  // 0x58 (0x58)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase
{
	struct FVector Axis;  // 0x8 (0x8)
	float Angle;  // 0x20 (0x20)
	char pad_36[12];  // 0x24 (0x24)
	struct FQuat Result;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetControlTransform
// Size: 0x160(Inherited: 0x8)
struct FRigUnit_GetControlTransform : FRigUnit
{
	struct FName Control;  // 0x8 (0x8)
	uint8_t Space;  // 0x10 (0x10)
	char pad_17[15];  // 0x11 (0x11)
	struct FTransform Transform;  // 0x20 (0x20)
	struct FTransform Minimum;  // 0x80 (0x80)
	struct FTransform Maximum;  // 0xE0 (0xE0)
	struct FCachedRigElement CachedControlIndex;  // 0x140 (0x140)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionFromEuler
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase
{
	struct FVector Euler;  // 0x8 (0x8)
	uint8_t RotationOrder;  // 0x20 (0x20)
	char pad_33[15];  // 0x21 (0x21)
	struct FQuat Result;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetControlRotator
// Size: 0x90(Inherited: 0x40)
struct FRigUnit_SetControlRotator : FRigUnitMutable
{
	struct FName Control;  // 0x40 (0x40)
	float Weight;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct FRotator Rotator;  // 0x50 (0x50)
	uint8_t Space;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct FCachedRigElement CachedControlIndex;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetCurveValue
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_GetCurveValue : FRigUnit
{
	struct FName Curve;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Valid : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float Value;  // 0x14 (0x14)
	struct FCachedRigElement CachedCurveIndex;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetSpaceTransform
// Size: 0xA0(Inherited: 0x8)
struct FRigUnit_GetSpaceTransform : FRigUnit
{
	struct FName Space;  // 0x8 (0x8)
	uint8_t SpaceType;  // 0x10 (0x10)
	char pad_17[15];  // 0x11 (0x11)
	struct FTransform Transform;  // 0x20 (0x20)
	struct FCachedRigElement CachedSpaceIndex;  // 0x80 (0x80)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetTransformArray
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_GetTransformArray : FRigUnit
{
	struct FRigElementKeyCollection Items;  // 0x8 (0x8)
	uint8_t Space;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bInitial : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)
	struct TArray<struct FTransform> Transforms;  // 0x20 (0x20)
	struct TArray<struct FCachedRigElement> CachedIndex;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetTransformItemArray
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_GetTransformItemArray : FRigUnit
{
	struct TArray<struct FRigElementKey> Items;  // 0x8 (0x8)
	uint8_t Space;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bInitial : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)
	struct TArray<struct FTransform> Transforms;  // 0x20 (0x20)
	struct TArray<struct FCachedRigElement> CachedIndex;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigDispatch_MetadataBase
// Size: 0x48(Inherited: 0x18)
struct FRigDispatch_MetadataBase : FRigDispatchFactory
{
	char pad_24[48];  // 0x18 (0x18)


}; 
 
 // Function ControlRig.ControlRigComponent.DoesElementExist
struct FDoesElementExist
{
	struct FName Name;  // 0x0 (0x0)
	uint8_t ElementType;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool ReturnValue : 1;  // 0x9 (0x9)
	char pad_10[2];  // 0xA (0xA)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryAggregateOp
// Size: 0x70(Inherited: 0x8)
struct FRigUnit_MathQuaternionBinaryAggregateOp : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat A;  // 0x10 (0x10)
	struct FQuat B;  // 0x30 (0x30)
	struct FQuat Result;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_HasMetadata
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_HasMetadata : FRigUnit
{
	struct FRigElementKey Item;  // 0x8 (0x8)
	struct FName Name;  // 0x14 (0x14)
	uint8_t Type;  // 0x1C (0x1C)
	char pad_29_1 : 7;  // 0x1D (0x1D)
	bool Found : 1;  // 0x1D (0x1D)
	char pad_30[2];  // 0x1E (0x1E)
	struct FCachedRigElement CachedIndex;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatSqrt
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatSqrt : FRigUnit_MathFloatUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_AimConstraint_AdvancedSettings
struct FRigUnit_AimConstraint_AdvancedSettings
{
	struct FRigUnit_AimBone_DebugSettings DebugSettings;  // 0x0 (0x0)
	uint8_t RotationOrderForFilter;  // 0x70 (0x70)
	char pad_113[15];  // 0x71 (0x71)


}; 
 
 // Function ControlRig.RigHierarchy.SetControlSettingsByIndex
struct FSetControlSettingsByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4[12];  // 0x4 (0x4)
	struct FRigControlSettings InSettings;  // 0x10 (0x10)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool bSetupUndo : 1;  // 0x290 (0x290)
	char pad_657_1 : 7;  // 0x291 (0x291)
	bool bForce : 1;  // 0x291 (0x291)
	char pad_658_1 : 7;  // 0x292 (0x292)
	bool bPrintPythonCommands : 1;  // 0x292 (0x292)
	char pad_659[13];  // 0x293 (0x293)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetMetadataTags
// Size: 0x48(Inherited: 0x8)
struct FRigUnit_GetMetadataTags : FRigUnit
{
	struct FRigElementKey Item;  // 0x8 (0x8)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FName> Tags;  // 0x18 (0x18)
	struct FCachedRigElement CachedIndex;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetMetadataTag
// Size: 0x78(Inherited: 0x40)
struct FRigUnit_SetMetadataTag : FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x40 (0x40)
	struct FName Tag;  // 0x4C (0x4C)
	char pad_84[4];  // 0x54 (0x54)
	struct FCachedRigElement CachedIndex;  // 0x58 (0x58)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformMirrorTransform
// Size: 0x140(Inherited: 0x8)
struct FRigUnit_MathTransformMirrorTransform : FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Value;  // 0x10 (0x10)
	enum class EAxis MirrorAxis;  // 0x70 (0x70)
	enum class EAxis AxisToFlip;  // 0x71 (0x71)
	char pad_114[14];  // 0x72 (0x72)
	struct FTransform CentralTransform;  // 0x80 (0x80)
	struct FTransform Result;  // 0xE0 (0xE0)


}; 
 
 // Function ControlRig.RigHierarchy.GetLocalTransformByIndex
struct FGetLocalTransformByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bInitial : 1;  // 0x4 (0x4)
	char pad_5[11];  // 0x5 (0x5)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetMetadataTagArray
// Size: 0x80(Inherited: 0x40)
struct FRigUnit_SetMetadataTagArray : FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x40 (0x40)
	char pad_76[4];  // 0x4C (0x4C)
	struct TArray<struct FName> Tags;  // 0x50 (0x50)
	struct FCachedRigElement CachedIndex;  // 0x60 (0x60)


}; 
 
 // Function ControlRig.RigHierarchyController.AddNull
struct FAddNull
{
	struct FName InName;  // 0x0 (0x0)
	struct FRigElementKey InParent;  // 0x8 (0x8)
	char pad_20[12];  // 0x14 (0x14)
	struct FTransform InTransform;  // 0x20 (0x20)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bTransformInGlobal : 1;  // 0x80 (0x80)
	char pad_129_1 : 7;  // 0x81 (0x81)
	bool bSetupUndo : 1;  // 0x81 (0x81)
	char pad_130_1 : 7;  // 0x82 (0x82)
	bool bPrintPythonCommand : 1;  // 0x82 (0x82)
	char pad_131[1];  // 0x83 (0x83)
	struct FRigElementKey ReturnValue;  // 0x84 (0x84)


}; 
 
 // ScriptStruct ControlRig.RigUnit_FilterItemsByMetadataTags
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_FilterItemsByMetadataTags : FRigUnit
{
	struct TArray<struct FRigElementKey> Items;  // 0x8 (0x8)
	struct TArray<struct FName> Tags;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool Inclusive : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct TArray<struct FRigElementKey> Result;  // 0x30 (0x30)
	struct TArray<struct FCachedRigElement> CachedIndices;  // 0x40 (0x40)


}; 
 
 // ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
// Size: 0xE0(Inherited: 0x40)
struct FRigUnit_OffsetTransformForItem : FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x40 (0x40)
	char pad_76[4];  // 0x4C (0x4C)
	struct FTransform OffsetTransform;  // 0x50 (0x50)
	float Weight;  // 0xB0 (0xB0)
	char pad_180_1 : 7;  // 0xB4 (0xB4)
	bool bPropagateToChildren : 1;  // 0xB4 (0xB4)
	char pad_181[3];  // 0xB5 (0xB5)
	struct FCachedRigElement CachedIndex;  // 0xB8 (0xB8)
	char pad_216[8];  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
// Size: 0x100(Inherited: 0x8)
struct FRigUnit_ProjectTransformToNewParent : FRigUnit
{
	struct FRigElementKey Child;  // 0x8 (0x8)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bChildInitial : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FRigElementKey OldParent;  // 0x18 (0x18)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool bOldParentInitial : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FRigElementKey NewParent;  // 0x28 (0x28)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool bNewParentInitial : 1;  // 0x34 (0x34)
	char pad_53[11];  // 0x35 (0x35)
	struct FTransform Transform;  // 0x40 (0x40)
	struct FCachedRigElement CachedChild;  // 0xA0 (0xA0)
	struct FCachedRigElement CachedOldParent;  // 0xC0 (0xC0)
	struct FCachedRigElement CachedNewParent;  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CCDIKItemArray
// Size: 0x140(Inherited: 0x40)
struct FRigUnit_CCDIKItemArray : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigElementKey> Items;  // 0x40 (0x40)
	struct FTransform EffectorTransform;  // 0x50 (0x50)
	float Precision;  // 0xB0 (0xB0)
	float Weight;  // 0xB4 (0xB4)
	int32_t MaxIterations;  // 0xB8 (0xB8)
	char pad_188_1 : 7;  // 0xBC (0xBC)
	bool bStartFromTail : 1;  // 0xBC (0xBC)
	char pad_189[3];  // 0xBD (0xBD)
	float BaseRotationLimit;  // 0xC0 (0xC0)
	char pad_196[4];  // 0xC4 (0xC4)
	struct TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;  // 0xC8 (0xC8)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool bPropagateToChildren : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct FRigUnit_CCDIK_WorkData WorkData;  // 0xE0 (0xE0)


}; 
 
 // Function ControlRig.RigHierarchy.GetRotatorArrayMetadata
struct FGetRotatorArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FRotator> ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PropagateTransform
// Size: 0x70(Inherited: 0x40)
struct FRigUnit_PropagateTransform : FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x40 (0x40)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bRecomputeGlobal : 1;  // 0x4C (0x4C)
	char pad_77_1 : 7;  // 0x4D (0x4D)
	bool bApplyToChildren : 1;  // 0x4D (0x4D)
	char pad_78_1 : 7;  // 0x4E (0x4E)
	bool bRecursive : 1;  // 0x4E (0x4E)
	char pad_79[1];  // 0x4F (0x4F)
	struct FCachedRigElement CachedIndex;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_ToRigSpace_Location : FRigUnit
{
	struct FVector Value;  // 0x8 (0x8)
	struct FVector Global;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
// Size: 0x140(Inherited: 0x40)
struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable
{
	struct FName bone;  // 0x40 (0x40)
	char pad_72[8];  // 0x48 (0x48)
	struct FTransform Transform;  // 0x50 (0x50)
	struct FTransform Result;  // 0xB0 (0xB0)
	uint8_t Space;  // 0x110 (0x110)
	char pad_273_1 : 7;  // 0x111 (0x111)
	bool bPropagateToChildren : 1;  // 0x111 (0x111)
	char pad_274[6];  // 0x112 (0x112)
	struct FCachedRigElement CachedBone;  // 0x118 (0x118)
	char pad_312[8];  // 0x138 (0x138)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetBoneTranslation
// Size: 0x90(Inherited: 0x40)
struct FRigUnit_SetBoneTranslation : FRigUnitMutable
{
	struct FName bone;  // 0x40 (0x40)
	struct FVector Translation;  // 0x48 (0x48)
	uint8_t Space;  // 0x60 (0x60)
	char pad_97[3];  // 0x61 (0x61)
	float Weight;  // 0x64 (0x64)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool bPropagateToChildren : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct FCachedRigElement CachedBone;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetControlColor
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_GetControlColor : FRigUnit
{
	struct FName Control;  // 0x8 (0x8)
	struct FLinearColor Color;  // 0x10 (0x10)
	struct FCachedRigElement CachedControlIndex;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetControlColor
// Size: 0x78(Inherited: 0x40)
struct FRigUnit_SetControlColor : FRigUnitMutable
{
	struct FName Control;  // 0x40 (0x40)
	struct FLinearColor Color;  // 0x48 (0x48)
	struct FCachedRigElement CachedControlIndex;  // 0x58 (0x58)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetControlOffset
// Size: 0xE0(Inherited: 0x40)
struct FRigUnit_SetControlOffset : FRigUnitMutable
{
	struct FName Control;  // 0x40 (0x40)
	char pad_72[8];  // 0x48 (0x48)
	struct FTransform Offset;  // 0x50 (0x50)
	uint8_t Space;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)
	struct FCachedRigElement CachedControlIndex;  // 0xB8 (0xB8)
	char pad_216[8];  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetControlBool
// Size: 0x70(Inherited: 0x40)
struct FRigUnit_SetControlBool : FRigUnitMutable
{
	struct FName Control;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool BoolValue : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct FCachedRigElement CachedControlIndex;  // 0x50 (0x50)


}; 
 
 // Function ControlRig.RigHierarchy.GetCurveValue
struct FGetCurveValue
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	float ReturnValue;  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
struct FRigUnit_SetMultiControlBool_Entry
{
	struct FName Control;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool BoolValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetControlVector
// Size: 0x90(Inherited: 0x40)
struct FRigUnit_SetControlVector : FRigUnitMutable
{
	struct FName Control;  // 0x40 (0x40)
	float Weight;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct FVector Vector;  // 0x50 (0x50)
	uint8_t Space;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct FCachedRigElement CachedControlIndex;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
// Size: 0x230(Inherited: 0x40)
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable
{
	struct FName BoneA;  // 0x40 (0x40)
	struct FName BoneB;  // 0x48 (0x48)
	struct FName EffectorBone;  // 0x50 (0x50)
	char pad_88[8];  // 0x58 (0x58)
	struct FTransform Effector;  // 0x60 (0x60)
	struct FVector PrimaryAxis;  // 0xC0 (0xC0)
	struct FVector SecondaryAxis;  // 0xD8 (0xD8)
	float SecondaryAxisWeight;  // 0xF0 (0xF0)
	char pad_244[4];  // 0xF4 (0xF4)
	struct FVector PoleVector;  // 0xF8 (0xF8)
	uint8_t PoleVectorKind;  // 0x110 (0x110)
	char pad_273[3];  // 0x111 (0x111)
	struct FName PoleVectorSpace;  // 0x114 (0x114)
	char pad_284_1 : 7;  // 0x11C (0x11C)
	bool bEnableStretch : 1;  // 0x11C (0x11C)
	char pad_285[3];  // 0x11D (0x11D)
	float StretchStartRatio;  // 0x120 (0x120)
	float StretchMaximumRatio;  // 0x124 (0x124)
	float Weight;  // 0x128 (0x128)
	float BoneALength;  // 0x12C (0x12C)
	float BoneBLength;  // 0x130 (0x130)
	char pad_308_1 : 7;  // 0x134 (0x134)
	bool bPropagateToChildren : 1;  // 0x134 (0x134)
	char pad_309[11];  // 0x135 (0x135)
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;  // 0x140 (0x140)
	struct FCachedRigElement CachedBoneAIndex;  // 0x1B0 (0x1B0)
	struct FCachedRigElement CachedBoneBIndex;  // 0x1D0 (0x1D0)
	struct FCachedRigElement CachedEffectorBoneIndex;  // 0x1F0 (0x1F0)
	struct FCachedRigElement CachedPoleVectorSpaceIndex;  // 0x210 (0x210)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
struct FRigUnit_SetMultiControlRotator_Entry
{
	struct FName Control;  // 0x0 (0x0)
	struct FRotator Rotator;  // 0x8 (0x8)
	uint8_t Space;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
// Size: 0x68(Inherited: 0x40)
struct FRigUnit_SetMultiControlRotator : FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlRotator_Entry> Entries;  // 0x40 (0x40)
	float Weight;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)
	struct TArray<struct FCachedRigElement> CachedControlIndices;  // 0x58 (0x58)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetControlTransform
// Size: 0xE0(Inherited: 0x40)
struct FRigUnit_SetControlTransform : FRigUnitMutable
{
	struct FName Control;  // 0x40 (0x40)
	float Weight;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct FTransform Transform;  // 0x50 (0x50)
	uint8_t Space;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)
	struct FCachedRigElement CachedControlIndex;  // 0xB8 (0xB8)
	char pad_216[8];  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_GetControlVisibility
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_GetControlVisibility : FRigUnit
{
	struct FRigElementKey Item;  // 0x8 (0x8)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bVisible : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FCachedRigElement CachedControlIndex;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetCurveValue
// Size: 0x70(Inherited: 0x40)
struct FRigUnit_SetCurveValue : FRigUnitMutable
{
	struct FName Curve;  // 0x40 (0x40)
	float Value;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct FCachedRigElement CachedCurveIndex;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntNotEquals
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathIntNotEquals : FRigUnit_MathIntBase
{
	int32_t A;  // 0x8 (0x8)
	int32_t B;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
// Size: 0x100(Inherited: 0x40)
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable
{
	struct FName bone;  // 0x40 (0x40)
	struct FName Space;  // 0x48 (0x48)
	struct FTransform Transform;  // 0x50 (0x50)
	float Weight;  // 0xB0 (0xB0)
	char pad_180_1 : 7;  // 0xB4 (0xB4)
	bool bPropagateToChildren : 1;  // 0xB4 (0xB4)
	char pad_181[3];  // 0xB5 (0xB5)
	struct FCachedRigElement CachedBone;  // 0xB8 (0xB8)
	struct FCachedRigElement CachedSpaceIndex;  // 0xD8 (0xD8)
	char pad_248[8];  // 0xF8 (0xF8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
// Size: 0x110(Inherited: 0x40)
struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable
{
	struct FRigElementKey Child;  // 0x40 (0x40)
	struct FRigElementKey Parent;  // 0x4C (0x4C)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool bParentInitial : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct FTransform Value;  // 0x60 (0x60)
	float Weight;  // 0xC0 (0xC0)
	char pad_196_1 : 7;  // 0xC4 (0xC4)
	bool bPropagateToChildren : 1;  // 0xC4 (0xC4)
	char pad_197[3];  // 0xC5 (0xC5)
	struct FCachedRigElement CachedChild;  // 0xC8 (0xC8)
	struct FCachedRigElement CachedParent;  // 0xE8 (0xE8)
	char pad_264[8];  // 0x108 (0x108)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntEquals
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathIntEquals : FRigUnit_MathIntBase
{
	int32_t A;  // 0x8 (0x8)
	int32_t B;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetRelativeTranslationForItem
// Size: 0xC0(Inherited: 0x40)
struct FRigUnit_SetRelativeTranslationForItem : FRigUnitMutable
{
	struct FRigElementKey Child;  // 0x40 (0x40)
	struct FRigElementKey Parent;  // 0x4C (0x4C)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool bParentInitial : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct FVector Value;  // 0x60 (0x60)
	float Weight;  // 0x78 (0x78)
	char pad_124_1 : 7;  // 0x7C (0x7C)
	bool bPropagateToChildren : 1;  // 0x7C (0x7C)
	char pad_125[3];  // 0x7D (0x7D)
	struct FCachedRigElement CachedChild;  // 0x80 (0x80)
	struct FCachedRigElement CachedParent;  // 0xA0 (0xA0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
// Size: 0x140(Inherited: 0x40)
struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable
{
	struct FName SpaceName;  // 0x40 (0x40)
	char pad_72[8];  // 0x48 (0x48)
	struct FTransform Transform;  // 0x50 (0x50)
	struct FTransform Result;  // 0xB0 (0xB0)
	uint8_t Space;  // 0x110 (0x110)
	char pad_273[7];  // 0x111 (0x111)
	struct FCachedRigElement CachedSpaceIndex;  // 0x118 (0x118)
	char pad_312[8];  // 0x138 (0x138)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatCos
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatCos : FRigUnit_MathFloatUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetTransform
// Size: 0xE0(Inherited: 0x40)
struct FRigUnit_SetTransform : FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x40 (0x40)
	uint8_t Space;  // 0x4C (0x4C)
	char pad_77_1 : 7;  // 0x4D (0x4D)
	bool bInitial : 1;  // 0x4D (0x4D)
	char pad_78[2];  // 0x4E (0x4E)
	struct FTransform Value;  // 0x50 (0x50)
	float Weight;  // 0xB0 (0xB0)
	char pad_180_1 : 7;  // 0xB4 (0xB4)
	bool bPropagateToChildren : 1;  // 0xB4 (0xB4)
	char pad_181[3];  // 0xB5 (0xB5)
	struct FCachedRigElement CachedIndex;  // 0xB8 (0xB8)
	char pad_216[8];  // 0xD8 (0xD8)


}; 
 
 // Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
struct FSetBoneInitialTransformsFromSkeletalMesh
{
	struct USkeletalMesh* InSkeletalMesh;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SetScale
// Size: 0x90(Inherited: 0x40)
struct FRigUnit_SetScale : FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x40 (0x40)
	uint8_t Space;  // 0x4C (0x4C)
	char pad_77_1 : 7;  // 0x4D (0x4D)
	bool bInitial : 1;  // 0x4D (0x4D)
	char pad_78[2];  // 0x4E (0x4E)
	struct FVector Scale;  // 0x50 (0x50)
	float Weight;  // 0x68 (0x68)
	char pad_108_1 : 7;  // 0x6C (0x6C)
	bool bPropagateToChildren : 1;  // 0x6C (0x6C)
	char pad_109[3];  // 0x6D (0x6D)
	struct FCachedRigElement CachedIndex;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_UnsetCurveValue
// Size: 0x68(Inherited: 0x40)
struct FRigUnit_UnsetCurveValue : FRigUnitMutable
{
	struct FName Curve;  // 0x40 (0x40)
	struct FCachedRigElement CachedCurveIndex;  // 0x48 (0x48)


}; 
 
 // ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
struct FRigUnit_FABRIK_WorkData
{
	struct TArray<struct FFABRIKChainLink> chain;  // 0x0 (0x0)
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x10 (0x10)
	struct FCachedRigElement CachedEffector;  // 0x20 (0x20)


}; 
 
 // Function ControlRig.RigHierarchy.MakeControlValueFromVector
struct FMakeControlValueFromVector
{
	struct FVector InValue;  // 0x0 (0x0)
	char pad_24[8];  // 0x18 (0x18)
	struct FRigControlValue ReturnValue;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
// Size: 0xD0(Inherited: 0x8)
struct FRigUnit_ToRigSpace_Transform : FRigUnit
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Value;  // 0x10 (0x10)
	struct FTransform Global;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_ToWorldSpace_Location : FRigUnit
{
	struct FVector Value;  // 0x8 (0x8)
	struct FVector World;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_ToWorldSpace_Rotation : FRigUnit
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Value;  // 0x10 (0x10)
	struct FQuat World;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_ToRigSpace_Rotation : FRigUnit
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Value;  // 0x10 (0x10)
	struct FQuat Global;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
struct FRigUnit_Harmonics_TargetItem
{
	struct FRigElementKey Item;  // 0x0 (0x0)
	float Ratio;  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
struct FRigUnit_BoneHarmonics_WorkData
{
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x0 (0x0)
	struct FVector WaveTime;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_BoneHarmonics
// Size: 0x100(Inherited: 0x40)
struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_BoneHarmonics_BoneTarget> Bones;  // 0x40 (0x40)
	struct FVector WaveSpeed;  // 0x50 (0x50)
	struct FVector WaveFrequency;  // 0x68 (0x68)
	struct FVector WaveAmplitude;  // 0x80 (0x80)
	struct FVector WaveOffset;  // 0x98 (0x98)
	struct FVector WaveNoise;  // 0xB0 (0xB0)
	uint8_t WaveEase;  // 0xC8 (0xC8)
	char pad_201[3];  // 0xC9 (0xC9)
	float WaveMinimum;  // 0xCC (0xCC)
	float WaveMaximum;  // 0xD0 (0xD0)
	uint8_t RotationOrder;  // 0xD4 (0xD4)
	char pad_213_1 : 7;  // 0xD5 (0xD5)
	bool bPropagateToChildren : 1;  // 0xD5 (0xD5)
	char pad_214[2];  // 0xD6 (0xD6)
	struct FRigUnit_BoneHarmonics_WorkData WorkData;  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformToEulerTransform
// Size: 0xC0(Inherited: 0x8)
struct FRigUnit_MathTransformToEulerTransform : FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Value;  // 0x10 (0x10)
	struct FEulerTransform Result;  // 0x70 (0x70)
	char pad_184[8];  // 0xB8 (0xB8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ItemHarmonics
// Size: 0x100(Inherited: 0x40)
struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_Harmonics_TargetItem> Targets;  // 0x40 (0x40)
	struct FVector WaveSpeed;  // 0x50 (0x50)
	struct FVector WaveFrequency;  // 0x68 (0x68)
	struct FVector WaveAmplitude;  // 0x80 (0x80)
	struct FVector WaveOffset;  // 0x98 (0x98)
	struct FVector WaveNoise;  // 0xB0 (0xB0)
	uint8_t WaveEase;  // 0xC8 (0xC8)
	char pad_201[3];  // 0xC9 (0xC9)
	float WaveMinimum;  // 0xCC (0xCC)
	float WaveMaximum;  // 0xD0 (0xD0)
	uint8_t RotationOrder;  // 0xD4 (0xD4)
	char pad_213[3];  // 0xD5 (0xD5)
	struct FRigUnit_BoneHarmonics_WorkData WorkData;  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
struct FRigUnit_ChainHarmonics_Wave
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector WaveFrequency;  // 0x8 (0x8)
	struct FVector WaveAmplitude;  // 0x20 (0x20)
	struct FVector WaveOffset;  // 0x38 (0x38)
	struct FVector WaveNoise;  // 0x50 (0x50)
	float WaveMinimum;  // 0x68 (0x68)
	float WaveMaximum;  // 0x6C (0x6C)
	uint8_t WaveEase;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ChainHarmonics
// Size: 0x310(Inherited: 0x40)
struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable
{
	struct FName ChainRoot;  // 0x40 (0x40)
	struct FVector Speed;  // 0x48 (0x48)
	struct FRigUnit_ChainHarmonics_Reach Reach;  // 0x60 (0x60)
	struct FRigUnit_ChainHarmonics_Wave Wave;  // 0xA8 (0xA8)
	struct FRuntimeFloatCurve WaveCurve;  // 0x120 (0x120)
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum;  // 0x1A8 (0x1A8)
	char pad_512_1 : 7;  // 0x200 (0x200)
	bool bDrawDebug : 1;  // 0x200 (0x200)
	char pad_513[15];  // 0x201 (0x201)
	struct FTransform DrawWorldOffset;  // 0x210 (0x210)
	struct FRigUnit_ChainHarmonics_WorkData WorkData;  // 0x270 (0x270)
	char pad_776[8];  // 0x308 (0x308)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
// Size: 0x310(Inherited: 0x40)
struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey ChainRoot;  // 0x40 (0x40)
	char pad_76[4];  // 0x4C (0x4C)
	struct FVector Speed;  // 0x50 (0x50)
	struct FRigUnit_ChainHarmonics_Reach Reach;  // 0x68 (0x68)
	struct FRigUnit_ChainHarmonics_Wave Wave;  // 0xB0 (0xB0)
	struct FRuntimeFloatCurve WaveCurve;  // 0x128 (0x128)
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum;  // 0x1B0 (0x1B0)
	char pad_520_1 : 7;  // 0x208 (0x208)
	bool bDrawDebug : 1;  // 0x208 (0x208)
	char pad_521[7];  // 0x209 (0x209)
	struct FTransform DrawWorldOffset;  // 0x210 (0x210)
	struct FRigUnit_ChainHarmonics_WorkData WorkData;  // 0x270 (0x270)
	char pad_776[8];  // 0x308 (0x308)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AimItem_Target
struct FRigUnit_AimItem_Target
{
	float Weight;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector Axis;  // 0x8 (0x8)
	struct FVector Target;  // 0x20 (0x20)
	uint8_t Kind;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	struct FRigElementKey Space;  // 0x3C (0x3C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorMakeRelative
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_MathVectorMakeRelative : FRigUnit_MathVectorBase
{
	struct FVector Global;  // 0x8 (0x8)
	struct FVector Parent;  // 0x20 (0x20)
	struct FVector Local;  // 0x38 (0x38)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorAbs
// Size: 0x38(Inherited: 0x38)
struct FRigUnit_MathVectorAbs : FRigUnit_MathVectorUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_AimBone
// Size: 0x1B0(Inherited: 0x40)
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable
{
	struct FName bone;  // 0x40 (0x40)
	struct FRigUnit_AimBone_Target Primary;  // 0x48 (0x48)
	struct FRigUnit_AimBone_Target Secondary;  // 0x90 (0x90)
	float Weight;  // 0xD8 (0xD8)
	char pad_220_1 : 7;  // 0xDC (0xDC)
	bool bPropagateToChildren : 1;  // 0xDC (0xDC)
	char pad_221[3];  // 0xDD (0xDD)
	struct FRigUnit_AimBone_DebugSettings DebugSettings;  // 0xE0 (0xE0)
	struct FCachedRigElement CachedBoneIndex;  // 0x150 (0x150)
	struct FCachedRigElement PrimaryCachedSpace;  // 0x170 (0x170)
	struct FCachedRigElement SecondaryCachedSpace;  // 0x190 (0x190)


}; 
 
 // ScriptStruct ControlRig.ConstraintParent
struct FConstraintParent
{
	struct FRigElementKey Item;  // 0x0 (0x0)
	float Weight;  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
struct FRigUnit_CCDIK_RotationLimit
{
	struct FName bone;  // 0x0 (0x0)
	float Limit;  // 0x8 (0x8)


}; 
 
 // Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
struct FSetControlOffsetTransformByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4[12];  // 0x4 (0x4)
	struct FTransform InTransform;  // 0x10 (0x10)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bInitial : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool bAffectChildren : 1;  // 0x71 (0x71)
	char pad_114_1 : 7;  // 0x72 (0x72)
	bool bSetupUndo : 1;  // 0x72 (0x72)
	char pad_115_1 : 7;  // 0x73 (0x73)
	bool bPrintPythonCommands : 1;  // 0x73 (0x73)
	char pad_116[12];  // 0x74 (0x74)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
struct FRigUnit_CCDIK_RotationLimitPerItem
{
	struct FRigElementKey Item;  // 0x0 (0x0)
	float Limit;  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
struct FRigUnit_CCDIK_WorkData
{
	struct TArray<struct FCCDIKChainLink> chain;  // 0x0 (0x0)
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x10 (0x10)
	struct TArray<int32_t> RotationLimitIndex;  // 0x20 (0x20)
	struct TArray<float> RotationLimitsPerItem;  // 0x30 (0x30)
	struct FCachedRigElement CachedEffector;  // 0x40 (0x40)


}; 
 
 // Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
struct FMakeControlValueFromTransformNoScale
{
	struct FTransformNoScale InValue;  // 0x0 (0x0)
	struct FRigControlValue ReturnValue;  // 0x40 (0x40)


}; 
 
 // ScriptStruct ControlRig.RigUnit_CCDIKPerItem
// Size: 0x140(Inherited: 0x40)
struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items;  // 0x40 (0x40)
	struct FTransform EffectorTransform;  // 0x50 (0x50)
	float Precision;  // 0xB0 (0xB0)
	float Weight;  // 0xB4 (0xB4)
	int32_t MaxIterations;  // 0xB8 (0xB8)
	char pad_188_1 : 7;  // 0xBC (0xBC)
	bool bStartFromTail : 1;  // 0xBC (0xBC)
	char pad_189[3];  // 0xBD (0xBD)
	float BaseRotationLimit;  // 0xC0 (0xC0)
	char pad_196[4];  // 0xC4 (0xC4)
	struct TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;  // 0xC8 (0xC8)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool bPropagateToChildren : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct FRigUnit_CCDIK_WorkData WorkData;  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DistributeRotation
// Size: 0xC0(Inherited: 0x40)
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone;  // 0x40 (0x40)
	struct FName EndBone;  // 0x48 (0x48)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;  // 0x50 (0x50)
	uint8_t RotationEaseType;  // 0x60 (0x60)
	char pad_97[3];  // 0x61 (0x61)
	float Weight;  // 0x64 (0x64)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool bPropagateToChildren : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct FRigUnit_DistributeRotation_WorkData WorkData;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
// Size: 0xB8(Inherited: 0x40)
struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items;  // 0x40 (0x40)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;  // 0x50 (0x50)
	uint8_t RotationEaseType;  // 0x60 (0x60)
	char pad_97[3];  // 0x61 (0x61)
	float Weight;  // 0x64 (0x64)
	struct FRigUnit_DistributeRotation_WorkData WorkData;  // 0x68 (0x68)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DistributeRotationForItemArray
// Size: 0xB8(Inherited: 0x40)
struct FRigUnit_DistributeRotationForItemArray : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigElementKey> Items;  // 0x40 (0x40)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;  // 0x50 (0x50)
	uint8_t RotationEaseType;  // 0x60 (0x60)
	char pad_97[3];  // 0x61 (0x61)
	float Weight;  // 0x64 (0x64)
	struct FRigUnit_DistributeRotation_WorkData WorkData;  // 0x68 (0x68)


}; 
 
 // ScriptStruct ControlRig.RigUnit_FABRIKItemArray
// Size: 0x110(Inherited: 0x40)
struct FRigUnit_FABRIKItemArray : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigElementKey> Items;  // 0x40 (0x40)
	struct FTransform EffectorTransform;  // 0x50 (0x50)
	float Precision;  // 0xB0 (0xB0)
	float Weight;  // 0xB4 (0xB4)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool bPropagateToChildren : 1;  // 0xB8 (0xB8)
	char pad_185[3];  // 0xB9 (0xB9)
	int32_t MaxIterations;  // 0xBC (0xBC)
	struct FRigUnit_FABRIK_WorkData WorkData;  // 0xC0 (0xC0)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool bSetEffectorTransform : 1;  // 0x100 (0x100)
	char pad_257[15];  // 0x101 (0x101)


}; 
 
 // ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
// Size: 0x260(Inherited: 0x40)
struct FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items;  // 0x40 (0x40)
	struct FCRFourPointBezier Bezier;  // 0x50 (0x50)
	uint8_t Alignment;  // 0xB0 (0xB0)
	char pad_177[3];  // 0xB1 (0xB1)
	float Minimum;  // 0xB4 (0xB4)
	float Maximum;  // 0xB8 (0xB8)
	int32_t SamplingPrecision;  // 0xBC (0xBC)
	struct FVector PrimaryAxis;  // 0xC0 (0xC0)
	struct FVector SecondaryAxis;  // 0xD8 (0xD8)
	struct FVector PoleVectorPosition;  // 0xF0 (0xF0)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;  // 0x108 (0x108)
	uint8_t RotationEaseType;  // 0x118 (0x118)
	char pad_281[3];  // 0x119 (0x119)
	float Weight;  // 0x11C (0x11C)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool bPropagateToChildren : 1;  // 0x120 (0x120)
	char pad_289[15];  // 0x121 (0x121)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;  // 0x130 (0x130)
	struct FRigUnit_FitChainToCurve_WorkData WorkData;  // 0x1C0 (0x1C0)
	char pad_600[8];  // 0x258 (0x258)


}; 
 
 // ScriptStruct ControlRig.RigUnit_FitChainToCurveItemArray
// Size: 0x260(Inherited: 0x40)
struct FRigUnit_FitChainToCurveItemArray : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigElementKey> Items;  // 0x40 (0x40)
	struct FCRFourPointBezier Bezier;  // 0x50 (0x50)
	uint8_t Alignment;  // 0xB0 (0xB0)
	char pad_177[3];  // 0xB1 (0xB1)
	float Minimum;  // 0xB4 (0xB4)
	float Maximum;  // 0xB8 (0xB8)
	int32_t SamplingPrecision;  // 0xBC (0xBC)
	struct FVector PrimaryAxis;  // 0xC0 (0xC0)
	struct FVector SecondaryAxis;  // 0xD8 (0xD8)
	struct FVector PoleVectorPosition;  // 0xF0 (0xF0)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;  // 0x108 (0x108)
	uint8_t RotationEaseType;  // 0x118 (0x118)
	char pad_281[3];  // 0x119 (0x119)
	float Weight;  // 0x11C (0x11C)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool bPropagateToChildren : 1;  // 0x120 (0x120)
	char pad_289[15];  // 0x121 (0x121)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;  // 0x130 (0x130)
	struct FRigUnit_FitChainToCurve_WorkData WorkData;  // 0x1C0 (0x1C0)
	char pad_600[8];  // 0x258 (0x258)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolOr
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathBoolOr : FRigUnit_MathBoolBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
struct FRigUnit_ModifyBoneTransforms_PerBone
{
	struct FName bone;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Transform;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_ModifyBoneTransforms_WorkData : FRigUnit_ModifyTransforms_WorkData
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
// Size: 0x70(Inherited: 0x40)
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;  // 0x40 (0x40)
	float Weight;  // 0x50 (0x50)
	float WeightMinimum;  // 0x54 (0x54)
	float WeightMaximum;  // 0x58 (0x58)
	uint8_t Mode;  // 0x5C (0x5C)
	char pad_93[3];  // 0x5D (0x5D)
	struct FRigUnit_ModifyBoneTransforms_WorkData WorkData;  // 0x60 (0x60)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
struct FRigUnit_ModifyTransforms_PerItem
{
	struct FRigElementKey Item;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct FTransform Transform;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformBinaryOp
// Size: 0x130(Inherited: 0x8)
struct FRigUnit_MathTransformBinaryOp : FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform A;  // 0x10 (0x10)
	struct FTransform B;  // 0x70 (0x70)
	struct FTransform Result;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
struct FRigUnit_MultiFABRIK_EndEffector
{
	struct FName bone;  // 0x0 (0x0)
	struct FVector Location;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleBinaryOp
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_MathDoubleBinaryOp : FRigUnit_MathDoubleBase
{
	double A;  // 0x8 (0x8)
	double B;  // 0x10 (0x10)
	double Result;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_TimeOffsetVector
// Size: 0x70(Inherited: 0x8)
struct FRigUnit_TimeOffsetVector : FRigUnit_SimBase
{
	struct FVector Value;  // 0x8 (0x8)
	float SecondsAgo;  // 0x20 (0x20)
	int32_t BufferSize;  // 0x24 (0x24)
	float TimeRange;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct FVector Result;  // 0x30 (0x30)
	struct TArray<struct FVector> Buffer;  // 0x48 (0x48)
	struct TArray<float> DeltaTimes;  // 0x58 (0x58)
	int32_t LastInsertIndex;  // 0x68 (0x68)
	int32_t UpperBound;  // 0x6C (0x6C)


}; 
 
 // Function ControlRig.RigHierarchy.SetControlPreferredRotator
struct FSetControlPreferredRotator
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct FRotator InValue;  // 0x10 (0x10)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bInitial : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool bFixEulerFlips : 1;  // 0x29 (0x29)
	char pad_42[6];  // 0x2A (0x2A)


}; 
 
 // Function ControlRig.RigHierarchy.GetLocalTransform
struct FGetLocalTransform
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bInitial : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MultiFABRIK
// Size: 0xD0(Inherited: 0x40)
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable
{
	struct FName RootBone;  // 0x40 (0x40)
	struct TArray<struct FRigUnit_MultiFABRIK_EndEffector> Effectors;  // 0x48 (0x48)
	float Precision;  // 0x58 (0x58)
	char pad_92_1 : 7;  // 0x5C (0x5C)
	bool bPropagateToChildren : 1;  // 0x5C (0x5C)
	char pad_93[3];  // 0x5D (0x5D)
	int32_t MaxIterations;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)
	struct FRigUnit_MultiFABRIK_WorkData WorkData;  // 0x68 (0x68)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
struct FRigUnit_SlideChain_WorkData
{
	float ChainLength;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<float> ItemSegments;  // 0x8 (0x8)
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x18 (0x18)
	struct TArray<struct FTransform> Transforms;  // 0x28 (0x28)
	struct TArray<struct FTransform> BlendedTransforms;  // 0x38 (0x38)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorBase
// Size: 0xC0(Inherited: 0x8)
struct FRigUnit_MathRBFInterpolateVectorBase : FRigUnit_MathRBFInterpolateBase
{
	struct FVector Input;  // 0x8 (0x8)
	uint8_t DistanceFunction;  // 0x20 (0x20)
	uint8_t SmoothingFunction;  // 0x21 (0x21)
	char pad_34[2];  // 0x22 (0x22)
	float SmoothingRadius;  // 0x24 (0x24)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bNormalizeOutput : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct FRigUnit_MathRBFInterpolateVectorWorkData WorkData;  // 0x30 (0x30)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SlideChain
// Size: 0xA0(Inherited: 0x40)
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone;  // 0x40 (0x40)
	struct FName EndBone;  // 0x48 (0x48)
	float SlideAmount;  // 0x50 (0x50)
	char pad_84_1 : 7;  // 0x54 (0x54)
	bool bPropagateToChildren : 1;  // 0x54 (0x54)
	char pad_85[3];  // 0x55 (0x55)
	struct FRigUnit_SlideChain_WorkData WorkData;  // 0x58 (0x58)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolConstant
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathBoolConstant : FRigUnit_MathBoolBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Value : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorRad
// Size: 0x38(Inherited: 0x38)
struct FRigUnit_MathVectorRad : FRigUnit_MathVectorUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_SlideChainPerItem
// Size: 0xA0(Inherited: 0x40)
struct FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items;  // 0x40 (0x40)
	float SlideAmount;  // 0x50 (0x50)
	char pad_84_1 : 7;  // 0x54 (0x54)
	bool bPropagateToChildren : 1;  // 0x54 (0x54)
	char pad_85[3];  // 0x55 (0x55)
	struct FRigUnit_SlideChain_WorkData WorkData;  // 0x58 (0x58)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformMul
// Size: 0x130(Inherited: 0x130)
struct FRigUnit_MathTransformMul : FRigUnit_MathTransformBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_SphericalPoseReader
// Size: 0x1E0(Inherited: 0x40)
struct FRigUnit_SphericalPoseReader : FRigUnit_HighlevelBaseMutable
{
	float OutputParam;  // 0x40 (0x40)
	struct FRigElementKey DriverItem;  // 0x44 (0x44)
	struct FVector DriverAxis;  // 0x50 (0x50)
	struct FVector RotationOffset;  // 0x68 (0x68)
	float ActiveRegionSize;  // 0x80 (0x80)
	struct FRegionScaleFactors ActiveRegionScaleFactors;  // 0x84 (0x84)
	float FalloffSize;  // 0x94 (0x94)
	struct FRegionScaleFactors FalloffRegionScaleFactors;  // 0x98 (0x98)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool FlipWidthScaling : 1;  // 0xA8 (0xA8)
	char pad_169_1 : 7;  // 0xA9 (0xA9)
	bool FlipHeightScaling : 1;  // 0xA9 (0xA9)
	char pad_170[2];  // 0xAA (0xAA)
	struct FRigElementKey OptionalParentItem;  // 0xAC (0xAC)
	struct FSphericalPoseReaderDebugSettings Debug;  // 0xB8 (0xB8)
	struct FSphericalRegion InnerRegion;  // 0xC8 (0xC8)
	struct FSphericalRegion OuterRegion;  // 0xDC (0xDC)
	struct FVector DriverNormal;  // 0xF0 (0xF0)
	struct FVector Driver2D;  // 0x108 (0x108)
	struct FCachedRigElement DriverCache;  // 0x120 (0x120)
	struct FCachedRigElement OptionalParentCache;  // 0x140 (0x140)
	struct FTransform LocalDriverTransformInit;  // 0x160 (0x160)
	struct FVector CachedRotationOffset;  // 0x1C0 (0x1C0)
	char pad_472_1 : 7;  // 0x1D8 (0x1D8)
	bool bCachedInitTransforms : 1;  // 0x1D8 (0x1D8)
	char pad_473[7];  // 0x1D9 (0x1D9)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
struct FRigUnit_SpringIK_WorkData
{
	struct TArray<struct FCachedRigElement> CachedBones;  // 0x0 (0x0)
	struct FCachedRigElement CachedPoleVector;  // 0x10 (0x10)
	struct TArray<struct FTransform> Transforms;  // 0x30 (0x30)
	struct FCRSimPointContainer Simulation;  // 0x40 (0x40)


}; 
 
 // ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
struct FRigUnit_TransformConstraint_WorkData
{
	struct TArray<struct FConstraintData> ConstraintData;  // 0x0 (0x0)
	struct TMap<int32_t, int32_t> ConstraintDataToTargets;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
struct FRigUnit_MathRBFInterpolateQuatWorkData
{
	char pad_0[144];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ParentConstraint
// Size: 0xA0(Inherited: 0x40)
struct FRigUnit_ParentConstraint : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey Child;  // 0x40 (0x40)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bMaintainOffset : 1;  // 0x4C (0x4C)
	struct FTransformFilter Filter;  // 0x4D (0x4D)
	char pad_86[2];  // 0x56 (0x56)
	struct TArray<struct FConstraintParent> Parents;  // 0x58 (0x58)
	struct FRigUnit_ParentConstraint_AdvancedSettings AdvancedSettings;  // 0x68 (0x68)
	char pad_106[2];  // 0x6A (0x6A)
	float Weight;  // 0x6C (0x6C)
	struct FCachedRigElement ChildCache;  // 0x70 (0x70)
	struct TArray<struct FCachedRigElement> ParentCaches;  // 0x90 (0x90)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatMod
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathFloatMod : FRigUnit_MathFloatBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_TransformConstraint
// Size: 0x130(Inherited: 0x40)
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable
{
	struct FName bone;  // 0x40 (0x40)
	uint8_t BaseTransformSpace;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct FTransform BaseTransform;  // 0x50 (0x50)
	struct FName BaseBone;  // 0xB0 (0xB0)
	struct TArray<struct FConstraintTarget> Targets;  // 0xB8 (0xB8)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool bUseInitialTransforms : 1;  // 0xC8 (0xC8)
	char pad_201[7];  // 0xC9 (0xC9)
	struct FRigUnit_TransformConstraint_WorkData WorkData;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
// Size: 0x140(Inherited: 0x40)
struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey Item;  // 0x40 (0x40)
	uint8_t BaseTransformSpace;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	struct FTransform BaseTransform;  // 0x50 (0x50)
	struct FRigElementKey BaseItem;  // 0xB0 (0xB0)
	char pad_188[4];  // 0xBC (0xBC)
	struct TArray<struct FConstraintTarget> Targets;  // 0xC0 (0xC0)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool bUseInitialTransforms : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct FRigUnit_TransformConstraint_WorkData WorkData;  // 0xD8 (0xD8)
	char pad_312[8];  // 0x138 (0x138)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathMatrixFromTransform
// Size: 0xF0(Inherited: 0x8)
struct FRigUnit_MathMatrixFromTransform : FRigUnit_MathMatrixBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Transform;  // 0x10 (0x10)
	struct FMatrix Result;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AccumulateTransformMul
// Size: 0x1A0(Inherited: 0x8)
struct FRigUnit_AccumulateTransformMul : FRigUnit_AccumulateBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Multiplier;  // 0x10 (0x10)
	struct FTransform InitialValue;  // 0x70 (0x70)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool bFlipOrder : 1;  // 0xD0 (0xD0)
	char pad_209_1 : 7;  // 0xD1 (0xD1)
	bool bIntegrateDeltaTime : 1;  // 0xD1 (0xD1)
	char pad_210[14];  // 0xD2 (0xD2)
	struct FTransform Result;  // 0xE0 (0xE0)
	struct FTransform AccumulatedValue;  // 0x140 (0x140)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
// Size: 0x98(Inherited: 0x40)
struct FRigUnit_PositionConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey Child;  // 0x40 (0x40)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bMaintainOffset : 1;  // 0x4C (0x4C)
	struct FFilterOptionPerAxis Filter;  // 0x4D (0x4D)
	struct TArray<struct FConstraintParent> Parents;  // 0x50 (0x50)
	float Weight;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)
	struct FCachedRigElement ChildCache;  // 0x68 (0x68)
	struct TArray<struct FCachedRigElement> ParentCaches;  // 0x88 (0x88)


}; 
 
 // Function ControlRig.ControlRigComponent.SetControlVector2D
struct FSetControlVector2D
{
	struct FName ControlName;  // 0x0 (0x0)
	struct FVector2D Value;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_RotationConstraint_AdvancedSettings
struct FRigUnit_RotationConstraint_AdvancedSettings
{
	uint8_t InterpolationType;  // 0x0 (0x0)
	uint8_t RotationOrderForFilter;  // 0x1 (0x1)


}; 
 
 // ScriptStruct ControlRig.RigUnit_RotationConstraint
// Size: 0x68(Inherited: 0x40)
struct FRigUnit_RotationConstraint : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey Child;  // 0x40 (0x40)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bMaintainOffset : 1;  // 0x4C (0x4C)
	struct FFilterOptionPerAxis Filter;  // 0x4D (0x4D)
	struct TArray<struct FConstraintParent> Parents;  // 0x50 (0x50)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;  // 0x60 (0x60)
	char pad_98[2];  // 0x62 (0x62)
	float Weight;  // 0x64 (0x64)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorAdd
// Size: 0x50(Inherited: 0x50)
struct FRigUnit_MathVectorAdd : FRigUnit_MathVectorBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
// Size: 0x98(Inherited: 0x40)
struct FRigUnit_RotationConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey Child;  // 0x40 (0x40)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bMaintainOffset : 1;  // 0x4C (0x4C)
	struct FFilterOptionPerAxis Filter;  // 0x4D (0x4D)
	struct TArray<struct FConstraintParent> Parents;  // [x50 ([x50)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;  // 0x60 (0x60)
	char pad_98[2];  // 0x62 (0x62)
	float Weight;  // 0x64 (0x64)
	struct FCachedRigElement ChildCache;  // 0x68 (0x68)
	struct TArray<struct FCachedRigElement> ParentCaches;  // 0x88 (0x88)


}; 
 
 // Function ControlRig.ControlRigComponent.AddMappedComponents
struct FAddMappedComponents
{
	struct TArray<struct FControlRigComponentMappedComponent> Components;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_ScaleConstraint
// Size: 0x68(Inherited: 0x40)
struct FRigUnit_ScaleConstraint : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey Child;  // 0x40 (0x40)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bMaintainOffset : 1;  // 0x4C (0x4C)
	struct FFilterOptionPerAxis Filter;  // 0x4D (0x4D)
	struct TArray<struct FConstraintParent> Parents;  // 0x50 (0x50)
	float Weight;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)


}; 
 
 // ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
struct FRigUnit_TwistBones_WorkData
{
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x0 (0x0)
	struct TArray<float> ItemRatios;  // 0x10 (0x10)
	struct TArray<struct FTransform> ItemTransforms;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
// Size: 0xC0(Inherited: 0x40)
struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items;  // 0x40 (0x40)
	struct FVector TwistAxis;  // 0x50 (0x50)
	struct FVector PoleAxis;  // 0x68 (0x68)
	uint8_t TwistEaseType;  // 0x80 (0x80)
	char pad_129[3];  // 0x81 (0x81)
	float Weight;  // 0x84 (0x84)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool bPropagateToChildren : 1;  // 0x88 (0x88)
	char pad_137[7];  // 0x89 (0x89)
	struct FRigUnit_TwistBones_WorkData WorkData;  // 0x90 (0x90)


}; 
 
 // ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
// Size: 0x240(Inherited: 0x40)
struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey ItemA;  // 0x40 (0x40)
	struct FRigElementKey ItemB;  // 0x4C (0x4C)
	struct FRigElementKey EffectorItem;  // 0x58 (0x58)
	char pad_100[12];  // 0x64 (0x64)
	struct FTransform Effector;  // 0x70 (0x70)
	struct FVector PrimaryAxis;  // 0xD0 (0xD0)
	struct FVector SecondaryAxis;  // 0xE8 (0xE8)
	float SecondaryAxisWeight;  // 0x100 (0x100)
	char pad_260[4];  // 0x104 (0x104)
	struct FVector PoleVector;  // 0x108 (0x108)
	uint8_t PoleVectorKind;  // 0x120 (0x120)
	char pad_289[3];  // 0x121 (0x121)
	struct FRigElementKey PoleVectorSpace;  // 0x124 (0x124)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool bEnableStretch : 1;  // 0x130 (0x130)
	char pad_305[3];  // 0x131 (0x131)
	float StretchStartRatio;  // 0x134 (0x134)
	float StretchMaximumRatio;  // 0x138 (0x138)
	float Weight;  // 0x13C (0x13C)
	float ItemALength;  // 0x140 (0x140)
	float ItemBLength;  // 0x144 (0x144)
	char pad_328_1 : 7;  // 0x148 (0x148)
	bool bPropagateToChildren : 1;  // 0x148 (0x148)
	char pad_329[7];  // 0x149 (0x149)
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;  // 0x150 (0x150)
	struct FCachedRigElement CachedItemAIndex;  // 0x1C0 (0x1C0)
	struct FCachedRigElement CachedItemBIndex;  // 0x1E0 (0x1E0)
	struct FCachedRigElement CachedEffectorItemIndex;  // 0x200 (0x200)
	struct FCachedRigElement CachedPoleVectorSpaceIndex;  // 0x220 (0x220)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
struct FRigUnit_PointSimulation_DebugSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float Scale;  // 0x4 (0x4)
	float CollisionScale;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bDrawPointsAsSpheres : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FLinearColor Color;  // 0x10 (0x10)
	struct FTransform WorldOffset;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
// Size: 0x80(Inherited: 0x8)
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase
{
	struct FVector Root;  // 0x8 (0x8)
	struct FVector PoleVector;  // 0x20 (0x20)
	struct FVector Effector;  // 0x38 (0x38)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bEnableStretch : 1;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	float StretchStartRatio;  // 0x54 (0x54)
	float StretchMaximumRatio;  // 0x58 (0x58)
	float BoneALength;  // 0x5C (0x5C)
	float BoneBLength;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)
	struct FVector Elbow;  // 0x68 (0x68)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatAbs
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatAbs : FRigUnit_MathFloatUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
// Size: 0x1A0(Inherited: 0x8)
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Root;  // 0x10 (0x10)
	struct FVector PoleVector;  // 0x70 (0x70)
	char pad_136[8];  // 0x88 (0x88)
	struct FTransform Effector;  // 0x90 (0x90)
	struct FVector PrimaryAxis;  // 0xF0 (0xF0)
	struct FVector SecondaryAxis;  // 0x108 (0x108)
	float SecondaryAxisWeight;  // 0x120 (0x120)
	char pad_292_1 : 7;  // 0x124 (0x124)
	bool bEnableStretch : 1;  // 0x124 (0x124)
	char pad_293[3];  // 0x125 (0x125)
	float StretchStartRatio;  // 0x128 (0x128)
	float StretchMaximumRatio;  // 0x12C (0x12C)
	float BoneALength;  // 0x130 (0x130)
	float BoneBLength;  // 0x134 (0x134)
	char pad_312[8];  // 0x138 (0x138)
	struct FTransform Elbow;  // 0x140 (0x140)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AccumulateFloatAdd
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_AccumulateFloatAdd : FRigUnit_AccumulateBase
{
	float Increment;  // 0x8 (0x8)
	float InitialValue;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bIntegrateDeltaTime : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float Result;  // 0x14 (0x14)
	float AccumulatedValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_MathBoolBase : FRigUnit_MathBase
{


}; 
 
 // Function ControlRig.ControlRigComponent.SetControlBool
struct FSetControlBool
{
	struct FName ControlName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Value : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolUnaryOp
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathBoolUnaryOp : FRigUnit_MathBoolBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Value : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool Result : 1;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolBinaryOp
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathBoolBinaryOp : FRigUnit_MathBoolBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool A : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool B : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool Result : 1;  // 0xA (0xA)
	char pad_11[5];  // 0xB (0xB)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolConstTrue
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathBoolConstTrue : FRigUnit_MathBoolConstant
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolConstFalse
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathBoolConstFalse : FRigUnit_MathBoolConstant
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolNand
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathBoolNand : FRigUnit_MathBoolBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolNand2
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathBoolNand2 : FRigUnit_MathBoolBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolEquals
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathBoolEquals : FRigUnit_MathBoolBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool A : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool B : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool Result : 1;  // 0xA (0xA)
	char pad_11[5];  // 0xB (0xB)


}; 
 
 // ScriptStruct ControlRig.RigUnit_NoiseDouble
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_NoiseDouble : FRigUnit_MathBase
{
	double Value;  // 0x8 (0x8)
	double Speed;  // 0x10 (0x10)
	double Frequency;  // 0x18 (0x18)
	double Minimum;  // 0x20 (0x20)
	double Maximum;  // 0x28 (0x28)
	double Result;  // 0x30 (0x30)
	double Time;  // 0x38 (0x38)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathMatrixMul
// Size: 0x190(Inherited: 0x190)
struct FRigUnit_MathMatrixMul : FRigUnit_MathMatrixBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolNotEquals
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathBoolNotEquals : FRigUnit_MathBoolBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool A : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool B : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool Result : 1;  // 0xA (0xA)
	char pad_11[5];  // 0xB (0xB)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolToggled
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathBoolToggled : FRigUnit_MathBoolBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Value : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool Toggled : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool Initialized : 1;  // 0xA (0xA)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool LastValue : 1;  // 0xB (0xB)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolFlipFlop
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathBoolFlipFlop : FRigUnit_MathBoolBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool StartValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float Duration;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool LastValue : 1;  // 0x11 (0x11)
	char pad_18[2];  // 0x12 (0x12)
	float TimeLeft;  // 0x14 (0x14)


}; 
 
 // Function ControlRig.RigHierarchy.GetRotatorFromControlValue
struct FGetRotatorFromControlValue
{
	struct FRigControlValue InValue;  // 0x0 (0x0)
	struct FRotator ReturnValue;  // 0xF0 (0xF0)
	char pad_264[8];  // 0x108 (0x108)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolOnce
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathBoolOnce : FRigUnit_MathBoolBase
{
	float Duration;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool Result : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool LastValue : 1;  // 0xD (0xD)
	char pad_14[2];  // 0xE (0xE)
	float TimeLeft;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolToFloat
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathBoolToFloat : FRigUnit_MathBoolBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Value : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float Result;  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathBoolToInteger
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathBoolToInteger : FRigUnit_MathBoolBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Value : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	int32_t Result;  // 0xC (0xC)


}; 
 
 // Function ControlRig.RigHierarchy.GetNameMetadata
struct FGetNameMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	struct FName DefaultValue;  // 0x14 (0x14)
	struct FName ReturnValue;  // 0x1C (0x1C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleLerp
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_MathDoubleLerp : FRigUnit_MathDoubleBase
{
	double A;  // 0x8 (0x8)
	double B;  // 0x10 (0x10)
	double T;  // 0x18 (0x18)
	double Result;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntBinaryOp
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathIntBinaryOp : FRigUnit_MathIntBase
{
	int32_t A;  // 0x8 (0x8)
	int32_t B;  // 0xC (0xC)
	int32_t Result;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AccumulateQuatLerp
// Size: 0xA0(Inherited: 0x8)
struct FRigUnit_AccumulateQuatLerp : FRigUnit_AccumulateBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat TargetValue;  // 0x10 (0x10)
	struct FQuat InitialValue;  // 0x30 (0x30)
	float Blend;  // 0x50 (0x50)
	char pad_84_1 : 7;  // 0x54 (0x54)
	bool bIntegrateDeltaTime : 1;  // 0x54 (0x54)
	char pad_85[11];  // 0x55 (0x55)
	struct FQuat Result;  // 0x60 (0x60)
	struct FQuat AccumulatedValue;  // 0x80 (0x80)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathColorBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_MathColorBase : FRigUnit_MathBase
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathColorBinaryOp
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_MathColorBinaryOp : FRigUnit_MathColorBase
{
	struct FLinearColor A;  // 0x8 (0x8)
	struct FLinearColor B;  // 0x18 (0x18)
	struct FLinearColor Result;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathColorSub
// Size: 0x38(Inherited: 0x38)
struct FRigUnit_MathColorSub : FRigUnit_MathColorBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathColorLerp
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathColorLerp : FRigUnit_MathColorBase
{
	struct FLinearColor A;  // 0x8 (0x8)
	struct FLinearColor B;  // 0x18 (0x18)
	float T;  // 0x28 (0x28)
	struct FLinearColor Result;  // 0x2C (0x2C)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleConstant
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathDoubleConstant : FRigUnit_MathDoubleBase
{
	double Value;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleUnaryOp
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathDoubleUnaryOp : FRigUnit_MathDoubleBase
{
	double Value;  // 0x8 (0x8)
	double Result;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchy.GetTags
struct FGetTags
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct TArray<struct FName> ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorAngle
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathVectorAngle : FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8 (0x8)
	struct FVector B;  // 0x20 (0x20)
	float Result;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleBinaryAggregateOp
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_MathDoubleBinaryAggregateOp : FRigUnit_MathDoubleBase
{
	double A;  // 0x8 (0x8)
	double B;  // 0x10 (0x10)
	double Result;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionUnit
// Size: 0x50(Inherited: 0x50)
struct FRigUnit_MathQuaternionUnit : FRigUnit_MathQuaternionUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleConstPi
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathDoubleConstPi : FRigUnit_MathDoubleConstant
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionInverse
// Size: 0x50(Inherited: 0x50)
struct FRigUnit_MathQuaternionInverse : FRigUnit_MathQuaternionUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleConstHalfPi
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathDoubleConstHalfPi : FRigUnit_MathDoubleConstant
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleConstTwoPi
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathDoubleConstTwoPi : FRigUnit_MathDoubleConstant
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleAdd
// Size: 0x20(Inherited: 0x20)
struct FRigUnit_MathDoubleAdd : FRigUnit_MathDoubleBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleMul
// Size: 0x20(Inherited: 0x20)
struct FRigUnit_MathDoubleMul : FRigUnit_MathDoubleBinaryAggregateOp
{


}; 
 
 // Function ControlRig.RigHierarchy.IsProcedural
struct FIsProcedural
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleDiv
// Size: 0x20(Inherited: 0x20)
struct FRigUnit_MathDoubleDiv : FRigUnit_MathDoubleBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleMin
// Size: 0x20(Inherited: 0x20)
struct FRigUnit_MathDoubleMin : FRigUnit_MathDoubleBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleMax
// Size: 0x20(Inherited: 0x20)
struct FRigUnit_MathDoubleMax : FRigUnit_MathDoubleBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleNegate
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathDoubleNegate : FRigUnit_MathDoubleUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleAbs
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathDoubleAbs : FRigUnit_MathDoubleUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleRound
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_MathDoubleRound : FRigUnit_MathDoubleBase
{
	double Value;  // 0x8 (0x8)
	double Result;  // 0x10 (0x10)
	int32_t Int;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleToInt
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathDoubleToInt : FRigUnit_MathDoubleBase
{
	double Value;  // 0x8 (0x8)
	int32_t Result;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatMax
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathFloatMax : FRigUnit_MathFloatBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleSign
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathDoubleSign : FRigUnit_MathDoubleUnaryOp
{


}; 
 
 // Function ControlRig.RigHierarchy.SetControlValueByIndex
struct FSetControlValueByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4[12];  // 0x4 (0x4)
	struct FRigControlValue InValue;  // 0x10 (0x10)
	uint8_t InValueType;  // 0x100 (0x100)
	char pad_257_1 : 7;  // 0x101 (0x101)
	bool bSetupUndo : 1;  // 0x101 (0x101)
	char pad_258_1 : 7;  // 0x102 (0x102)
	bool bPrintPythonCommands : 1;  // 0x102 (0x102)
	char pad_259[13];  // 0x103 (0x103)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleRemap
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathDoubleRemap : FRigUnit_MathDoubleBase
{
	double Value;  // 0x8 (0x8)
	double SourceMinimum;  // 0x10 (0x10)
	double SourceMaximum;  // 0x18 (0x18)
	double TargetMinimum;  // 0x20 (0x20)
	double TargetMaximum;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bClamp : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	double Result;  // 0x38 (0x38)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleEquals
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_MathDoubleEquals : FRigUnit_MathDoubleBase
{
	double A;  // 0x8 (0x8)
	double B;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Result : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleGreaterEqual
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_MathDoubleGreaterEqual : FRigUnit_MathDoubleBase
{
	double A;  // 0x8 (0x8)
	double B;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Result : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleLessEqual
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_MathDoubleLessEqual : FRigUnit_MathDoubleBase
{
	double A;  // 0x8 (0x8)
	double B;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool Result : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleDeg
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathDoubleDeg : FRigUnit_MathDoubleUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleSin
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathDoubleSin : FRigUnit_MathDoubleUnaryOp
{


}; 
 
 // Function ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex
struct FGetLocalControlShapeTransformByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bInitial : 1;  // 0x4 (0x4)
	char pad_5[11];  // 0x5 (0x5)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchy.GetParents
struct FGetParents
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bRecursive : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleCos
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathDoubleCos : FRigUnit_MathDoubleUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleTan
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathDoubleTan : FRigUnit_MathDoubleUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleAsin
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathDoubleAsin : FRigUnit_MathDoubleUnaryOp
{


}; 
 
 // Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
struct FMakeControlValueFromEulerTransform
{
	struct FEulerTransform InValue;  // 0x0 (0x0)
	char pad_72[8];  // 0x48 (0x48)
	struct FRigControlValue ReturnValue;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathDoubleExponential
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathDoubleExponential : FRigUnit_MathDoubleUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_MathFloatBase : FRigUnit_MathBase
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatUnaryOp
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathFloatUnaryOp : FRigUnit_MathFloatBase
{
	float Value;  // 0x8 (0x8)
	float Result;  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatBinaryOp
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatBinaryOp : FRigUnit_MathFloatBase
{
	float A;  // 0x8 (0x8)
	float B;  // 0xC (0xC)
	float Result;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatBinaryAggregateOp
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatBinaryAggregateOp : FRigUnit_MathFloatBase
{
	float A;  // 0x8 (0x8)
	float B;  // 0xC (0xC)
	float Result;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatConstHalfPi
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatConstHalfPi : FRigUnit_MathFloatConstant
{


}; 
 
 // Function ControlRig.ControlRigComponent.GetControlOffset
struct FGetControlOffset
{
	struct FName ControlName;  // 0x0 (0x0)
	uint8_t Space;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchy.GetController
struct FGetController
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bCreateIfNeeded : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct URigHierarchyController* ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatConstTwoPi
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatConstTwoPi : FRigUnit_MathFloatConstant
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorNegate
// Size: 0x38(Inherited: 0x38)
struct FRigUnit_MathVectorNegate : FRigUnit_MathVectorUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatAdd
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathFloatAdd : FRigUnit_MathFloatBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatLessEqual
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatLessEqual : FRigUnit_MathFloatBase
{
	float A;  // 0x8 (0x8)
	float B;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function ControlRig.ControlRigComponent.GetElementNames
struct FGetElementNames
{
	uint8_t ElementType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FName> ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatSub
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathFloatSub : FRigUnit_MathFloatBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatMul
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathFloatMul : FRigUnit_MathFloatBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatPow
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathFloatPow : FRigUnit_MathFloatBinaryOp
{


}; 
 
 // Function ControlRig.RigHierarchy.MakeControlValueFromTransform
struct FMakeControlValueFromTransform
{
	struct FTransform InValue;  // 0x0 (0x0)
	struct FRigControlValue ReturnValue;  // 0x60 (0x60)


}; 
 
 // ScriptStruct ControlRig.MathRBFInterpolateQuatXform_Target
struct FMathRBFInterpolateQuatXform_Target
{
	struct FQuat Target;  // 0x0 (0x0)
	struct FTransform Value;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatCeil
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatCeil : FRigUnit_MathFloatBase
{
	float Value;  // 0x8 (0x8)
	float Result;  // 0xC (0xC)
	int32_t Int;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatToInt
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathFloatToInt : FRigUnit_MathFloatBase
{
	float Value;  // 0x8 (0x8)
	int32_t Result;  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SpringInterpVector
// Size: 0x98(Inherited: 0x8)
struct FRigUnit_SpringInterpVector : FRigUnit_SimBase
{
	struct FVector Current;  // 0x8 (0x8)
	struct FVector Target;  // 0x20 (0x20)
	float Stiffness;  // 0x38 (0x38)
	float CriticalDamping;  // 0x3C (0x3C)
	float Mass;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)
	struct FVector Result;  // 0x48 (0x48)
	struct FVectorSpringState SpringState;  // 0x60 (0x60)


}; 
 
 // Function ControlRig.RigHierarchy.GetParentTransform
struct FGetParentTransform
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bInitial : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatRemap
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase
{
	float Value;  // 0x8 (0x8)
	float SourceMinimum;  // 0xC (0xC)
	float SourceMaximum;  // 0x10 (0x10)
	float TargetMinimum;  // 0x14 (0x14)
	float TargetMaximum;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bClamp : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	float Result;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatEquals
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatEquals : FRigUnit_MathFloatBase
{
	float A;  // 0x8 (0x8)
	float B;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function ControlRig.RigHierarchy.GetSelectedKeys
struct FGetSelectedKeys
{
	uint8_t InTypeFilter;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatNotEquals
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatNotEquals : FRigUnit_MathFloatBase
{
	float A;  // 0x8 (0x8)
	float B;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function ControlRig.RigHierarchyController.ImportCurves
struct FImportCurves
{
	struct USkeleton* InSkeleton;  // 0x0 (0x0)
	struct FName InNameSpace;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bSelectCurves : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool bSetupUndo : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool bPrintPythonCommand : 1;  // 0x12 (0x12)
	char pad_19[5];  // 0x13 (0x13)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatGreater
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatGreater : FRigUnit_MathFloatBase
{
	float A;  // 0x8 (0x8)
	float B;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyEqual
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathFloatIsNearlyEqual : FRigUnit_MathFloatBase
{
	float A;  // 0x8 (0x8)
	float B;  // 0xC (0xC)
	float Tolerance;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool Result : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function ControlRig.RigHierarchyController.ExportToText
struct FExportToText
{
	struct TArray<struct FRigElementKey> InKeys;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatDeg
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatDeg : FRigUnit_MathFloatUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatRad
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatRad : FRigUnit_MathFloatUnaryOp
{


}; 
 
 // Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex
struct FSetControlShapeTransformByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4[12];  // 0x4 (0x4)
	struct FTransform InTransform;  // 0x10 (0x10)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bInitial : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool bSetupUndo : 1;  // 0x71 (0x71)
	char pad_114[14];  // 0x72 (0x72)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatAcos
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatAcos : FRigUnit_MathFloatUnaryOp
{


}; 
 
 // Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue
struct FGetEulerTransformFromControlValue
{
	struct FRigControlValue InValue;  // 0x0 (0x0)
	struct FEulerTransform ReturnValue;  // 0xF0 (0xF0)
	char pad_312[8];  // 0x138 (0x138)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathFloatExponential
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathFloatExponential : FRigUnit_MathFloatUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_MathIntBase : FRigUnit_MathBase
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntAdd
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathIntAdd : FRigUnit_MathIntBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntMul
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathIntMul : FRigUnit_MathIntBinaryAggregateOp
{


}; 
 
 // Function ControlRig.RigHierarchy.GetChildren
struct FGetChildren
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bRecursive : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntDiv
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathIntDiv : FRigUnit_MathIntBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntMod
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathIntMod : FRigUnit_MathIntBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntPow
// Size: 0x18(Inherited: 0x18)
struct FRigUnit_MathIntPow : FRigUnit_MathIntBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntAbs
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathIntAbs : FRigUnit_MathIntUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntToFloat
// Size: 0x10(Inherited: 0x8)
struct FRigUnit_MathIntToFloat : FRigUnit_MathIntBase
{
	int32_t Value;  // 0x8 (0x8)
	float Result;  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntSign
// Size: 0x10(Inherited: 0x10)
struct FRigUnit_MathIntSign : FRigUnit_MathIntUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntGreater
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathIntGreater : FRigUnit_MathIntBase
{
	int32_t A;  // 0x8 (0x8)
	int32_t B;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntLess
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathIntLess : FRigUnit_MathIntBase
{
	int32_t A;  // 0x8 (0x8)
	int32_t B;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntLessEqual
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_MathIntLessEqual : FRigUnit_MathIntBase
{
	int32_t A;  // 0x8 (0x8)
	int32_t B;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Result : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathMatrixUnaryOp
// Size: 0x110(Inherited: 0x8)
struct FRigUnit_MathMatrixUnaryOp : FRigUnit_MathMatrixBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FMatrix Value;  // 0x10 (0x10)
	struct FMatrix Result;  // 0x90 (0x90)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathMatrixBinaryOp
// Size: 0x190(Inherited: 0x8)
struct FRigUnit_MathMatrixBinaryOp : FRigUnit_MathMatrixBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FMatrix A;  // 0x10 (0x10)
	struct FMatrix B;  // 0x90 (0x90)
	struct FMatrix Result;  // 0x110 (0x110)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathMatrixToTransform
// Size: 0xF0(Inherited: 0x8)
struct FRigUnit_MathMatrixToTransform : FRigUnit_MathMatrixBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FMatrix Value;  // 0x10 (0x10)
	struct FTransform Result;  // 0x90 (0x90)


}; 
 
 // Function ControlRig.RigHierarchy.CopyPose
struct FCopyPose
{
	struct URigHierarchy* InHierarchy;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bCurrent : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool bInitial : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool bWeights : 1;  // 0xA (0xA)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool bMatchPoseInGlobalIfNeeded : 1;  // 0xB (0xB)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathMatrixFromTransformV2
// Size: 0xF0(Inherited: 0x8)
struct FRigUnit_MathMatrixFromTransformV2 : FRigUnit_MathMatrixBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Value;  // 0x10 (0x10)
	struct FMatrix Result;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathMatrixFromVectors
// Size: 0xF0(Inherited: 0x8)
struct FRigUnit_MathMatrixFromVectors : FRigUnit_MathMatrixBase
{
	struct FVector Origin;  // 0x8 (0x8)
	struct FVector X;  // 0x20 (0x20)
	struct FVector Y;  // 0x38 (0x38)
	struct FVector Z;  // 0x50 (0x50)
	char pad_104[8];  // 0x68 (0x68)
	struct FMatrix Result;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathMatrixInverse
// Size: 0x110(Inherited: 0x110)
struct FRigUnit_MathMatrixInverse : FRigUnit_MathMatrixUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryOp
// Size: 0x70(Inherited: 0x8)
struct FRigUnit_MathQuaternionBinaryOp : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat A;  // 0x10 (0x10)
	struct FQuat B;  // 0x30 (0x30)
	struct FQuat Result;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotatorV2
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathQuaternionFromRotatorV2 : FRigUnit_MathQuaternionBase
{
	struct FRotator Value;  // 0x8 (0x8)
	struct FQuat Result;  // 0x20 (0x20)


}; 
 
 // Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
struct FGetGlobalControlShapeTransformByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bInitial : 1;  // 0x4 (0x4)
	char pad_5[11];  // 0x5 (0x5)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionFromTwoVectors
// Size: 0x60(Inherited: 0x8)
struct FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase
{
	struct FVector A;  // 0x8 (0x8)
	struct FVector B;  // 0x20 (0x20)
	char pad_56[8];  // 0x38 (0x38)
	struct FQuat Result;  // 0x40 (0x40)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionScaleV2
// Size: 0x60(Inherited: 0x8)
struct FRigUnit_MathQuaternionScaleV2 : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Value;  // 0x10 (0x10)
	float Factor;  // 0x30 (0x30)
	char pad_52[12];  // 0x34 (0x34)
	struct FQuat Result;  // 0x40 (0x40)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionToEuler
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Value;  // 0x10 (0x10)
	uint8_t RotationOrder;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct FVector Result;  // 0x38 (0x38)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionMul
// Size: 0x70(Inherited: 0x70)
struct FRigUnit_MathQuaternionMul : FRigUnit_MathQuaternionBinaryAggregateOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionSlerp
// Size: 0x80(Inherited: 0x8)
struct FRigUnit_MathQuaternionSlerp : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat A;  // 0x10 (0x10)
	struct FQuat B;  // 0x30 (0x30)
	float T;  // 0x50 (0x50)
	char pad_84[12];  // 0x54 (0x54)
	struct FQuat Result;  // 0x60 (0x60)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionEquals
// Size: 0x60(Inherited: 0x8)
struct FRigUnit_MathQuaternionEquals : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat A;  // 0x10 (0x10)
	struct FQuat B;  // 0x30 (0x30)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool Result : 1;  // 0x50 (0x50)
	char pad_81[15];  // 0x51 (0x51)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionNotEquals
// Size: 0x60(Inherited: 0x8)
struct FRigUnit_MathQuaternionNotEquals : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat A;  // 0x10 (0x10)
	struct FQuat B;  // 0x30 (0x30)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool Result : 1;  // 0x50 (0x50)
	char pad_81[15];  // 0x51 (0x51)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionSelectBool
// Size: 0x70(Inherited: 0x8)
struct FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool Condition : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FQuat IfTrue;  // 0x10 (0x10)
	struct FQuat IfFalse;  // 0x30 (0x30)
	struct FQuat Result;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorLengthSquared
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_MathVectorLengthSquared : FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8 (0x8)
	float Result;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function ControlRig.ControlRigPoseAsset.ReplaceControlName
struct FReplaceControlName
{
	struct FName CurrentName;  // 0x0 (0x0)
	struct FName NewName;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionDot
// Size: 0x60(Inherited: 0x8)
struct FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat A;  // 0x10 (0x10)
	struct FQuat B;  // 0x30 (0x30)
	float Result;  // 0x50 (0x50)
	char pad_84[12];  // 0x54 (0x54)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorClampLength
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8 (0x8)
	float MinimumLength;  // 0x20 (0x20)
	float MaximumLength;  // 0x24 (0x24)
	struct FVector Result;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionGetAxis
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Quaternion;  // 0x10 (0x10)
	enum class EAxis Axis;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct FVector Result;  // 0x38 (0x38)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatFloat
// Size: 0x110(Inherited: 0xF0)
struct FRigUnit_MathRBFInterpolateQuatFloat : FRigUnit_MathRBFInterpolateQuatBase
{
	struct TArray<struct FMathRBFInterpolateQuatFloat_Target> Targets;  // 0xF0 (0xF0)
	float Output;  // 0x100 (0x100)
	char pad_260[12];  // 0x104 (0x104)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionMakeRelative
// Size: 0x70(Inherited: 0x8)
struct FRigUnit_MathQuaternionMakeRelative : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Global;  // 0x10 (0x10)
	struct FQuat Parent;  // 0x30 (0x30)
	struct FQuat Local;  // 0x50 (0x50)


}; 
 
 // Function ControlRig.RigHierarchy.SetTransformArrayMetadata
struct FSetTransformArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FTransform> InValue;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionMakeAbsolute
// Size: 0x70(Inherited: 0x8)
struct FRigUnit_MathQuaternionMakeAbsolute : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Local;  // 0x10 (0x10)
	struct FQuat Parent;  // 0x30 (0x30)
	struct FQuat Global;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathQuaternionMirrorTransform
// Size: 0xC0(Inherited: 0x8)
struct FRigUnit_MathQuaternionMirrorTransform : FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Value;  // 0x10 (0x10)
	enum class EAxis MirrorAxis;  // 0x30 (0x30)
	enum class EAxis AxisToFlip;  // 0x31 (0x31)
	char pad_50[14];  // 0x32 (0x32)
	struct FTransform CentralTransform;  // 0x40 (0x40)
	struct FQuat Result;  // 0xA0 (0xA0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatBase
// Size: 0xF0(Inherited: 0x8)
struct FRigUnit_MathRBFInterpolateQuatBase : FRigUnit_MathRBFInterpolateBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Input;  // 0x10 (0x10)
	uint8_t DistanceFunction;  // 0x30 (0x30)
	uint8_t SmoothingFunction;  // 0x31 (0x31)
	char pad_50[2];  // 0x32 (0x32)
	float SmoothingAngle;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bNormalizeOutput : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FVector TwistAxis;  // 0x40 (0x40)
	char pad_88[8];  // 0x58 (0x58)
	struct FRigUnit_MathRBFInterpolateQuatWorkData WorkData;  // 0x60 (0x60)


}; 
 
 // ScriptStruct ControlRig.MathRBFInterpolateQuatFloat_Target
struct FMathRBFInterpolateQuatFloat_Target
{
	struct FQuat Target;  // 0x0 (0x0)
	float Value;  // 0x20 (0x20)
	char pad_36[12];  // 0x24 (0x24)


}; 
 
 // ScriptStruct ControlRig.MathRBFInterpolateQuatVector_Target
struct FMathRBFInterpolateQuatVector_Target
{
	struct FQuat Target;  // 0x0 (0x0)
	struct FVector Value;  // 0x20 (0x20)
	char pad_56[8];  // 0x38 (0x38)


}; 
 
 // Function ControlRig.RigHierarchy.Num
struct FNum
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatVector
// Size: 0x120(Inherited: 0xF0)
struct FRigUnit_MathRBFInterpolateQuatVector : FRigUnit_MathRBFInterpolateQuatBase
{
	struct TArray<struct FMathRBFInterpolateQuatVector_Target> Targets;  // 0xF0 (0xF0)
	struct FVector Output;  // 0x100 (0x100)
	char pad_280[8];  // 0x118 (0x118)


}; 
 
 // ScriptStruct ControlRig.MathRBFInterpolateQuatColor_Target
struct FMathRBFInterpolateQuatColor_Target
{
	struct FQuat Target;  // 0x0 (0x0)
	struct FLinearColor Value;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorColor
// Size: 0xE0(Inherited: 0xC0)
struct FRigUnit_MathRBFInterpolateVectorColor : FRigUnit_MathRBFInterpolateVectorBase
{
	struct TArray<struct FMathRBFInterpolateVectorColor_Target> Targets;  // 0xC0 (0xC0)
	struct FLinearColor Output;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatColor
// Size: 0x110(Inherited: 0xF0)
struct FRigUnit_MathRBFInterpolateQuatColor : FRigUnit_MathRBFInterpolateQuatBase
{
	struct TArray<struct FMathRBFInterpolateQuatColor_Target> Targets;  // 0xF0 (0xF0)
	struct FLinearColor Output;  // 0x100 (0x100)


}; 
 
 // ScriptStruct ControlRig.MathRBFInterpolateQuatQuat_Target
struct FMathRBFInterpolateQuatQuat_Target
{
	struct FQuat Target;  // 0x0 (0x0)
	struct FQuat Value;  // 0x20 (0x20)


}; 
 
 // Function ControlRig.RigHierarchy.GetKey
struct FGetKey
{
	int32_t InElementIndex;  // 0x0 (0x0)
	struct FRigElementKey ReturnValue;  // 0x4 (0x4)


}; 
 
 // ScriptStruct ControlRig.RigUnit_VerletIntegrateVector
// Size: 0xD8(Inherited: 0x8)
struct FRigUnit_VerletIntegrateVector : FRigUnit_SimBase
{
	struct FVector Target;  // 0x8 (0x8)
	float Strength;  // 0x20 (0x20)
	float Damp;  // 0x24 (0x24)
	float Blend;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct FVector Force;  // 0x30 (0x30)
	struct FVector Position;  // 0x48 (0x48)
	struct FVector Velocity;  // 0x60 (0x60)
	struct FVector Acceleration;  // 0x78 (0x78)
	struct FCRSimPoint Point;  // 0x90 (0x90)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool bInitialized : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatQuat
// Size: 0x120(Inherited: 0xF0)
struct FRigUnit_MathRBFInterpolateQuatQuat : FRigUnit_MathRBFInterpolateQuatBase
{
	struct TArray<struct FMathRBFInterpolateQuatQuat_Target> Targets;  // 0xF0 (0xF0)
	struct FQuat Output;  // 0x100 (0x100)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatXform
// Size: 0x160(Inherited: 0xF0)
struct FRigUnit_MathRBFInterpolateQuatXform : FRigUnit_MathRBFInterpolateQuatBase
{
	struct TArray<struct FMathRBFInterpolateQuatXform_Target> Targets;  // 0xF0 (0xF0)
	struct FTransform Output;  // 0x100 (0x100)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorMin
// Size: 0x50(Inherited: 0x50)
struct FRigUnit_MathVectorMin : FRigUnit_MathVectorBinaryAggregateOp
{


}; 
 
 // Function ControlRig.RigHierarchy.GetTransformArrayMetadata
struct FGetTransformArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FTransform> ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.MathRBFInterpolateVectorFloat_Target
struct FMathRBFInterpolateVectorFloat_Target
{
	struct FVector Target;  // 0x0 (0x0)
	float Value;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorFloat
// Size: 0xE0(Inherited: 0xC0)
struct FRigUnit_MathRBFInterpolateVectorFloat : FRigUnit_MathRBFInterpolateVectorBase
{
	struct TArray<struct FMathRBFInterpolateVectorFloat_Target> Targets;  // 0xC0 (0xC0)
	float Output;  // 0xD0 (0xD0)
	char pad_212[12];  // 0xD4 (0xD4)


}; 
 
 // ScriptStruct ControlRig.MathRBFInterpolateVectorVector_Target
struct FMathRBFInterpolateVectorVector_Target
{
	struct FVector Target;  // 0x0 (0x0)
	struct FVector Value;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorVector
// Size: 0xF0(Inherited: 0xC0)
struct FRigUnit_MathRBFInterpolateVectorVector : FRigUnit_MathRBFInterpolateVectorBase
{
	struct TArray<struct FMathRBFInterpolateVectorVector_Target> Targets;  // 0xC0 (0xC0)
	struct FVector Output;  // 0xD0 (0xD0)
	char pad_232[8];  // 0xE8 (0xE8)


}; 
 
 // ScriptStruct ControlRig.MathRBFInterpolateVectorColor_Target
struct FMathRBFInterpolateVectorColor_Target
{
	struct FVector Target;  // 0x0 (0x0)
	struct FLinearColor Value;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorQuat
// Size: 0xF0(Inherited: 0xC0)
struct FRigUnit_MathRBFInterpolateVectorQuat : FRigUnit_MathRBFInterpolateVectorBase
{
	struct TArray<struct FMathRBFInterpolateVectorQuat_Target> Targets;  // 0xC0 (0xC0)
	struct FQuat Output;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorDistance
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathVectorDistance : FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8 (0x8)
	struct FVector B;  // 0x20 (0x20)
	float Result;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_MathTransformBase : FRigUnit_MathBase
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_DeltaFromPreviousVector
// Size: 0x68(Inherited: 0x8)
struct FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase
{
	struct FVector Value;  // 0x8 (0x8)
	struct FVector Delta;  // 0x20 (0x20)
	struct FVector PreviousValue;  // 0x38 (0x38)
	struct FVector Cache;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformUnaryOp
// Size: 0xD0(Inherited: 0x8)
struct FRigUnit_MathTransformUnaryOp : FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Value;  // 0x10 (0x10)
	struct FTransform Result;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorNotEquals
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathVectorNotEquals : FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8 (0x8)
	struct FVector B;  // 0x20 (0x20)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool Result : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformBinaryAggregateOp
// Size: 0x130(Inherited: 0x8)
struct FRigUnit_MathTransformBinaryAggregateOp : FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform A;  // 0x10 (0x10)
	struct FTransform B;  // 0x70 (0x70)
	struct FTransform Result;  // 0xD0 (0xD0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransform
// Size: 0xB0(Inherited: 0x8)
struct FRigUnit_MathTransformFromEulerTransform : FRigUnit_MathTransformBase
{
	struct FEulerTransform EulerTransform;  // 0x8 (0x8)
	struct FTransform Result;  // 0x50 (0x50)


}; 
 
 // Function ControlRig.RigHierarchy.GetInt32ArrayMetadata
struct FGetInt32ArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<int32_t> ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransformV2
// Size: 0xB0(Inherited: 0x8)
struct FRigUnit_MathTransformFromEulerTransformV2 : FRigUnit_MathTransformBase
{
	struct FEulerTransform Value;  // 0x8 (0x8)
	struct FTransform Result;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformMakeAbsolute
// Size: 0x130(Inherited: 0x8)
struct FRigUnit_MathTransformMakeAbsolute : FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Local;  // 0x10 (0x10)
	struct FTransform Parent;  // 0x70 (0x70)
	struct FTransform Global;  // 0xD0 (0xD0)


}; 
 
 // Function ControlRig.ControlRigComponent.OnPostForwardsSolve
struct FOnPostForwardsSolve
{
	struct UControlRigComponent* Component;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformTransformVector
// Size: 0xA0(Inherited: 0x8)
struct FRigUnit_MathTransformTransformVector : FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Transform;  // 0x10 (0x10)
	struct FVector Location;  // 0x70 (0x70)
	struct FVector Result;  // 0x88 (0x88)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformFromSRT
// Size: 0x110(Inherited: 0x8)
struct FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase
{
	struct FVector Location;  // 0x8 (0x8)
	struct FVector Rotation;  // 0x20 (0x20)
	uint8_t RotationOrder;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FVector Scale;  // 0x40 (0x40)
	char pad_88[8];  // 0x58 (0x58)
	struct FTransform Transform;  // 0x60 (0x60)
	struct FEulerTransform EulerTransform;  // 0xC0 (0xC0)
	char pad_264[8];  // 0x108 (0x108)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathTransformArrayToSRT
// Size: 0x48(Inherited: 0x8)
struct FRigUnit_MathTransformArrayToSRT : FRigUnit_MathTransformBase
{
	struct TArray<struct FTransform> Transforms;  // 0x8 (0x8)
	struct TArray<struct FVector> Translations;  // 0x18 (0x18)
	struct TArray<struct FQuat> Rotations;  // 0x28 (0x28)
	struct TArray<struct FVector> Scales;  // 0x38 (0x38)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorBase
// Size: 0x8(Inherited: 0x8)
struct FRigUnit_MathVectorBase : FRigUnit_MathBase
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorUnaryOp
// Size: 0x38(Inherited: 0x8)
struct FRigUnit_MathVectorUnaryOp : FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8 (0x8)
	struct FVector Result;  // 0x20 (0x20)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorBinaryOp
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_MathVectorBinaryOp : FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8 (0x8)
	struct FVector B;  // 0x20 (0x20)
	struct FVector Result;  // 0x38 (0x38)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorBinaryAggregateOp
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_MathVectorBinaryAggregateOp : FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8 (0x8)
	struct FVector B;  // 0x20 (0x20)
	struct FVector Result;  // 0x38 (0x38)


}; 
 
 // Function ControlRig.ControlRigComponent.OnPreConstruction
struct FOnPreConstruction
{
	struct UControlRigComponent* Component;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorMul
// Size: 0x50(Inherited: 0x50)
struct FRigUnit_MathVectorMul : FRigUnit_MathVectorBinaryAggregateOp
{


}; 
 
 // Function ControlRig.RigHierarchy.GetIndex_ForBlueprint
struct FGetIndex_ForBlueprint
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorRound
// Size: 0x38(Inherited: 0x38)
struct FRigUnit_MathVectorRound : FRigUnit_MathVectorUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorSign
// Size: 0x38(Inherited: 0x38)
struct FRigUnit_MathVectorSign : FRigUnit_MathVectorUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorClamp
// Size: 0x68(Inherited: 0x8)
struct FRigUnit_MathVectorClamp : FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8 (0x8)
	struct FVector Minimum;  // 0x20 (0x20)
	struct FVector Maximum;  // 0x38 (0x38)
	struct FVector Result;  // 0x50 (0x50)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorLerp
// Size: 0x58(Inherited: 0x8)
struct FRigUnit_MathVectorLerp : FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8 (0x8)
	struct FVector B;  // 0x20 (0x20)
	float T;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct FVector Result;  // 0x40 (0x40)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorEquals
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathVectorEquals : FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8 (0x8)
	struct FVector B;  // 0x20 (0x20)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool Result : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorDeg
// Size: 0x38(Inherited: 0x38)
struct FRigUnit_MathVectorDeg : FRigUnit_MathVectorUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorLength
// Size: 0x28(Inherited: 0x8)
struct FRigUnit_MathVectorLength : FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8 (0x8)
	float Result;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function ControlRig.RigHierarchy.SetPose_ForBlueprint
struct FSetPose_ForBlueprint
{
	struct FRigPose InPose;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorCross
// Size: 0x50(Inherited: 0x50)
struct FRigUnit_MathVectorCross : FRigUnit_MathVectorBinaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_TimeOffsetFloat
// Size: 0x48(Inherited: 0x8)
struct FRigUnit_TimeOffsetFloat : FRigUnit_SimBase
{
	float Value;  // 0x8 (0x8)
	float SecondsAgo;  // 0xC (0xC)
	int32_t BufferSize;  // 0x10 (0x10)
	float TimeRange;  // 0x14 (0x14)
	float Result;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct TArray<float> Buffer;  // 0x20 (0x20)
	struct TArray<float> DeltaTimes;  // 0x30 (0x30)
	int32_t LastInsertIndex;  // 0x40 (0x40)
	int32_t UpperBound;  // 0x44 (0x44)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorDot
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathVectorDot : FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8 (0x8)
	struct FVector B;  // 0x20 (0x20)
	float Result;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 // Function ControlRig.RigHierarchy.GetPreviousName
struct FGetPreviousName
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	struct FName ReturnValue;  // 0xC (0xC)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorUnit
// Size: 0x38(Inherited: 0x38)
struct FRigUnit_MathVectorUnit : FRigUnit_MathVectorUnaryOp
{


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorSetLength
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathVectorSetLength : FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8 (0x8)
	float Length;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FVector Result;  // 0x28 (0x28)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AlphaInterpQuat
// Size: 0xC0(Inherited: 0x8)
struct FRigUnit_AlphaInterpQuat : FRigUnit_SimBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Value;  // 0x10 (0x10)
	float Scale;  // 0x30 (0x30)
	float Bias;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bMapRange : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	struct FInputRange InRange;  // 0x3C (0x3C)
	struct FInputRange OutRange;  // 0x44 (0x44)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bClampResult : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	float ClampMin;  // 0x50 (0x50)
	float ClampMax;  // 0x54 (0x54)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool bInterpResult : 1;  // 0x58 (0x58)
	char pad_89[3];  // 0x59 (0x59)
	float InterpSpeedIncreasing;  // 0x5C (0x5C)
	float InterpSpeedDecreasing;  // 0x60 (0x60)
	char pad_100[12];  // 0x64 (0x64)
	struct FQuat Result;  // 0x70 (0x70)
	struct FInputScaleBiasClamp ScaleBiasClamp;  // 0x90 (0x90)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorMakeAbsolute
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_MathVectorMakeAbsolute : FRigUnit_MathVectorBase
{
	struct FVector Local;  // 0x8 (0x8)
	struct FVector Parent;  // 0x20 (0x20)
	struct FVector Global;  // 0x38 (0x38)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorMirror
// Size: 0x50(Inherited: 0x8)
struct FRigUnit_MathVectorMirror : FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8 (0x8)
	struct FVector Normal;  // 0x20 (0x20)
	struct FVector Result;  // 0x38 (0x38)


}; 
 
 // Function ControlRig.RigHierarchy.SetControlVisibilityByIndex
struct FSetControlVisibilityByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bVisibility : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorParallel
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_MathVectorParallel : FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8 (0x8)
	struct FVector B;  // 0x20 (0x20)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool Result : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // Function ControlRig.ControlRigComponent.GetControlVector2D
struct FGetControlVector2D
{
	struct FName ControlName;  // 0x0 (0x0)
	struct FVector2D ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
// Size: 0xA0(Inherited: 0x8)
struct FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase
{
	struct FCRFourPointBezier Bezier;  // 0x8 (0x8)
	float T;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)
	struct FVector Result;  // 0x70 (0x70)
	struct FVector Tangent;  // 0x88 (0x88)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
// Size: 0x68(Inherited: 0x8)
struct FRigUnit_MathVectorMakeBezierFourPoint : FRigUnit_MathVectorBase
{
	struct FCRFourPointBezier Bezier;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathIntersectPlane
// Size: 0x88(Inherited: 0x8)
struct FRigUnit_MathIntersectPlane : FRigUnit_MathVectorBase
{
	struct FVector Start;  // 0x8 (0x8)
	struct FVector Direction;  // 0x20 (0x20)
	struct FVector PlanePoint;  // 0x38 (0x38)
	struct FVector PlaneNormal;  // 0x50 (0x50)
	struct FVector Result;  // 0x68 (0x68)
	float Distance;  // 0x80 (0x80)
	char pad_132[4];  // 0x84 (0x84)


}; 
 
 // ScriptStruct ControlRig.RigUnit_MathVectorMirrorTransform
// Size: 0xB0(Inherited: 0x8)
struct FRigUnit_MathVectorMirrorTransform : FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8 (0x8)
	enum class EAxis MirrorAxis;  // 0x20 (0x20)
	enum class EAxis AxisToFlip;  // 0x21 (0x21)
	char pad_34[14];  // 0x22 (0x22)
	struct FTransform CentralTransform;  // 0x30 (0x30)
	struct FVector Result;  // 0x90 (0x90)
	char pad_168[8];  // 0xA8 (0xA8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_NoiseVector
// Size: 0x88(Inherited: 0x8)
struct FRigUnit_NoiseVector : FRigUnit_MathBase
{
	struct FVector Position;  // 0x8 (0x8)
	struct FVector Speed;  // 0x20 (0x20)
	struct FVector Frequency;  // 0x38 (0x38)
	float Minimum;  // 0x50 (0x50)
	float Maximum;  // 0x54 (0x54)
	struct FVector Result;  // 0x58 (0x58)
	struct FVector Time;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_RandomFloat
// Size: 0x30(Inherited: 0x8)
struct FRigUnit_RandomFloat : FRigUnit_MathBase
{
	int32_t Seed;  // 0x8 (0x8)
	float Minimum;  // 0xC (0xC)
	float Maximum;  // 0x10 (0x10)
	float Duration;  // 0x14 (0x14)
	float Result;  // 0x18 (0x18)
	float LastResult;  // 0x1C (0x1C)
	int32_t LastSeed;  // 0x20 (0x20)
	int32_t BaseSeed;  // 0x24 (0x24)
	float TimeLeft;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_RandomVector
// Size: 0x58(Inherited: 0x8)
struct FRigUnit_RandomVector : FRigUnit_MathBase
{
	int32_t Seed;  // 0x8 (0x8)
	float Minimum;  // 0xC (0xC)
	float Maximum;  // 0x10 (0x10)
	float Duration;  // 0x14 (0x14)
	struct FVector Result;  // 0x18 (0x18)
	struct FVector LastResult;  // 0x30 (0x30)
	int32_t LastSeed;  // 0x48 (0x48)
	int32_t BaseSeed;  // 0x4C (0x4C)
	float TimeLeft;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AccumulateVectorAdd
// Size: 0x70(Inherited: 0x8)
struct FRigUnit_AccumulateVectorAdd : FRigUnit_AccumulateBase
{
	struct FVector Increment;  // 0x8 (0x8)
	struct FVector InitialValue;  // 0x20 (0x20)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bIntegrateDeltaTime : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FVector Result;  // 0x40 (0x40)
	struct FVector AccumulatedValue;  // 0x58 (0x58)


}; 
 
 // Function ControlRig.RigHierarchy.GetCurveKeys
struct FGetCurveKeys
{
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AccumulateFloatMul
// Size: 0x20(Inherited: 0x8)
struct FRigUnit_AccumulateFloatMul : FRigUnit_AccumulateBase
{
	float Multiplier;  // 0x8 (0x8)
	float InitialValue;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bIntegrateDeltaTime : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	float Result;  // 0x14 (0x14)
	float AccumulatedValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AccumulateQuatMul
// Size: 0xA0(Inherited: 0x8)
struct FRigUnit_AccumulateQuatMul : FRigUnit_AccumulateBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Multiplier;  // 0x10 (0x10)
	struct FQuat InitialValue;  // 0x30 (0x30)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bFlipOrder : 1;  // 0x50 (0x50)
	char pad_81_1 : 7;  // 0x51 (0x51)
	bool bIntegrateDeltaTime : 1;  // 0x51 (0x51)
	char pad_82[14];  // 0x52 (0x52)
	struct FQuat Result;  // 0x60 (0x60)
	struct FQuat AccumulatedValue;  // 0x80 (0x80)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AccumulateVectorLerp
// Size: 0x70(Inherited: 0x8)
struct FRigUnit_AccumulateVectorLerp : FRigUnit_AccumulateBase
{
	struct FVector TargetValue;  // 0x8 (0x8)
	struct FVector InitialValue;  // 0x20 (0x20)
	float Blend;  // 0x38 (0x38)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool bIntegrateDeltaTime : 1;  // 0x3C (0x3C)
	char pad_61[3];  // 0x3D (0x3D)
	struct FVector Result;  // 0x40 (0x40)
	struct FVector AccumulatedValue;  // 0x58 (0x58)


}; 
 
 // ScriptStruct ControlRig.RigUnit_AlphaInterp
// Size: 0x78(Inherited: 0x8)
struct FRigUnit_AlphaInterp : FRigUnit_SimBase
{
	float Value;  // 0x8 (0x8)
	float Scale;  // 0xC (0xC)
	float Bias;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bMapRange : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FInputRange InRange;  // 0x18 (0x18)
	struct FInputRange OutRange;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bClampResult : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	float ClampMin;  // 0x2C (0x2C)
	float ClampMax;  // 0x30 (0x30)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool bInterpResult : 1;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	float InterpSpeedIncreasing;  // 0x38 (0x38)
	float InterpSpeedDecreasing;  // 0x3C (0x3C)
	float Result;  // 0x40 (0x40)
	struct FInputScaleBiasClamp ScaleBiasClamp;  // 0x44 (0x44)
	char pad_116[4];  // 0x74 (0x74)


}; 
 
 // Function ControlRig.RigHierarchy.IsControllerAvailable
struct FIsControllerAvailable
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DeltaFromPreviousFloat
// Size: 0x18(Inherited: 0x8)
struct FRigUnit_DeltaFromPreviousFloat : FRigUnit_SimBase
{
	float Value;  // 0x8 (0x8)
	float Delta;  // 0xC (0xC)
	float PreviousValue;  // 0x10 (0x10)
	float Cache;  // 0x14 (0x14)


}; 
 
 // Function ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex
struct FGetControlPreferredRotatorByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bInitial : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FRotator ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ControlRig.RigUnit_DeltaFromPreviousQuat
// Size: 0x90(Inherited: 0x8)
struct FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Value;  // 0x10 (0x10)
	struct FQuat Delta;  // 0x30 (0x30)
	struct FQuat PreviousValue;  // 0x50 (0x50)
	struct FQuat Cache;  // 0x70 (0x70)


}; 
 
 // ScriptStruct ControlRig.RigUnit_KalmanVector
// Size: 0x58(Inherited: 0x8)
struct FRigUnit_KalmanVector : FRigUnit_SimBase
{
	struct FVector Value;  // 0x8 (0x8)
	int32_t BufferSize;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FVector Result;  // 0x28 (0x28)
	struct TArray<struct FVector> Buffer;  // 0x40 (0x40)
	int32_t LastInsertIndex;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 // Function ControlRig.RigHierarchyController.RemoveParent
struct FRemoveParent
{
	struct FRigElementKey InChild;  // 0x0 (0x0)
	struct FRigElementKey InParent;  // 0xC (0xC)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bMaintainGlobalTransform : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bSetupUndo : 1;  // 0x19 (0x19)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	bool bPrintPythonCommand : 1;  // 0x1A (0x1A)
	char pad_27_1 : 7;  // 0x1B (0x1B)
	bool ReturnValue : 1;  // 0x1B (0x1B)


}; 
 
 // ScriptStruct ControlRig.RigUnit_KalmanTransform
// Size: 0x100(Inherited: 0x8)
struct FRigUnit_KalmanTransform : FRigUnit_SimBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Value;  // 0x10 (0x10)
	int32_t BufferSize;  // 0x70 (0x70)
	char pad_116[12];  // 0x74 (0x74)
	struct FTransform Result;  // 0x80 (0x80)
	struct TArray<struct FTransform> Buffer;  // 0xE0 (0xE0)
	int32_t LastInsertIndex;  // 0xF0 (0xF0)
	char pad_244[12];  // 0xF4 (0xF4)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
struct FRigUnit_PointSimulation_BoneTarget
{
	struct FName bone;  // 0x0 (0x0)
	int32_t TranslationPoint;  // 0x8 (0x8)
	int32_t PrimaryAimPoint;  // 0xC (0xC)
	int32_t SecondaryAimPoint;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.ControlRigComponent.Update
struct FUpdate
{
	float DeltaTime;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_PointSimulation
// Size: 0x250(Inherited: 0x40)
struct FRigUnit_PointSimulation : FRigUnit_SimBaseMutable
{
	struct TArray<struct FCRSimPoint> Points;  // 0x40 (0x40)
	struct TArray<struct FCRSimLinearSpring> Links;  // 0x50 (0x50)
	struct TArray<struct FCRSimPointForce> Forces;  // 0x60 (0x60)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes;  // 0x70 (0x70)
	float SimulatedStepsPerSecond;  // 0x80 (0x80)
	uint8_t IntegratorType;  // 0x84 (0x84)
	char pad_133[3];  // 0x85 (0x85)
	float VerletBlend;  // 0x88 (0x88)
	char pad_140[4];  // 0x8C (0x8C)
	struct TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets;  // 0x90 (0x90)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool bLimitLocalPosition : 1;  // 0xA0 (0xA0)
	char pad_161_1 : 7;  // 0xA1 (0xA1)
	bool bPropagateToChildren : 1;  // 0xA1 (0xA1)
	char pad_162[6];  // 0xA2 (0xA2)
	struct FVector PrimaryAimAxis;  // 0xA8 (0xA8)
	struct FVector SecondaryAimAxis;  // 0xC0 (0xC0)
	char pad_216[8];  // 0xD8 (0xD8)
	struct FRigUnit_PointSimulation_DebugSettings DebugSettings;  // 0xE0 (0xE0)
	struct FCRFourPointBezier Bezier;  // 0x160 (0x160)
	struct FRigUnit_PointSimulation_WorkData WorkData;  // 0x1C0 (0x1C0)
	char pad_584[8];  // 0x248 (0x248)


}; 
 
 // Function ControlRig.RigHierarchy.GetTransformMetadata
struct FGetTransformMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[12];  // 0x14 (0x14)
	struct FTransform DefaultValue;  // 0x20 (0x20)
	struct FTransform ReturnValue;  // 0x80 (0x80)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SpringInterp
// Size: 0x30(Inherited: 0x8)
struct FRigUnit_SpringInterp : FRigUnit_SimBase
{
	float Current;  // 0x8 (0x8)
	float Target;  // 0xC (0xC)
	float Stiffness;  // 0x10 (0x10)
	float CriticalDamping;  // 0x14 (0x14)
	float Mass;  // 0x18 (0x18)
	float Result;  // 0x1C (0x1C)
	struct FFloatSpringState SpringState;  // 0x20 (0x20)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SpringInterpV2
// Size: 0x40(Inherited: 0x8)
struct FRigUnit_SpringInterpV2 : FRigUnit_SimBase
{
	float Target;  // 0x8 (0x8)
	float Strength;  // 0xC (0xC)
	float CriticalDamping;  // 0x10 (0x10)
	float Force;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bUseCurrentInput : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	float Current;  // 0x1C (0x1C)
	float TargetVelocityAmount;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool bInitializeFromTarget : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	float Result;  // 0x28 (0x28)
	float Velocity;  // 0x2C (0x2C)
	float SimulatedResult;  // 0x30 (0x30)
	struct FFloatSpringState SpringState;  // 0x34 (0x34)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SpringInterpVectorV2
// Size: 0xE8(Inherited: 0x8)
struct FRigUnit_SpringInterpVectorV2 : FRigUnit_SimBase
{
	struct FVector Target;  // 0x8 (0x8)
	float Strength;  // 0x20 (0x20)
	float CriticalDamping;  // 0x24 (0x24)
	struct FVector Force;  // 0x28 (0x28)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bUseCurrentInput : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct FVector Current;  // 0x48 (0x48)
	float TargetVelocityAmount;  // 0x60 (0x60)
	char pad_100_1 : 7;  // 0x64 (0x64)
	bool bInitializeFromTarget : 1;  // 0x64 (0x64)
	char pad_101[3];  // 0x65 (0x65)
	struct FVector Result;  // 0x68 (0x68)
	struct FVector Velocity;  // 0x80 (0x80)
	struct FVector SimulatedResult;  // 0x98 (0x98)
	struct FVectorSpringState SpringState;  // 0xB0 (0xB0)


}; 
 
 // ScriptStruct ControlRig.RigUnit_SpringInterpQuaternionV2
// Size: 0x130(Inherited: 0x8)
struct FRigUnit_SpringInterpQuaternionV2 : FRigUnit_SimBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat Target;  // 0x10 (0x10)
	float Strength;  // 0x30 (0x30)
	float CriticalDamping;  // 0x34 (0x34)
	struct FVector Torque;  // 0x38 (0x38)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bUseCurrentInput : 1;  // 0x50 (0x50)
	char pad_81[15];  // 0x51 (0x51)
	struct FQuat Current;  // 0x60 (0x60)
	float TargetVelocityAmount;  // 0x80 (0x80)
	char pad_132_1 : 7;  // 0x84 (0x84)
	bool bInitializeFromTarget : 1;  // 0x84 (0x84)
	char pad_133[11];  // 0x85 (0x85)
	struct FQuat Result;  // 0x90 (0x90)
	struct FVector AngularVelocity;  // 0xB0 (0xB0)
	char pad_200[8];  // 0xC8 (0xC8)
	struct FQuat SimulatedResult;  // 0xD0 (0xD0)
	struct FQuaternionSpringState SpringState;  // 0xF0 (0xF0)


}; 
 
 // Function ControlRig.ControlRigComponent.SetControlOffset
struct FSetControlOffset
{
	struct FName ControlName;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform OffsetTransform;  // 0x10 (0x10)
	uint8_t Space;  // 0x70 (0x70)
	char pad_113[15];  // 0x71 (0x71)


}; 
 
 // ScriptStruct ControlRig.RigUnit_TimeOffsetTransform
// Size: 0x110(Inherited: 0x8)
struct FRigUnit_TimeOffsetTransform : FRigUnit_SimBase
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Value;  // 0x10 (0x10)
	float SecondsAgo;  // 0x70 (0x70)
	int32_t BufferSize;  // 0x74 (0x74)
	float TimeRange;  // 0x78 (0x78)
	char pad_124[4];  // 0x7C (0x7C)
	struct FTransform Result;  // 0x80 (0x80)
	struct TArray<struct FTransform> Buffer;  // 0xE0 (0xE0)
	struct TArray<float> DeltaTimes;  // 0xF0 (0xF0)
	int32_t LastInsertIndex;  // 0x100 (0x100)
	int32_t UpperBound;  // 0x104 (0x104)
	char pad_264[8];  // 0x108 (0x108)


}; 
 
 // Function ControlRig.RigHierarchy.Contains_ForBlueprint
struct FContains_ForBlueprint
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
struct FFindControl_ForBlueprintOnly
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct FRigControlElement ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.ControlRigShapeActor.OnTransformChanged
struct FOnTransformChanged
{
	struct FTransform NewTransform;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
struct FFindNull_ForBlueprintOnly
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct FRigNullElement ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchy.GetBoneKeys
struct FGetBoneKeys
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bTraverse : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function ControlRig.ControlRigComponent.SetControlScale
struct FSetControlScale
{
	struct FName ControlName;  // 0x0 (0x0)
	struct FVector Value;  // 0x8 (0x8)
	uint8_t Space;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function ControlRig.RigHierarchy.GetBoolMetadata
struct FGetBoolMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool DefaultValue : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool ReturnValue : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)


}; 
 
 // Function ControlRig.RigHierarchy.GetControlKeys
struct FGetControlKeys
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bTraverse : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function ControlRig.RigHierarchy.HasTag
struct FHasTag
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InTag;  // 0xC (0xC)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function ControlRig.RigHierarchy.GetControlValue
struct FGetControlValue
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	uint8_t InValueType;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FRigControlValue ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchy.GetControlValueByIndex
struct FGetControlValueByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	uint8_t InValueType;  // 0x4 (0x4)
	char pad_5[11];  // 0x5 (0x5)
	struct FRigControlValue ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchy.GetFirstParent
struct FGetFirstParent
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	struct FRigElementKey ReturnValue;  // 0xC (0xC)


}; 
 
 // Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
struct FGetGlobalControlOffsetTransformByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bInitial : 1;  // 0x4 (0x4)
	char pad_5[11];  // 0x5 (0x5)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.ControlRigShapeActor.GetGlobalTransform
struct FGetGlobalTransform
{
	struct FTransform ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.RigHierarchy.GetGlobalTransformByIndex
struct FGetGlobalTransformByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bInitial : 1;  // 0x4 (0x4)
	char pad_5[11];  // 0x5 (0x5)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchy.GetInt32Metadata
struct FGetInt32Metadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	int32_t DefaultValue;  // 0x14 (0x14)
	int32_t ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function ControlRig.RigHierarchy.GetKeys
struct FGetKeys
{
	struct TArray<int32_t> InElementIndices;  // 0x0 (0x0)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchy.GetLinearColorMetadata
struct FGetLinearColorMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	struct FLinearColor DefaultValue;  // 0x14 (0x14)
	struct FLinearColor ReturnValue;  // 0x24 (0x24)


}; 
 
 // Function ControlRig.RigHierarchy.GetLocalControlShapeTransform
struct FGetLocalControlShapeTransform
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bInitial : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchy.GetMetadataType
struct FGetMetadataType
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	uint8_t ReturnValue;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function ControlRig.RigHierarchy.GetNameArrayMetadata
struct FGetNameArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FName> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function ControlRig.RigHierarchy.GetNullKeys
struct FGetNullKeys
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bTraverse : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function ControlRig.RigHierarchy.GetNumberOfParents
struct FGetNumberOfParents
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0xC (0xC)


}; 
 
 // Function ControlRig.RigHierarchy.GetParentTransformByIndex
struct FGetParentTransformByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bInitial : 1;  // 0x4 (0x4)
	char pad_5[11];  // 0x5 (0x5)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchy.SetNameArrayMetadata
struct FSetNameArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FName> InValue;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata
struct FGetRigElementKeyArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function ControlRig.RigHierarchy.GetRigidBodyKeys
struct FGetRigidBodyKeys
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bTraverse : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
struct FGetTransformNoScaleFromControlValue
{
	struct FRigControlValue InValue;  // 0x0 (0x0)
	struct FTransformNoScale ReturnValue;  // 0xF0 (0xF0)


}; 
 
 // Function ControlRig.RigHierarchy.GetVectorArrayMetadata
struct FGetVectorArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FVector> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function ControlRig.RigHierarchy.GetVectorMetadata
struct FGetVectorMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct FVector DefaultValue;  // 0x18 (0x18)
	struct FVector ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function ControlRig.RigHierarchy.IsCurveValueSetByIndex
struct FIsCurveValueSetByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function ControlRig.ControlRigShapeActor.IsHovered
struct FIsHovered
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.RigHierarchy.IsSelected
struct FIsSelected
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function ControlRig.RigHierarchy.IsValidIndex
struct FIsValidIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function ControlRig.RigHierarchy.MakeControlValueFromInt
struct FMakeControlValueFromInt
{
	int32_t InValue;  // 0x0 (0x0)
	char pad_4[12];  // 0x4 (0x4)
	struct FRigControlValue ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchy.MakeControlValueFromRotator
struct FMakeControlValueFromRotator
{
	struct FRotator InValue;  // 0x0 (0x0)
	char pad_24[8];  // 0x18 (0x18)
	struct FRigControlValue ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function ControlRig.RigHierarchy.RemoveMetadata
struct FRemoveMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function ControlRig.RigHierarchy.SendAutoKeyEvent
struct FSendAutoKeyEvent
{
	struct FRigElementKey InElement;  // 0x0 (0x0)
	float InOffsetInSeconds;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bAsynchronous : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // Function ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex
struct FSetControlPreferredRotatorByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FRotator InValue;  // 0x8 (0x8)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bInitial : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool bFixEulerFlips : 1;  // 0x21 (0x21)
	char pad_34[6];  // 0x22 (0x22)


}; 
 
 // Function ControlRig.RigHierarchyController.SetControlSettings
struct FSetControlSettings
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct FRigControlSettings InSettings;  // 0x10 (0x10)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool bSetupUndo : 1;  // 0x290 (0x290)
	char pad_657_1 : 7;  // 0x291 (0x291)
	bool ReturnValue : 1;  // 0x291 (0x291)
	char pad_658[14];  // 0x292 (0x292)


}; 
 
 // Function ControlRig.RigHierarchy.SetControlShapeTransform
struct FSetControlShapeTransform
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct FTransform InTransform;  // 0x10 (0x10)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bInitial : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool bSetupUndo : 1;  // 0x71 (0x71)
	char pad_114[14];  // 0x72 (0x72)


}; 
 
 // Function ControlRig.RigHierarchy.SetControlValue
struct FSetControlValue
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct FRigControlValue InValue;  // 0x10 (0x10)
	uint8_t InValueType;  // 0x100 (0x100)
	char pad_257_1 : 7;  // 0x101 (0x101)
	bool bSetupUndo : 1;  // 0x101 (0x101)
	char pad_258_1 : 7;  // 0x102 (0x102)
	bool bPrintPythonCommands : 1;  // 0x102 (0x102)
	char pad_259[13];  // 0x103 (0x103)


}; 
 
 // Function ControlRig.RigHierarchy.SetCurveValue
struct FSetCurveValue
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	float InValue;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bSetupUndo : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // Function ControlRig.RigHierarchy.SetInt32ArrayMetadata
struct FSetInt32ArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<int32_t> InValue;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function ControlRig.RigHierarchy.SetLocalTransform
struct FSetLocalTransform
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct FTransform InTransform;  // 0x10 (0x10)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bInitial : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool bAffectChildren : 1;  // 0x71 (0x71)
	char pad_114_1 : 7;  // 0x72 (0x72)
	bool bSetupUndo : 1;  // 0x72 (0x72)
	char pad_115_1 : 7;  // 0x73 (0x73)
	bool bPrintPythonCommands : 1;  // 0x73 (0x73)
	char pad_116[12];  // 0x74 (0x74)


}; 
 
 // Function ControlRig.RigHierarchy.SetParentWeight
struct FSetParentWeight
{
	struct FRigElementKey InChild;  // 0x0 (0x0)
	struct FRigElementKey InParent;  // 0xC (0xC)
	struct FRigElementWeight InWeight;  // 0x18 (0x18)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool bInitial : 1;  // 0x24 (0x24)
	char pad_37_1 : 7;  // 0x25 (0x25)
	bool bAffectChildren : 1;  // 0x25 (0x25)
	char pad_38_1 : 7;  // 0x26 (0x26)
	bool ReturnValue : 1;  // 0x26 (0x26)
	char pad_39[1];  // 0x27 (0x27)


}; 
 
 // Function ControlRig.RigHierarchy.SetQuatArrayMetadata
struct FSetQuatArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FQuat> InValue;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function ControlRig.RigHierarchy.SetQuatMetadata
struct FSetQuatMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[12];  // 0x14 (0x14)
	struct FQuat InValue;  // 0x20 (0x20)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool ReturnValue : 1;  // 0x40 (0x40)
	char pad_65[15];  // 0x41 (0x41)


}; 
 
 // Function ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata
struct FSetRigElementKeyArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FRigElementKey> InValue;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function ControlRig.RigHierarchy.SetRotatorArrayMetadata
struct FSetRotatorArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FRotator> InValue;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function ControlRig.RigHierarchy.SetRotatorMetadata
struct FSetRotatorMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct FRotator InValue;  // 0x18 (0x18)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // Function ControlRig.RigHierarchy.UnsetCurveValueByIndex
struct FUnsetCurveValueByIndex
{
	int32_t InElementIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bSetupUndo : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function ControlRig.RigHierarchy.SetTag
struct FSetTag
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InTag;  // 0xC (0xC)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function ControlRig.RigHierarchy.SetTransformMetadata
struct FSetTransformMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[12];  // 0x14 (0x14)
	struct FTransform InValue;  // 0x20 (0x20)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool ReturnValue : 1;  // 0x80 (0x80)
	char pad_129[15];  // 0x81 (0x81)


}; 
 
 // Function ControlRig.RigHierarchy.SetVectorArrayMetadata
struct FSetVectorArrayMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FVector> InValue;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function ControlRig.RigHierarchy.SetVectorMetadata
struct FSetVectorMetadata
{
	struct FRigElementKey InItem;  // 0x0 (0x0)
	struct FName InMetadataName;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct FVector InValue;  // 0x18 (0x18)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // Function ControlRig.RigHierarchy.SortKeys
struct FSortKeys
{
	struct TArray<struct FRigElementKey> InKeys;  // 0x0 (0x0)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchy.SwitchToDefaultParent
struct FSwitchToDefaultParent
{
	struct FRigElementKey InChild;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bInitial : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bAffectChildren : 1;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool ReturnValue : 1;  // 0xE (0xE)
	char pad_15[1];  // 0xF (0xF)


}; 
 
 // Function ControlRig.RigHierarchy.SwitchToParent
struct FSwitchToParent
{
	struct FRigElementKey InChild;  // 0x0 (0x0)
	struct FRigElementKey InParent;  // 0xC (0xC)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bInitial : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bAffectChildren : 1;  // 0x19 (0x19)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	bool ReturnValue : 1;  // 0x1A (0x1A)
	char pad_27[1];  // 0x1B (0x1B)


}; 
 
 // Function ControlRig.RigHierarchy.SwitchToWorldSpace
struct FSwitchToWorldSpace
{
	struct FRigElementKey InChild;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bInitial : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bAffectChildren : 1;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool ReturnValue : 1;  // 0xE (0xE)
	char pad_15[1];  // 0xF (0xF)


}; 
 
 // Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
struct FAddMappedCompleteSkeletalMesh
{
	struct USkeletalMeshComponent* SkeletalMeshComponent;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.RigHierarchy.UnsetCurveValue
struct FUnsetCurveValue
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bSetupUndo : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function ControlRig.ControlRigComponent.AddMappedElements
struct FAddMappedElements
{
	struct TArray<struct FControlRigComponentMappedElement> NewMappedElements;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigComponent.SetInitialBoneTransform
struct FSetInitialBoneTransform
{
	struct FName BoneName;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform InitialTransform;  // 0x10 (0x10)
	uint8_t Space;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool bPropagateToChildren : 1;  // 0x71 (0x71)
	char pad_114[14];  // 0x72 (0x72)


}; 
 
 // Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
struct FAddMappedSkeletalMesh
{
	struct USkeletalMeshComponent* SkeletalMeshComponent;  // 0x0 (0x0)
	struct TArray<struct FControlRigComponentMappedBone> Bones;  // 0x8 (0x8)
	struct TArray<struct FControlRigComponentMappedCurve> Curves;  // 0x18 (0x18)


}; 
 
 // Function ControlRig.ControlRigComponent.GetBoneTransform
struct FGetBoneTransform
{
	struct FName BoneName;  // 0x0 (0x0)
	uint8_t Space;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.ControlRigComponent.GetControlBool
struct FGetControlBool
{
	struct FName ControlName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function ControlRig.ControlRigComponent.GetControlPosition
struct FGetControlPosition
{
	struct FName ControlName;  // 0x0 (0x0)
	uint8_t Space;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FVector ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.ControlRigComponent.GetControlRotator
struct FGetControlRotator
{
	struct FName ControlName;  // 0x0 (0x0)
	uint8_t Space;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FRotator ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.ControlRigComponent.GetControlScale
struct FGetControlScale
{
	struct FName ControlName;  // 0x0 (0x0)
	uint8_t Space;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FVector ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.ControlRigComponent.GetControlTransform
struct FGetControlTransform
{
	struct FName ControlName;  // 0x0 (0x0)
	uint8_t Space;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
struct FGetInitialSpaceTransform
{
	struct FName SpaceName;  // 0x0 (0x0)
	uint8_t Space;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.ControlRigComponent.GetSpaceTransform
struct FGetSpaceTransform
{
	struct FName SpaceName;  // 0x0 (0x0)
	uint8_t Space;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.ControlRigComponent.OnPostConstruction
struct FOnPostConstruction
{
	struct UControlRigComponent* Component;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigComponent.OnPostInitialize
struct FOnPostInitialize
{
	struct UControlRigComponent* Component;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigComponent.SetControlFloat
struct FSetControlFloat
{
	struct FName ControlName;  // 0x0 (0x0)
	float Value;  // 0x8 (0x8)


}; 
 
 // Function ControlRig.ControlRigComponent.SetControlInt
struct FSetControlInt
{
	struct FName ControlName;  // 0x0 (0x0)
	int32_t Value;  // 0x8 (0x8)


}; 
 
 // Function ControlRig.ControlRigComponent.SetControlPosition
struct FSetControlPosition
{
	struct FName ControlName;  // 0x0 (0x0)
	struct FVector Value;  // 0x8 (0x8)
	uint8_t Space;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function ControlRig.ControlRigComponent.SetControlRotator
struct FSetControlRotator
{
	struct FName ControlName;  // 0x0 (0x0)
	struct FRotator Value;  // 0x8 (0x8)
	uint8_t Space;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function ControlRig.RigHierarchyController.DuplicateElements
struct FDuplicateElements
{
	struct TArray<struct FRigElementKey> InKeys;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bSelectNewElements : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool bSetupUndo : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool bPrintPythonCommands : 1;  // 0x12 (0x12)
	char pad_19[5];  // 0x13 (0x13)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
struct FSetInitialSpaceTransform
{
	struct FName SpaceName;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform InitialTransform;  // 0x10 (0x10)
	uint8_t Space;  // 0x70 (0x70)
	char pad_113[15];  // 0x71 (0x71)


}; 
 
 // Function ControlRig.ControlRigComponent.SetMappedElements
struct FSetMappedElements
{
	struct TArray<struct FControlRigComponentMappedElement> NewMappedElements;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigComponent.SetObjectBinding
struct FSetObjectBinding
{
	struct UObject* InObjectToBind;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigShapeActor.IsSelectedInEditor
struct FIsSelectedInEditor
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigShapeActor.OnEnabledChanged
struct FOnEnabledChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigShapeActor.OnHoveredChanged
struct FOnHoveredChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsSelected : 1;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigShapeActor.OnManipulatingChanged
struct FOnManipulatingChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsManipulating : 1;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigShapeActor.OnSelectionChanged
struct FOnSelectionChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsSelected : 1;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigShapeActor.SetEnabled
struct FSetEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigShapeActor.SetHovered
struct FSetHovered
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInHovered : 1;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigShapeActor.SetSelectable
struct FSetSelectable
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInSelectable : 1;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigShapeActor.SetSelected
struct FSetSelected
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bInSelected : 1;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint
struct FAddAnimationChannel_ForBlueprint
{
	struct FName InName;  // 0x0 (0x0)
	struct FRigElementKey InParentControl;  // 0x8 (0x8)
	char pad_20[12];  // 0x14 (0x14)
	struct FRigControlSettings InSettings;  // 0x20 (0x20)
	char pad_672_1 : 7;  // 0x2A0 (0x2A0)
	bool bSetupUndo : 1;  // 0x2A0 (0x2A0)
	char pad_673_1 : 7;  // 0x2A1 (0x2A1)
	bool bPrintPythonCommand : 1;  // 0x2A1 (0x2A1)
	char pad_674[2];  // 0x2A2 (0x2A2)
	struct FRigElementKey ReturnValue;  // 0x2A4 (0x2A4)


}; 
 
 // Function ControlRig.RigHierarchyController.AddBone
struct FAddBone
{
	struct FName InName;  // 0x0 (0x0)
	struct FRigElementKey InParent;  // 0x8 (0x8)
	char pad_20[12];  // 0x14 (0x14)
	struct FTransform InTransform;  // 0x20 (0x20)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bTransformInGlobal : 1;  // 0x80 (0x80)
	uint8_t InBoneType;  // 0x81 (0x81)
	char pad_130_1 : 7;  // 0x82 (0x82)
	bool bSetupUndo : 1;  // 0x82 (0x82)
	char pad_131_1 : 7;  // 0x83 (0x83)
	bool bPrintPythonCommand : 1;  // 0x83 (0x83)
	struct FRigElementKey ReturnValue;  // 0x84 (0x84)


}; 
 
 // Function ControlRig.RigHierarchyController.AddControl_ForBlueprint
struct FAddControl_ForBlueprint
{
	struct FName InName;  // 0x0 (0x0)
	struct FRigElementKey InParent;  // 0x8 (0x8)
	char pad_20[12];  // 0x14 (0x14)
	struct FRigControlSettings InSettings;  // 0x20 (0x20)
	struct FRigControlValue InValue;  // 0x2A0 (0x2A0)
	char pad_912_1 : 7;  // 0x390 (0x390)
	bool bSetupUndo : 1;  // 0x390 (0x390)
	char pad_913_1 : 7;  // 0x391 (0x391)
	bool bPrintPythonCommand : 1;  // 0x391 (0x391)
	char pad_914[2];  // 0x392 (0x392)
	struct FRigElementKey ReturnValue;  // 0x394 (0x394)


}; 
 
 // Function ControlRig.RigHierarchyController.AddParent
struct FAddParent
{
	struct FRigElementKey InChild;  // 0x0 (0x0)
	struct FRigElementKey InParent;  // 0xC (0xC)
	float InWeight;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bMaintainGlobalTransform : 1;  // 0x1C (0x1C)
	char pad_29_1 : 7;  // 0x1D (0x1D)
	bool bSetupUndo : 1;  // 0x1D (0x1D)
	char pad_30_1 : 7;  // 0x1E (0x1E)
	bool ReturnValue : 1;  // 0x1E (0x1E)
	char pad_31[1];  // 0x1F (0x1F)


}; 
 
 // Function ControlRig.RigHierarchyController.ClearSelection
struct FClearSelection
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.RigHierarchyController.ExportSelectionToText
struct FExportSelectionToText
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.RigHierarchyController.GetControlSettings
struct FGetControlSettings
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12[4];  // 0xC (0xC)
	struct FRigControlSettings ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ControlRig.RigHierarchyController.ImportFromText
struct FImportFromText
{
	struct FString InContent;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bReplaceExistingElements : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool bSelectNewElements : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool bSetupUndo : 1;  // 0x12 (0x12)
	char pad_19_1 : 7;  // 0x13 (0x13)
	bool bPrintPythonCommands : 1;  // 0x13 (0x13)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function ControlRig.RigHierarchyController.MirrorElements
struct FMirrorElements
{
	struct TArray<struct FRigElementKey> InKeys;  // 0x0 (0x0)
	struct FRigMirrorSettings InSettings;  // 0x10 (0x10)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bSelectNewElements : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool bSetupUndo : 1;  // 0x39 (0x39)
	char pad_58_1 : 7;  // 0x3A (0x3A)
	bool bPrintPythonCommands : 1;  // 0x3A (0x3A)
	char pad_59[5];  // 0x3B (0x3B)
	struct TArray<struct FRigElementKey> ReturnValue;  // 0x40 (0x40)


}; 
 
 // Function ControlRig.RigHierarchyController.RemoveAllParents
struct FRemoveAllParents
{
	struct FRigElementKey InChild;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bMaintainGlobalTransform : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bSetupUndo : 1;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool bPrintPythonCommand : 1;  // 0xE (0xE)
	char pad_15_1 : 7;  // 0xF (0xF)
	bool ReturnValue : 1;  // 0xF (0xF)


}; 
 
 // Function ControlRig.RigHierarchyController.RenameElement
struct FRenameElement
{
	struct FRigElementKey InElement;  // 0x0 (0x0)
	struct FName InName;  // 0xC (0xC)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bSetupUndo : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool bPrintPythonCommand : 1;  // 0x15 (0x15)
	char pad_22_1 : 7;  // 0x16 (0x16)
	bool bClearSelection : 1;  // 0x16 (0x16)
	char pad_23[1];  // 0x17 (0x17)
	struct FRigElementKey ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function ControlRig.RigHierarchyController.SelectElement
struct FSelectElement
{
	struct FRigElementKey InKey;  // 0x0 (0x0)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bSelect : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bClearSelection : 1;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool ReturnValue : 1;  // 0xE (0xE)
	char pad_15[1];  // 0xF (0xF)


}; 
 
 // Function ControlRig.RigHierarchyController.SetDisplayName
struct FSetDisplayName
{
	struct FRigElementKey InControl;  // 0x0 (0x0)
	struct FName InDisplayName;  // 0xC (0xC)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bRenameElement : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool bSetupUndo : 1;  // 0x15 (0x15)
	char pad_22_1 : 7;  // 0x16 (0x16)
	bool bPrintPythonCommand : 1;  // 0x16 (0x16)
	char pad_23[1];  // 0x17 (0x17)
	struct FName ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function ControlRig.RigHierarchyController.SetSelection
struct FSetSelection
{
	struct TArray<struct FRigElementKey> InKeys;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bPrintPythonCommand : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool ReturnValue : 1;  // 0x11 (0x11)
	char pad_18[6];  // 0x12 (0x12)


}; 
 
 // Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch
struct FDoesMirrorMatch
{
	struct UControlRig* ControlRig;  // 0x0 (0x0)
	struct FName ControlName;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function ControlRig.ControlRigPoseAsset.GetControlNames
struct FGetControlNames
{
	struct TArray<struct FName> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigPoseAsset.GetCurrentPose
struct FGetCurrentPose
{
	struct UControlRig* InControlRig;  // 0x0 (0x0)
	struct FControlRigControlPose OutPose;  // 0x8 (0x8)


}; 
 
 // Function ControlRig.ControlRigPoseAsset.PastePose
struct FPastePose
{
	struct UControlRig* InControlRig;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bDoKey : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool bDoMirror : 1;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)


}; 
 
 // Function ControlRig.ControlRigPoseAsset.SelectControls
struct FSelectControls
{
	struct UControlRig* InControlRig;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bDoMirror : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected
struct FEnsureAtLeastOneRigElementSelected
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows
struct FProvideWorkflows
{
	struct UObject* InSubject;  // 0x0 (0x0)
	struct TArray<struct FRigVMUserWorkflow> ReturnValue;  // 0x8 (0x8)


}; 
 
 
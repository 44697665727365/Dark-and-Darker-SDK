#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct Constraints.ConstraintTickFunction
// Size: 0x40(Inherited: 0x28)
struct FConstraintTickFunction : FTickFunction
{
	char pad_40[24];  // 0x28 (0x28)


}; 
 
 // SparseDelegateFunction Constraints.ConstraintsManager.OnConstraintRemoved__DelegateSignature
struct FOnConstraintRemoved__DelegateSignature
{
	struct UConstraintsManager* Mananger;  // 0x0 (0x0)
	struct UTickableConstraint* Constraint;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bDoNotCompensate : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle
struct FCreateTransformableComponentHandle
{
	struct UWorld* InWorld;  // 0x0 (0x0)
	struct USceneComponent* InSceneComponent;  // 0x8 (0x8)
	struct FName InSocketName;  // 0x10 (0x10)
	struct UTransformableComponentHandle* ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct Constraints.ConstraintAndActiveChannel
struct FConstraintAndActiveChannel
{
	struct TSoftObjectPtr<UTickableConstraint> Constraint;  // 0x0 (0x0)
	struct FMovieSceneConstraintChannel ActiveChannel;  // 0x30 (0x30)
	struct UTickableConstraint* ConstraintCopyToSpawn;  // 0x130 (0x130)


}; 
 
 // SparseDelegateFunction Constraints.ConstraintsManager.OnConstraintAdded__DelegateSignature
struct FOnConstraintAdded__DelegateSignature
{
	struct UConstraintsManager* Mananger;  // 0x0 (0x0)
	struct UTickableConstraint* Constraint;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Constraints.MovieSceneConstraintChannel
// Size: 0x100(Inherited: 0x100)
struct FMovieSceneConstraintChannel : FMovieSceneBoolChannel
{


}; 
 
 // Function Constraints.ConstraintsScriptingLibrary.AddConstraint
struct FAddConstraint
{
	struct UWorld* InWorld;  // 0x0 (0x0)
	struct UTransformableHandle* InParentHandle;  // 0x8 (0x8)
	struct UTransformableHandle* InChildHandle;  // 0x10 (0x10)
	struct UTickableTransformConstraint* InConstraint;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bMaintainOffset : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool ReturnValue : 1;  // 0x21 (0x21)
	char pad_34[6];  // 0x22 (0x22)


}; 
 
 // Function Constraints.ConstraintsScriptingLibrary.CreateFromType
struct FCreateFromType
{
	struct UWorld* InWorld;  // 0x0 (0x0)
	uint8_t InType;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct UTickableTransformConstraint* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Constraints.ConstraintsScriptingLibrary.GetManager
struct FGetManager
{
	struct UWorld* InWorld;  // 0x0 (0x0)
	struct UConstraintsManager* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function Constraints.ConstraintsScriptingLibrary.RemoveConstraint
struct FRemoveConstraint
{
	struct UWorld* InWorld;  // 0x0 (0x0)
	int32_t InIndex;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 
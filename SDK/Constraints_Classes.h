#pragma once 
#include <Constraints_Structs.h>
 
 
 
// Class Constraints.TickableConstraint
// Size: 0x70(Inherited: 0x28)
struct UTickableConstraint : UObject
{
	struct FConstraintTickFunction ConstraintTick;  // 0x28 (0x28)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool Active : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)


}; 
 
 


// Class Constraints.TransformableHandle
// Size: 0x58(Inherited: 0x28)
struct UTransformableHandle : UObject
{
	struct FMovieSceneObjectBindingID ConstraintBindingID;  // 0x28 (0x28)
	char pad_64[24];  // 0x40 (0x40)


}; 
 
 


// Class Constraints.ConstraintsManager
// Size: 0x48(Inherited: 0x28)
struct UConstraintsManager : UObject
{
	struct FMulticastSparseDelegate OnConstraintAdded_BP;  // 0x28 (0x28)
	struct FMulticastSparseDelegate OnConstraintRemoved_BP;  // 0x29 (0x29)
	char pad_42[14];  // 0x2A (0x2A)
	struct TArray<struct UTickableConstraint*> Constraints;  // 0x38 (0x38)


}; 
 
 


// Class Constraints.ConstraintsActor
// Size: 0x298(Inherited: 0x290)
struct AConstraintsActor : AActor
{
	struct UConstraintsManager* ConstraintsManager;  // 0x290 (0x290)


}; 
 
 


// Class Constraints.ConstraintsScriptingLibrary
// Size: 0x28(Inherited: 0x28)
struct UConstraintsScriptingLibrary : UBlueprintFunctionLibrary
{


	bool RemoveConstraint(struct UWorld* InWorld, int32_t InIndex); // Function Constraints.ConstraintsScriptingLibrary.RemoveConstraint
	struct UConstraintsManager* GetManager(struct UWorld* InWorld); // Function Constraints.ConstraintsScriptingLibrary.GetManager
	struct UTransformableComponentHandle* CreateTransformableComponentHandle(struct UWorld* InWorld, struct USceneComponent* InSceneComponent, struct FName& InSocketName); // Function Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle
	struct UTickableTransformConstraint* CreateFromType(struct UWorld* InWorld, uint8_t InType); // Function Constraints.ConstraintsScriptingLibrary.CreateFromType
	bool AddConstraint(struct UWorld* InWorld, struct UTransformableHandle* InParentHandle, struct UTransformableHandle* InChildHandle, struct UTickableTransformConstraint* InConstraint, bool bMaintainOffset); // Function Constraints.ConstraintsScriptingLibrary.AddConstraint
}; 
 
 


// Class Constraints.TickableTranslationConstraint
// Size: 0xB0(Inherited: 0x90)
struct UTickableTranslationConstraint : UTickableTransformConstraint
{
	char pad_144[8];  // 0x90 (0x90)
	struct FVector OffsetTranslation;  // 0x98 (0x98)


}; 
 
 


// Class Constraints.TransformableComponentHandle
// Size: 0x68(Inherited: 0x58)
struct UTransformableComponentHandle : UTransformableHandle
{
	struct TWeakObjectPtr<USceneComponent> Component;  // 0x58 (0x58)
	struct FName SocketName;  // 0x60 (0x60)


}; 
 
 


// Class Constraints.TickableTransformConstraint
// Size: 0x90(Inherited: 0x70)
struct UTickableTransformConstraint : UTickableConstraint
{
	struct UTransformableHandle* ParentTRSHandle;  // 0x70 (0x70)
	struct UTransformableHandle* ChildTRSHandle;  // 0x78 (0x78)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bMaintainOffset : 1;  // 0x80 (0x80)
	char pad_129[3];  // 0x81 (0x81)
	float Weight;  // 0x84 (0x84)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool bDynamicOffset : 1;  // 0x88 (0x88)
	uint8_t Type;  // 0x89 (0x89)
	char pad_138[6];  // 0x8A (0x8A)


}; 
 
 


// Class Constraints.TickableRotationConstraint
// Size: 0xC0(Inherited: 0x90)
struct UTickableRotationConstraint : UTickableTransformConstraint
{
	char pad_144[16];  // 0x90 (0x90)
	struct FQuat OffsetRotation;  // 0xA0 (0xA0)


}; 
 
 


// Class Constraints.TickableScaleConstraint
// Size: 0xB0(Inherited: 0x90)
struct UTickableScaleConstraint : UTickableTransformConstraint
{
	char pad_144[8];  // 0x90 (0x90)
	struct FVector OffsetScale;  // 0x98 (0x98)


}; 
 
 


// Class Constraints.TickableParentConstraint
// Size: 0x110(Inherited: 0x90)
struct UTickableParentConstraint : UTickableTransformConstraint
{
	char pad_144[16];  // 0x90 (0x90)
	struct FTransform OffsetTransform;  // 0xA0 (0xA0)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool bScaling : 1;  // 0x100 (0x100)
	char pad_257[15];  // 0x101 (0x101)


}; 
 
 


// Class Constraints.TickableLookAtConstraint
// Size: 0xA8(Inherited: 0x90)
struct UTickableLookAtConstraint : UTickableTransformConstraint
{
	struct FVector Axis;  // 0x90 (0x90)


}; 
 
 



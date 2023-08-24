#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct AnimationSharing.AnimationStateEntry
struct FAnimationStateEntry
{
	char State;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FAnimationSetup> AnimationSetups;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bOnDemand : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bAdditive : 1;  // 0x19 (0x19)
	char pad_26[2];  // 0x1A (0x1A)
	float BlendTime;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bReturnToPreviousState : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool bSetNextState : 1;  // 0x21 (0x21)
	char NextState;  // 0x22 (0x22)
	char pad_35[1];  // 0x23 (0x23)
	struct FPerPlatformInt MaximumNumberOfConcurrentInstances;  // 0x24 (0x24)
	float WiggleTimePercentage;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool bRequiresCurves : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)


}; 
 
 // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
struct FGetInstancedActors
{
	struct TArray<struct AActor*> Actors;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
struct FPerSkeletonAnimationSharingSetup
{
	struct USkeleton* Skeleton;  // 0x0 (0x0)
	struct USkeletalMesh* SkeletalMesh;  // 0x8 (0x8)
	UAnimSharingTransitionInstance* BlendAnimBlueprint;  // 0x10 (0x10)
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint;  // 0x18 (0x18)
	UAnimationSharingStateProcessor* StateProcessorClass;  // 0x20 (0x20)
	struct TArray<struct FAnimationStateEntry> AnimationStates;  // 0x28 (0x28)


}; 
 
 // ScriptStruct AnimationSharing.AnimationSetup
struct FAnimationSetup
{
	struct UAnimSequence* AnimSequence;  // 0x0 (0x0)
	UAnimSharingStateInstance* AnimBlueprint;  // 0x8 (0x8)
	struct FPerPlatformInt NumRandomizedInstances;  // 0x10 (0x10)
	struct FPerPlatformBool Enabled;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // ScriptStruct AnimationSharing.AnimationSharingScalability
struct FAnimationSharingScalability
{
	struct FPerPlatformBool UseBlendTransitions;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FPerPlatformFloat BlendSignificanceValue;  // 0x4 (0x4)
	struct FPerPlatformInt MaximumNumberConcurrentBlends;  // 0x8 (0x8)
	struct FPerPlatformFloat TickSignificanceValue;  // 0xC (0xC)


}; 
 
 // ScriptStruct AnimationSharing.TickAnimationSharingFunction
// Size: 0x30(Inherited: 0x28)
struct FTickAnimationSharingFunction : FTickFunction
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 // Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
struct FGetAnimationStateEnum
{
	struct UEnum* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
struct FProcessActorState
{
	int32_t OutState;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* InActor;  // 0x8 (0x8)
	char CurrentState;  // 0x10 (0x10)
	char OnDemandState;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool bShouldProcess : 1;  // 0x12 (0x12)
	char pad_19[5];  // 0x13 (0x13)


}; 
 
 // Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
struct FAnimationSharingEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
struct FCreateAnimationSharingManager
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UAnimationSharingSetup* Setup;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
struct FGetAnimationSharingManager
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UAnimationSharingManager* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
struct FRegisterActorWithSkeletonBP
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct USkeleton* SharingSkeleton;  // 0x8 (0x8)


}; 
 
 
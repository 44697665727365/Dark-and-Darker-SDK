#pragma once 
#include <AnimationSharing_Structs.h>
 
 
 
// Class AnimationSharing.AnimationSharingManager
// Size: 0x88(Inherited: 0x28)
struct UAnimationSharingManager : UObject
{
	struct TArray<struct USkeleton*> Skeletons;  // 0x28 (0x28)
	struct TArray<struct UAnimSharingInstance*> PerSkeletonData;  // 0x38 (0x38)
	char pad_72[64];  // 0x48 (0x48)


	void RegisterActorWithSkeletonBP(struct AActor* InActor, struct USkeleton* SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
	struct UAnimationSharingManager* GetAnimationSharingManager(struct UObject* WorldContextObject); // Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
	bool CreateAnimationSharingManager(struct UObject* WorldContextObject, struct UAnimationSharingSetup* Setup); // Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
	bool AnimationSharingEnabled(); // Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
}; 
 
 


// Class AnimationSharing.AnimSharingAdditiveInstance
// Size: 0x360(Inherited: 0x350)
struct UAnimSharingAdditiveInstance : UAnimInstance
{
	struct TWeakObjectPtr<USkeletalMeshComponent> BaseComponent;  // 0x348 (0x348)
	struct TWeakObjectPtr<UAnimSequence> AdditiveAnimation;  // 0x350 (0x350)
	float Alpha;  // 0x358 (0x358)
	char pad_868_1 : 7;  // 0x364 (0x364)
	bool bStateBool : 1;  // 0x35C (0x35C)


}; 
 
 


// Class AnimationSharing.AnimationSharingStateProcessor
// Size: 0x58(Inherited: 0x28)
struct UAnimationSharingStateProcessor : UObject
{
	struct TSoftObjectPtr<UEnum> AnimationStateEnum;  // 0x28 (0x28)


	void ProcessActorState(int32_t& OutState, struct AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
	struct UEnum* GetAnimationStateEnum(); // Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
}; 
 
 


// Class AnimationSharing.AnimSharingTransitionInstance
// Size: 0x360(Inherited: 0x350)
struct UAnimSharingTransitionInstance : UAnimInstance
{
	struct TWeakObjectPtr<USkeletalMeshComponent> FromComponent;  // 0x348 (0x348)
	struct TWeakObjectPtr<USkeletalMeshComponent> ToComponent;  // 0x350 (0x350)
	float BlendTime;  // 0x358 (0x358)
	char pad_868_1 : 7;  // 0x364 (0x364)
	bool bBlendBool : 1;  // 0x35C (0x35C)


}; 
 
 


// Class AnimationSharing.AnimSharingStateInstance
// Size: 0x370(Inherited: 0x350)
struct UAnimSharingStateInstance : UAnimInstance
{
	struct UAnimSequence* AnimationToPlay;  // 0x348 (0x348)
	float PermutationTimeOffset;  // 0x350 (0x350)
	float PlayRate;  // 0x354 (0x354)
	char pad_864_1 : 7;  // 0x360 (0x360)
	bool bStateBool : 1;  // 0x358 (0x358)
	struct UAnimSharingInstance* Instance;  // 0x360 (0x360)
	char pad_873[7];  // 0x369 (0x369)


	void GetInstancedActors(struct TArray<struct AActor*>& Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
}; 
 
 


// Class AnimationSharing.AnimSharingInstance
// Size: 0x120(Inherited: 0x28)
struct UAnimSharingInstance : UObject
{
	struct TArray<struct AActor*> RegisteredActors;  // 0x28 (0x28)
	char pad_56[80];  // 0x38 (0x38)
	struct UAnimationSharingStateProcessor* StateProcessor;  // 0x88 (0x88)
	char pad_144[56];  // 0x90 (0x90)
	struct TArray<struct UAnimSequence*> UsedAnimationSequences;  // 0xC8 (0xC8)
	char pad_216[16];  // 0xD8 (0xD8)
	struct UEnum* StateEnum;  // 0xE8 (0xE8)
	struct AActor* SharingActor;  // 0xF0 (0xF0)
	char pad_248[40];  // 0xF8 (0xF8)


}; 
 
 


// Class AnimationSharing.AnimationSharingSetup
// Size: 0x48(Inherited: 0x28)
struct UAnimationSharingSetup : UObject
{
	struct TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups;  // 0x28 (0x28)
	struct FAnimationSharingScalability ScalabilitySettings;  // 0x38 (0x38)


}; 
 
 



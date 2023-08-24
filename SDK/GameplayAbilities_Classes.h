#pragma once 
#include <GameplayAbilities_Structs.h>
 
 
 
// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xA8(Inherited: 0x80)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask
{
	struct FMulticastInlineDelegate OnConfirm;  // 0x80 (0x80)
	struct FMulticastInlineDelegate OnCancel;  // 0x90 (0x90)
	char pad_160[8];  // 0xA0 (0xA0)


	struct UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
	void OnCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
}; 
 
 


// Class GameplayAbilities.GameplayCueNotify_Burst
// Size: 0x340(Inherited: 0x40)
struct UGameplayCueNotify_Burst : UGameplayCueNotify_Static
{
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition;  // 0x40 (0x40)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo;  // 0x78 (0x78)
	struct FGameplayCueNotify_BurstEffects BurstEffects;  // 0xB8 (0xB8)


	void OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Burst.OnBurst
}; 
 
 


// Class GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
// Size: 0xF8(Inherited: 0x38)
struct UAbilityAsync_WaitGameplayEffectApplied : UAbilityAsync
{
	struct FMulticastInlineDelegate OnApplied;  // 0x38 (0x38)
	char pad_72[176];  // 0x48 (0x48)


	struct UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(struct AActor* TargetActor, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor
	void OnAppliedDelegate__DelegateSignature(struct AActor* Source, struct FGameplayEffectSpecHandle SpecHandle, struct FActiveGameplayEffectHandle ActiveHandle); // DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature
}; 
 
 


// Class GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
// Size: 0x60(Inherited: 0x50)
struct UAbilityAsync_WaitGameplayTagAdded : UAbilityAsync_WaitGameplayTag
{
	struct FMulticastInlineDelegate Added;  // 0x50 (0x50)


	struct UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(struct AActor* TargetActor, struct FGameplayTag Tag, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor
}; 
 
 


// Class GameplayAbilities.AbilityTask
// Size: 0x80(Inherited: 0x68)
struct UAbilityTask : UGameplayTask
{
	struct UGameplayAbility* Ability;  // 0x68 (0x68)
	struct TWeakObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;  // 0x70 (0x70)
	char pad_120[8];  // 0x78 (0x78)


}; 
 
 


// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x380(Inherited: 0x380)
struct AAbilitySystemDebugHUD : AHUD
{


}; 
 
 


// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// Size: 0x28(Inherited: 0x28)
struct UAbilitySystemReplicationProxyInterface : UInterface
{


}; 
 
 


// Class GameplayAbilities.AbilityAsync_WaitGameplayEvent
// Size: 0x60(Inherited: 0x38)
struct UAbilityAsync_WaitGameplayEvent : UAbilityAsync
{
	struct FMulticastInlineDelegate EventReceived;  // 0x38 (0x38)
	char pad_72[24];  // 0x48 (0x48)


	struct UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(struct AActor* TargetActor, struct FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact); // Function GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor
	void EventReceivedDelegate__DelegateSignature(struct FGameplayEventData Payload); // DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature
}; 
 
 


// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x28(Inherited: 0x28)
struct UGameplayEffectUIData : UObject
{


}; 
 
 


// Class GameplayAbilities.AbilityAsync
// Size: 0x38(Inherited: 0x30)
struct UAbilityAsync : UCancellableAsyncAction
{
	char pad_48[8];  // 0x30 (0x30)


	void EndAction(); // Function GameplayAbilities.AbilityAsync.EndAction
}; 
 
 


// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x400(Inherited: 0x3E0)
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor
{
	float MaxRange;  // 0x3E0 (0x3E0)
	struct FCollisionProfileName TraceProfile;  // 0x3E4 (0x3E4)
	char pad_1004_1 : 7;  // 0x3EC (0x3EC)
	bool bTraceAffectsAimPitch : 1;  // 0x3EC (0x3EC)
	char pad_1005[19];  // 0x3ED (0x3ED)


}; 
 
 


// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// Size: 0x40(Inherited: 0x28)
struct UGameplayEffectUIData_TextOnly : UGameplayEffectUIData
{
	struct FText Description;  // 0x28 (0x28)


}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xA8(Inherited: 0x80)
struct UAbilityTask_WaitGameplayTag : UAbilityTask
{
	char pad_128[16];  // 0x80 (0x80)
	struct UAbilitySystemComponent* OptionalExternalTarget;  // 0x90 (0x90)
	char pad_152[16];  // 0x98 (0x98)


	void GameplayTagCallback(struct FGameplayTag Tag, int32_t NewCount); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
}; 
 
 


// Class GameplayAbilities.AbilityAsync_WaitAttributeChanged
// Size: 0x90(Inherited: 0x38)
struct UAbilityAsync_WaitAttributeChanged : UAbilityAsync
{
	struct FMulticastInlineDelegate Changed;  // 0x38 (0x38)
	char pad_72[72];  // 0x48 (0x48)


	struct UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(struct AActor* TargetActor, struct FGameplayAttribute Attribute, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged
	void AsyncWaitAttributeChangedDelegate__DelegateSignature(struct FGameplayAttribute Attribute, float NewValue, float OldValue); // DelegateFunction GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature
}; 
 
 


// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x2D8(Inherited: 0x2C0)
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle
{
	struct UCapsuleComponent* CollisionComponent;  // 0x2C0 (0x2C0)
	struct TArray<struct UActorComponent*> VisualizationComponents;  // 0x2C8 (0x2C8)


}; 
 
 


// Class GameplayAbilities.AbilityAsync_WaitGameplayTag
// Size: 0x50(Inherited: 0x38)
struct UAbilityAsync_WaitGameplayTag : UAbilityAsync
{
	char pad_56[24];  // 0x38 (0x38)


}; 
 
 


// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x168(Inherited: 0xC8)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnFinished;  // 0xC8 (0xC8)
	char pad_216[8];  // 0xD8 (0xD8)
	struct FVector StartLocation;  // 0xE0 (0xE0)
	struct FVector TargetLocation;  // 0xF8 (0xF8)
	struct AActor* TargetActor;  // 0x110 (0x110)
	struct FVector TargetLocationOffset;  // 0x118 (0x118)
	uint8_t OffsetAlignment;  // 0x130 (0x130)
	char pad_305[3];  // 0x131 (0x131)
	float Duration;  // 0x134 (0x134)
	char pad_312_1 : 7;  // 0x138 (0x138)
	bool bDisableDestinationReachedInterrupt : 1;  // 0x138 (0x138)
	char pad_313_1 : 7;  // 0x139 (0x139)
	bool bSetNewMovementMode : 1;  // 0x139 (0x139)
	enum class EMovementMode NewMovementMode;  // 0x13A (0x13A)
	char pad_315_1 : 7;  // 0x13B (0x13B)
	bool bRestrictSpeedToExpected : 1;  // 0x13B (0x13B)
	char pad_316[4];  // 0x13C (0x13C)
	struct UCurveVector* PathOffsetCurve;  // 0x140 (0x140)
	struct UCurveFloat* TimeMappingCurve;  // 0x148 (0x148)
	struct UCurveFloat* TargetLerpSpeedHorizontalCurve;  // 0x150 (0x150)
	struct UCurveFloat* TargetLerpSpeedVerticalCurve;  // 0x158 (0x158)
	char pad_352[8];  // 0x160 (0x160)


	void OnTargetActorSwapped(struct AActor* OriginalTarget, struct AActor* NewTarget); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
	void OnRep_TargetLocation(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, struct FVector TargetLocationOffset, uint8_t OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, uint8_t VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct AActor* TargetActor, struct FVector TargetLocationOffset, uint8_t OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, uint8_t VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
}; 
 
 


// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xE8(Inherited: 0x80)
struct UAbilityTask_MoveToLocation : UAbilityTask
{
	struct FMulticastInlineDelegate OnTargetLocationReached;  // 0x80 (0x80)
	char pad_144[8];  // 0x90 (0x90)
	struct FVector StartLocation;  // 0x98 (0x98)
	struct FVector TargetLocation;  // 0xB0 (0xB0)
	float DurationOfMovement;  // 0xC8 (0xC8)
	char pad_204[12];  // 0xCC (0xCC)
	struct UCurveFloat* LerpCurve;  // 0xD8 (0xD8)
	struct UCurveVector* LerpCurveVector;  // 0xE0 (0xE0)


	struct UAbilityTask_MoveToLocation* MoveToLocation(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, float Duration, struct UCurveFloat* OptionalInterpolationCurve, struct UCurveVector* OptionalVectorInterpolationCurve); // Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
}; 
 
 


// Class GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
// Size: 0x60(Inherited: 0x50)
struct UAbilityAsync_WaitGameplayTagRemoved : UAbilityAsync_WaitGameplayTag
{
	struct FMulticastInlineDelegate Removed;  // 0x50 (0x50)


	struct UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(struct AActor* TargetActor, struct FGameplayTag Tag, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xA0(Inherited: 0x80)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask
{
	struct FMulticastInlineDelegate OnChange;  // 0x80 (0x80)
	char pad_144[16];  // 0x90 (0x90)


	void OnMovementModeChange(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
	struct UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(struct UGameplayAbility* OwningAbility, enum class EMovementMode NewMode); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
}; 
 
 


// Class GameplayAbilities.GameplayCueManager
// Size: 0x310(Inherited: 0x30)
struct UGameplayCueManager : UDataAsset
{
	char pad_48[24];  // 0x30 (0x30)
	struct FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary;  // 0x48 (0x48)
	struct FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary;  // 0x98 (0x98)
	char pad_232[456];  // 0xE8 (0xE8)
	struct TArray<> LoadedGameplayCueNotifyClasses;  // 0x2B0 (0x2B0)
	struct TArray<AGameplayCueNotify_Actor*> GameplayCueClassesForPreallocation;  // 0x2C0 (0x2C0)
	struct TArray<struct FGameplayCuePendingExecute> PendingExecuteCues;  // 0x2D0 (0x2D0)
	int32_t GameplayCueSendContextCount;  // 0x2E0 (0x2E0)
	char pad_740[4];  // 0x2E4 (0x2E4)
	struct TArray<struct FPreallocationInfo> PreallocationInfoList_Internal;  // 0x2E8 (0x2E8)
	char pad_760[24];  // 0x2F8 (0x2F8)


}; 
 
 


// Class GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
// Size: 0x108(Inherited: 0x38)
struct UAbilityAsync_WaitGameplayTagQuery : UAbilityAsync
{
	char pad_56[192];  // 0x38 (0x38)
	struct FMulticastInlineDelegate Triggered;  // 0xF8 (0xF8)


	struct UAbilityAsync_WaitGameplayTagQuery* WaitGameplayTagQueryOnActor(struct AActor* TargetActor, struct FGameplayTagQuery TagQuery, uint8_t TriggerCondition, bool bOnlyTriggerOnce); // Function GameplayAbilities.AbilityAsync_WaitGameplayTagQuery.WaitGameplayTagQueryOnActor
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xA0(Inherited: 0x80)
struct UAbilityTask_WaitInputRelease : UAbilityTask
{
	struct FMulticastInlineDelegate OnRelease;  // 0x80 (0x80)
	char pad_144[16];  // 0x90 (0x90)


	struct UAbilityTask_WaitInputRelease* WaitInputRelease(struct UGameplayAbility* OwningAbility, bool bTestAlreadyReleased); // Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
	void OnReleaseCallback(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
}; 
 
 


// Class GameplayAbilities.GameplayAbility
// Size: 0x3B8(Inherited: 0x28)
struct UGameplayAbility : UObject
{
	char pad_40[128];  // 0x28 (0x28)
	struct FGameplayTagContainer AbilityTags;  // 0xA8 (0xA8)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool bReplicateInputDirectly : 1;  // 0xC8 (0xC8)
	char pad_201_1 : 7;  // 0xC9 (0xC9)
	bool RemoteInstanceEnded : 1;  // 0xC9 (0xC9)
	char pad_202[4];  // 0xCA (0xCA)
	enum class EGameplayAbilityReplicationPolicy ReplicationPolicy;  // 0xCE (0xCE)
	enum class EGameplayAbilityInstancingPolicy InstancingPolicy;  // 0xCF (0xCF)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool bServerRespectsRemoteAbilityCancellation : 1;  // 0xD0 (0xD0)
	char pad_209_1 : 7;  // 0xD1 (0xD1)
	bool bRetriggerInstancedAbility : 1;  // 0xD1 (0xD1)
	char pad_210[6];  // 0xD2 (0xD2)
	struct FGameplayAbilityActivationInfo CurrentActivationInfo;  // 0xD8 (0xD8)
	struct FGameplayEventData CurrentEventData;  // 0xF8 (0xF8)
	enum class EGameplayAbilityNetExecutionPolicy NetExecutionPolicy;  // 0x1A8 (0x1A8)
	enum class EGameplayAbilityNetSecurityPolicy NetSecurityPolicy;  // 0x1A9 (0x1A9)
	char pad_426[6];  // 0x1AA (0x1AA)
	UGameplayEffect* CostGameplayEffectClass;  // 0x1B0 (0x1B0)
	struct TArray<struct FAbilityTriggerData> AbilityTriggers;  // 0x1B8 (0x1B8)
	UGameplayEffect* CooldownGameplayEffectClass;  // 0x1C8 (0x1C8)
	struct FGameplayTagContainer CancelAbilitiesWithTag;  // 0x1D0 (0x1D0)
	struct FGameplayTagContainer BlockAbilitiesWithTag;  // 0x1F0 (0x1F0)
	struct FGameplayTagContainer ActivationOwnedTags;  // 0x210 (0x210)
	struct FGameplayTagContainer ActivationRequiredTags;  // 0x230 (0x230)
	struct FGameplayTagContainer ActivationBlockedTags;  // 0x250 (0x250)
	struct FGameplayTagContainer SourceRequiredTags;  // 0x270 (0x270)
	struct FGameplayTagContainer SourceBlockedTags;  // 0x290 (0x290)
	struct FGameplayTagContainer TargetRequiredTags;  // 0x2B0 (0x2B0)
	struct FGameplayTagContainer TargetBlockedTags;  // 0x2D0 (0x2D0)
	char pad_752[32];  // 0x2F0 (0x2F0)
	struct TArray<struct UGameplayTask*> ActiveTasks;  // 0x310 (0x310)
	char pad_800[16];  // 0x320 (0x320)
	struct UAnimMontage* CurrentMontage;  // 0x330 (0x330)
	char pad_824[96];  // 0x338 (0x338)
	char pad_920_1 : 7;  // 0x398 (0x398)
	bool bIsActive : 1;  // 0x398 (0x398)
	char pad_921_1 : 7;  // 0x399 (0x399)
	bool bIsAbilityEnding : 1;  // 0x399 (0x399)
	char pad_922_1 : 7;  // 0x39A (0x39A)
	bool bIsCancelable : 1;  // 0x39A (0x39A)
	char pad_923_1 : 7;  // 0x39B (0x39B)
	bool bIsBlockingOtherAbilities : 1;  // 0x39B (0x39B)
	char pad_924[20];  // 0x39C (0x39C)
	char pad_944_1 : 7;  // 0x3B0 (0x3B0)
	bool bMarkPendingKillOnAbilityEnd : 1;  // 0x3B0 (0x3B0)
	char pad_945[7];  // 0x3B1 (0x3B1)


	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities); // Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
	void SetCanBeCanceled(bool bCanBeCanceled); // Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
	void SendGameplayEvent(struct FGameplayTag EventTag, struct FGameplayEventData Payload); // Function GameplayAbilities.GameplayAbility.SendGameplayEvent
	void RemoveGrantedByEffect(); // Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
	void MontageStop(float OverrideBlendOutTime); // Function GameplayAbilities.GameplayAbility.MontageStop
	void MontageSetNextSectionName(struct FName FromSectionName, struct FName ToSectionName); // Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
	void MontageJumpToSection(struct FName SectionName); // Function GameplayAbilities.GameplayAbility.MontageJumpToSection
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName SocketName); // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor(); // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(UGameplayEffect* GameplayEffectClass, float Level); // Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
	void K2_RemoveGameplayCue(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
	void K2_OnEndAbility(bool bWasCancelled); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
	bool K2_HasAuthority(); // Function GameplayAbilities.GameplayAbility.K2_HasAuthority
	void K2_ExecuteGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters); // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
	void K2_ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
	void K2_EndAbilityLocally(); // Function GameplayAbilities.GameplayAbility.K2_EndAbilityLocally
	void K2_EndAbility(); // Function GameplayAbilities.GameplayAbility.K2_EndAbility
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent); // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown); // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
	bool K2_CommitAbility(); // Function GameplayAbilities.GameplayAbility.K2_CommitAbility
	bool K2_CheckAbilityCost(); // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
	bool K2_CheckAbilityCooldown(); // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
	void K2_CancelAbility(); // Function GameplayAbilities.GameplayAbility.K2_CancelAbility
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
	struct TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle EffectSpecHandle, struct FGameplayAbilityTargetDataHandle TargetData); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(struct FGameplayEffectSpecHandle EffectSpecHandle); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
	void K2_AddGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd); // Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
	void K2_AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd); // Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
	bool IsLocallyControlled(); // Function GameplayAbilities.GameplayAbility.IsLocallyControlled
	void InvalidateClientPredictionKey(); // Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
	struct UObject* GetSourceObject_BP(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo& ActorInfo); // Function GameplayAbilities.GameplayAbility.GetSourceObject_BP
	struct USkeletalMeshComponent* GetOwningComponentFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
	struct AActor* GetOwningActorFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
	struct FGameplayEffectContextHandle GetGrantedByEffectContext(); // Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
	struct UObject* GetCurrentSourceObject(); // Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
	struct UAnimMontage* GetCurrentMontage(); // Function GameplayAbilities.GameplayAbility.GetCurrentMontage
	float GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
	struct FGameplayEffectContextHandle GetContextFromOwner(struct FGameplayAbilityTargetDataHandle OptionalTargetData); // Function GameplayAbilities.GameplayAbility.GetContextFromOwner
	struct AActor* GetAvatarActorFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
	struct FGameplayAbilityActorInfo GetActorInfo(); // Function GameplayAbilities.GameplayAbility.GetActorInfo
	struct UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
	int32_t GetAbilityLevel_BP(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo& ActorInfo); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel_BP
	int32_t GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel
	void EndTaskByInstanceName(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
	void EndAbilityState(struct FName OptionalStateNameToEnd); // Function GameplayAbilities.GameplayAbility.EndAbilityState
	void ConfirmTaskByInstanceName(struct FName InstanceName, bool bEndTask); // Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
	void CancelTaskByInstanceName(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
	void BP_RemoveGameplayEffectFromOwnerWithHandle(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(struct FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(struct FGameplayTagContainer WithAssetTags, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
	struct TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(struct FGameplayAbilityTargetDataHandle TargetData, UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
}; 
 
 


// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xB8(Inherited: 0x80)
struct UAbilityTask_StartAbilityState : UAbilityTask
{
	struct FMulticastInlineDelegate OnStateEnded;  // 0x80 (0x80)
	struct FMulticastInlineDelegate OnStateInterrupted;  // 0x90 (0x90)
	char pad_160[24];  // 0xA0 (0xA0)


	struct UAbilityTask_StartAbilityState* StartAbilityState(struct UGameplayAbility* OwningAbility, struct FName StateName, bool bEndCurrentState); // Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
}; 
 
 


// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x40(Inherited: 0x30)
struct UGameplayAbilitySet : UDataAsset
{
	struct TArray<struct FGameplayAbilityBindInfo> Abilities;  // 0x30 (0x30)


}; 
 
 


// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x3E0(Inherited: 0x290)
struct AGameplayAbilityTargetActor : AActor
{
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool ShouldProduceTargetDataOnServer : 1;  // 0x290 (0x290)
	char pad_657[15];  // 0x291 (0x291)
	struct FGameplayAbilityTargetingLocationInfo StartLocation;  // 0x2A0 (0x2A0)
	char pad_832[48];  // 0x340 (0x340)
	struct APlayerController* PrimaryPC;  // 0x370 (0x370)
	struct UGameplayAbility* OwningAbility;  // 0x378 (0x378)
	char pad_896_1 : 7;  // 0x380 (0x380)
	bool bDestroyOnConfirmation : 1;  // 0x380 (0x380)
	char pad_897[7];  // 0x381 (0x381)
	struct AActor* SourceActor;  // 0x388 (0x388)
	struct FWorldReticleParameters ReticleParams;  // 0x390 (0x390)
	AGameplayAbilityWorldReticle* ReticleClass;  // 0x3A8 (0x3A8)
	struct FGameplayTargetDataFilterHandle Filter;  // 0x3B0 (0x3B0)
	char pad_960_1 : 7;  // 0x3C0 (0x3C0)
	bool bDebug : 1;  // 0x3C0 (0x3C0)
	char pad_961[23];  // 0x3C1 (0x3C1)
	struct UAbilitySystemComponent* GenericDelegateBoundASC;  // 0x3D8 (0x3D8)


	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0x98(Inherited: 0x80)
struct UAbilityTask_WaitDelay : UAbilityTask
{
	struct FMulticastInlineDelegate OnFinish;  // 0x80 (0x80)
	char pad_144[8];  // 0x90 (0x90)


	struct UAbilityTask_WaitDelay* WaitDelay(struct UGameplayAbility* OwningAbility, float Time); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0xF8(Inherited: 0x80)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask
{
	struct FMulticastInlineDelegate OnCommit;  // 0x80 (0x80)
	char pad_144[104];  // 0x90 (0x90)


	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTage, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
	void OnAbilityCommit(struct UGameplayAbility* ActivatedAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
}; 
 
 


// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x420(Inherited: 0x400)
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace
{
	float CollisionRadius;  // 0x3F8 (0x3F8)
	float CollisionHeight;  // 0x3FC (0x3FC)
	char pad_1032[24];  // 0x408 (0x408)


}; 
 
 


// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x430(Inherited: 0x420)
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace
{
	 PlacedActorClass;  // 0x418 (0x418)
	struct UMaterialInterface* PlacedActorMaterial;  // 0x420 (0x420)


}; 
 
 


// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x3F0(Inherited: 0x3E0)
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor
{
	float Radius;  // 0x3E0 (0x3E0)
	char pad_996[12];  // 0x3E4 (0x3E4)


}; 
 
 


// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x400(Inherited: 0x400)
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace
{


}; 
 
 


// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x2C0(Inherited: 0x290)
struct AGameplayAbilityWorldReticle : AActor
{
	struct FWorldReticleParameters Parameters;  // 0x290 (0x290)
	char pad_680_1 : 7;  // 0x2A8 (0x2A8)
	bool bFaceOwnerFlat : 1;  // 0x2A8 (0x2A8)
	char pad_681_1 : 7;  // 0x2A9 (0x2A9)
	bool bSnapToTargetedActor : 1;  // 0x2A9 (0x2A9)
	char pad_682_1 : 7;  // 0x2AA (0x2AA)
	bool bIsTargetValid : 1;  // 0x2AA (0x2AA)
	char pad_683_1 : 7;  // 0x2AB (0x2AB)
	bool bIsTargetAnActor : 1;  // 0x2AB (0x2AB)
	char pad_684[4];  // 0x2AC (0x2AC)
	struct APlayerController* PrimaryPC;  // 0x2B0 (0x2B0)
	struct AActor* TargetingActor;  // 0x2B8 (0x2B8)


	void SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
	void SetReticleMaterialParamFloat(struct FName ParamName, float Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
	void OnValidTargetChanged(bool bNewValue); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
	void OnTargetingAnActor(bool bNewValue); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
	void FaceTowardSource(bool bFaceIn2D); // Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
}; 
 
 


// Class GameplayAbilities.GameplayEffect
// Size: 0x860(Inherited: 0x28)
struct UGameplayEffect : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	uint8_t DurationPolicy;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct FGameplayEffectModifierMagnitude DurationMagnitude;  // 0x38 (0x38)
	struct FScalableFloat Period;  // 0x218 (0x218)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool bExecutePeriodicEffectOnApplication : 1;  // 0x240 (0x240)
	uint8_t PeriodicInhibitionPolicy;  // 0x241 (0x241)
	char pad_578[6];  // 0x242 (0x242)
	struct TArray<struct FGameplayModifierInfo> Modifiers;  // 0x248 (0x248)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions;  // 0x258 (0x258)
	struct FScalableFloat ChanceToApplyToTarget;  // 0x268 (0x268)
	struct TArray<UGameplayEffectCustomApplicationRequirement*> ApplicationRequirements;  // 0x290 (0x290)
	struct TArray<UGameplayEffect*> TargetEffectClasses;  // 0x2A0 (0x2A0)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects;  // 0x2B0 (0x2B0)
	struct TArray<UGameplayEffect*> OverflowEffects;  // 0x2C0 (0x2C0)
	char pad_720_1 : 7;  // 0x2D0 (0x2D0)
	bool bDenyOverflowApplication : 1;  // 0x2D0 (0x2D0)
	char pad_721_1 : 7;  // 0x2D1 (0x2D1)
	bool bClearStackOnOverflow : 1;  // 0x2D1 (0x2D1)
	char pad_722[6];  // 0x2D2 (0x2D2)
	struct TArray<UGameplayEffect*> PrematureExpirationEffectClasses;  // 0x2D8 (0x2D8)
	struct TArray<UGameplayEffect*> RoutineExpirationEffectClasses;  // 0x2E8 (0x2E8)
	char pad_760_1 : 7;  // 0x2F8 (0x2F8)
	bool bRequireModifierSuccessToTriggerCues : 1;  // 0x2F8 (0x2F8)
	char pad_761_1 : 7;  // 0x2F9 (0x2F9)
	bool bSuppressStackingCues : 1;  // 0x2F9 (0x2F9)
	char pad_762[6];  // 0x2FA (0x2FA)
	struct TArray<struct FGameplayEffectCue> GameplayCues;  // 0x300 (0x300)
	struct UGameplayEffectUIData* UIData;  // 0x310 (0x310)
	struct FInheritedTagContainer InheritableGameplayEffectTags;  // 0x318 (0x318)
	struct FInheritedTagContainer InheritableOwnedTagsContainer;  // 0x378 (0x378)
	struct FInheritedTagContainer InheritableBlockedAbilityTagsContainer;  // 0x3D8 (0x3D8)
	struct FGameplayTagRequirements OngoingTagRequirements;  // 0x438 (0x438)
	struct FGameplayTagRequirements ApplicationTagRequirements;  // 0x478 (0x478)
	struct FGameplayTagRequirements RemovalTagRequirements;  // 0x4B8 (0x4B8)
	struct FInheritedTagContainer RemoveGameplayEffectsWithTags;  // 0x4F8 (0x4F8)
	struct FGameplayTagRequirements GrantedApplicationImmunityTags;  // 0x558 (0x558)
	struct FGameplayEffectQuery GrantedApplicationImmunityQuery;  // 0x598 (0x598)
	char pad_1768[8];  // 0x6E8 (0x6E8)
	struct FGameplayEffectQuery RemoveGameplayEffectQuery;  // 0x6F0 (0x6F0)
	char pad_2112[1];  // 0x840 (0x840)
	uint8_t StackingType;  // 0x841 (0x841)
	char pad_2114[2];  // 0x842 (0x842)
	int32_t StackLimitCount;  // 0x844 (0x844)
	uint8_t StackDurationRefreshPolicy;  // 0x848 (0x848)
	uint8_t StackPeriodResetPolicy;  // 0x849 (0x849)
	uint8_t StackExpirationPolicy;  // 0x84A (0x84A)
	char pad_2123[5];  // 0x84B (0x84B)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilities;  // 0x850 (0x850)


}; 
 
 


// Class GameplayAbilities.GameplayAbility_CharacterJump
// Size: 0x3B8(Inherited: 0x3B8)
struct UGameplayAbility_CharacterJump : UGameplayAbility
{


}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xB8(Inherited: 0xA8)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag
{
	struct FMulticastInlineDelegate Added;  // 0xA8 (0xA8)


	struct UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
}; 
 
 


// Class GameplayAbilities.GameplayAbility_Montage
// Size: 0x3F0(Inherited: 0x3B8)
struct UGameplayAbility_Montage : UGameplayAbility
{
	struct UAnimMontage* MontageToPlay;  // 0x3B8 (0x3B8)
	float PlayRate;  // 0x3C0 (0x3C0)
	struct FName SectionName;  // 0x3C4 (0x3C4)
	char pad_972[4];  // 0x3CC (0x3CC)
	struct TArray<UGameplayEffect*> GameplayEffectClassesWhileAnimating;  // 0x3D0 (0x3D0)
	struct TArray<struct UGameplayEffect*> GameplayEffectsWhileAnimating;  // 0x3E0 (0x3E0)


}; 
 
 


// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x2F0(Inherited: 0x290)
struct AGameplayCueNotify_Actor : AActor
{
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool bAutoDestroyOnRemove : 1;  // 0x290 (0x290)
	char pad_657[3];  // 0x291 (0x291)
	float AutoDestroyDelay;  // 0x294 (0x294)
	char pad_664_1 : 7;  // 0x298 (0x298)
	bool WarnIfTimelineIsStillRunning : 1;  // 0x298 (0x298)
	char pad_665_1 : 7;  // 0x299 (0x299)
	bool WarnIfLatentActionIsStillRunning : 1;  // 0x299 (0x299)
	char pad_666[2];  // 0x29A (0x29A)
	struct FGameplayTag GameplayCueTag;  // 0x29C (0x29C)
	struct FName GameplayCueName;  // 0x2A4 (0x2A4)
	char pad_684_1 : 7;  // 0x2AC (0x2AC)
	bool bAutoAttachToOwner : 1;  // 0x2AC (0x2AC)
	char pad_685_1 : 7;  // 0x2AD (0x2AD)
	bool IsOverride : 1;  // 0x2AD (0x2AD)
	char pad_686_1 : 7;  // 0x2AE (0x2AE)
	bool bUniqueInstancePerInstigator : 1;  // 0x2AE (0x2AE)
	char pad_687_1 : 7;  // 0x2AF (0x2AF)
	bool bUniqueInstancePerSourceObject : 1;  // 0x2AF (0x2AF)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool bAllowMultipleOnActiveEvents : 1;  // 0x2B0 (0x2B0)
	char pad_689_1 : 7;  // 0x2B1 (0x2B1)
	bool bAllowMultipleWhileActiveEvents : 1;  // 0x2B1 (0x2B1)
	char pad_690[2];  // 0x2B2 (0x2B2)
	int32_t NumPreallocatedInstances;  // 0x2B4 (0x2B4)
	char pad_696[56];  // 0x2B8 (0x2B8)


	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
	void OnOwnerDestroyed(struct AActor* DestroyedActor); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
	void K2_EndGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
}; 
 
 


// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x130(Inherited: 0xC8)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnTimedOut;  // 0xC8 (0xC8)
	struct FMulticastInlineDelegate OnTimedOutAndDestinationReached;  // 0xD8 (0xD8)
	struct FVector StartLocation;  // 0xE8 (0xE8)
	struct FVector TargetLocation;  // 0x100 (0x100)
	float Duration;  // 0x118 (0x118)
	char pad_284_1 : 7;  // 0x11C (0x11C)
	bool bSetNewMovementMode : 1;  // 0x11C (0x11C)
	enum class EMovementMode NewMovementMode;  // 0x11D (0x11D)
	char pad_286_1 : 7;  // 0x11E (0x11E)
	bool bRestrictSpeedToExpected : 1;  // 0x11E (0x11E)
	char pad_287[1];  // 0x11F (0x11F)
	struct UCurveVector* PathOffsetCurve;  // 0x120 (0x120)
	char pad_296[8];  // 0x128 (0x128)


	struct UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector TargetLocation, float Duration, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, uint8_t VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
}; 
 
 


// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xC8(Inherited: 0x80)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask
{
	struct FName ForceName;  // 0x80 (0x80)
	uint8_t FinishVelocityMode;  // 0x88 (0x88)
	char pad_137[7];  // 0x89 (0x89)
	struct FVector FinishSetVelocity;  // 0x90 (0x90)
	float FinishClampVelocity;  // 0xA8 (0xA8)
	char pad_172[4];  // 0xAC (0xAC)
	struct UCharacterMovementComponent* MovementComponent;  // 0xB0 (0xB0)
	char pad_184[16];  // 0xB8 (0xB8)


}; 
 
 


// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0x110(Inherited: 0xC8)
struct UAbilityTask_ApplyRootMotionConstantForce : UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnFinish;  // 0xC8 (0xC8)
	struct FVector WorldDirection;  // 0xD8 (0xD8)
	float Strength;  // 0xF0 (0xF0)
	float Duration;  // 0xF4 (0xF4)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool bIsAdditive : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)
	struct UCurveFloat* StrengthOverTime;  // 0x100 (0x100)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool bEnableGravity : 1;  // 0x108 (0x108)
	char pad_265[7];  // 0x109 (0x109)


	struct UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, struct UCurveFloat* StrengthOverTime, uint8_t VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
}; 
 
 


// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x130(Inherited: 0xC8)
struct UAbilityTask_ApplyRootMotionJumpForce : UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnFinish;  // 0xC8 (0xC8)
	struct FMulticastInlineDelegate OnLanded;  // 0xD8 (0xD8)
	struct FRotator Rotation;  // 0xE8 (0xE8)
	float Distance;  // 0x100 (0x100)
	float Height;  // 0x104 (0x104)
	float Duration;  // 0x108 (0x108)
	float MinimumLandedTriggerTime;  // 0x10C (0x10C)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool bFinishOnLanded : 1;  // 0x110 (0x110)
	char pad_273[7];  // 0x111 (0x111)
	struct UCurveVector* PathOffsetCurve;  // 0x118 (0x118)
	struct UCurveFloat* TimeMappingCurve;  // 0x120 (0x120)
	char pad_296[8];  // 0x128 (0x128)


	void OnLandedCallback(struct FHitResult& Hit); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
	void Finish(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
	struct UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, uint8_t VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
}; 
 
 


// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x138(Inherited: 0xC8)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnFinish;  // 0xC8 (0xC8)
	struct FVector Location;  // 0xD8 (0xD8)
	struct AActor* LocationActor;  // 0xF0 (0xF0)
	float Strength;  // 0xF8 (0xF8)
	float Duration;  // 0xFC (0xFC)
	float Radius;  // 0x100 (0x100)
	char pad_260_1 : 7;  // 0x104 (0x104)
	bool bIsPush : 1;  // 0x104 (0x104)
	char pad_261_1 : 7;  // 0x105 (0x105)
	bool bIsAdditive : 1;  // 0x105 (0x105)
	char pad_262_1 : 7;  // 0x106 (0x106)
	bool bNoZForce : 1;  // 0x106 (0x106)
	char pad_263[1];  // 0x107 (0x107)
	struct UCurveFloat* StrengthDistanceFalloff;  // 0x108 (0x108)
	struct UCurveFloat* StrengthOverTime;  // 0x110 (0x110)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool bUseFixedWorldDirection : 1;  // 0x118 (0x118)
	char pad_281[7];  // 0x119 (0x119)
	struct FRotator FixedWorldDirection;  // 0x120 (0x120)


	struct UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, struct AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, struct UCurveFloat* StrengthDistanceFalloff, struct UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, struct FRotator FixedWorldDirection, uint8_t VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1D8(Inherited: 0x1B8)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied
{
	struct FMulticastInlineDelegate OnApplied;  // 0x1B8 (0x1B8)
	char pad_456[16];  // 0x1C8 (0x1C8)


	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle TargetFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
}; 
 
 


// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0x98(Inherited: 0x80)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask
{
	struct FMulticastInlineDelegate OnSync;  // 0x80 (0x80)
	char pad_144[8];  // 0x90 (0x90)


	struct UAbilityTask_NetworkSyncPoint* WaitNetSync(struct UGameplayAbility* OwningAbility, uint8_t SyncType); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
	void OnSignalCallback(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
}; 
 
 


// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xA8(Inherited: 0x80)
struct UAbilityTask_VisualizeTargeting : UAbilityTask
{
	struct FMulticastInlineDelegate TimeElapsed;  // 0x80 (0x80)
	char pad_144[24];  // 0x90 (0x90)


	struct UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* TargetActor, struct FName TaskInstanceName, float Duration); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
	struct UAbilityTask_VisualizeTargeting* VisualizeTargeting(struct UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* Class, struct FName TaskInstanceName, float Duration); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
}; 
 
 


// Class GameplayAbilities.MovieSceneGameplayCueSection
// Size: 0x198(Inherited: 0x108)
struct UMovieSceneGameplayCueSection : UMovieSceneHookSection
{
	struct FMovieSceneGameplayCueKey Cue;  // 0x108 (0x108)


}; 
 
 


// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x108(Inherited: 0x80)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask
{
	struct FMulticastInlineDelegate OnCompleted;  // 0x80 (0x80)
	struct FMulticastInlineDelegate OnBlendOut;  // 0x90 (0x90)
	struct FMulticastInlineDelegate OnInterrupted;  // 0xA0 (0xA0)
	struct FMulticastInlineDelegate OnCancelled;  // 0xB0 (0xB0)
	char pad_192[40];  // 0xC0 (0xC0)
	struct UAnimMontage* MontageToPlay;  // 0xE8 (0xE8)
	float Rate;  // 0xF0 (0xF0)
	struct FName StartSection;  // 0xF4 (0xF4)
	float AnimRootMotionTranslationScale;  // 0xFC (0xFC)
	float StartTimeSeconds;  // 0x100 (0x100)
	char pad_260_1 : 7;  // 0x104 (0x104)
	bool bStopWhenAbilityEnds : 1;  // 0x104 (0x104)
	char pad_261[3];  // 0x105 (0x105)


	void OnMontageInterrupted(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
	struct UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UAnimMontage* MontageToPlay, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
}; 
 
 


// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xB8(Inherited: 0x80)
struct UAbilityTask_Repeat : UAbilityTask
{
	struct FMulticastInlineDelegate OnPerformAction;  // 0x80 (0x80)
	struct FMulticastInlineDelegate OnFinished;  // 0x90 (0x90)
	char pad_160[24];  // 0xA0 (0xA0)


	struct UAbilityTask_Repeat* RepeatAction(struct UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xC0(Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask
{
	struct FMulticastInlineDelegate OnRemoved;  // 0x80 (0x80)
	struct FMulticastInlineDelegate InvalidHandle;  // 0x90 (0x90)
	char pad_160[32];  // 0xA0 (0xA0)


	struct UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
	void OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
}; 
 
 


// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xC8(Inherited: 0x80)
struct UAbilityTask_SpawnActor : UAbilityTask
{
	struct FMulticastInlineDelegate Success;  // 0x80 (0x80)
	struct FMulticastInlineDelegate DidNotSpawn;  // 0x90 (0x90)
	char pad_160[40];  // 0xA0 (0xA0)


	struct UAbilityTask_SpawnActor* SpawnActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, AActor* Class); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, AActor* Class, struct AActor*& SpawnedActor); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x138(Inherited: 0x80)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask
{
	struct FMulticastInlineDelegate OnActivate;  // 0x80 (0x80)
	char pad_144[168];  // 0x90 (0x90)


	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
	void OnAbilityActivate(struct UGameplayAbility* ActivatedAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xF8(Inherited: 0x80)
struct UAbilityTask_WaitAttributeChange : UAbilityTask
{
	struct FMulticastInlineDelegate OnChange;  // 0x80 (0x80)
	char pad_144[96];  // 0x90 (0x90)
	struct UAbilitySystemComponent* ExternalOwner;  // 0xF0 (0xF0)


	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute InAttribute, struct FGameplayTag InWithTag, struct FGameplayTag InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChange(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, struct FGameplayTag WithSrcTag, struct FGameplayTag WithoutSrcTag, bool TriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xB8(Inherited: 0xA8)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag
{
	struct FMulticastInlineDelegate Removed;  // 0xA8 (0xA8)


	struct UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x140(Inherited: 0x80)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask
{
	struct FMulticastInlineDelegate OnChange;  // 0x80 (0x80)
	char pad_144[168];  // 0x90 (0x90)
	struct UAbilitySystemComponent* ExternalOwner;  // 0x138 (0x138)


	struct UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute AttributeNumerator, struct FGameplayAttribute AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xF0(Inherited: 0x80)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask
{
	struct FMulticastInlineDelegate OnChange;  // 0x80 (0x80)
	char pad_144[88];  // 0x90 (0x90)
	struct UAbilitySystemComponent* ExternalOwner;  // 0xE8 (0xE8)


	struct UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0x98(Inherited: 0x80)
struct UAbilityTask_WaitCancel : UAbilityTask
{
	struct FMulticastInlineDelegate OnCancel;  // 0x80 (0x80)
	char pad_144[8];  // 0x90 (0x90)


	struct UAbilityTask_WaitCancel* WaitCancel(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
	void OnCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xA0(Inherited: 0x80)
struct UAbilityTask_WaitConfirm : UAbilityTask
{
	struct FMulticastInlineDelegate OnConfirm;  // 0x80 (0x80)
	char pad_144[16];  // 0x90 (0x90)


	struct UAbilityTask_WaitConfirm* WaitConfirm(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
	void OnConfirmCallback(struct UGameplayAbility* InAbility); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1B8(Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask
{
	char pad_128[296];  // 0x80 (0x80)
	struct UAbilitySystemComponent* ExternalOwner;  // 0x1A8 (0x1A8)
	char pad_432[8];  // 0x1B0 (0x1B0)


	void OnApplyGameplayEffectCallback(struct UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1D8(Inherited: 0x1B8)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied
{
	struct FMulticastInlineDelegate OnApplied;  // 0x1B8 (0x1B8)
	char pad_456[16];  // 0x1C8 (0x1C8)


	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x128(Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask
{
	struct FMulticastInlineDelegate bLocked;  // 0x80 (0x80)
	char pad_144[136];  // 0x90 (0x90)
	struct UAbilitySystemComponent* ExternalOwner;  // 0x118 (0x118)
	char pad_288[8];  // 0x120 (0x120)


	struct UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
}; 
 
 


// Class GameplayAbilities.GameplayEffectCalculation
// Size: 0x38(Inherited: 0x28)
struct UGameplayEffectCalculation : UObject
{
	struct TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;  // 0x28 (0x28)


}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xB8(Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask
{
	struct FMulticastInlineDelegate OnChange;  // 0x80 (0x80)
	struct FMulticastInlineDelegate InvalidHandle;  // 0x90 (0x90)
	char pad_160[24];  // 0xA0 (0xA0)


	struct UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
	void OnGameplayEffectStackChange(struct FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xB0(Inherited: 0x80)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask
{
	struct FMulticastInlineDelegate EventReceived;  // 0x80 (0x80)
	char pad_144[8];  // 0x90 (0x90)
	struct UAbilitySystemComponent* OptionalExternalTarget;  // 0x98 (0x98)
	char pad_160[16];  // 0xA0 (0xA0)


	struct UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(struct UGameplayAbility* OwningAbility, struct FGameplayTag EventTag, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitGameplayTagQuery
// Size: 0x160(Inherited: 0x80)
struct UAbilityTask_WaitGameplayTagQuery : UAbilityTask
{
	char pad_128[192];  // 0x80 (0x80)
	struct FMulticastInlineDelegate Triggered;  // 0x140 (0x140)
	struct UAbilitySystemComponent* OptionalExternalTarget;  // 0x150 (0x150)
	char pad_344[8];  // 0x158 (0x158)


	struct UAbilityTask_WaitGameplayTagQuery* WaitGameplayTagQuery(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery TagQuery, struct AActor* InOptionalExternalTarget, uint8_t TriggerCondition, bool bOnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.WaitGameplayTagQuery
	void UpdateTargetTags(struct FGameplayTag Tag, int32_t NewCount); // Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.UpdateTargetTags
}; 
 
 


// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary
{


	bool TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
	bool TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
	bool TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
	bool TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
	struct FGameplayEffectSpecHandle SetStackCountToMax(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
	struct FGameplayEffectSpecHandle SetStackCount(struct FGameplayEffectSpecHandle SpecHandle, int32_t StackCount); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
	struct FGameplayEffectSpecHandle SetDuration(struct FGameplayEffectSpecHandle SpecHandle, float Duration); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
	void SendGameplayEventToActor(struct AActor* Actor, struct FGameplayTag EventTag, struct FGameplayEventData Payload); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
	bool RemoveLooseGameplayTags(struct AActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.RemoveLooseGameplayTags
	bool NotEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
	bool NotEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAbilitySpecHandle
	bool NotEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& A, struct FActiveGameplayEffectHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_ActiveGameplayEffectHandle
	struct FGameplayEffectSpecHandle MakeSpecHandle(struct UGameplayEffect* InGameplayEffect, struct AActor* InInstigator, struct AActor* InEffectCauser, float InLevel); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
	struct FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, struct FGameplayEffectContextHandle EffectContext, struct FGameplayTag MatchedTagName, struct FGameplayTag OriginalTag, struct FGameplayTagContainer AggregatedSourceTags, struct FGameplayTagContainer AggregatedTargetTags, struct FVector Location, struct FVector Normal, struct AActor* Instigator, struct AActor* EffectCauser, struct UObject* SourceObject, struct UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, struct USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
	struct FGameplayTargetDataFilterHandle MakeFilterHandle(struct FGameplayTargetDataFilter Filter, struct AActor* FilterActor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
	bool IsValid(struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
	bool IsInstigatorLocallyControlledPlayer(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
	bool IsInstigatorLocallyControlled(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
	bool HasHitResult(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
	struct FTransform GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
	struct FTransform GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
	struct FVector GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
	struct FVector GetOrigin(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
	float GetModifiedAttributeMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
	struct FTransform GetInstigatorTransform(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
	struct AActor* GetInstigatorActor(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
	struct FHitResult GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
	struct FHitResult GetHitResult(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
	struct UGameplayEffectUIData* GetGameplayEffectUIData(UGameplayEffect* EffectClass, UGameplayEffectUIData* DataType); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectUIData
	struct UGameplayEffect* GetGameplayEffectFromActiveEffectHandle(struct FActiveGameplayEffectHandle& ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectFromActiveEffectHandle
	bool GetGameplayCueEndLocationAndNormal(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Location, struct FVector& Normal); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
	bool GetGameplayCueDirection(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Direction); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
	struct UGameplayAbility* GetGameplayAbilityFromSpecHandle(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAbilitySpecHandle& AbilitySpecHandle, bool& bIsInstance); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayAbilityFromSpecHandle
	float GetFloatAttributeFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
	float GetFloatAttributeBaseFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
	float GetFloatAttributeBase(struct AActor* Actor, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
	float GetFloatAttribute(struct AActor* Actor, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
	struct FGameplayEffectContextHandle GetEffectContext(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
	struct FString GetDebugStringFromGameplayAttribute(struct FGameplayAttribute& Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDebugStringFromGameplayAttribute
	int32_t GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
	struct TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
	struct TArray<struct AActor*> GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
	struct TArray<struct AActor*> GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
	int32_t GetActorCount(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
	struct AActor* GetActorByIndex(struct FGameplayCueParameters Parameters, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
	float GetActiveGameplayEffectTotalDuration(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
	float GetActiveGameplayEffectStartTime(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
	int32_t GetActiveGameplayEffectStackLimitCount(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
	int32_t GetActiveGameplayEffectStackCount(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
	float GetActiveGameplayEffectRemainingDuration(struct UObject* WorldContextObject, struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
	float GetActiveGameplayEffectExpectedEndTime(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
	struct FString GetActiveGameplayEffectDebugString(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
	struct UAbilitySystemComponent* GetAbilitySystemComponent(struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
	void ForwardGameplayCueToTarget(struct TScriptInterface<IGameplayCueInterface> TargetCueInterface, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
	struct FGameplayAbilityTargetDataHandle FilterTargetData(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTargetDataFilterHandle ActorFilterClass); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
	float EvaluateAttributeValueWithTagsAndBase(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
	float EvaluateAttributeValueWithTags(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, bool& bSuccess); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
	bool EqualEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
	bool EqualEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAbilitySpecHandle
	bool EqualEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& A, struct FActiveGameplayEffectHandle& B); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_ActiveGameplayEffectHandle
	void EffectContextSetOrigin(struct FGameplayEffectContextHandle EffectContext, struct FVector Origin); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
	bool EffectContextIsValid(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
	bool EffectContextIsInstigatorLocallyControlled(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
	bool EffectContextHasHitResult(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
	struct UObject* EffectContextGetSourceObject(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
	struct AActor* EffectContextGetOriginalInstigatorActor(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
	struct FVector EffectContextGetOrigin(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
	struct AActor* EffectContextGetInstigatorActor(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
	struct FHitResult EffectContextGetHitResult(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
	struct AActor* EffectContextGetEffectCauser(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
	void EffectContextAddHitResult(struct FGameplayEffectContextHandle EffectContext, struct FHitResult HitResult, bool bReset); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
	bool DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
	bool DoesGameplayCueMeetTagRequirements(struct FGameplayCueParameters Parameters, struct FGameplayTagRequirements& SourceTagReqs, struct FGameplayTagRequirements& TargetTagReqs); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
	struct FGameplayEffectSpecHandle CloneSpecHandle(struct AActor* InNewInstigator, struct AActor* InEffectCauser, struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
	void BreakGameplayCueParameters(struct FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTag& MatchedTagName, struct FGameplayTag& OriginalTag, struct FGameplayTagContainer& AggregatedSourceTags, struct FGameplayTagContainer& AggregatedTargetTags, struct FVector& Location, struct FVector& Normal, struct AActor*& Instigator, struct AActor*& EffectCauser, struct UObject*& SourceObject, struct UPhysicalMaterial*& PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, struct USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
	struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag DataTag, float Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
	struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FName DataName, float Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
	struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(struct FGameplayAbilityTargetDataHandle TargetHandle, struct FGameplayAbilityTargetDataHandle& HandleToAdd); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
	bool AddLooseGameplayTags(struct AActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLooseGameplayTags
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(struct FGameplayEffectSpecHandle SpecHandle, UGameplayEffect* LinkedGameplayEffect); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
	struct FGameplayEffectSpecHandle AddGrantedTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
	struct FGameplayEffectSpecHandle AddGrantedTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
	struct FGameplayEffectSpecHandle AddAssetTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
	struct FGameplayEffectSpecHandle AddAssetTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& SourceLocation, struct FGameplayAbilityTargetingLocationInfo& TargetLocation); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct FHitResult& HitResult); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(struct TArray<struct AActor*>& ActorArray, bool OneTargetPerHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xA0(Inherited: 0x80)
struct UAbilityTask_WaitInputPress : UAbilityTask
{
	struct FMulticastInlineDelegate OnPress;  // 0x80 (0x80)
	char pad_144[16];  // 0x90 (0x90)


	struct UAbilityTask_WaitInputPress* WaitInputPress(struct UGameplayAbility* OwningAbility, bool bTestAlreadyPressed); // Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
	void OnPressCallback(); // Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x90(Inherited: 0x80)
struct UAbilityTask_WaitOverlap : UAbilityTask
{
	struct FMulticastInlineDelegate OnOverlap;  // 0x80 (0x80)


	struct UAbilityTask_WaitOverlap* WaitForOverlap(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
	void OnHitCallback(struct UPrimitiveComponent* HitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xC0(Inherited: 0x80)
struct UAbilityTask_WaitTargetData : UAbilityTask
{
	struct FMulticastInlineDelegate ValidData;  // 0x80 (0x80)
	struct FMulticastInlineDelegate Cancelled;  // 0x90 (0x90)
	AGameplayAbilityTargetActor* TargetClass;  // 0xA0 (0xA0)
	struct AGameplayAbilityTargetActor* TargetActor;  // 0xA8 (0xA8)
	char pad_176[16];  // 0xB0 (0xB0)


	struct UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* TargetActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
	struct UAbilityTask_WaitTargetData* WaitTargetData(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, AGameplayAbilityTargetActor* Class); // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
	void OnTargetDataReplicatedCancelledCallback(); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, struct FGameplayTag ActivationTag); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& Data); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
	void OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle& Data); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
}; 
 
 


// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xB8(Inherited: 0x80)
struct UAbilityTask_WaitVelocityChange : UAbilityTask
{
	struct FMulticastInlineDelegate OnVelocityChage;  // 0x80 (0x80)
	struct UMovementComponent* CachedMovementComponent;  // 0x90 (0x90)
	char pad_152[32];  // 0x98 (0x98)


	struct UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(struct UGameplayAbility* OwningAbility, struct FVector Direction, float MinimumMagnitude); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
}; 
 
 


// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x13A0(Inherited: 0x118)
struct UAbilitySystemComponent : UGameplayTasksComponent
{
	char pad_280[16];  // 0x118 (0x118)
	struct TArray<struct FAttributeDefaults> DefaultStartingData;  // 0x128 (0x128)
	struct FName AffectedAnimInstanceTag;  // 0x138 (0x138)
	char pad_320[416];  // 0x140 (0x140)
	float OutgoingDuration;  // 0x2E0 (0x2E0)
	float IncomingDuration;  // 0x2E4 (0x2E4)
	char pad_744[32];  // 0x2E8 (0x2E8)
	struct TArray<struct FString> ClientDebugStrings;  // 0x308 (0x308)
	struct TArray<struct FString> ServerDebugStrings;  // 0x318 (0x318)
	char pad_808[96];  // 0x328 (0x328)
	char pad_904_1 : 7;  // 0x388 (0x388)
	bool UserAbilityActivationInhibited : 1;  // 0x388 (0x388)
	char pad_905_1 : 7;  // 0x389 (0x389)
	bool ReplicationProxyEnabled : 1;  // 0x389 (0x389)
	char pad_906_1 : 7;  // 0x38A (0x38A)
	bool bSuppressGrantAbility : 1;  // 0x38A (0x38A)
	char pad_907_1 : 7;  // 0x38B (0x38B)
	bool bSuppressGameplayCues : 1;  // 0x38B (0x38B)
	char pad_908[4];  // 0x38C (0x38C)
	struct TArray<struct AGameplayAbilityTargetActor*> SpawnedTargetActors;  // 0x390 (0x390)
	char pad_928[40];  // 0x3A0 (0x3A0)
	struct AActor* OwnerActor;  // 0x3C8 (0x3C8)
	struct AActor* AvatarActor;  // 0x3D0 (0x3D0)
	char pad_984[16];  // 0x3D8 (0x3D8)
	struct FGameplayAbilitySpecContainer ActivatableAbilities;  // 0x3E8 (0x3E8)
	char pad_1288[48];  // 0x508 (0x508)
	struct TArray<struct UGameplayAbility*> AllReplicatedInstancedAbilities;  // 0x538 (0x538)
	char pad_1352[528];  // 0x548 (0x548)
	struct FGameplayAbilityRepAnimMontage RepAnimMontageInfo;  // 0x758 (0x758)
	char pad_1936_1 : 7;  // 0x790 (0x790)
	bool bCachedIsNetSimulated : 1;  // 0x790 (0x790)
	char pad_1937_1 : 7;  // 0x791 (0x791)
	bool bPendingMontageRep : 1;  // 0x791 (0x791)
	char pad_1938[6];  // 0x792 (0x792)
	struct FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo;  // 0x798 (0x798)
	char pad_1992[160];  // 0x7C8 (0x7C8)
	struct FActiveGameplayEffectsContainer ActiveGameplayEffects;  // 0x868 (0x868)
	struct FActiveGameplayCueContainer ActiveGameplayCues;  // 0xCE0 (0xCE0)
	struct FActiveGameplayCueContainer MinimalReplicationGameplayCues;  // 0xE08 (0xE08)
	char pad_3888[296];  // 0xF30 (0xF30)
	struct TArray<char> BlockedAbilityBindings;  // 0x1058 (0x1058)
	char pad_4200[296];  // 0x1068 (0x1068)
	struct FMinimalReplicationTagCountMap MinimalReplicationTags;  // 0x1190 (0x1190)
	struct TArray<struct UAttributeSet*> SpawnedAttributes;  // 0x11F0 (0x11F0)
	char pad_4608[16];  // 0x1200 (0x1200)
	struct FMinimalReplicationTagCountMap ReplicatedLooseTags;  // 0x1210 (0x1210)
	char pad_4720[8];  // 0x1270 (0x1270)
	struct FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap;  // 0x1278 (0x1278)
	char pad_5008[16];  // 0x1390 (0x1390)


	void UpdateActiveGameplayEffectSetByCallerMagnitudes(struct FActiveGameplayEffectHandle ActiveHandle, struct TMap<struct FGameplayTag, float>& NewSetByCallerValues); // Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes
	void UpdateActiveGameplayEffectSetByCallerMagnitude(struct FActiveGameplayEffectHandle ActiveHandle, struct FGameplayTag SetByCallerTag, float NewValue); // Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude
	bool TryActivateAbilityByClass(UGameplayAbility* InAbilityToActivate, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
	bool TryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbility
	bool TryActivateAbilitiesByTag(struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
	void TargetConfirm(); // Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
	void TargetCancel(); // Function GameplayAbilities.AbilitySystemComponent.TargetCancel
	void SetUserAbilityActivationInhibited(bool NewInhibit); // Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
	void SetActiveGameplayEffectLevelUsingQuery(struct FGameplayEffectQuery Query, int32_t NewLevel); // Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
	void SetActiveGameplayEffectLevel(struct FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel); // Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
	void ServerTryActivateAbilityWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData); // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
	void ServerTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
	void ServerSetReplicatedTargetDataCancelled(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
	void ServerSetReplicatedTargetData(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, struct FGameplayTag ApplicationTag, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
	void ServerSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey, struct FVector_NetQuantize100 VectorPayload); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
	void ServerSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
	void ServerSetInputReleased(struct FGameplayAbilitySpecHandle AbilityHandle); // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
	void ServerSetInputPressed(struct FGameplayAbilitySpecHandle AbilityHandle); // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
	void ServerPrintDebug_RequestWithStrings(struct TArray<struct FString> Strings); // Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
	void ServerPrintDebug_Request(); // Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
	void ServerEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
	void ServerCurrentMontageSetPlayRate(struct UAnimMontage* ClientAnimMontage, float InPlayRate); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
	void ServerCurrentMontageSetNextSectionName(struct UAnimMontage* ClientAnimMontage, float ClientPosition, struct FName SectionName, struct FName NextSectionName); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
	void ServerCurrentMontageJumpToSectionName(struct UAnimMontage* ClientAnimMontage, struct FName SectionName); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
	void ServerCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
	void ServerAbilityRPCBatch(struct FServerAbilityRPCBatch BatchInfo); // Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
	void RemoveActiveGameplayEffectBySourceEffect(UGameplayEffect* GameplayEffect, struct UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
	bool RemoveActiveGameplayEffect(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
	int32_t RemoveActiveEffectsWithTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
	int32_t RemoveActiveEffectsWithSourceTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
	int32_t RemoveActiveEffectsWithGrantedTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
	int32_t RemoveActiveEffectsWithAppliedTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
	void ReleaseInputID(int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.ReleaseInputID
	void PressInputID(int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.PressInputID
	void OnSpawnedAttributesEndPlayed(struct AActor* InActor, enum class EEndPlayReason EndPlayReason); // Function GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed
	void OnRep_SpawnedAttributes(struct TArray<struct UAttributeSet*>& PreviousSpawnedAttributes); // Function GameplayAbilities.AbilitySystemComponent.OnRep_SpawnedAttributes
	void OnRep_ServerDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
	void OnRep_ClientDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
	void OnOwnerActorDestroyed(struct AActor* InActor); // Function GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed
	void OnAvatarActorDestroyed(struct AActor* InActor); // Function GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
	void NetMulticast_InvokeGameplayCuesExecuted(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
	void NetMulticast_InvokeGameplayCueExecuted(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
	void NetMulticast_InvokeGameplayCueAdded_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
	void NetMulticast_InvokeGameplayCueAdded(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
	struct FGameplayEffectContextHandle MakeEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
	void K2_InitStats(UAttributeSet* Attributes, struct UDataTable* DataTable); // Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
	struct FGameplayAbilitySpecHandle K2_GiveAbilityAndActivateOnce(UGameplayAbility* AbilityClass, int32_t Level, int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce
	struct FGameplayAbilitySpecHandle K2_GiveAbility(UGameplayAbility* AbilityClass, int32_t Level, int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbility
	bool IsGameplayCueActive(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
	void InputConfirm(); // Function GameplayAbilities.AbilitySystemComponent.InputConfirm
	void InputCancel(); // Function GameplayAbilities.AbilitySystemComponent.InputCancel
	bool GetUserAbilityActivationInhibited(); // Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
	int32_t GetGameplayTagCount(struct FGameplayTag GameplayTag); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount
	float GetGameplayEffectMagnitude(struct FActiveGameplayEffectHandle Handle, struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
	int32_t GetGameplayEffectCount_IfLoaded(struct TSoftClassPtr<UObject> SoftSourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount_IfLoaded
	int32_t GetGameplayEffectCount(UGameplayEffect* SourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
	float GetGameplayAttributeValue(struct FGameplayAttribute Attribute, bool& bFound); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue
	struct UAttributeSet* GetAttributeSet(UAttributeSet* AttributeSetClass); // Function GameplayAbilities.AbilitySystemComponent.GetAttributeSet
	void GetAllAttributes(struct TArray<struct FGameplayAttribute>& OutAttributes); // Function GameplayAbilities.AbilitySystemComponent.GetAllAttributes
	void GetAllAbilities(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles); // Function GameplayAbilities.AbilitySystemComponent.GetAllAbilities
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(struct FGameplayEffectQuery& Query); // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects
	void FindAllAbilitiesWithTags(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, struct FGameplayTagContainer Tags, bool bExactMatch); // Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags
	void FindAllAbilitiesWithInputID(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID
	void FindAllAbilitiesMatchingQuery(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, struct FGameplayTagQuery Query); // Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery
	void ClientTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate); // Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
	void ClientSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
	void ClientPrintDebug_Response(struct TArray<struct FString> Strings, int32_t GameFlags); // Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
	void ClientEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
	void ClientCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
	void ClientActivateAbilitySucceedWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
	void ClientActivateAbilitySucceed(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
	void ClientActivateAbilityFailed(struct FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
	void ClearAllAbilitiesWithInputID(int32_t InputID); // Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID
	void ClearAllAbilities(); // Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilities
	void ClearAbility(struct FGameplayAbilitySpecHandle& Handle); // Function GameplayAbilities.AbilitySystemComponent.ClearAbility
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(UGameplayEffect* GameplayEffectClass, struct UAbilitySystemComponent* Target, float Level, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& SpecHandle, struct UAbilitySystemComponent* Target); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle& SpecHandle); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
	void AbilityAbilityKey__DelegateSignature(int32_t InputID); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
}; 
 
 


// Class GameplayAbilities.AbilitySystemDebugHUDExtension
// Size: 0x28(Inherited: 0x28)
struct UAbilitySystemDebugHUDExtension : UObject
{


}; 
 
 


// Class GameplayAbilities.AbilitySystemDebugHUDExtension_Tags
// Size: 0x80(Inherited: 0x28)
struct UAbilitySystemDebugHUDExtension_Tags : UAbilitySystemDebugHUDExtension
{
	char pad_40[88];  // 0x28 (0x28)


}; 
 
 


// Class GameplayAbilities.AbilitySystemDebugHUDExtension_Attributes
// Size: 0x80(Inherited: 0x28)
struct UAbilitySystemDebugHUDExtension_Attributes : UAbilitySystemDebugHUDExtension
{
	char pad_40[88];  // 0x28 (0x28)


}; 
 
 


// Class GameplayAbilities.AbilitySystemDebugHUDExtension_BlockedAbilityTags
// Size: 0x80(Inherited: 0x28)
struct UAbilitySystemDebugHUDExtension_BlockedAbilityTags : UAbilitySystemDebugHUDExtension
{
	char pad_40[88];  // 0x28 (0x28)


}; 
 
 


// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x298(Inherited: 0x28)
struct UAbilitySystemGlobals : UObject
{
	struct FSoftClassPath AbilitySystemGlobalsClassName;  // 0x28 (0x28)
	char pad_72[40];  // 0x48 (0x48)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bUseDebugTargetFromHud : 1;  // 0x70 (0x70)
	char pad_113[3];  // 0x71 (0x71)
	struct FGameplayTag ActivateFailIsDeadTag;  // 0x74 (0x74)
	struct FName ActivateFailIsDeadName;  // 0x7C (0x7C)
	struct FGameplayTag ActivateFailCooldownTag;  // 0x84 (0x84)
	struct FName ActivateFailCooldownName;  // 0x8C (0x8C)
	struct FGameplayTag ActivateFailCostTag;  // 0x94 (0x94)
	struct FName ActivateFailCostName;  // 0x9C (0x9C)
	struct FGameplayTag ActivateFailTagsBlockedTag;  // 0xA4 (0xA4)
	struct FName ActivateFailTagsBlockedName;  // 0xAC (0xAC)
	struct FGameplayTag ActivateFailTagsMissingTag;  // 0xB4 (0xB4)
	struct FName ActivateFailTagsMissingName;  // 0xBC (0xBC)
	struct FGameplayTag ActivateFailNetworkingTag;  // 0xC4 (0xC4)
	struct FName ActivateFailNetworkingName;  // 0xCC (0xCC)
	int32_t MinimalReplicationTagCountBits;  // 0xD4 (0xD4)
	struct FNetSerializeScriptStructCache TargetDataStructCache;  // 0xD8 (0xD8)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool bAllowGameplayModEvaluationChannels : 1;  // 0xE8 (0xE8)
	uint8_t DefaultGameplayModEvaluationChannel;  // 0xE9 (0xE9)
	char pad_234[2];  // 0xEA (0xEA)
	struct FName GameplayModEvaluationChannelAliases[a];  // 0xEC (0xEC)
	char pad_316[4];  // 0x13C (0x13C)
	struct FSoftObjectPath GlobalCurveTableName;  // 0x140 (0x140)
	struct UCurveTable* GlobalCurveTable;  // 0x160 (0x160)
	struct FSoftObjectPath GlobalAttributeMetaDataTableName;  // 0x168 (0x168)
	struct UDataTable* GlobalAttributeMetaDataTable;  // 0x188 (0x188)
	struct FSoftObjectPath GlobalAttributeSetDefaultsTableName;  // 0x190 (0x190)
	struct TArray<struct FSoftObjectPath> GlobalAttributeSetDefaultsTableNames;  // 0x1B0 (0x1B0)
	struct TArray<struct UCurveTable*> GlobalAttributeDefaultsTables;  // 0x1C0 (0x1C0)
	struct FSoftObjectPath GlobalGameplayCueManagerClass;  // 0x1D0 (0x1D0)
	struct FSoftObjectPath GlobalGameplayCueManagerName;  // 0x1F0 (0x1F0)
	struct TArray<struct FString> GameplayCueNotifyPaths;  // 0x210 (0x210)
	struct FSoftObjectPath GameplayTagResponseTableName;  // 0x220 (0x220)
	struct UGameplayTagReponseTable* GameplayTagResponseTable;  // 0x240 (0x240)
	char pad_584_1 : 7;  // 0x248 (0x248)
	bool PredictTargetGameplayEffects : 1;  // 0x248 (0x248)
	char pad_585_1 : 7;  // 0x249 (0x249)
	bool ReplicateActivationOwnedTags : 1;  // 0x249 (0x249)
	char pad_586[6];  // 0x24A (0x24A)
	struct UGameplayCueManager* GlobalGameplayCueManager;  // 0x250 (0x250)
	char pad_600[64];  // 0x258 (0x258)


	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
	void ToggleIgnoreAbilitySystemCooldowns(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
	void ServerEndPlayerAbility(struct FString AbilityNameMatch); // Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility
	void ServerCancelPlayerAbility(struct FString AbilityNameMatch); // Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility
	void ServerActivatePlayerAbility(struct FString AbilityNameMatch); // Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility
	void ListPlayerAbilities(); // Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities
}; 
 
 


// Class GameplayAbilities.AbilitySystemInterface
// Size: 0x28(Inherited: 0x28)
struct UAbilitySystemInterface : UInterface
{


}; 
 
 


// Class GameplayAbilities.AttributeSet
// Size: 0x30(Inherited: 0x28)
struct UAttributeSet : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class GameplayAbilities.AbilitySystemTestAttributeSet
// Size: 0x70(Inherited: 0x30)
struct UAbilitySystemTestAttributeSet : UAttributeSet
{
	float MaxHealth;  // 0x30 (0x30)
	float Health;  // 0x34 (0x34)
	float Mana;  // 0x38 (0x38)
	float MaxMana;  // 0x3C (0x3C)
	float Damage;  // 0x40 (0x40)
	float SpellDamage;  // 0x44 (0x44)
	float PhysicalDamage;  // 0x48 (0x48)
	float CritChance;  // 0x4C (0x4C)
	float CritMultiplier;  // 0x50 (0x50)
	float ArmorDamageReduction;  // 0x54 (0x54)
	float DodgeChance;  // 0x58 (0x58)
	float LifeSteal;  // 0x5C (0x5C)
	float Strength;  // 0x60 (0x60)
	float StackingAttribute1;  // 0x64 (0x64)
	float StackingAttribute2;  // 0x68 (0x68)
	float NoStackAttribute;  // 0x6C (0x6C)


}; 
 
 


// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x360(Inherited: 0x340)
struct AAbilitySystemTestPawn : ADefaultPawn
{
	char pad_832[24];  // 0x340 (0x340)
	struct UAbilitySystemComponent* AbilitySystemComponent;  // 0x358 (0x358)


}; 
 
 


// Class GameplayAbilities.AnimNotify_GameplayCue
// Size: 0x40(Inherited: 0x38)
struct UAnimNotify_GameplayCue : UAnimNotify
{
	struct FGameplayCueTag GameplayCue;  // 0x38 (0x38)


}; 
 
 


// Class GameplayAbilities.AnimNotify_GameplayCueState
// Size: 0x38(Inherited: 0x30)
struct UAnimNotify_GameplayCueState : UAnimNotifyState
{
	struct FGameplayCueTag GameplayCue;  // 0x30 (0x30)


}; 
 
 


// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0xA8(Inherited: 0xA8)
struct UGameplayAbilityBlueprint : UBlueprint
{


}; 
 
 


// Class GameplayAbilities.GameplayCueFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UGameplayCueFunctionLibrary : UBlueprintFunctionLibrary
{


	void RemoveGameplayCueOnActor(struct AActor* Target, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueFunctionLibrary.RemoveGameplayCueOnActor
	struct FGameplayCueParameters MakeGameplayCueParametersFromHitResult(struct FHitResult& HitResult); // Function GameplayAbilities.GameplayCueFunctionLibrary.MakeGameplayCueParametersFromHitResult
	void ExecuteGameplayCueOnActor(struct AActor* Target, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueFunctionLibrary.ExecuteGameplayCueOnActor
	void AddGameplayCueOnActor(struct AActor* Target, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueFunctionLibrary.AddGameplayCueOnActor
}; 
 
 


// Class GameplayAbilities.GameplayCueInterface
// Size: 0x28(Inherited: 0x28)
struct UGameplayCueInterface : UInterface
{


	void ForwardGameplayCueToParent(); // Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
	void BlueprintCustomHandler(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
}; 
 
 


// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x40(Inherited: 0x28)
struct UGameplayCueNotify_Static : UObject
{
	struct FGameplayTag GameplayCueTag;  // 0x28 (0x28)
	struct FName GameplayCueName;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool IsOverride : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
}; 
 
 


// Class GameplayAbilities.GameplayCueNotify_BurstLatent
// Size: 0x648(Inherited: 0x2F0)
struct AGameplayCueNotify_BurstLatent : AGameplayCueNotify_Actor
{
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition;  // 0x2F0 (0x2F0)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo;  // 0x328 (0x328)
	struct FGameplayCueNotify_BurstEffects BurstEffects;  // 0x368 (0x368)
	struct FGameplayCueNotify_SpawnResult BurstSpawnResults;  // 0x5F0 (0x5F0)


	void OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst
}; 
 
 


// Class GameplayAbilities.GameplayCueNotify_HitImpact
// Size: 0x50(Inherited: 0x40)
struct UGameplayCueNotify_HitImpact : UGameplayCueNotify_Static
{
	struct USoundBase* Sound;  // 0x40 (0x40)
	struct UParticleSystem* ParticleSystem;  // 0x48 (0x48)


}; 
 
 


// Class GameplayAbilities.GameplayCueNotify_Looping
// Size: 0xE48(Inherited: 0x2F0)
struct AGameplayCueNotify_Looping : AGameplayCueNotify_Actor
{
	struct FGameplayCueNotify_SpawnCondition DefaultSpawnCondition;  // 0x2F0 (0x2F0)
	struct FGameplayCueNotify_PlacementInfo DefaultPlacementInfo;  // 0x328 (0x328)
	struct FGameplayCueNotify_BurstEffects ApplicationEffects;  // 0x368 (0x368)
	struct FGameplayCueNotify_SpawnResult ApplicationSpawnResults;  // 0x5F0 (0x5F0)
	struct FGameplayCueNotify_LoopingEffects LoopingEffects;  // 0x648 (0x648)
	struct FGameplayCueNotify_SpawnResult LoopingSpawnResults;  // 0x828 (0x828)
	struct FGameplayCueNotify_BurstEffects RecurringEffects;  // 0x880 (0x880)
	struct FGameplayCueNotify_SpawnResult RecurringSpawnResults;  // 0xB08 (0xB08)
	struct FGameplayCueNotify_BurstEffects RemovalEffects;  // 0xB60 (0xB60)
	struct FGameplayCueNotify_SpawnResult RemovalSpawnResults;  // 0xDE8 (0xDE8)
	char pad_3648[8];  // 0xE40 (0xE40)


	void OnRemoval(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnRemoval
	void OnRecurring(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnRecurring
	void OnLoopingStart(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart
	void OnApplication(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults); // Function GameplayAbilities.GameplayCueNotify_Looping.OnApplication
}; 
 
 


// Class GameplayAbilities.GameplayCueSet
// Size: 0x90(Inherited: 0x30)
struct UGameplayCueSet : UDataAsset
{
	struct TArray<struct FGameplayCueNotifyData> GameplayCueData;  // 0x30 (0x30)
	char pad_64[80];  // 0x40 (0x40)


}; 
 
 


// Class GameplayAbilities.GameplayCueTranslator
// Size: 0x28(Inherited: 0x28)
struct UGameplayCueTranslator : UObject
{


}; 
 
 


// Class GameplayAbilities.GameplayCueTranslator_Test
// Size: 0x28(Inherited: 0x28)
struct UGameplayCueTranslator_Test : UGameplayCueTranslator
{


}; 
 
 


// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// Size: 0x28(Inherited: 0x28)
struct UGameplayEffectCustomApplicationRequirement : UObject
{


	bool CanApplyGameplayEffect(struct UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, struct UAbilitySystemComponent* ASC); // Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
}; 
 
 


// Class GameplayAbilities.GameplayEffectExecutionCalculation
// Size: 0x40(Inherited: 0x38)
struct UGameplayEffectExecutionCalculation : UGameplayEffectCalculation
{
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bRequiresPassedInTags : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
}; 
 
 


// Class GameplayAbilities.GameplayModMagnitudeCalculation
// Size: 0x40(Inherited: 0x38)
struct UGameplayModMagnitudeCalculation : UGameplayEffectCalculation
{
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bAllowNonNetAuthorityDependencyRegistration : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


	float K2_GetCapturedAttributeMagnitude(struct FGameplayEffectSpec& EffectSpec, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags); // Function GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude
	struct FGameplayTagContainer GetTargetSpecTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags
	struct FGameplayTagContainer GetTargetAggregatedTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags
	struct FGameplayTagContainer GetTargetActorTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags
	struct FGameplayTagContainer GetSourceSpecTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags
	struct FGameplayTagContainer GetSourceAggregatedTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags
	struct FGameplayTagContainer GetSourceActorTags(struct FGameplayEffectSpec& EffectSpec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags
	float GetSetByCallerMagnitudeByTag(struct FGameplayEffectSpec& EffectSpec, struct FGameplayTag& Tag); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag
	float GetSetByCallerMagnitudeByName(struct FGameplayEffectSpec& EffectSpec, struct FName& MagnitudeName); // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName
	float CalculateBaseMagnitude(struct FGameplayEffectSpec& Spec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
}; 
 
 


// Class GameplayAbilities.GameplayTagReponseTable
// Size: 0x1E8(Inherited: 0x30)
struct UGameplayTagReponseTable : UDataAsset
{
	struct TArray<struct FGameplayTagResponseTableEntry> Entries;  // 0x30 (0x30)
	char pad_64[424];  // 0x40 (0x40)


	void TagResponseEvent(struct FGameplayTag Tag, int32_t NewCount, struct UAbilitySystemComponent* ASC, int32_t idx); // Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
}; 
 
 


// Class GameplayAbilities.MovieSceneGameplayCueTriggerSection
// Size: 0x200(Inherited: 0x108)
struct UMovieSceneGameplayCueTriggerSection : UMovieSceneHookSection
{
	struct FMovieSceneGameplayCueChannel Channel;  // 0x108 (0x108)


}; 
 
 


// Class GameplayAbilities.MovieSceneGameplayCueTrack
// Size: 0xA8(Inherited: 0x98)
struct UMovieSceneGameplayCueTrack : UMovieSceneNameableTrack
{
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x98 (0x98)


	void SetSequencerTrackHandler(struct FDelegate InGameplayCueTrackHandler); // Function GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler
}; 
 
 


// Class GameplayAbilities.TickableAttributeSetInterface
// Size: 0x28(Inherited: 0x28)
struct UTickableAttributeSetInterface : UInterface
{


}; 
 
 



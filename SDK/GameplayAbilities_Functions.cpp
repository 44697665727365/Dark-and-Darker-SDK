#include "pch.h"
#include "SDK.h"

struct UAbilityTask_WaitConfirmCancel* UAbilityTask_WaitConfirmCancel::WaitConfirmCancel(struct UGameplayAbility* OwningAbility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel");

	FWaitConfirmCancel parms{};	
	parms.OwningAbility = OwningAbility;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_WaitConfirmCancel::OnLocalConfirmCallback(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback");

	FOnLocalConfirmCallback parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilityTask_WaitConfirmCancel::OnLocalCancelCallback(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback");

	FOnLocalCancelCallback parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilityTask_WaitConfirmCancel::OnConfirmCallback(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback");

	FOnConfirmCallback parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilityTask_WaitConfirmCancel::OnCancelCallback(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback");

	FOnCancelCallback parms{};	

	ProcessEvent(fn, &parms);
}

void UGameplayCueNotify_Burst::OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Burst.OnBurst");

	FOnBurst parms{};	
	parms.Target = Target;
	parms.Parameters = Parameters;
	parms.SpawnResults = SpawnResults;

	ProcessEvent(fn, &parms);
}

struct UAbilityAsync_WaitGameplayEffectApplied* UAbilityAsync_WaitGameplayEffectApplied::WaitGameplayEffectAppliedToActor(struct AActor* TargetActor, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor");

	FWaitGameplayEffectAppliedToActor parms{};	
	parms.TargetActor = TargetActor;
	parms.SourceFilter = SourceFilter;
	parms.SourceTagRequirements = SourceTagRequirements;
	parms.TargetTagRequirements = TargetTagRequirements;
	parms.TriggerOnce = TriggerOnce;
	parms.ListenForPeriodicEffect = ListenForPeriodicEffect;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityAsync_WaitGameplayEffectApplied::OnAppliedDelegate__DelegateSignature(struct AActor* Source, struct FGameplayEffectSpecHandle SpecHandle, struct FActiveGameplayEffectHandle ActiveHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature");

	FOnAppliedDelegate__DelegateSignature parms{};	
	parms.Source = Source;
	parms.SpecHandle = SpecHandle;
	parms.ActiveHandle = ActiveHandle;

	ProcessEvent(fn, &parms);
}

struct UAbilityAsync_WaitGameplayTagAdded* UAbilityAsync_WaitGameplayTagAdded::WaitGameplayTagAddToActor(struct AActor* TargetActor, struct FGameplayTag Tag, bool OnlyTriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor");

	FWaitGameplayTagAddToActor parms{};	
	parms.TargetActor = TargetActor;
	parms.Tag = Tag;
	parms.OnlyTriggerOnce = OnlyTriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityAsync_WaitGameplayEvent* UAbilityAsync_WaitGameplayEvent::WaitGameplayEventToActor(struct AActor* TargetActor, struct FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor");

	FWaitGameplayEventToActor parms{};	
	parms.TargetActor = TargetActor;
	parms.EventTag = EventTag;
	parms.OnlyTriggerOnce = OnlyTriggerOnce;
	parms.OnlyMatchExact = OnlyMatchExact;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityAsync_WaitGameplayEvent::EventReceivedDelegate__DelegateSignature(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature");

	FEventReceivedDelegate__DelegateSignature parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UAbilityAsync::EndAction(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityAsync.EndAction");

	FEndAction parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilityTask_WaitGameplayTag::GameplayTagCallback(struct FGameplayTag Tag, int32_t NewCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback");

	FGameplayTagCallback parms{};	
	parms.Tag = Tag;
	parms.NewCount = NewCount;

	ProcessEvent(fn, &parms);
}

struct UAbilityAsync_WaitAttributeChanged* UAbilityAsync_WaitAttributeChanged::WaitForAttributeChanged(struct AActor* TargetActor, struct FGameplayAttribute Attribute, bool OnlyTriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged");

	FWaitForAttributeChanged parms{};	
	parms.TargetActor = TargetActor;
	parms.Attribute = Attribute;
	parms.OnlyTriggerOnce = OnlyTriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityAsync_WaitAttributeChanged::AsyncWaitAttributeChangedDelegate__DelegateSignature(struct FGameplayAttribute Attribute, float NewValue, float OldValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature");

	FAsyncWaitAttributeChangedDelegate__DelegateSignature parms{};	
	parms.Attribute = Attribute;
	parms.NewValue = NewValue;
	parms.OldValue = OldValue;

	ProcessEvent(fn, &parms);
}

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnTargetActorSwapped(struct AActor* OriginalTarget, struct AActor* NewTarget){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped");

	FOnTargetActorSwapped parms{};	
	parms.OriginalTarget = OriginalTarget;
	parms.NewTarget = NewTarget;

	ProcessEvent(fn, &parms);
}

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnRep_TargetLocation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation");

	FOnRep_TargetLocation parms{};	

	ProcessEvent(fn, &parms);
}

struct UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToTargetDataActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, struct FVector TargetLocationOffset, uint8_t OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, uint8_t VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce");

	FApplyRootMotionMoveToTargetDataActorForce parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.TargetDataHandle = TargetDataHandle;
	parms.TargetDataIndex = TargetDataIndex;
	parms.TargetActorIndex = TargetActorIndex;
	parms.TargetLocationOffset = TargetLocationOffset;
	parms.OffsetAlignment = OffsetAlignment;
	parms.Duration = Duration;
	parms.TargetLerpSpeedHorizontal = TargetLerpSpeedHorizontal;
	parms.TargetLerpSpeedVertical = TargetLerpSpeedVertical;
	parms.bSetNewMovementMode = bSetNewMovementMode;
	parms.MovementMode = MovementMode;
	parms.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	parms.PathOffsetCurve = PathOffsetCurve;
	parms.TimeMappingCurve = TimeMappingCurve;
	parms.VelocityOnFinishMode = VelocityOnFinishMode;
	parms.SetVelocityOnFinish = SetVelocityOnFinish;
	parms.ClampVelocityOnFinish = ClampVelocityOnFinish;
	parms.bDisableDestinationReachedInterrupt = bDisableDestinationReachedInterrupt;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct AActor* TargetActor, struct FVector TargetLocationOffset, uint8_t OffsetAlignment, float Duration, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, uint8_t VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce");

	FApplyRootMotionMoveToActorForce parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.TargetActor = TargetActor;
	parms.TargetLocationOffset = TargetLocationOffset;
	parms.OffsetAlignment = OffsetAlignment;
	parms.Duration = Duration;
	parms.TargetLerpSpeedHorizontal = TargetLerpSpeedHorizontal;
	parms.TargetLerpSpeedVertical = TargetLerpSpeedVertical;
	parms.bSetNewMovementMode = bSetNewMovementMode;
	parms.MovementMode = MovementMode;
	parms.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	parms.PathOffsetCurve = PathOffsetCurve;
	parms.TimeMappingCurve = TimeMappingCurve;
	parms.VelocityOnFinishMode = VelocityOnFinishMode;
	parms.SetVelocityOnFinish = SetVelocityOnFinish;
	parms.ClampVelocityOnFinish = ClampVelocityOnFinish;
	parms.bDisableDestinationReachedInterrupt = bDisableDestinationReachedInterrupt;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::MoveToLocation(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, float Duration, struct UCurveFloat* OptionalInterpolationCurve, struct UCurveVector* OptionalVectorInterpolationCurve){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation");

	FMoveToLocation parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.Location = Location;
	parms.Duration = Duration;
	parms.OptionalInterpolationCurve = OptionalInterpolationCurve;
	parms.OptionalVectorInterpolationCurve = OptionalVectorInterpolationCurve;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityAsync_WaitGameplayTagRemoved* UAbilityAsync_WaitGameplayTagRemoved::WaitGameplayTagRemoveFromActor(struct AActor* TargetActor, struct FGameplayTag Tag, bool OnlyTriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor");

	FWaitGameplayTagRemoveFromActor parms{};	
	parms.TargetActor = TargetActor;
	parms.Tag = Tag;
	parms.OnlyTriggerOnce = OnlyTriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange");

	FOnMovementModeChange parms{};	
	parms.Character = Character;
	parms.PrevMovementMode = PrevMovementMode;
	parms.PreviousCustomMode = PreviousCustomMode;

	ProcessEvent(fn, &parms);
}

struct UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::CreateWaitMovementModeChange(struct UGameplayAbility* OwningAbility, enum class EMovementMode NewMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange");

	FCreateWaitMovementModeChange parms{};	
	parms.OwningAbility = OwningAbility;
	parms.NewMode = NewMode;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityAsync_WaitGameplayTagQuery* UAbilityAsync_WaitGameplayTagQuery::WaitGameplayTagQueryOnActor(struct AActor* TargetActor, struct FGameplayTagQuery TagQuery, uint8_t TriggerCondition, bool bOnlyTriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityAsync_WaitGameplayTagQuery.WaitGameplayTagQueryOnActor");

	FWaitGameplayTagQueryOnActor parms{};	
	parms.TargetActor = TargetActor;
	parms.TagQuery = TagQuery;
	parms.TriggerCondition = TriggerCondition;
	parms.bOnlyTriggerOnce = bOnlyTriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitInputRelease* UAbilityTask_WaitInputRelease::WaitInputRelease(struct UGameplayAbility* OwningAbility, bool bTestAlreadyReleased){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease");

	FWaitInputRelease parms{};	
	parms.OwningAbility = OwningAbility;
	parms.bTestAlreadyReleased = bTestAlreadyReleased;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_WaitInputRelease::OnReleaseCallback(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback");

	FOnReleaseCallback parms{};	

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::SetShouldBlockOtherAbilities(bool bShouldBlockAbilities){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities");

	FSetShouldBlockOtherAbilities parms{};	
	parms.bShouldBlockAbilities = bShouldBlockAbilities;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::SetCanBeCanceled(bool bCanBeCanceled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.SetCanBeCanceled");

	FSetCanBeCanceled parms{};	
	parms.bCanBeCanceled = bCanBeCanceled;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::SendGameplayEvent(struct FGameplayTag EventTag, struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.SendGameplayEvent");

	FSendGameplayEvent parms{};	
	parms.EventTag = EventTag;
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::RemoveGrantedByEffect(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect");

	FRemoveGrantedByEffect parms{};	

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::MontageStop(float OverrideBlendOutTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MontageStop");

	FMontageStop parms{};	
	parms.OverrideBlendOutTime = OverrideBlendOutTime;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::MontageSetNextSectionName(struct FName FromSectionName, struct FName ToSectionName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName");

	FMontageSetNextSectionName parms{};	
	parms.FromSectionName = FromSectionName;
	parms.ToSectionName = ToSectionName;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::MontageJumpToSection(struct FName SectionName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MontageJumpToSection");

	FMontageJumpToSection parms{};	
	parms.SectionName = SectionName;

	ProcessEvent(fn, &parms);
}

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName SocketName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent");

	FMakeTargetLocationInfoFromOwnerSkeletalMeshComponent parms{};	
	parms.SocketName = SocketName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerActor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor");

	FMakeTargetLocationInfoFromOwnerActor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectSpecHandle UGameplayAbility::MakeOutgoingGameplayEffectSpec(UGameplayEffect* GameplayEffectClass, float Level){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec");

	FMakeOutgoingGameplayEffectSpec parms{};	
	parms.GameplayEffectClass = GameplayEffectClass;
	parms.Level = Level;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGameplayAbility::K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent");

	FK2_ShouldAbilityRespondToEvent parms{};	
	parms.ActorInfo = ActorInfo;
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameplayAbility::K2_RemoveGameplayCue(struct FGameplayTag GameplayCueTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue");

	FK2_RemoveGameplayCue parms{};	
	parms.GameplayCueTag = GameplayCueTag;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

bool UGameplayAbility::K2_HasAuthority(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_HasAuthority");

	FK2_HasAuthority parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameplayAbility::K2_ExecuteGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams");

	FK2_ExecuteGameplayCueWithParams parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.GameplayCueParameters = GameplayCueParameters;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::K2_ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue");

	FK2_ExecuteGameplayCue parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.Context = Context;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::K2_EndAbilityLocally(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_EndAbilityLocally");

	FK2_EndAbilityLocally parms{};	

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::K2_EndAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_EndAbility");

	FK2_EndAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::K2_CommitExecute(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitExecute");

	FK2_CommitExecute parms{};	

	ProcessEvent(fn, &parms);
}

bool UGameplayAbility::K2_CommitAbilityCost(bool BroadcastCommitEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost");

	FK2_CommitAbilityCost parms{};	
	parms.BroadcastCommitEvent = BroadcastCommitEvent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGameplayAbility::K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown");

	FK2_CommitAbilityCooldown parms{};	
	parms.BroadcastCommitEvent = BroadcastCommitEvent;
	parms.ForceCooldown = ForceCooldown;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGameplayAbility::K2_CommitAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitAbility");

	FK2_CommitAbility parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGameplayAbility::K2_CheckAbilityCost(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost");

	FK2_CheckAbilityCost parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGameplayAbility::K2_CheckAbilityCooldown(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown");

	FK2_CheckAbilityCooldown parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameplayAbility::K2_CancelAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CancelAbility");

	FK2_CancelAbility parms{};	

	ProcessEvent(fn, &parms);
}

bool UGameplayAbility::K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility");

	FK2_CanActivateAbility parms{};	
	parms.ActorInfo = ActorInfo;
	parms.Handle = Handle;
	parms.RelevantTags = RelevantTags;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle EffectSpecHandle, struct FGameplayAbilityTargetDataHandle TargetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget");

	FK2_ApplyGameplayEffectSpecToTarget parms{};	
	parms.EffectSpecHandle = EffectSpecHandle;
	parms.TargetData = TargetData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectSpecToOwner(struct FGameplayEffectSpecHandle EffectSpecHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner");

	FK2_ApplyGameplayEffectSpecToOwner parms{};	
	parms.EffectSpecHandle = EffectSpecHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameplayAbility::K2_AddGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams");

	FK2_AddGameplayCueWithParams parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.GameplayCueParameter = GameplayCueParameter;
	parms.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::K2_AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue");

	FK2_AddGameplayCue parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.Context = Context;
	parms.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

bool UGameplayAbility::IsLocallyControlled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.IsLocallyControlled");

	FIsLocallyControlled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameplayAbility::InvalidateClientPredictionKey(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey");

	FInvalidateClientPredictionKey parms{};	

	ProcessEvent(fn, &parms);
}

struct UObject* UGameplayAbility::GetSourceObject_BP(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo& ActorInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetSourceObject_BP");

	FGetSourceObject_BP parms{};	
	parms.Handle = Handle;
	parms.ActorInfo = ActorInfo;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USkeletalMeshComponent* UGameplayAbility::GetOwningComponentFromActorInfo(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo");

	FGetOwningComponentFromActorInfo parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* UGameplayAbility::GetOwningActorFromActorInfo(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo");

	FGetOwningActorFromActorInfo parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectContextHandle UGameplayAbility::GetGrantedByEffectContext(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext");

	FGetGrantedByEffectContext parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UGameplayAbility::GetCurrentSourceObject(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject");

	FGetCurrentSourceObject parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAnimMontage* UGameplayAbility::GetCurrentMontage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetCurrentMontage");

	FGetCurrentMontage parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGameplayAbility::GetCooldownTimeRemaining(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining");

	FGetCooldownTimeRemaining parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectContextHandle UGameplayAbility::GetContextFromOwner(struct FGameplayAbilityTargetDataHandle OptionalTargetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetContextFromOwner");

	FGetContextFromOwner parms{};	
	parms.OptionalTargetData = OptionalTargetData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* UGameplayAbility::GetAvatarActorFromActorInfo(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo");

	FGetAvatarActorFromActorInfo parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayAbilityActorInfo UGameplayAbility::GetActorInfo(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetActorInfo");

	FGetActorInfo parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilitySystemComponent* UGameplayAbility::GetAbilitySystemComponentFromActorInfo(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo");

	FGetAbilitySystemComponentFromActorInfo parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UGameplayAbility::GetAbilityLevel_BP(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo& ActorInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetAbilityLevel_BP");

	FGetAbilityLevel_BP parms{};	
	parms.Handle = Handle;
	parms.ActorInfo = ActorInfo;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UGameplayAbility::GetAbilityLevel(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetAbilityLevel");

	FGetAbilityLevel parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameplayAbility::EndTaskByInstanceName(struct FName InstanceName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName");

	FEndTaskByInstanceName parms{};	
	parms.InstanceName = InstanceName;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::EndAbilityState(struct FName OptionalStateNameToEnd){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.EndAbilityState");

	FEndAbilityState parms{};	
	parms.OptionalStateNameToEnd = OptionalStateNameToEnd;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::ConfirmTaskByInstanceName(struct FName InstanceName, bool bEndTask){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName");

	FConfirmTaskByInstanceName parms{};	
	parms.InstanceName = InstanceName;
	parms.bEndTask = bEndTask;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::CancelTaskByInstanceName(struct FName InstanceName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName");

	FCancelTaskByInstanceName parms{};	
	parms.InstanceName = InstanceName;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithHandle(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle");

	FBP_RemoveGameplayEffectFromOwnerWithHandle parms{};	
	parms.Handle = Handle;
	parms.StacksToRemove = StacksToRemove;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(struct FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags");

	FBP_RemoveGameplayEffectFromOwnerWithGrantedTags parms{};	
	parms.WithGrantedTags = WithGrantedTags;
	parms.StacksToRemove = StacksToRemove;

	ProcessEvent(fn, &parms);
}

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(struct FGameplayTagContainer WithAssetTags, int32_t StacksToRemove){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags");

	FBP_RemoveGameplayEffectFromOwnerWithAssetTags parms{};	
	parms.WithAssetTags = WithAssetTags;
	parms.StacksToRemove = StacksToRemove;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::BP_ApplyGameplayEffectToTarget(struct FGameplayAbilityTargetDataHandle TargetData, UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget");

	FBP_ApplyGameplayEffectToTarget parms{};	
	parms.TargetData = TargetData;
	parms.GameplayEffectClass = GameplayEffectClass;
	parms.GameplayEffectLevel = GameplayEffectLevel;
	parms.Stacks = Stacks;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FActiveGameplayEffectHandle UGameplayAbility::BP_ApplyGameplayEffectToOwner(UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner");

	FBP_ApplyGameplayEffectToOwner parms{};	
	parms.GameplayEffectClass = GameplayEffectClass;
	parms.GameplayEffectLevel = GameplayEffectLevel;
	parms.Stacks = Stacks;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_StartAbilityState* UAbilityTask_StartAbilityState::StartAbilityState(struct UGameplayAbility* OwningAbility, struct FName StateName, bool bEndCurrentState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState");

	FStartAbilityState parms{};	
	parms.OwningAbility = OwningAbility;
	parms.StateName = StateName;
	parms.bEndCurrentState = bEndCurrentState;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AGameplayAbilityTargetActor::ConfirmTargeting(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting");

	FConfirmTargeting parms{};	

	ProcessEvent(fn, &parms);
}

void AGameplayAbilityTargetActor::CancelTargeting(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting");

	FCancelTargeting parms{};	

	ProcessEvent(fn, &parms);
}

struct UAbilityTask_WaitDelay* UAbilityTask_WaitDelay::WaitDelay(struct UGameplayAbility* OwningAbility, float Time){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay");

	FWaitDelay parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Time = Time;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query");

	FWaitForAbilityCommit_Query parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Query = Query;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTage, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit");

	FWaitForAbilityCommit parms{};	
	parms.OwningAbility = OwningAbility;
	parms.WithTag = WithTag;
	parms.WithoutTage = WithoutTage;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_WaitAbilityCommit::OnAbilityCommit(struct UGameplayAbility* ActivatedAbility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit");

	FOnAbilityCommit parms{};	
	parms.ActivatedAbility = ActivatedAbility;

	ProcessEvent(fn, &parms);
}

void AGameplayAbilityWorldReticle::SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector");

	FSetReticleMaterialParamVector parms{};	
	parms.ParamName = ParamName;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void AGameplayAbilityWorldReticle::SetReticleMaterialParamFloat(struct FName ParamName, float Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat");

	FSetReticleMaterialParamFloat parms{};	
	parms.ParamName = ParamName;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void AGameplayAbilityWorldReticle::OnValidTargetChanged(bool bNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged");

	FOnValidTargetChanged parms{};	
	parms.bNewValue = bNewValue;

	ProcessEvent(fn, &parms);
}

void AGameplayAbilityWorldReticle::OnTargetingAnActor(bool bNewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor");

	FOnTargetingAnActor parms{};	
	parms.bNewValue = bNewValue;

	ProcessEvent(fn, &parms);
}

void AGameplayAbilityWorldReticle::OnParametersInitialized(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized");

	FOnParametersInitialized parms{};	

	ProcessEvent(fn, &parms);
}

void AGameplayAbilityWorldReticle::FaceTowardSource(bool bFaceIn2D){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource");

	FFaceTowardSource parms{};	
	parms.bFaceIn2D = bFaceIn2D;

	ProcessEvent(fn, &parms);
}

struct UAbilityTask_WaitGameplayTagAdded* UAbilityTask_WaitGameplayTagAdded::WaitGameplayTagAdd(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd");

	FWaitGameplayTagAdd parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Tag = Tag;
	parms.InOptionalExternalTarget = InOptionalExternalTarget;
	parms.OnlyTriggerOnce = OnlyTriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool AGameplayCueNotify_Actor::WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive");

	FWhileActive parms{};	
	parms.MyTarget = MyTarget;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool AGameplayCueNotify_Actor::OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove");

	FOnRemove parms{};	
	parms.MyTarget = MyTarget;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AGameplayCueNotify_Actor::OnOwnerDestroyed(struct AActor* DestroyedActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed");

	FOnOwnerDestroyed parms{};	
	parms.DestroyedActor = DestroyedActor;

	ProcessEvent(fn, &parms);
}

bool AGameplayCueNotify_Actor::OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute");

	FOnExecute parms{};	
	parms.MyTarget = MyTarget;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool AGameplayCueNotify_Actor::OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnActive");

	FOnActive parms{};	
	parms.MyTarget = MyTarget;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AGameplayCueNotify_Actor::K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue");

	FK2_HandleGameplayCue parms{};	
	parms.MyTarget = MyTarget;
	parms.EventType = EventType;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);
}

void AGameplayCueNotify_Actor::K2_EndGameplayCue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue");

	FK2_EndGameplayCue parms{};	

	ProcessEvent(fn, &parms);
}

struct UAbilityTask_ApplyRootMotionMoveToForce* UAbilityTask_ApplyRootMotionMoveToForce::ApplyRootMotionMoveToForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector TargetLocation, float Duration, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, uint8_t VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce");

	FApplyRootMotionMoveToForce parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.TargetLocation = TargetLocation;
	parms.Duration = Duration;
	parms.bSetNewMovementMode = bSetNewMovementMode;
	parms.MovementMode = MovementMode;
	parms.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	parms.PathOffsetCurve = PathOffsetCurve;
	parms.VelocityOnFinishMode = VelocityOnFinishMode;
	parms.SetVelocityOnFinish = SetVelocityOnFinish;
	parms.ClampVelocityOnFinish = ClampVelocityOnFinish;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_ApplyRootMotionConstantForce* UAbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, struct UCurveFloat* StrengthOverTime, uint8_t VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce");

	FApplyRootMotionConstantForce parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.WorldDirection = WorldDirection;
	parms.Strength = Strength;
	parms.Duration = Duration;
	parms.bIsAdditive = bIsAdditive;
	parms.StrengthOverTime = StrengthOverTime;
	parms.VelocityOnFinishMode = VelocityOnFinishMode;
	parms.SetVelocityOnFinish = SetVelocityOnFinish;
	parms.ClampVelocityOnFinish = ClampVelocityOnFinish;
	parms.bEnableGravity = bEnableGravity;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_ApplyRootMotionJumpForce::OnLandedCallback(struct FHitResult& Hit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback");

	FOnLandedCallback parms{};	
	parms.Hit = Hit;

	ProcessEvent(fn, &parms);
}

void UAbilityTask_ApplyRootMotionJumpForce::Finish(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish");

	FFinish parms{};	

	ProcessEvent(fn, &parms);
}

struct UAbilityTask_ApplyRootMotionJumpForce* UAbilityTask_ApplyRootMotionJumpForce::ApplyRootMotionJumpForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, uint8_t VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce");

	FApplyRootMotionJumpForce parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.Rotation = Rotation;
	parms.Distance = Distance;
	parms.Height = Height;
	parms.Duration = Duration;
	parms.MinimumLandedTriggerTime = MinimumLandedTriggerTime;
	parms.bFinishOnLanded = bFinishOnLanded;
	parms.VelocityOnFinishMode = VelocityOnFinishMode;
	parms.SetVelocityOnFinish = SetVelocityOnFinish;
	parms.ClampVelocityOnFinish = ClampVelocityOnFinish;
	parms.PathOffsetCurve = PathOffsetCurve;
	parms.TimeMappingCurve = TimeMappingCurve;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_ApplyRootMotionRadialForce* UAbilityTask_ApplyRootMotionRadialForce::ApplyRootMotionRadialForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, struct AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, struct UCurveFloat* StrengthDistanceFalloff, struct UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, struct FRotator FixedWorldDirection, uint8_t VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce");

	FApplyRootMotionRadialForce parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.Location = Location;
	parms.LocationActor = LocationActor;
	parms.Strength = Strength;
	parms.Duration = Duration;
	parms.Radius = Radius;
	parms.bIsPush = bIsPush;
	parms.bIsAdditive = bIsAdditive;
	parms.bNoZForce = bNoZForce;
	parms.StrengthDistanceFalloff = StrengthDistanceFalloff;
	parms.StrengthOverTime = StrengthOverTime;
	parms.bUseFixedWorldDirection = bUseFixedWorldDirection;
	parms.FixedWorldDirection = FixedWorldDirection;
	parms.VelocityOnFinishMode = VelocityOnFinishMode;
	parms.SetVelocityOnFinish = SetVelocityOnFinish;
	parms.ClampVelocityOnFinish = ClampVelocityOnFinish;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query");

	FWaitGameplayEffectAppliedToTarget_Query parms{};	
	parms.OwningAbility = OwningAbility;
	parms.SourceFilter = SourceFilter;
	parms.SourceTagQuery = SourceTagQuery;
	parms.TargetTagQuery = TargetTagQuery;
	parms.TriggerOnce = TriggerOnce;
	parms.OptionalExternalOwner = OptionalExternalOwner;
	parms.ListenForPeriodicEffect = ListenForPeriodicEffect;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle TargetFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffects){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget");

	FWaitGameplayEffectAppliedToTarget parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TargetFilter = TargetFilter;
	parms.SourceTagRequirements = SourceTagRequirements;
	parms.TargetTagRequirements = TargetTagRequirements;
	parms.TriggerOnce = TriggerOnce;
	parms.OptionalExternalOwner = OptionalExternalOwner;
	parms.ListenForPeriodicEffects = ListenForPeriodicEffects;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_NetworkSyncPoint* UAbilityTask_NetworkSyncPoint::WaitNetSync(struct UGameplayAbility* OwningAbility, uint8_t SyncType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync");

	FWaitNetSync parms{};	
	parms.OwningAbility = OwningAbility;
	parms.SyncType = SyncType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_NetworkSyncPoint::OnSignalCallback(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback");

	FOnSignalCallback parms{};	

	ProcessEvent(fn, &parms);
}

struct UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargetingUsingActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* TargetActor, struct FName TaskInstanceName, float Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor");

	FVisualizeTargetingUsingActor parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TargetActor = TargetActor;
	parms.TaskInstanceName = TaskInstanceName;
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargeting(struct UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* Class, struct FName TaskInstanceName, float Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting");

	FVisualizeTargeting parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Class = Class;
	parms.TaskInstanceName = TaskInstanceName;
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_VisualizeTargeting::FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor");

	FFinishSpawningActor parms{};	
	parms.OwningAbility = OwningAbility;
	parms.SpawnedActor = SpawnedActor;

	ProcessEvent(fn, &parms);
}

bool UAbilityTask_VisualizeTargeting::BeginSpawningActor(struct UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor");

	FBeginSpawningActor parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Class = Class;
	parms.SpawnedActor = SpawnedActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted");

	FOnMontageInterrupted parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilityTask_PlayMontageAndWait::OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded");

	FOnMontageEnded parms{};	
	parms.Montage = Montage;
	parms.bInterrupted = bInterrupted;

	ProcessEvent(fn, &parms);
}

void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut");

	FOnMontageBlendingOut parms{};	
	parms.Montage = Montage;
	parms.bInterrupted = bInterrupted;

	ProcessEvent(fn, &parms);
}

struct UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UAnimMontage* MontageToPlay, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy");

	FCreatePlayMontageAndWaitProxy parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.MontageToPlay = MontageToPlay;
	parms.Rate = Rate;
	parms.StartSection = StartSection;
	parms.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	parms.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
	parms.StartTimeSeconds = StartTimeSeconds;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_Repeat* UAbilityTask_Repeat::RepeatAction(struct UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_Repeat.RepeatAction");

	FRepeatAction parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TimeBetweenActions = TimeBetweenActions;
	parms.TotalActionCount = TotalActionCount;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::WaitForGameplayEffectRemoved(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved");

	FWaitForGameplayEffectRemoved parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Handle = Handle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved");

	FOnGameplayEffectRemoved parms{};	
	parms.InGameplayEffectRemovalInfo = InGameplayEffectRemovalInfo;

	ProcessEvent(fn, &parms);
}

struct UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::SpawnActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, AActor* Class){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor");

	FSpawnActor parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TargetData = TargetData;
	parms.Class = Class;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_SpawnActor::FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* SpawnedActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor");

	FFinishSpawningActor parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TargetData = TargetData;
	parms.SpawnedActor = SpawnedActor;

	ProcessEvent(fn, &parms);
}

bool UAbilityTask_SpawnActor::BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, AActor* Class, struct AActor*& SpawnedActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor");

	FBeginSpawningActor parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TargetData = TargetData;
	parms.Class = Class;
	parms.SpawnedActor = SpawnedActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivateWithTagRequirements(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements");

	FWaitForAbilityActivateWithTagRequirements parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TagRequirements = TagRequirements;
	parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query");

	FWaitForAbilityActivate_Query parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Query = Query;
	parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate");

	FWaitForAbilityActivate parms{};	
	parms.OwningAbility = OwningAbility;
	parms.WithTag = WithTag;
	parms.WithoutTag = WithoutTag;
	parms.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	parms.TriggerOnce = TriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_WaitAbilityActivate::OnAbilityActivate(struct UGameplayAbility* ActivatedAbility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate");

	FOnAbilityActivate parms{};	
	parms.ActivatedAbility = ActivatedAbility;

	ProcessEvent(fn, &parms);
}

struct UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChangeWithComparison(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute InAttribute, struct FGameplayTag InWithTag, struct FGameplayTag InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, struct AActor* OptionalExternalOwner){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison");

	FWaitForAttributeChangeWithComparison parms{};	
	parms.OwningAbility = OwningAbility;
	parms.InAttribute = InAttribute;
	parms.InWithTag = InWithTag;
	parms.InWithoutTag = InWithoutTag;
	parms.InComparisonType = InComparisonType;
	parms.InComparisonValue = InComparisonValue;
	parms.TriggerOnce = TriggerOnce;
	parms.OptionalExternalOwner = OptionalExternalOwner;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChange(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, struct FGameplayTag WithSrcTag, struct FGameplayTag WithoutSrcTag, bool TriggerOnce, struct AActor* OptionalExternalOwner){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange");

	FWaitForAttributeChange parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Attribute = Attribute;
	parms.WithSrcTag = WithSrcTag;
	parms.WithoutSrcTag = WithoutSrcTag;
	parms.TriggerOnce = TriggerOnce;
	parms.OptionalExternalOwner = OptionalExternalOwner;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitGameplayTagRemoved* UAbilityTask_WaitGameplayTagRemoved::WaitGameplayTagRemove(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove");

	FWaitGameplayTagRemove parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Tag = Tag;
	parms.InOptionalExternalTarget = InOptionalExternalTarget;
	parms.OnlyTriggerOnce = OnlyTriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitAttributeChangeRatioThreshold* UAbilityTask_WaitAttributeChangeRatioThreshold::WaitForAttributeChangeRatioThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute AttributeNumerator, struct FGameplayAttribute AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold");

	FWaitForAttributeChangeRatioThreshold parms{};	
	parms.OwningAbility = OwningAbility;
	parms.AttributeNumerator = AttributeNumerator;
	parms.AttributeDenominator = AttributeDenominator;
	parms.ComparisonType = ComparisonType;
	parms.ComparisonValue = ComparisonValue;
	parms.bTriggerOnce = bTriggerOnce;
	parms.OptionalExternalOwner = OptionalExternalOwner;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitAttributeChangeThreshold* UAbilityTask_WaitAttributeChangeThreshold::WaitForAttributeChangeThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold");

	FWaitForAttributeChangeThreshold parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Attribute = Attribute;
	parms.ComparisonType = ComparisonType;
	parms.ComparisonValue = ComparisonValue;
	parms.bTriggerOnce = bTriggerOnce;
	parms.OptionalExternalOwner = OptionalExternalOwner;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitCancel* UAbilityTask_WaitCancel::WaitCancel(struct UGameplayAbility* OwningAbility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel");

	FWaitCancel parms{};	
	parms.OwningAbility = OwningAbility;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_WaitCancel::OnLocalCancelCallback(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback");

	FOnLocalCancelCallback parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilityTask_WaitCancel::OnCancelCallback(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback");

	FOnCancelCallback parms{};	

	ProcessEvent(fn, &parms);
}

struct UAbilityTask_WaitConfirm* UAbilityTask_WaitConfirm::WaitConfirm(struct UGameplayAbility* OwningAbility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm");

	FWaitConfirm parms{};	
	parms.OwningAbility = OwningAbility;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_WaitConfirm::OnConfirmCallback(struct UGameplayAbility* InAbility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback");

	FOnConfirmCallback parms{};	
	parms.InAbility = InAbility;

	ProcessEvent(fn, &parms);
}

void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(struct UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, struct FActiveGameplayEffectHandle ActiveHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback");

	FOnApplyGameplayEffectCallback parms{};	
	parms.Target = Target;
	parms.SpecApplied = SpecApplied;
	parms.ActiveHandle = ActiveHandle;

	ProcessEvent(fn, &parms);
}

struct UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query");

	FWaitGameplayEffectAppliedToSelf_Query parms{};	
	parms.OwningAbility = OwningAbility;
	parms.SourceFilter = SourceFilter;
	parms.SourceTagQuery = SourceTagQuery;
	parms.TargetTagQuery = TargetTagQuery;
	parms.TriggerOnce = TriggerOnce;
	parms.OptionalExternalOwner = OptionalExternalOwner;
	parms.ListenForPeriodicEffect = ListenForPeriodicEffect;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf");

	FWaitGameplayEffectAppliedToSelf parms{};	
	parms.OwningAbility = OwningAbility;
	parms.SourceFilter = SourceFilter;
	parms.SourceTagRequirements = SourceTagRequirements;
	parms.TargetTagRequirements = TargetTagRequirements;
	parms.TriggerOnce = TriggerOnce;
	parms.OptionalExternalOwner = OptionalExternalOwner;
	parms.ListenForPeriodicEffect = ListenForPeriodicEffect;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitGameplayEffectBlockedImmunity* UAbilityTask_WaitGameplayEffectBlockedImmunity::WaitGameplayEffectBlockedByImmunity(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity");

	FWaitGameplayEffectBlockedByImmunity parms{};	
	parms.OwningAbility = OwningAbility;
	parms.SourceTagRequirements = SourceTagRequirements;
	parms.TargetTagRequirements = TargetTagRequirements;
	parms.OptionalExternalTarget = OptionalExternalTarget;
	parms.OnlyTriggerOnce = OnlyTriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitGameplayEffectStackChange* UAbilityTask_WaitGameplayEffectStackChange::WaitForGameplayEffectStackChange(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange");

	FWaitForGameplayEffectStackChange parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Handle = Handle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_WaitGameplayEffectStackChange::OnGameplayEffectStackChange(struct FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange");

	FOnGameplayEffectStackChange parms{};	
	parms.Handle = Handle;
	parms.NewCount = NewCount;
	parms.OldCount = OldCount;

	ProcessEvent(fn, &parms);
}

struct UAbilityTask_WaitGameplayEvent* UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(struct UGameplayAbility* OwningAbility, struct FGameplayTag EventTag, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent");

	FWaitGameplayEvent parms{};	
	parms.OwningAbility = OwningAbility;
	parms.EventTag = EventTag;
	parms.OptionalExternalTarget = OptionalExternalTarget;
	parms.OnlyTriggerOnce = OnlyTriggerOnce;
	parms.OnlyMatchExact = OnlyMatchExact;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitGameplayTagQuery* UAbilityTask_WaitGameplayTagQuery::WaitGameplayTagQuery(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery TagQuery, struct AActor* InOptionalExternalTarget, uint8_t TriggerCondition, bool bOnlyTriggerOnce){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.WaitGameplayTagQuery");

	FWaitGameplayTagQuery parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TagQuery = TagQuery;
	parms.InOptionalExternalTarget = InOptionalExternalTarget;
	parms.TriggerCondition = TriggerCondition;
	parms.bOnlyTriggerOnce = bOnlyTriggerOnce;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_WaitGameplayTagQuery::UpdateTargetTags(struct FGameplayTag Tag, int32_t NewCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.UpdateTargetTags");

	FUpdateTargetTags parms{};	
	parms.Tag = Tag;
	parms.NewCount = NewCount;

	ProcessEvent(fn, &parms);
}

bool UAbilitySystemBlueprintLibrary::TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin");

	FTargetDataHasOrigin parms{};	
	parms.TargetData = TargetData;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult");

	FTargetDataHasHitResult parms{};	
	parms.HitResult = HitResult;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint");

	FTargetDataHasEndPoint parms{};	
	parms.TargetData = TargetData;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor");

	FTargetDataHasActor parms{};	
	parms.TargetData = TargetData;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCountToMax(struct FGameplayEffectSpecHandle SpecHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax");

	FSetStackCountToMax parms{};	
	parms.SpecHandle = SpecHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCount(struct FGameplayEffectSpecHandle SpecHandle, int32_t StackCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount");

	FSetStackCount parms{};	
	parms.SpecHandle = SpecHandle;
	parms.StackCount = StackCount;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetDuration(struct FGameplayEffectSpecHandle SpecHandle, float Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration");

	FSetDuration parms{};	
	parms.SpecHandle = SpecHandle;
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(struct AActor* Actor, struct FGameplayTag EventTag, struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor");

	FSendGameplayEventToActor parms{};	
	parms.Actor = Actor;
	parms.EventTag = EventTag;
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

bool UAbilitySystemBlueprintLibrary::RemoveLooseGameplayTags(struct AActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.RemoveLooseGameplayTags");

	FRemoveLooseGameplayTags parms{};	
	parms.Actor = Actor;
	parms.GameplayTags = GameplayTags;
	parms.bShouldReplicate = bShouldReplicate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::NotEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute");

	FNotEqual_GameplayAttributeGameplayAttribute parms{};	
	parms.AttributeA = AttributeA;
	parms.AttributeB = AttributeB;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::NotEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAbilitySpecHandle");

	FNotEqual_GameplayAbilitySpecHandle parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::NotEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& A, struct FActiveGameplayEffectHandle& B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_ActiveGameplayEffectHandle");

	FNotEqual_ActiveGameplayEffectHandle parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::MakeSpecHandle(struct UGameplayEffect* InGameplayEffect, struct AActor* InInstigator, struct AActor* InEffectCauser, float InLevel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle");

	FMakeSpecHandle parms{};	
	parms.InGameplayEffect = InGameplayEffect;
	parms.InInstigator = InInstigator;
	parms.InEffectCauser = InEffectCauser;
	parms.InLevel = InLevel;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayCueParameters UAbilitySystemBlueprintLibrary::MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, struct FGameplayEffectContextHandle EffectContext, struct FGameplayTag MatchedTagName, struct FGameplayTag OriginalTag, struct FGameplayTagContainer AggregatedSourceTags, struct FGameplayTagContainer AggregatedTargetTags, struct FVector Location, struct FVector Normal, struct AActor* Instigator, struct AActor* EffectCauser, struct UObject* SourceObject, struct UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, struct USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters");

	FMakeGameplayCueParameters parms{};	
	parms.NormalizedMagnitude = NormalizedMagnitude;
	parms.RawMagnitude = RawMagnitude;
	parms.EffectContext = EffectContext;
	parms.MatchedTagName = MatchedTagName;
	parms.OriginalTag = OriginalTag;
	parms.AggregatedSourceTags = AggregatedSourceTags;
	parms.AggregatedTargetTags = AggregatedTargetTags;
	parms.Location = Location;
	parms.Normal = Normal;
	parms.Instigator = Instigator;
	parms.EffectCauser = EffectCauser;
	parms.SourceObject = SourceObject;
	parms.PhysicalMaterial = PhysicalMaterial;
	parms.GameplayEffectLevel = GameplayEffectLevel;
	parms.AbilityLevel = AbilityLevel;
	parms.TargetAttachComponent = TargetAttachComponent;
	parms.bReplicateLocationWhenUsingMinimalRepProxy = bReplicateLocationWhenUsingMinimalRepProxy;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTargetDataFilterHandle UAbilitySystemBlueprintLibrary::MakeFilterHandle(struct FGameplayTargetDataFilter Filter, struct AActor* FilterActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle");

	FMakeFilterHandle parms{};	
	parms.Filter = Filter;
	parms.FilterActor = FilterActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::IsValid(struct FGameplayAttribute Attribute){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid");

	FIsValid parms{};	
	parms.Attribute = Attribute;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlledPlayer(struct FGameplayCueParameters Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer");

	FIsInstigatorLocallyControlledPlayer parms{};	
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlled(struct FGameplayCueParameters Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled");

	FIsInstigatorLocallyControlled parms{};	
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::HasHitResult(struct FGameplayCueParameters Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult");

	FHasHitResult parms{};	
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin");

	FGetTargetDataOrigin parms{};	
	parms.TargetData = TargetData;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform");

	FGetTargetDataEndPointTransform parms{};	
	parms.TargetData = TargetData;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UAbilitySystemBlueprintLibrary::GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint");

	FGetTargetDataEndPoint parms{};	
	parms.TargetData = TargetData;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UAbilitySystemBlueprintLibrary::GetOrigin(struct FGameplayCueParameters Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin");

	FGetOrigin parms{};	
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAbilitySystemBlueprintLibrary::GetModifiedAttributeMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayAttribute Attribute){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude");

	FGetModifiedAttributeMagnitude parms{};	
	parms.SpecHandle = SpecHandle;
	parms.Attribute = Attribute;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UAbilitySystemBlueprintLibrary::GetInstigatorTransform(struct FGameplayCueParameters Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform");

	FGetInstigatorTransform parms{};	
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* UAbilitySystemBlueprintLibrary::GetInstigatorActor(struct FGameplayCueParameters Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor");

	FGetInstigatorActor parms{};	
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData");

	FGetHitResultFromTargetData parms{};	
	parms.HitResult = HitResult;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResult(struct FGameplayCueParameters Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult");

	FGetHitResult parms{};	
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UGameplayEffectUIData* UAbilitySystemBlueprintLibrary::GetGameplayEffectUIData(UGameplayEffect* EffectClass, UGameplayEffectUIData* DataType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectUIData");

	FGetGameplayEffectUIData parms{};	
	parms.EffectClass = EffectClass;
	parms.DataType = DataType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UGameplayEffect* UAbilitySystemBlueprintLibrary::GetGameplayEffectFromActiveEffectHandle(struct FActiveGameplayEffectHandle& ActiveHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectFromActiveEffectHandle");

	FGetGameplayEffectFromActiveEffectHandle parms{};	
	parms.ActiveHandle = ActiveHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::GetGameplayCueEndLocationAndNormal(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Location, struct FVector& Normal){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal");

	FGetGameplayCueEndLocationAndNormal parms{};	
	parms.TargetActor = TargetActor;
	parms.Parameters = Parameters;
	parms.Location = Location;
	parms.Normal = Normal;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::GetGameplayCueDirection(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector& Direction){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection");

	FGetGameplayCueDirection parms{};	
	parms.TargetActor = TargetActor;
	parms.Parameters = Parameters;
	parms.Direction = Direction;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UGameplayAbility* UAbilitySystemBlueprintLibrary::GetGameplayAbilityFromSpecHandle(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAbilitySpecHandle& AbilitySpecHandle, bool& bIsInstance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayAbilityFromSpecHandle");

	FGetGameplayAbilityFromSpecHandle parms{};	
	parms.AbilitySystem = AbilitySystem;
	parms.AbilitySpecHandle = AbilitySpecHandle;
	parms.bIsInstance = bIsInstance;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttributeFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent");

	FGetFloatAttributeFromAbilitySystemComponent parms{};	
	parms.AbilitySystem = AbilitySystem;
	parms.Attribute = Attribute;
	parms.bSuccessfullyFoundAttribute = bSuccessfullyFoundAttribute;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBaseFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent");

	FGetFloatAttributeBaseFromAbilitySystemComponent parms{};	
	parms.AbilitySystemComponent = AbilitySystemComponent;
	parms.Attribute = Attribute;
	parms.bSuccessfullyFoundAttribute = bSuccessfullyFoundAttribute;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBase(struct AActor* Actor, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase");

	FGetFloatAttributeBase parms{};	
	parms.Actor = Actor;
	parms.Attribute = Attribute;
	parms.bSuccessfullyFoundAttribute = bSuccessfullyFoundAttribute;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAbilitySystemBlueprintLibrary::GetFloatAttribute(struct AActor* Actor, struct FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute");

	FGetFloatAttribute parms{};	
	parms.Actor = Actor;
	parms.Attribute = Attribute;
	parms.bSuccessfullyFoundAttribute = bSuccessfullyFoundAttribute;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectContextHandle UAbilitySystemBlueprintLibrary::GetEffectContext(struct FGameplayEffectSpecHandle SpecHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext");

	FGetEffectContext parms{};	
	parms.SpecHandle = SpecHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UAbilitySystemBlueprintLibrary::GetDebugStringFromGameplayAttribute(struct FGameplayAttribute& Attribute){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDebugStringFromGameplayAttribute");

	FGetDebugStringFromGameplayAttribute parms{};	
	parms.Attribute = Attribute;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAbilitySystemBlueprintLibrary::GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData");

	FGetDataCountFromTargetData parms{};	
	parms.TargetData = TargetData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FGameplayEffectSpecHandle> UAbilitySystemBlueprintLibrary::GetAllLinkedGameplayEffectSpecHandles(struct FGameplayEffectSpecHandle SpecHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles");

	FGetAllLinkedGameplayEffectSpecHandles parms{};	
	parms.SpecHandle = SpecHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct AActor*> UAbilitySystemBlueprintLibrary::GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData");

	FGetAllActorsFromTargetData parms{};	
	parms.TargetData = TargetData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct AActor*> UAbilitySystemBlueprintLibrary::GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData");

	FGetActorsFromTargetData parms{};	
	parms.TargetData = TargetData;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAbilitySystemBlueprintLibrary::GetActorCount(struct FGameplayCueParameters Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount");

	FGetActorCount parms{};	
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* UAbilitySystemBlueprintLibrary::GetActorByIndex(struct FGameplayCueParameters Parameters, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex");

	FGetActorByIndex parms{};	
	parms.Parameters = Parameters;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectTotalDuration(struct FActiveGameplayEffectHandle ActiveHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration");

	FGetActiveGameplayEffectTotalDuration parms{};	
	parms.ActiveHandle = ActiveHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStartTime(struct FActiveGameplayEffectHandle ActiveHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime");

	FGetActiveGameplayEffectStartTime parms{};	
	parms.ActiveHandle = ActiveHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackLimitCount(struct FActiveGameplayEffectHandle ActiveHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount");

	FGetActiveGameplayEffectStackLimitCount parms{};	
	parms.ActiveHandle = ActiveHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackCount(struct FActiveGameplayEffectHandle ActiveHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount");

	FGetActiveGameplayEffectStackCount parms{};	
	parms.ActiveHandle = ActiveHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectRemainingDuration(struct UObject* WorldContextObject, struct FActiveGameplayEffectHandle ActiveHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration");

	FGetActiveGameplayEffectRemainingDuration parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ActiveHandle = ActiveHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectExpectedEndTime(struct FActiveGameplayEffectHandle ActiveHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime");

	FGetActiveGameplayEffectExpectedEndTime parms{};	
	parms.ActiveHandle = ActiveHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectDebugString(struct FActiveGameplayEffectHandle ActiveHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString");

	FGetActiveGameplayEffectDebugString parms{};	
	parms.ActiveHandle = ActiveHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilitySystemComponent* UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(struct AActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent");

	FGetAbilitySystemComponent parms{};	
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilitySystemBlueprintLibrary::ForwardGameplayCueToTarget(struct TScriptInterface<IGameplayCueInterface> TargetCueInterface, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget");

	FForwardGameplayCueToTarget parms{};	
	parms.TargetCueInterface = TargetCueInterface;
	parms.EventType = EventType;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::FilterTargetData(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTargetDataFilterHandle ActorFilterClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData");

	FFilterTargetData parms{};	
	parms.TargetDataHandle = TargetDataHandle;
	parms.ActorFilterClass = ActorFilterClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTagsAndBase(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase");

	FEvaluateAttributeValueWithTagsAndBase parms{};	
	parms.AbilitySystem = AbilitySystem;
	parms.Attribute = Attribute;
	parms.SourceTags = SourceTags;
	parms.TargetTags = TargetTags;
	parms.BaseValue = BaseValue;
	parms.bSuccess = bSuccess;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTags(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, bool& bSuccess){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags");

	FEvaluateAttributeValueWithTags parms{};	
	parms.AbilitySystem = AbilitySystem;
	parms.Attribute = Attribute;
	parms.SourceTags = SourceTags;
	parms.TargetTags = TargetTags;
	parms.bSuccess = bSuccess;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::EqualEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute");

	FEqualEqual_GameplayAttributeGameplayAttribute parms{};	
	parms.AttributeA = AttributeA;
	parms.AttributeB = AttributeB;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::EqualEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& A, struct FGameplayAbilitySpecHandle& B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAbilitySpecHandle");

	FEqualEqual_GameplayAbilitySpecHandle parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::EqualEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& A, struct FActiveGameplayEffectHandle& B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_ActiveGameplayEffectHandle");

	FEqualEqual_ActiveGameplayEffectHandle parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilitySystemBlueprintLibrary::EffectContextSetOrigin(struct FGameplayEffectContextHandle EffectContext, struct FVector Origin){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin");

	FEffectContextSetOrigin parms{};	
	parms.EffectContext = EffectContext;
	parms.Origin = Origin;

	ProcessEvent(fn, &parms);
}

bool UAbilitySystemBlueprintLibrary::EffectContextIsValid(struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid");

	FEffectContextIsValid parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::EffectContextIsInstigatorLocallyControlled(struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled");

	FEffectContextIsInstigatorLocallyControlled parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::EffectContextHasHitResult(struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult");

	FEffectContextHasHitResult parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UAbilitySystemBlueprintLibrary::EffectContextGetSourceObject(struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject");

	FEffectContextGetSourceObject parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* UAbilitySystemBlueprintLibrary::EffectContextGetOriginalInstigatorActor(struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor");

	FEffectContextGetOriginalInstigatorActor parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UAbilitySystemBlueprintLibrary::EffectContextGetOrigin(struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin");

	FEffectContextGetOrigin parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* UAbilitySystemBlueprintLibrary::EffectContextGetInstigatorActor(struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor");

	FEffectContextGetInstigatorActor parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FHitResult UAbilitySystemBlueprintLibrary::EffectContextGetHitResult(struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult");

	FEffectContextGetHitResult parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* UAbilitySystemBlueprintLibrary::EffectContextGetEffectCauser(struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser");

	FEffectContextGetEffectCauser parms{};	
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilitySystemBlueprintLibrary::EffectContextAddHitResult(struct FGameplayEffectContextHandle EffectContext, struct FHitResult HitResult, bool bReset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult");

	FEffectContextAddHitResult parms{};	
	parms.EffectContext = EffectContext;
	parms.HitResult = HitResult;
	parms.bReset = bReset;

	ProcessEvent(fn, &parms);
}

bool UAbilitySystemBlueprintLibrary::DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, struct AActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor");

	FDoesTargetDataContainActor parms{};	
	parms.TargetData = TargetData;
	parms.Index = Index;
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::DoesGameplayCueMeetTagRequirements(struct FGameplayCueParameters Parameters, struct FGameplayTagRequirements& SourceTagReqs, struct FGameplayTagRequirements& TargetTagReqs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements");

	FDoesGameplayCueMeetTagRequirements parms{};	
	parms.Parameters = Parameters;
	parms.SourceTagReqs = SourceTagReqs;
	parms.TargetTagReqs = TargetTagReqs;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::CloneSpecHandle(struct AActor* InNewInstigator, struct AActor* InEffectCauser, struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle");

	FCloneSpecHandle parms{};	
	parms.InNewInstigator = InNewInstigator;
	parms.InEffectCauser = InEffectCauser;
	parms.GameplayEffectSpecHandle_Clone = GameplayEffectSpecHandle_Clone;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilitySystemBlueprintLibrary::BreakGameplayCueParameters(struct FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTag& MatchedTagName, struct FGameplayTag& OriginalTag, struct FGameplayTagContainer& AggregatedSourceTags, struct FGameplayTagContainer& AggregatedTargetTags, struct FVector& Location, struct FVector& Normal, struct AActor*& Instigator, struct AActor*& EffectCauser, struct UObject*& SourceObject, struct UPhysicalMaterial*& PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, struct USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters");

	FBreakGameplayCueParameters parms{};	
	parms.Parameters = Parameters;
	parms.NormalizedMagnitude = NormalizedMagnitude;
	parms.RawMagnitude = RawMagnitude;
	parms.EffectContext = EffectContext;
	parms.MatchedTagName = MatchedTagName;
	parms.OriginalTag = OriginalTag;
	parms.AggregatedSourceTags = AggregatedSourceTags;
	parms.AggregatedTargetTags = AggregatedTargetTags;
	parms.Location = Location;
	parms.Normal = Normal;
	parms.Instigator = Instigator;
	parms.EffectCauser = EffectCauser;
	parms.SourceObject = SourceObject;
	parms.PhysicalMaterial = PhysicalMaterial;
	parms.GameplayEffectLevel = GameplayEffectLevel;
	parms.AbilityLevel = AbilityLevel;
	parms.TargetAttachComponent = TargetAttachComponent;
	parms.bReplicateLocationWhenUsingMinimalRepProxy = bReplicateLocationWhenUsingMinimalRepProxy;

	ProcessEvent(fn, &parms);
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag DataTag, float Magnitude){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude");

	FAssignTagSetByCallerMagnitude parms{};	
	parms.SpecHandle = SpecHandle;
	parms.DataTag = DataTag;
	parms.Magnitude = Magnitude;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FName DataName, float Magnitude){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude");

	FAssignSetByCallerMagnitude parms{};	
	parms.SpecHandle = SpecHandle;
	parms.DataName = DataName;
	parms.Magnitude = Magnitude;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AppendTargetDataHandle(struct FGameplayAbilityTargetDataHandle TargetHandle, struct FGameplayAbilityTargetDataHandle& HandleToAdd){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle");

	FAppendTargetDataHandle parms{};	
	parms.TargetHandle = TargetHandle;
	parms.HandleToAdd = HandleToAdd;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemBlueprintLibrary::AddLooseGameplayTags(struct AActor* Actor, struct FGameplayTagContainer& GameplayTags, bool bShouldReplicate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLooseGameplayTags");

	FAddLooseGameplayTags parms{};	
	parms.Actor = Actor;
	parms.GameplayTags = GameplayTags;
	parms.bShouldReplicate = bShouldReplicate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffectSpec(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec");

	FAddLinkedGameplayEffectSpec parms{};	
	parms.SpecHandle = SpecHandle;
	parms.LinkedGameplayEffectSpec = LinkedGameplayEffectSpec;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffect(struct FGameplayEffectSpecHandle SpecHandle, UGameplayEffect* LinkedGameplayEffect){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect");

	FAddLinkedGameplayEffect parms{};	
	parms.SpecHandle = SpecHandle;
	parms.LinkedGameplayEffect = LinkedGameplayEffect;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags");

	FAddGrantedTags parms{};	
	parms.SpecHandle = SpecHandle;
	parms.NewGameplayTags = NewGameplayTags;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag");

	FAddGrantedTag parms{};	
	parms.SpecHandle = SpecHandle;
	parms.NewGameplayTag = NewGameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags");

	FAddAssetTags parms{};	
	parms.SpecHandle = SpecHandle;
	parms.NewGameplayTags = NewGameplayTags;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag");

	FAddAssetTag parms{};	
	parms.SpecHandle = SpecHandle;
	parms.NewGameplayTag = NewGameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& SourceLocation, struct FGameplayAbilityTargetingLocationInfo& TargetLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations");

	FAbilityTargetDataFromLocations parms{};	
	parms.SourceLocation = SourceLocation;
	parms.TargetLocation = TargetLocation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromHitResult(struct FHitResult& HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult");

	FAbilityTargetDataFromHitResult parms{};	
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(struct TArray<struct AActor*>& ActorArray, bool OneTargetPerHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray");

	FAbilityTargetDataFromActorArray parms{};	
	parms.ActorArray = ActorArray;
	parms.OneTargetPerHandle = OneTargetPerHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(struct AActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor");

	FAbilityTargetDataFromActor parms{};	
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitInputPress* UAbilityTask_WaitInputPress::WaitInputPress(struct UGameplayAbility* OwningAbility, bool bTestAlreadyPressed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress");

	FWaitInputPress parms{};	
	parms.OwningAbility = OwningAbility;
	parms.bTestAlreadyPressed = bTestAlreadyPressed;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_WaitInputPress::OnPressCallback(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback");

	FOnPressCallback parms{};	

	ProcessEvent(fn, &parms);
}

struct UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::WaitForOverlap(struct UGameplayAbility* OwningAbility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap");

	FWaitForOverlap parms{};	
	parms.OwningAbility = OwningAbility;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_WaitOverlap::OnHitCallback(struct UPrimitiveComponent* HitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback");

	FOnHitCallback parms{};	
	parms.HitComp = HitComp;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.NormalImpulse = NormalImpulse;
	parms.Hit = Hit;

	ProcessEvent(fn, &parms);
}

struct UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetDataUsingActor(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* TargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor");

	FWaitTargetDataUsingActor parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.ConfirmationType = ConfirmationType;
	parms.TargetActor = TargetActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetData(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, AGameplayAbilityTargetActor* Class){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData");

	FWaitTargetData parms{};	
	parms.OwningAbility = OwningAbility;
	parms.TaskInstanceName = TaskInstanceName;
	parms.ConfirmationType = ConfirmationType;
	parms.Class = Class;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback");

	FOnTargetDataReplicatedCancelledCallback parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, struct FGameplayTag ActivationTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback");

	FOnTargetDataReplicatedCallback parms{};	
	parms.Data = Data;
	parms.ActivationTag = ActivationTag;

	ProcessEvent(fn, &parms);
}

void UAbilityTask_WaitTargetData::OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback");

	FOnTargetDataReadyCallback parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UAbilityTask_WaitTargetData::OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback");

	FOnTargetDataCancelledCallback parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UAbilityTask_WaitTargetData::FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor");

	FFinishSpawningActor parms{};	
	parms.OwningAbility = OwningAbility;
	parms.SpawnedActor = SpawnedActor;

	ProcessEvent(fn, &parms);
}

bool UAbilityTask_WaitTargetData::BeginSpawningActor(struct UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor*& SpawnedActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor");

	FBeginSpawningActor parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Class = Class;
	parms.SpawnedActor = SpawnedActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::CreateWaitVelocityChange(struct UGameplayAbility* OwningAbility, struct FVector Direction, float MinimumMagnitude){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange");

	FCreateWaitVelocityChange parms{};	
	parms.OwningAbility = OwningAbility;
	parms.Direction = Direction;
	parms.MinimumMagnitude = MinimumMagnitude;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilitySystemComponent::UpdateActiveGameplayEffectSetByCallerMagnitudes(struct FActiveGameplayEffectHandle ActiveHandle, struct TMap<struct FGameplayTag, float>& NewSetByCallerValues){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes");

	FUpdateActiveGameplayEffectSetByCallerMagnitudes parms{};	
	parms.ActiveHandle = ActiveHandle;
	parms.NewSetByCallerValues = NewSetByCallerValues;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::UpdateActiveGameplayEffectSetByCallerMagnitude(struct FActiveGameplayEffectHandle ActiveHandle, struct FGameplayTag SetByCallerTag, float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude");

	FUpdateActiveGameplayEffectSetByCallerMagnitude parms{};	
	parms.ActiveHandle = ActiveHandle;
	parms.SetByCallerTag = SetByCallerTag;
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

bool UAbilitySystemComponent::TryActivateAbilityByClass(UGameplayAbility* InAbilityToActivate, bool bAllowRemoteActivation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass");

	FTryActivateAbilityByClass parms{};	
	parms.InAbilityToActivate = InAbilityToActivate;
	parms.bAllowRemoteActivation = bAllowRemoteActivation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemComponent::TryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, bool bAllowRemoteActivation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbility");

	FTryActivateAbility parms{};	
	parms.AbilityToActivate = AbilityToActivate;
	parms.bAllowRemoteActivation = bAllowRemoteActivation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemComponent::TryActivateAbilitiesByTag(struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag");

	FTryActivateAbilitiesByTag parms{};	
	parms.GameplayTagContainer = GameplayTagContainer;
	parms.bAllowRemoteActivation = bAllowRemoteActivation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilitySystemComponent::TargetConfirm(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TargetConfirm");

	FTargetConfirm parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::TargetCancel(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TargetCancel");

	FTargetCancel parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::SetUserAbilityActivationInhibited(bool NewInhibit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited");

	FSetUserAbilityActivationInhibited parms{};	
	parms.NewInhibit = NewInhibit;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::SetActiveGameplayEffectLevelUsingQuery(struct FGameplayEffectQuery Query, int32_t NewLevel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery");

	FSetActiveGameplayEffectLevelUsingQuery parms{};	
	parms.Query = Query;
	parms.NewLevel = NewLevel;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::SetActiveGameplayEffectLevel(struct FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel");

	FSetActiveGameplayEffectLevel parms{};	
	parms.ActiveHandle = ActiveHandle;
	parms.NewLevel = NewLevel;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerTryActivateAbilityWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData");

	FServerTryActivateAbilityWithEventData parms{};	
	parms.AbilityToActivate = AbilityToActivate;
	parms.InputPressed = InputPressed;
	parms.PredictionKey = PredictionKey;
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility");

	FServerTryActivateAbility parms{};	
	parms.AbilityToActivate = AbilityToActivate;
	parms.InputPressed = InputPressed;
	parms.PredictionKey = PredictionKey;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled");

	FServerSetReplicatedTargetDataCancelled parms{};	
	parms.AbilityHandle = AbilityHandle;
	parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	parms.CurrentPredictionKey = CurrentPredictionKey;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerSetReplicatedTargetData(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, struct FGameplayTag ApplicationTag, struct FPredictionKey CurrentPredictionKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData");

	FServerSetReplicatedTargetData parms{};	
	parms.AbilityHandle = AbilityHandle;
	parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	parms.ReplicatedTargetDataHandle = ReplicatedTargetDataHandle;
	parms.ApplicationTag = ApplicationTag;
	parms.CurrentPredictionKey = CurrentPredictionKey;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey, struct FVector_NetQuantize100 VectorPayload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload");

	FServerSetReplicatedEventWithPayload parms{};	
	parms.EventType = EventType;
	parms.AbilityHandle = AbilityHandle;
	parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	parms.CurrentPredictionKey = CurrentPredictionKey;
	parms.VectorPayload = VectorPayload;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent");

	FServerSetReplicatedEvent parms{};	
	parms.EventType = EventType;
	parms.AbilityHandle = AbilityHandle;
	parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	parms.CurrentPredictionKey = CurrentPredictionKey;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerSetInputReleased(struct FGameplayAbilitySpecHandle AbilityHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased");

	FServerSetInputReleased parms{};	
	parms.AbilityHandle = AbilityHandle;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerSetInputPressed(struct FGameplayAbilitySpecHandle AbilityHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed");

	FServerSetInputPressed parms{};	
	parms.AbilityHandle = AbilityHandle;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerPrintDebug_RequestWithStrings(struct TArray<struct FString> Strings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings");

	FServerPrintDebug_RequestWithStrings parms{};	
	parms.Strings = Strings;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerPrintDebug_Request(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request");

	FServerPrintDebug_Request parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo, struct FPredictionKey PredictionKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility");

	FServerEndAbility parms{};	
	parms.AbilityToEnd = AbilityToEnd;
	parms.ActivationInfo = ActivationInfo;
	parms.PredictionKey = PredictionKey;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerCurrentMontageSetPlayRate(struct UAnimMontage* ClientAnimMontage, float InPlayRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate");

	FServerCurrentMontageSetPlayRate parms{};	
	parms.ClientAnimMontage = ClientAnimMontage;
	parms.InPlayRate = InPlayRate;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName(struct UAnimMontage* ClientAnimMontage, float ClientPosition, struct FName SectionName, struct FName NextSectionName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName");

	FServerCurrentMontageSetNextSectionName parms{};	
	parms.ClientAnimMontage = ClientAnimMontage;
	parms.ClientPosition = ClientPosition;
	parms.SectionName = SectionName;
	parms.NextSectionName = NextSectionName;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName(struct UAnimMontage* ClientAnimMontage, struct FName SectionName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName");

	FServerCurrentMontageJumpToSectionName parms{};	
	parms.ClientAnimMontage = ClientAnimMontage;
	parms.SectionName = SectionName;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility");

	FServerCancelAbility parms{};	
	parms.AbilityToCancel = AbilityToCancel;
	parms.ActivationInfo = ActivationInfo;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ServerAbilityRPCBatch(struct FServerAbilityRPCBatch BatchInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch");

	FServerAbilityRPCBatch parms{};	
	parms.BatchInfo = BatchInfo;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(UGameplayEffect* GameplayEffect, struct UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect");

	FRemoveActiveGameplayEffectBySourceEffect parms{};	
	parms.GameplayEffect = GameplayEffect;
	parms.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;
	parms.StacksToRemove = StacksToRemove;

	ProcessEvent(fn, &parms);
}

bool UAbilitySystemComponent::RemoveActiveGameplayEffect(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect");

	FRemoveActiveGameplayEffect parms{};	
	parms.Handle = Handle;
	parms.StacksToRemove = StacksToRemove;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAbilitySystemComponent::RemoveActiveEffectsWithTags(struct FGameplayTagContainer Tags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags");

	FRemoveActiveEffectsWithTags parms{};	
	parms.Tags = Tags;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAbilitySystemComponent::RemoveActiveEffectsWithSourceTags(struct FGameplayTagContainer Tags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags");

	FRemoveActiveEffectsWithSourceTags parms{};	
	parms.Tags = Tags;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAbilitySystemComponent::RemoveActiveEffectsWithGrantedTags(struct FGameplayTagContainer Tags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags");

	FRemoveActiveEffectsWithGrantedTags parms{};	
	parms.Tags = Tags;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAbilitySystemComponent::RemoveActiveEffectsWithAppliedTags(struct FGameplayTagContainer Tags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags");

	FRemoveActiveEffectsWithAppliedTags parms{};	
	parms.Tags = Tags;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilitySystemComponent::ReleaseInputID(int32_t InputID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ReleaseInputID");

	FReleaseInputID parms{};	
	parms.InputID = InputID;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::PressInputID(int32_t InputID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.PressInputID");

	FPressInputID parms{};	
	parms.InputID = InputID;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::OnSpawnedAttributesEndPlayed(struct AActor* InActor, enum class EEndPlayReason EndPlayReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed");

	FOnSpawnedAttributesEndPlayed parms{};	
	parms.InActor = InActor;
	parms.EndPlayReason = EndPlayReason;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::OnRep_SpawnedAttributes(struct TArray<struct UAttributeSet*>& PreviousSpawnedAttributes){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_SpawnedAttributes");

	FOnRep_SpawnedAttributes parms{};	
	parms.PreviousSpawnedAttributes = PreviousSpawnedAttributes;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::OnRep_ServerDebugString(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString");

	FOnRep_ServerDebugString parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::OnRep_ReplicatedAnimMontage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage");

	FOnRep_ReplicatedAnimMontage parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::OnRep_OwningActor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor");

	FOnRep_OwningActor parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::OnRep_ClientDebugString(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString");

	FOnRep_ClientDebugString parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::OnRep_ActivateAbilities(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities");

	FOnRep_ActivateAbilities parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::OnOwnerActorDestroyed(struct AActor* InActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed");

	FOnOwnerActorDestroyed parms{};	
	parms.InActor = InActor;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::OnAvatarActorDestroyed(struct AActor* InActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed");

	FOnAvatarActorDestroyed parms{};	
	parms.InActor = InActor;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams");

	FNetMulticast_InvokeGameplayCuesExecuted_WithParams parms{};	
	parms.GameplayCueTags = GameplayCueTags;
	parms.PredictionKey = PredictionKey;
	parms.GameplayCueParameters = GameplayCueParameters;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted");

	FNetMulticast_InvokeGameplayCuesExecuted parms{};	
	parms.GameplayCueTags = GameplayCueTags;
	parms.PredictionKey = PredictionKey;
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams");

	FNetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams parms{};	
	parms.GameplayCueTags = GameplayCueTags;
	parms.PredictionKey = PredictionKey;
	parms.GameplayCueParameters = GameplayCueParameters;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams");

	FNetMulticast_InvokeGameplayCueExecuted_WithParams parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.PredictionKey = PredictionKey;
	parms.GameplayCueParameters = GameplayCueParameters;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec");

	FNetMulticast_InvokeGameplayCueExecuted_FromSpec parms{};	
	parms.Spec = Spec;
	parms.PredictionKey = PredictionKey;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted");

	FNetMulticast_InvokeGameplayCueExecuted parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.PredictionKey = PredictionKey;
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams");

	FNetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.PredictionKey = PredictionKey;
	parms.GameplayCueParameters = GameplayCueParameters;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec");

	FNetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec parms{};	
	parms.Spec = Spec;
	parms.PredictionKey = PredictionKey;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams");

	FNetMulticast_InvokeGameplayCueAdded_WithParams parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.PredictionKey = PredictionKey;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded");

	FNetMulticast_InvokeGameplayCueAdded parms{};	
	parms.GameplayCueTag = GameplayCueTag;
	parms.PredictionKey = PredictionKey;
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);
}

struct FGameplayEffectSpecHandle UAbilitySystemComponent::MakeOutgoingSpec(UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle Context){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec");

	FMakeOutgoingSpec parms{};	
	parms.GameplayEffectClass = GameplayEffectClass;
	parms.Level = Level;
	parms.Context = Context;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayEffectContextHandle UAbilitySystemComponent::MakeEffectContext(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext");

	FMakeEffectContext parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilitySystemComponent::K2_InitStats(UAttributeSet* Attributes, struct UDataTable* DataTable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.K2_InitStats");

	FK2_InitStats parms{};	
	parms.Attributes = Attributes;
	parms.DataTable = DataTable;

	ProcessEvent(fn, &parms);
}

struct FGameplayAbilitySpecHandle UAbilitySystemComponent::K2_GiveAbilityAndActivateOnce(UGameplayAbility* AbilityClass, int32_t Level, int32_t InputID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce");

	FK2_GiveAbilityAndActivateOnce parms{};	
	parms.AbilityClass = AbilityClass;
	parms.Level = Level;
	parms.InputID = InputID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayAbilitySpecHandle UAbilitySystemComponent::K2_GiveAbility(UGameplayAbility* AbilityClass, int32_t Level, int32_t InputID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbility");

	FK2_GiveAbility parms{};	
	parms.AbilityClass = AbilityClass;
	parms.Level = Level;
	parms.InputID = InputID;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAbilitySystemComponent::IsGameplayCueActive(struct FGameplayTag GameplayCueTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive");

	FIsGameplayCueActive parms{};	
	parms.GameplayCueTag = GameplayCueTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilitySystemComponent::InputConfirm(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.InputConfirm");

	FInputConfirm parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::InputCancel(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.InputCancel");

	FInputCancel parms{};	

	ProcessEvent(fn, &parms);
}

bool UAbilitySystemComponent::GetUserAbilityActivationInhibited(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited");

	FGetUserAbilityActivationInhibited parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAbilitySystemComponent::GetGameplayTagCount(struct FGameplayTag GameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount");

	FGetGameplayTagCount parms{};	
	parms.GameplayTag = GameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAbilitySystemComponent::GetGameplayEffectMagnitude(struct FActiveGameplayEffectHandle Handle, struct FGameplayAttribute Attribute){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude");

	FGetGameplayEffectMagnitude parms{};	
	parms.Handle = Handle;
	parms.Attribute = Attribute;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAbilitySystemComponent::GetGameplayEffectCount_IfLoaded(struct TSoftClassPtr<UObject> SoftSourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount_IfLoaded");

	FGetGameplayEffectCount_IfLoaded parms{};	
	parms.SoftSourceGameplayEffect = SoftSourceGameplayEffect;
	parms.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;
	parms.bEnforceOnGoingCheck = bEnforceOnGoingCheck;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAbilitySystemComponent::GetGameplayEffectCount(UGameplayEffect* SourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount");

	FGetGameplayEffectCount parms{};	
	parms.SourceGameplayEffect = SourceGameplayEffect;
	parms.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;
	parms.bEnforceOnGoingCheck = bEnforceOnGoingCheck;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAbilitySystemComponent::GetGameplayAttributeValue(struct FGameplayAttribute Attribute, bool& bFound){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue");

	FGetGameplayAttributeValue parms{};	
	parms.Attribute = Attribute;
	parms.bFound = bFound;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAttributeSet* UAbilitySystemComponent::GetAttributeSet(UAttributeSet* AttributeSetClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetAttributeSet");

	FGetAttributeSet parms{};	
	parms.AttributeSetClass = AttributeSetClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilitySystemComponent::GetAllAttributes(struct TArray<struct FGameplayAttribute>& OutAttributes){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetAllAttributes");

	FGetAllAttributes parms{};	
	parms.OutAttributes = OutAttributes;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::GetAllAbilities(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetAllAbilities");

	FGetAllAbilities parms{};	
	parms.OutAbilityHandles = OutAbilityHandles;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffectsWithAllTags(struct FGameplayTagContainer Tags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags");

	FGetActiveEffectsWithAllTags parms{};	
	parms.Tags = Tags;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffects(struct FGameplayEffectQuery& Query){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects");

	FGetActiveEffects parms{};	
	parms.Query = Query;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilitySystemComponent::FindAllAbilitiesWithTags(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, struct FGameplayTagContainer Tags, bool bExactMatch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags");

	FFindAllAbilitiesWithTags parms{};	
	parms.OutAbilityHandles = OutAbilityHandles;
	parms.Tags = Tags;
	parms.bExactMatch = bExactMatch;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::FindAllAbilitiesWithInputID(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, int32_t InputID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID");

	FFindAllAbilitiesWithInputID parms{};	
	parms.OutAbilityHandles = OutAbilityHandles;
	parms.InputID = InputID;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::FindAllAbilitiesMatchingQuery(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, struct FGameplayTagQuery Query){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery");

	FFindAllAbilitiesMatchingQuery parms{};	
	parms.OutAbilityHandles = OutAbilityHandles;
	parms.Query = Query;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ClientTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility");

	FClientTryActivateAbility parms{};	
	parms.AbilityToActivate = AbilityToActivate;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ClientSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent");

	FClientSetReplicatedEvent parms{};	
	parms.EventType = EventType;
	parms.AbilityHandle = AbilityHandle;
	parms.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ClientPrintDebug_Response(struct TArray<struct FString> Strings, int32_t GameFlags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response");

	FClientPrintDebug_Response parms{};	
	parms.Strings = Strings;
	parms.GameFlags = GameFlags;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ClientEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility");

	FClientEndAbility parms{};	
	parms.AbilityToEnd = AbilityToEnd;
	parms.ActivationInfo = ActivationInfo;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ClientCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility");

	FClientCancelAbility parms{};	
	parms.AbilityToCancel = AbilityToCancel;
	parms.ActivationInfo = ActivationInfo;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ClientActivateAbilitySucceedWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData");

	FClientActivateAbilitySucceedWithEventData parms{};	
	parms.AbilityToActivate = AbilityToActivate;
	parms.PredictionKey = PredictionKey;
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ClientActivateAbilitySucceed(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed");

	FClientActivateAbilitySucceed parms{};	
	parms.AbilityToActivate = AbilityToActivate;
	parms.PredictionKey = PredictionKey;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ClientActivateAbilityFailed(struct FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed");

	FClientActivateAbilityFailed parms{};	
	parms.AbilityToActivate = AbilityToActivate;
	parms.PredictionKey = PredictionKey;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ClearAllAbilitiesWithInputID(int32_t InputID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID");

	FClearAllAbilitiesWithInputID parms{};	
	parms.InputID = InputID;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ClearAllAbilities(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilities");

	FClearAllAbilities parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::ClearAbility(struct FGameplayAbilitySpecHandle& Handle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClearAbility");

	FClearAbility parms{};	
	parms.Handle = Handle;

	ProcessEvent(fn, &parms);
}

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToTarget(UGameplayEffect* GameplayEffectClass, struct UAbilitySystemComponent* Target, float Level, struct FGameplayEffectContextHandle Context){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget");

	FBP_ApplyGameplayEffectToTarget parms{};	
	parms.GameplayEffectClass = GameplayEffectClass;
	parms.Target = Target;
	parms.Level = Level;
	parms.Context = Context;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToSelf(UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf");

	FBP_ApplyGameplayEffectToSelf parms{};	
	parms.GameplayEffectClass = GameplayEffectClass;
	parms.Level = Level;
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& SpecHandle, struct UAbilitySystemComponent* Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget");

	FBP_ApplyGameplayEffectSpecToTarget parms{};	
	parms.SpecHandle = SpecHandle;
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle& SpecHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf");

	FBP_ApplyGameplayEffectSpecToSelf parms{};	
	parms.SpecHandle = SpecHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAbilitySystemComponent::AbilityConfirmOrCancel__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature");

	FAbilityConfirmOrCancel__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilitySystemComponent::AbilityAbilityKey__DelegateSignature(int32_t InputID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature");

	FAbilityAbilityKey__DelegateSignature parms{};	
	parms.InputID = InputID;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCosts(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts");

	FToggleIgnoreAbilitySystemCosts parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCooldowns(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns");

	FToggleIgnoreAbilitySystemCooldowns parms{};	

	ProcessEvent(fn, &parms);
}

void UAbilitySystemGlobals::ServerEndPlayerAbility(struct FString AbilityNameMatch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility");

	FServerEndPlayerAbility parms{};	
	parms.AbilityNameMatch = AbilityNameMatch;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemGlobals::ServerCancelPlayerAbility(struct FString AbilityNameMatch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility");

	FServerCancelPlayerAbility parms{};	
	parms.AbilityNameMatch = AbilityNameMatch;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemGlobals::ServerActivatePlayerAbility(struct FString AbilityNameMatch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility");

	FServerActivatePlayerAbility parms{};	
	parms.AbilityNameMatch = AbilityNameMatch;

	ProcessEvent(fn, &parms);
}

void UAbilitySystemGlobals::ListPlayerAbilities(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities");

	FListPlayerAbilities parms{};	

	ProcessEvent(fn, &parms);
}

void UGameplayCueFunctionLibrary::RemoveGameplayCueOnActor(struct AActor* Target, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueFunctionLibrary.RemoveGameplayCueOnActor");

	FRemoveGameplayCueOnActor parms{};	
	parms.Target = Target;
	parms.GameplayCueTag = GameplayCueTag;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);
}

struct FGameplayCueParameters UGameplayCueFunctionLibrary::MakeGameplayCueParametersFromHitResult(struct FHitResult& HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueFunctionLibrary.MakeGameplayCueParametersFromHitResult");

	FMakeGameplayCueParametersFromHitResult parms{};	
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameplayCueFunctionLibrary::ExecuteGameplayCueOnActor(struct AActor* Target, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueFunctionLibrary.ExecuteGameplayCueOnActor");

	FExecuteGameplayCueOnActor parms{};	
	parms.Target = Target;
	parms.GameplayCueTag = GameplayCueTag;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);
}

void UGameplayCueFunctionLibrary::AddGameplayCueOnActor(struct AActor* Target, struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueFunctionLibrary.AddGameplayCueOnActor");

	FAddGameplayCueOnActor parms{};	
	parms.Target = Target;
	parms.GameplayCueTag = GameplayCueTag;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);
}

void UGameplayCueInterface::ForwardGameplayCueToParent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent");

	FForwardGameplayCueToParent parms{};	

	ProcessEvent(fn, &parms);
}

void UGameplayCueInterface::BlueprintCustomHandler(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler");

	FBlueprintCustomHandler parms{};	
	parms.EventType = EventType;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);
}

bool UGameplayCueNotify_Static::WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.WhileActive");

	FWhileActive parms{};	
	parms.MyTarget = MyTarget;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGameplayCueNotify_Static::OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.OnRemove");

	FOnRemove parms{};	
	parms.MyTarget = MyTarget;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGameplayCueNotify_Static::OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.OnExecute");

	FOnExecute parms{};	
	parms.MyTarget = MyTarget;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGameplayCueNotify_Static::OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.OnActive");

	FOnActive parms{};	
	parms.MyTarget = MyTarget;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameplayCueNotify_Static::K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue");

	FK2_HandleGameplayCue parms{};	
	parms.MyTarget = MyTarget;
	parms.EventType = EventType;
	parms.Parameters = Parameters;

	ProcessEvent(fn, &parms);
}

void AGameplayCueNotify_BurstLatent::OnBurst(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst");

	FOnBurst parms{};	
	parms.Target = Target;
	parms.Parameters = Parameters;
	parms.SpawnResults = SpawnResults;

	ProcessEvent(fn, &parms);
}

void AGameplayCueNotify_Looping::OnRemoval(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Looping.OnRemoval");

	FOnRemoval parms{};	
	parms.Target = Target;
	parms.Parameters = Parameters;
	parms.SpawnResults = SpawnResults;

	ProcessEvent(fn, &parms);
}

void AGameplayCueNotify_Looping::OnRecurring(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Looping.OnRecurring");

	FOnRecurring parms{};	
	parms.Target = Target;
	parms.Parameters = Parameters;
	parms.SpawnResults = SpawnResults;

	ProcessEvent(fn, &parms);
}

void AGameplayCueNotify_Looping::OnLoopingStart(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart");

	FOnLoopingStart parms{};	
	parms.Target = Target;
	parms.Parameters = Parameters;
	parms.SpawnResults = SpawnResults;

	ProcessEvent(fn, &parms);
}

void AGameplayCueNotify_Looping::OnApplication(struct AActor* Target, struct FGameplayCueParameters& Parameters, struct FGameplayCueNotify_SpawnResult& SpawnResults){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Looping.OnApplication");

	FOnApplication parms{};	
	parms.Target = Target;
	parms.Parameters = Parameters;
	parms.SpawnResults = SpawnResults;

	ProcessEvent(fn, &parms);
}

bool UGameplayEffectCustomApplicationRequirement::CanApplyGameplayEffect(struct UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, struct UAbilitySystemComponent* ASC){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect");

	FCanApplyGameplayEffect parms{};	
	parms.GameplayEffect = GameplayEffect;
	parms.Spec = Spec;
	parms.ASC = ASC;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameplayEffectExecutionCalculation::Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput& OutExecutionOutput){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute");

	FExecute parms{};	
	parms.ExecutionParams = ExecutionParams;
	parms.OutExecutionOutput = OutExecutionOutput;

	ProcessEvent(fn, &parms);
}

float UGameplayModMagnitudeCalculation::K2_GetCapturedAttributeMagnitude(struct FGameplayEffectSpec& EffectSpec, struct FGameplayAttribute Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude");

	FK2_GetCapturedAttributeMagnitude parms{};	
	parms.EffectSpec = EffectSpec;
	parms.Attribute = Attribute;
	parms.SourceTags = SourceTags;
	parms.TargetTags = TargetTags;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetTargetSpecTags(struct FGameplayEffectSpec& EffectSpec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags");

	FGetTargetSpecTags parms{};	
	parms.EffectSpec = EffectSpec;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetTargetAggregatedTags(struct FGameplayEffectSpec& EffectSpec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags");

	FGetTargetAggregatedTags parms{};	
	parms.EffectSpec = EffectSpec;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetTargetActorTags(struct FGameplayEffectSpec& EffectSpec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags");

	FGetTargetActorTags parms{};	
	parms.EffectSpec = EffectSpec;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetSourceSpecTags(struct FGameplayEffectSpec& EffectSpec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags");

	FGetSourceSpecTags parms{};	
	parms.EffectSpec = EffectSpec;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetSourceAggregatedTags(struct FGameplayEffectSpec& EffectSpec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags");

	FGetSourceAggregatedTags parms{};	
	parms.EffectSpec = EffectSpec;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetSourceActorTags(struct FGameplayEffectSpec& EffectSpec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags");

	FGetSourceActorTags parms{};	
	parms.EffectSpec = EffectSpec;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGameplayModMagnitudeCalculation::GetSetByCallerMagnitudeByTag(struct FGameplayEffectSpec& EffectSpec, struct FGameplayTag& Tag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag");

	FGetSetByCallerMagnitudeByTag parms{};	
	parms.EffectSpec = EffectSpec;
	parms.Tag = Tag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGameplayModMagnitudeCalculation::GetSetByCallerMagnitudeByName(struct FGameplayEffectSpec& EffectSpec, struct FName& MagnitudeName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName");

	FGetSetByCallerMagnitudeByName parms{};	
	parms.EffectSpec = EffectSpec;
	parms.MagnitudeName = MagnitudeName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(struct FGameplayEffectSpec& Spec){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude");

	FCalculateBaseMagnitude parms{};	
	parms.Spec = Spec;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameplayTagReponseTable::TagResponseEvent(struct FGameplayTag Tag, int32_t NewCount, struct UAbilitySystemComponent* ASC, int32_t idx){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent");

	FTagResponseEvent parms{};	
	parms.Tag = Tag;
	parms.NewCount = NewCount;
	parms.ASC = ASC;
	parms.idx = idx;

	ProcessEvent(fn, &parms);
}

void UMovieSceneGameplayCueTrack::SetSequencerTrackHandler(struct FDelegate InGameplayCueTrackHandler){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler");

	FSetSequencerTrackHandler parms{};	
	parms.InGameplayCueTrackHandler = InGameplayCueTrackHandler;

	ProcessEvent(fn, &parms);
}


#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// DelegateFunction GameplayAbilities.WaitAbilityCommitDelegate__DelegateSignature
struct FWaitAbilityCommitDelegate__DelegateSignature
{
	struct UGameplayAbility* ActivatedAbility;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDebugStringFromGameplayAttribute
struct FGetDebugStringFromGameplayAttribute
{
	struct FGameplayAttribute Attribute;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
struct FGetOwningActorFromActorInfo
{
	struct AActor* ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction GameplayAbilities.ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature
struct FActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature
{
	struct FActiveGameplayEffect Effect;  // 0x0 (0x0)
	char pad_856_1 : 7;  // 0x358 (0x358)
	bool bMatches : 1;  // 0x358 (0x358)
	char pad_857[7];  // 0x359 (0x359)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
struct FBP_ApplyGameplayEffectToSelf
{
	UGameplayEffect* GameplayEffectClass;  // 0x0 (0x0)
	float Level;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEffectContextHandle EffectContext;  // 0x10 (0x10)
	struct FActiveGameplayEffectHandle ReturnValue;  // 0x28 (0x28)


}; 
 
 // ScriptStruct GameplayAbilities.ActiveGameplayEffect
// Size: 0x358(Inherited: 0xC)
struct FActiveGameplayEffect : FFastArraySerializerItem
{
	char pad_12[12];  // 0xC (0xC)
	struct FGameplayEffectSpec Spec;  // 0x18 (0x18)
	struct FPredictionKey PredictionKey;  // 0x2B0 (0x2B0)
	float StartServerWorldTime;  // 0x2C8 (0x2C8)
	float CachedStartServerWorldTime;  // 0x2CC (0x2CC)
	float StartWorldTime;  // 0x2D0 (0x2D0)
	char pad_724_1 : 7;  // 0x2D4 (0x2D4)
	bool bIsInhibited : 1;  // 0x2D4 (0x2D4)
	char pad_725[131];  // 0x2D5 (0x2D5)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMap
struct FGameplayTagBlueprintPropertyMap
{
	char pad_0[16];  // 0x0 (0x0)
	struct TArray<struct FGameplayTagBlueprintPropertyMapping> PropertyMappings;  // 0x10 (0x10)


}; 
 
 // ScriptStruct GameplayAbilities.PredictionKey
struct FPredictionKey
{
	struct UPackageMap* PredictiveConnection;  // 0x0 (0x0)
	int16_t Current;  // 0x8 (0x8)
	int16_t Base;  // 0xA (0xA)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bIsStale : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bIsServerInitiated : 1;  // 0xD (0xD)
	char pad_14[10];  // 0xE (0xE)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectSpec
struct FGameplayEffectSpec
{
	struct UGameplayEffect* Def;  // 0x0 (0x0)
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes;  // 0x8 (0x8)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;  // 0x18 (0x18)
	char pad_64[16];  // 0x40 (0x40)
	float Duration;  // 0x50 (0x50)
	float Period;  // 0x54 (0x54)
	float ChanceToApplyToTarget;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)
	struct FTagContainerAggregator CapturedSourceTags;  // 0x60 (0x60)
	struct FTagContainerAggregator CapturedTargetTags;  // 0xE8 (0xE8)
	struct FGameplayTagContainer DynamicGrantedTags;  // 0x170 (0x170)
	struct FGameplayTagContainer DynamicAssetTags;  // 0x190 (0x190)
	struct TArray<struct FModifierSpec> Modifiers;  // 0x1B0 (0x1B0)
	int32_t StackCount;  // 0x1C0 (0x1C0)
	char bCompletedSourceAttributeCapture : 1;  // 0x1C4 (0x1C4)
	char bCompletedTargetAttributeCapture : 1;  // 0x1C4 (0x1C4)
	char bDurationLocked : 1;  // 0x1C4 (0x1C4)
	char pad_452_1 : 5;  // 0x1C4 (0x1C4)
	char pad_453[4];  // 0x1C5 (0x1C5)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilitySpecs;  // 0x1C8 (0x1C8)
	char pad_472[160];  // 0x1D8 (0x1D8)
	struct FGameplayEffectContextHandle EffectContext;  // 0x278 (0x278)
	float Level;  // 0x290 (0x290)
	char pad_660[4];  // 0x294 (0x294)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
struct FGameplayAbilitySpecDef
{
	UGameplayAbility* Ability;  // 0x0 (0x0)
	struct FScalableFloat LevelScalableFloat;  // 0x8 (0x8)
	int32_t InputID;  // 0x30 (0x30)
	uint8_t RemovalPolicy;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	struct TWeakObjectPtr<UObject> SourceObject;  // 0x38 (0x38)
	char pad_64[80];  // 0x40 (0x40)
	struct FGameplayAbilitySpecHandle AssignedHandle;  // 0x90 (0x90)
	char pad_148[4];  // 0x94 (0x94)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
struct FGetTargetDataEndPointTransform
{
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x0 (0x0)
	int32_t Index;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct FTransform ReturnValue;  // 0x30 (0x30)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
struct FGameplayAbilityActivationInfo
{
	enum class EGameplayAbilityActivationMode ActivationMode;  // 0x0 (0x0)
	char bCanBeEndedByOtherInstance : 1;  // 0x1 (0x1)
	char pad_1_1 : 7;  // 0x1 (0x1)
	char pad_2[7];  // 0x2 (0x2)
	struct FPredictionKey PredictionKeyWhenActivated;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
struct FNetMulticast_InvokeGameplayCuesExecuted_WithParams
{
	struct FGameplayTagContainer GameplayCueTags;  // 0x0 (0x0)
	struct FPredictionKey PredictionKey;  // 0x20 (0x20)
	struct FGameplayCueParameters GameplayCueParameters;  // 0x38 (0x38)


}; 
 
 // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
struct FBP_ApplyGameplayEffectToTarget
{
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x0 (0x0)
	UGameplayEffect* GameplayEffectClass;  // 0x28 (0x28)
	int32_t GameplayEffectLevel;  // 0x30 (0x30)
	int32_t Stacks;  // 0x34 (0x34)
	struct TArray<struct FActiveGameplayEffectHandle> ReturnValue;  // 0x38 (0x38)


}; 
 
 // DelegateFunction GameplayAbilities.MovieSceneGameplayCueEvent__DelegateSignature
struct FMovieSceneGameplayCueEvent__DelegateSignature
{
	struct AActor* Target;  // 0x0 (0x0)
	struct FGameplayTag GameplayTag;  // 0x8 (0x8)
	struct FGameplayCueParameters Parameters;  // 0x10 (0x10)
	enum class EGameplayCueEvent Event;  // 0xE8 (0xE8)
	char pad_233[7];  // 0xE9 (0xE9)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectContextHandle
struct FGameplayEffectContextHandle
{
	char pad_0[24];  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
struct FGameplayEffectModifiedAttribute
{
	struct FGameplayAttribute Attribute;  // 0x0 (0x0)
	float TotalMagnitude;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueParameters
struct FGameplayCueParameters
{
	float NormalizedMagnitude;  // 0x0 (0x0)
	float RawMagnitude;  // 0x4 (0x4)
	struct FGameplayEffectContextHandle EffectContext;  // 0x8 (0x8)
	struct FGameplayTag MatchedTagName;  // 0x20 (0x20)
	struct FGameplayTag OriginalTag;  // 0x28 (0x28)
	struct FGameplayTagContainer AggregatedSourceTags;  // 0x30 (0x30)
	struct FGameplayTagContainer AggregatedTargetTags;  // 0x50 (0x50)
	struct FVector_NetQuantize10 Location;  // 0x70 (0x70)
	struct FVector_NetQuantizeNormal Normal;  // 0x88 (0x88)
	struct TWeakObjectPtr<AActor> Instigator;  // 0xA0 (0xA0)
	struct TWeakObjectPtr<AActor> EffectCauser;  // 0xA8 (0xA8)
	struct TWeakObjectPtr<UObject> SourceObject;  // 0xB0 (0xB0)
	struct TWeakObjectPtr<UPhysicalMaterial> PhysicalMaterial;  // 0xB8 (0xB8)
	int32_t GameplayEffectLevel;  // 0xC0 (0xC0)
	int32_t AbilityLevel;  // 0xC4 (0xC4)
	struct TWeakObjectPtr<USceneComponent> TargetAttachComponent;  // 0xC8 (0xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool bReplicateLocationWhenUsingMinimalRepProxy : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
struct FGameplayAbilitySpecHandle
{
	int32_t Handle;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.WaitGameplayTagQuery
struct FWaitGameplayTagQuery
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTagQuery TagQuery;  // 0x8 (0x8)
	struct AActor* InOptionalExternalTarget;  // 0x50 (0x50)
	uint8_t TriggerCondition;  // 0x58 (0x58)
	char pad_89_1 : 7;  // 0x59 (0x59)
	bool bOnlyTriggerOnce : 1;  // 0x59 (0x59)
	char pad_90[6];  // 0x5A (0x5A)
	struct UAbilityTask_WaitGameplayTagQuery* ReturnValue;  // 0x60 (0x60)


}; 
 
 // DelegateFunction GameplayAbilities.InputReleaseDelegate__DelegateSignature
struct FInputReleaseDelegate__DelegateSignature
{
	float TimeHeld;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayAbilities.ScalableFloat
struct FScalableFloat
{
	float Value;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FCurveTableRowHandle Curve;  // 0x8 (0x8)
	struct FDataRegistryType RegistryType;  // 0x18 (0x18)
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.GameplayCueFunctionLibrary.ExecuteGameplayCueOnActor
struct FExecuteGameplayCueOnActor
{
	struct AActor* Target;  // 0x0 (0x0)
	struct FGameplayTag GameplayCueTag;  // 0x8 (0x8)
	struct FGameplayCueParameters Parameters;  // 0x10 (0x10)


}; 
 
 // DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature
struct FOnAppliedDelegate__DelegateSignature
{
	struct AActor* Source;  // 0x0 (0x0)
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x8 (0x8)
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x18 (0x18)


}; 
 
 // ScriptStruct GameplayAbilities.ModifierSpec
struct FModifierSpec
{
	float EvaluatedMagnitude;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
struct FEffectContextGetHitResult
{
	struct FGameplayEffectContextHandle EffectContext;  // 0x0 (0x0)
	struct FHitResult ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayTagRequirements
struct FGameplayTagRequirements
{
	struct FGameplayTagContainer RequireTags;  // 0x0 (0x0)
	struct FGameplayTagContainer IgnoreTags;  // 0x20 (0x20)


}; 
 
 // ScriptStruct GameplayAbilities.TagContainerAggregator
struct FTagContainerAggregator
{
	struct FGameplayTagContainer CapturedActorTags;  // 0x0 (0x0)
	struct FGameplayTagContainer CapturedSpecTags;  // 0x20 (0x20)
	struct FGameplayTagContainer ScopedTags;  // 0x40 (0x40)
	char pad_96[40];  // 0x60 (0x60)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
struct FGameplayEffectAttributeCaptureSpecContainer
{
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes;  // 0x0 (0x0)
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bHasNonSnapshottedAttributes : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
struct FClientActivateAbilitySucceed
{
	struct FGameplayAbilitySpecHandle AbilityToActivate;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FPredictionKey PredictionKey;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
struct FTargetDataHasEndPoint
{
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x0 (0x0)
	int32_t Index;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool ReturnValue : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
struct FBP_ApplyGameplayEffectSpecToSelf
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct FActiveGameplayEffectHandle ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
struct FGameplayEffectAttributeCaptureSpec
{
	struct FGameplayEffectAttributeCaptureDefinition BackingDefinition;  // 0x0 (0x0)
	char pad_64[16];  // 0x40 (0x40)


}; 
 
 // Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
struct FConfirmTaskByInstanceName
{
	struct FName InstanceName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bEndTask : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
struct FGameplayEffectAttributeCaptureDefinition
{
	struct FGameplayAttribute AttributeToCapture;  // 0x0 (0x0)
	uint8_t AttributeSource;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool bSnapshot : 1;  // 0x39 (0x39)
	char pad_58[6];  // 0x3A (0x3A)


}; 
 
 // DelegateFunction GameplayAbilities.SpawnActorDelegate__DelegateSignature
struct FSpawnActorDelegate__DelegateSignature
{
	struct AActor* SpawnedActor;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
struct FClientEndAbility
{
	struct FGameplayAbilitySpecHandle AbilityToEnd;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayAbilityActivationInfo ActivationInfo;  // 0x8 (0x8)


}; 
 
 // DelegateFunction GameplayAbilities.WaitTargetDataDelegate__DelegateSignature
struct FWaitTargetDataDelegate__DelegateSignature
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
struct FGetActorByIndex
{
	struct FGameplayCueParameters Parameters;  // 0x0 (0x0)
	int32_t Index;  // 0xD8 (0xD8)
	char pad_220[4];  // 0xDC (0xDC)
	struct AActor* ReturnValue;  // 0xE0 (0xE0)


}; 
 
 // DelegateFunction GameplayAbilities.MovementModeChangedDelegate__DelegateSignature
struct FMovementModeChangedDelegate__DelegateSignature
{
	enum class EMovementMode NewMovementMode;  // 0x0 (0x0)


}; 
 
 // DelegateFunction GameplayAbilities.RepeatedActionDelegate__DelegateSignature
struct FRepeatedActionDelegate__DelegateSignature
{
	int32_t ActionNumber;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAttribute
struct FGameplayAttribute
{
	struct FString AttributeName;  // 0x0 (0x0)
	struct TFieldPath<FNone> Attribute;  // 0x10 (0x10)
	struct UStruct* AttributeOwner;  // 0x30 (0x30)


}; 
 
 // DelegateFunction GameplayAbilities.ApplyRootMotionMoveToActorForceDelegate__DelegateSignature
struct FApplyRootMotionMoveToActorForceDelegate__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool DestinationReached : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool TimedOut : 1;  // 0x1 (0x1)
	char pad_2[6];  // 0x2 (0x2)
	struct FVector FinalTargetLocation;  // 0x8 (0x8)


}; 
 
 // DelegateFunction GameplayAbilities.WaitOverlapDelegate__DelegateSignature
struct FWaitOverlapDelegate__DelegateSignature
{
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayAbilities.WorldReticleParameters
struct FWorldReticleParameters
{
	struct FVector AOEScale;  // 0x0 (0x0)


}; 
 
 // DelegateFunction GameplayAbilities.GameplayEffectAppliedSelfDelegate__DelegateSignature
struct FGameplayEffectAppliedSelfDelegate__DelegateSignature
{
	struct AActor* Source;  // 0x0 (0x0)
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x8 (0x8)
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x18 (0x18)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
struct FGameplayEffectRemovalInfo
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bPrematureRemoval : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t StackCount;  // 0x4 (0x4)
	struct FGameplayEffectContextHandle EffectContext;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
struct FOnRemove
{
	struct AActor* MyTarget;  // 0x0 (0x0)
	struct FGameplayCueParameters Parameters;  // 0x8 (0x8)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool ReturnValue : 1;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)


}; 
 
 // ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
struct FActiveGameplayEffectHandle
{
	int32_t Handle;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bPassedFiltersAndWasExecuted : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
struct FGameplayEffectSpecHandle
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // DelegateFunction GameplayAbilities.GameplayEffectAppliedTargetDelegate__DelegateSignature
struct FGameplayEffectAppliedTargetDelegate__DelegateSignature
{
	struct AActor* Target;  // 0x0 (0x0)
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x8 (0x8)
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
struct FWaitGameplayTagRemove
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTag Tag;  // 0x8 (0x8)
	struct AActor* InOptionalExternalTarget;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool OnlyTriggerOnce : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct UAbilityTask_WaitGameplayTagRemoved* ReturnValue;  // 0x20 (0x20)


}; 
 
 // DelegateFunction GameplayAbilities.GameplayEffectBlockedDelegate__DelegateSignature
struct FGameplayEffectBlockedDelegate__DelegateSignature
{
	struct FGameplayEffectSpecHandle BlockedSpec;  // 0x0 (0x0)
	struct FActiveGameplayEffectHandle ImmunityGameplayEffectHandle;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID
struct FClearAllAbilitiesWithInputID
{
	int32_t InputID;  // 0x0 (0x0)


}; 
 
 // DelegateFunction GameplayAbilities.InputPressDelegate__DelegateSignature
struct FInputPressDelegate__DelegateSignature
{
	float TimeWaited;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
struct FSetStackCountToMax
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct FGameplayEffectSpecHandle ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
struct FVisualizeTargetingUsingActor
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct AGameplayAbilityTargetActor* TargetActor;  // 0x8 (0x8)
	struct FName TaskInstanceName;  // 0x10 (0x10)
	float Duration;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct UAbilityTask_VisualizeTargeting* ReturnValue;  // 0x20 (0x20)


}; 
 
 // DelegateFunction GameplayAbilities.WaitAbilityActivateDelegate__DelegateSignature
struct FWaitAbilityActivateDelegate__DelegateSignature
{
	struct UGameplayAbility* ActivatedAbility;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart
struct FOnLoopingStart
{
	struct AActor* Target;  // 0x0 (0x0)
	struct FGameplayCueParameters Parameters;  // 0x8 (0x8)
	struct FGameplayCueNotify_SpawnResult SpawnResults;  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct GameplayAbilities.NetSerializeScriptStructCache
struct FNetSerializeScriptStructCache
{
	struct TArray<struct UScriptStruct*> ScriptStructs;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
struct FClientCancelAbility
{
	struct FGameplayAbilitySpecHandle AbilityToCancel;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayAbilityActivationInfo ActivationInfo;  // 0x8 (0x8)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueNotify_SpawnCondition
struct FGameplayCueNotify_SpawnCondition
{
	uint8_t LocallyControlledSource;  // 0x0 (0x0)
	uint8_t LocallyControlledPolicy;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	float ChanceToPlay;  // 0x4 (0x4)
	struct TArray<enum class EPhysicalSurface> AllowedSurfaceTypes;  // 0x8 (0x8)
	char pad_24[8];  // 0x18 (0x18)
	struct TArray<enum class EPhysicalSurface> RejectedSurfaceTypes;  // 0x20 (0x20)
	char pad_48[8];  // 0x30 (0x30)


}; 
 
 // DelegateFunction GameplayAbilities.WaitAttributeChangeRatioThresholdDelegate__DelegateSignature
struct FWaitAttributeChangeRatioThresholdDelegate__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bMatchesComparison : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float CurrentRatio;  // 0x4 (0x4)


}; 
 
 // DelegateFunction GameplayAbilities.WaitAttributeChangeThresholdDelegate__DelegateSignature
struct FWaitAttributeChangeThresholdDelegate__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bMatchesComparison : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float CurrentValue;  // 0x4 (0x4)


}; 
 
 // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
struct FAbilityAbilityKey__DelegateSignature
{
	int32_t InputID;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
struct FGetCooldownTimeRemaining
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueNotify_PlacementInfo
struct FGameplayCueNotify_PlacementInfo
{
	struct FName SocketName;  // 0x0 (0x0)
	uint8_t AttachPolicy;  // 0x8 (0x8)
	uint8_t AttachmentRule;  // 0x9 (0x9)
	char pad_10[2];  // 0xA (0xA)
	char bOverrideRotation : 1;  // 0xC (0xC)
	char bOverrideScale : 1;  // 0xC (0xC)
	char pad_12_1 : 6;  // 0xC (0xC)
	char pad_13[4];  // 0xD (0xD)
	struct FRotator RotationOverride;  // 0x10 (0x10)
	struct FVector ScaleOverride;  // 0x28 (0x28)


}; 
 
 // DelegateFunction GameplayAbilities.WaitGameplayEffectRemovedDelegate__DelegateSignature
struct FWaitGameplayEffectRemovedDelegate__DelegateSignature
{
	struct FGameplayEffectRemovalInfo GameplayEffectRemovalInfo;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
struct FMakeEffectContext
{
	struct FGameplayEffectContextHandle ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
struct FClientSetReplicatedEvent
{
	enum class EAbilityGenericReplicatedEvent EventType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FGameplayAbilitySpecHandle AbilityHandle;  // 0x4 (0x4)
	struct FPredictionKey AbilityOriginalPredictionKey;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
struct FBP_RemoveGameplayEffectFromOwnerWithAssetTags
{
	struct FGameplayTagContainer WithAssetTags;  // 0x0 (0x0)
	int32_t StacksToRemove;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // DelegateFunction GameplayAbilities.WaitGameplayEffectStackChangeDelegate__DelegateSignature
struct FWaitGameplayEffectStackChangeDelegate__DelegateSignature
{
	struct FActiveGameplayEffectHandle Handle;  // 0x0 (0x0)
	int32_t NewCount;  // 0x8 (0x8)
	int32_t OldCount;  // 0xC (0xC)


}; 
 
 // Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
struct FCalculateBaseMagnitude
{
	struct FGameplayEffectSpec Spec;  // 0x0 (0x0)
	float ReturnValue;  // 0x298 (0x298)
	char pad_668[4];  // 0x29C (0x29C)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
struct FGetActiveGameplayEffectExpectedEndTime
{
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
struct FServerPrintDebug_RequestWithStrings
{
	struct TArray<struct FString> Strings;  // 0x0 (0x0)


}; 
 
 // DelegateFunction GameplayAbilities.WaitGameplayEventDelegate__DelegateSignature
struct FWaitGameplayEventDelegate__DelegateSignature
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEventData
struct FGameplayEventData
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct AActor* Instigator;  // 0x8 (0x8)
	struct AActor* Target;  // 0x10 (0x10)
	struct UObject* OptionalObject;  // 0x18 (0x18)
	struct UObject* OptionalObject2;  // 0x20 (0x20)
	struct FGameplayEffectContextHandle ContextHandle;  // 0x28 (0x28)
	struct FGameplayTagContainer InstigatorTags;  // 0x40 (0x40)
	struct FGameplayTagContainer TargetTags;  // 0x60 (0x60)
	float EventMagnitude;  // 0x80 (0x80)
	char pad_132[4];  // 0x84 (0x84)
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x88 (0x88)


}; 
 
 // Function GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor
struct FWaitGameplayEventToActor
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FGameplayTag EventTag;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool OnlyTriggerOnce : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool OnlyMatchExact : 1;  // 0x11 (0x11)
	char pad_18[6];  // 0x12 (0x12)
	struct UAbilityAsync_WaitGameplayEvent* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
struct FClientPrintDebug_Response
{
	struct TArray<struct FString> Strings;  // 0x0 (0x0)
	int32_t GameFlags;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
struct FGameplayAbilityTargetDataHandle
{
	char pad_0[40];  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayAbilities.InheritedTagContainer
struct FInheritedTagContainer
{
	struct FGameplayTagContainer CombinedTags;  // 0x0 (0x0)
	struct FGameplayTagContainer Added;  // 0x20 (0x20)
	struct FGameplayTagContainer Removed;  // 0x40 (0x40)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
struct FBP_ApplyGameplayEffectSpecToTarget
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct UAbilitySystemComponent* Target;  // 0x10 (0x10)
	struct FActiveGameplayEffectHandle ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
struct FFilterTargetData
{
	struct FGameplayAbilityTargetDataHandle TargetDataHandle;  // 0x0 (0x0)
	struct FGameplayTargetDataFilterHandle ActorFilterClass;  // 0x28 (0x28)
	struct FGameplayAbilityTargetDataHandle ReturnValue;  // 0x38 (0x38)


}; 
 
 // DelegateFunction GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature
struct FAsyncWaitAttributeChangedDelegate__DelegateSignature
{
	struct FGameplayAttribute Attribute;  // 0x0 (0x0)
	float NewValue;  // 0x38 (0x38)
	float OldValue;  // 0x3C (0x3C)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_ActiveGameplayEffectHandle
struct FEqualEqual_ActiveGameplayEffectHandle
{
	struct FActiveGameplayEffectHandle A;  // 0x0 (0x0)
	struct FActiveGameplayEffectHandle B;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
struct FRemoveActiveEffectsWithGrantedTags
{
	struct FGameplayTagContainer Tags;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged
struct FWaitForAttributeChanged
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FGameplayAttribute Attribute;  // 0x8 (0x8)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool OnlyTriggerOnce : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct UAbilityAsync_WaitAttributeChanged* ReturnValue;  // 0x48 (0x48)


}; 
 
 // Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility
struct FServerEndPlayerAbility
{
	struct FString AbilityNameMatch;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
struct FGetHitResultFromTargetData
{
	struct FGameplayAbilityTargetDataHandle HitResult;  // 0x0 (0x0)
	int32_t Index;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct FHitResult ReturnValue;  // 0x30 (0x30)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectContextHandleNetSerializerConfig
// Size: 0x1(Inherited: 0x1)
struct FGameplayEffectContextHandleNetSerializerConfig : FPolymorphicStructNetSerializerConfig
{


}; 
 
 // ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
struct FGameplayTargetDataFilterHandle
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor
struct FWaitGameplayEffectAppliedToActor
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FGameplayTargetDataFilterHandle SourceFilter;  // 0x8 (0x8)
	struct FGameplayTagRequirements SourceTagRequirements;  // 0x18 (0x18)
	struct FGameplayTagRequirements TargetTagRequirements;  // 0x58 (0x58)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool TriggerOnce : 1;  // 0x98 (0x98)
	char pad_153_1 : 7;  // 0x99 (0x99)
	bool ListenForPeriodicEffect : 1;  // 0x99 (0x99)
	char pad_154[6];  // 0x9A (0x9A)
	struct UAbilityAsync_WaitGameplayEffectApplied* ReturnValue;  // 0xA0 (0xA0)


}; 
 
 // DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature
struct FEventReceivedDelegate__DelegateSignature
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ClearAbility
struct FClearAbility
{
	struct FGameplayAbilitySpecHandle Handle;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
struct FClientActivateAbilityFailed
{
	struct FGameplayAbilitySpecHandle AbilityToActivate;  // 0x0 (0x0)
	int16_t PredictionKey;  // 0x4 (0x4)
	char pad_6[2];  // 0x6 (0x6)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
struct FClientActivateAbilitySucceedWithEventData
{
	struct FGameplayAbilitySpecHandle AbilityToActivate;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FPredictionKey PredictionKey;  // 0x8 (0x8)
	struct FGameplayEventData TriggerEventData;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
struct FTagResponseEvent
{
	struct FGameplayTag Tag;  // 0x0 (0x0)
	int32_t NewCount;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UAbilitySystemComponent* ASC;  // 0x10 (0x10)
	int32_t idx;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
struct FClientTryActivateAbility
{
	struct FGameplayAbilitySpecHandle AbilityToActivate;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
struct FWaitGameplayEffectAppliedToTarget
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTargetDataFilterHandle TargetFilter;  // 0x8 (0x8)
	struct FGameplayTagRequirements SourceTagRequirements;  // 0x18 (0x18)
	struct FGameplayTagRequirements TargetTagRequirements;  // 0x58 (0x58)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool TriggerOnce : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)
	struct AActor* OptionalExternalOwner;  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool ListenForPeriodicEffects : 1;  // 0xA8 (0xA8)
	char pad_169[7];  // 0xA9 (0xA9)
	struct UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;  // 0xB0 (0xB0)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
struct FWaitForAbilityCommit
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTag WithTag;  // 0x8 (0x8)
	struct FGameplayTag WithoutTage;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool TriggerOnce : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct UAbilityTask_WaitAbilityCommit* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery
struct FFindAllAbilitiesMatchingQuery
{
	struct TArray<struct FGameplayAbilitySpecHandle> OutAbilityHandles;  // 0x0 (0x0)
	struct FGameplayTagQuery Query;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID
struct FFindAllAbilitiesWithInputID
{
	struct TArray<struct FGameplayAbilitySpecHandle> OutAbilityHandles;  // 0x0 (0x0)
	int32_t InputID;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
struct FExecute
{
	struct FGameplayEffectCustomExecutionParameters ExecutionParams;  // 0x0 (0x0)
	struct FGameplayEffectCustomExecutionOutput OutExecutionOutput;  // 0xF8 (0xF8)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags
struct FFindAllAbilitiesWithTags
{
	struct TArray<struct FGameplayAbilitySpecHandle> OutAbilityHandles;  // 0x0 (0x0)
	struct FGameplayTagContainer Tags;  // 0x10 (0x10)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bExactMatch : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects
struct FGetActiveEffects
{
	struct FGameplayEffectQuery Query;  // 0x0 (0x0)
	struct TArray<struct FActiveGameplayEffectHandle> ReturnValue;  // 0x150 (0x150)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
struct FDoesGameplayCueMeetTagRequirements
{
	struct FGameplayCueParameters Parameters;  // 0x0 (0x0)
	struct FGameplayTagRequirements SourceTagReqs;  // 0xD8 (0xD8)
	struct FGameplayTagRequirements TargetTagReqs;  // 0x118 (0x118)
	char pad_344_1 : 7;  // 0x158 (0x158)
	bool ReturnValue : 1;  // 0x158 (0x158)
	char pad_345[7];  // 0x159 (0x159)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectQuery
struct FGameplayEffectQuery
{
	char pad_0[16];  // 0x0 (0x0)
	struct FDelegate CustomMatchDelegate_BP;  // 0x10 (0x10)
	struct FGameplayTagQuery OwningTagQuery;  // 0x20 (0x20)
	struct FGameplayTagQuery EffectTagQuery;  // 0x68 (0x68)
	struct FGameplayTagQuery SourceTagQuery;  // 0xB0 (0xB0)
	struct FGameplayAttribute ModifyingAttribute;  // 0xF8 (0xF8)
	struct UObject* EffectSource;  // 0x130 (0x130)
	UGameplayEffect* EffectDefinition;  // 0x138 (0x138)
	char pad_320[16];  // 0x140 (0x140)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
struct FGetInstigatorTransform
{
	struct FGameplayCueParameters Parameters;  // 0x0 (0x0)
	char pad_216[8];  // 0xD8 (0xD8)
	struct FTransform ReturnValue;  // 0xE0 (0xE0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
struct FGetActiveEffectsWithAllTags
{
	struct FGameplayTagContainer Tags;  // 0x0 (0x0)
	struct TArray<struct FActiveGameplayEffectHandle> ReturnValue;  // 0x20 (0x20)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueNotify_CameraLensEffectInfo
struct FGameplayCueNotify_CameraLensEffectInfo
{
	struct FGameplayCueNotify_SpawnCondition SpawnConditionOverride;  // 0x0 (0x0)
	struct FGameplayCueNotify_PlacementInfo PlacementInfoOverride;  // 0x38 (0x38)
	AActor* CameraLensEffect;  // 0x78 (0x78)
	char bOverrideSpawnCondition : 1;  // 0x80 (0x80)
	char bOverridePlacementInfo : 1;  // 0x80 (0x80)
	char bPlayInWorld : 1;  // 0x80 (0x80)
	char pad_128_1 : 5;  // 0x80 (0x80)
	char pad_129[4];  // 0x81 (0x81)
	float WorldInnerRadius;  // 0x84 (0x84)
	float WorldOuterRadius;  // 0x88 (0x88)
	char pad_140[4];  // 0x8C (0x8C)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.GetAllAbilities
struct FGetAllAbilities
{
	struct TArray<struct FGameplayAbilitySpecHandle> OutAbilityHandles;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude
struct FK2_GetCapturedAttributeMagnitude
{
	struct FGameplayEffectSpec EffectSpec;  // 0x0 (0x0)
	struct FGameplayAttribute Attribute;  // 0x298 (0x298)
	struct FGameplayTagContainer SourceTags;  // 0x2D0 (0x2D0)
	struct FGameplayTagContainer TargetTags;  // 0x2F0 (0x2F0)
	float ReturnValue;  // 0x310 (0x310)
	char pad_788[4];  // 0x314 (0x314)


}; 
 
 // ScriptStruct GameplayAbilities.MovieSceneGameplayCueKey
struct FMovieSceneGameplayCueKey
{
	struct FGameplayCueTag Cue;  // 0x0 (0x0)
	struct FVector Location;  // 0x8 (0x8)
	struct FVector Normal;  // 0x20 (0x20)
	struct FName AttachSocketName;  // 0x38 (0x38)
	float NormalizedMagnitude;  // 0x40 (0x40)
	struct FMovieSceneObjectBindingID Instigator;  // 0x44 (0x44)
	struct FMovieSceneObjectBindingID EffectCauser;  // 0x5C (0x5C)
	char pad_116[4];  // 0x74 (0x74)
	struct UPhysicalMaterial* PhysicalMaterial;  // 0x78 (0x78)
	int32_t GameplayEffectLevel;  // 0x80 (0x80)
	int32_t AbilityLevel;  // 0x84 (0x84)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool bAttachToBinding : 1;  // 0x88 (0x88)
	char pad_137[7];  // 0x89 (0x89)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueTranslationLink
struct FGameplayCueTranslationLink
{
	struct UGameplayCueTranslator* RulesCDO;  // 0x0 (0x0)
	char pad_8[16];  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.GetAllAttributes
struct FGetAllAttributes
{
	struct TArray<struct FGameplayAttribute> OutAttributes;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.GetAttributeSet
struct FGetAttributeSet
{
	UAttributeSet* AttributeSetClass;  // 0x0 (0x0)
	struct UAttributeSet* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.GameplayCueNotify_Looping.OnApplication
struct FOnApplication
{
	struct AActor* Target;  // 0x0 (0x0)
	struct FGameplayCueParameters Parameters;  // 0x8 (0x8)
	struct FGameplayCueNotify_SpawnResult SpawnResults;  // 0xE0 (0xE0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue
struct FGetGameplayAttributeValue
{
	struct FGameplayAttribute Attribute;  // 0x0 (0x0)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bFound : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	float ReturnValue;  // 0x3C (0x3C)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
struct FGetGameplayEffectCount
{
	UGameplayEffect* SourceGameplayEffect;  // 0x0 (0x0)
	struct UAbilitySystemComponent* OptionalInstigatorFilterComponent;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bEnforceOnGoingCheck : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	int32_t ReturnValue;  // 0x14 (0x14)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount_IfLoaded
struct FGetGameplayEffectCount_IfLoaded
{
	struct TSoftClassPtr<UObject> SoftSourceGameplayEffect;  // 0x0 (0x0)
	struct UAbilitySystemComponent* OptionalInstigatorFilterComponent;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bEnforceOnGoingCheck : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	int32_t ReturnValue;  // 0x3C (0x3C)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
struct FAssignSetByCallerMagnitude
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct FName DataName;  // 0x10 (0x10)
	float Magnitude;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FGameplayEffectSpecHandle ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount
struct FGetGameplayTagCount
{
	struct FGameplayTag GameplayTag;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
struct FGetGameplayEffectMagnitude
{
	struct FActiveGameplayEffectHandle Handle;  // 0x0 (0x0)
	struct FGameplayAttribute Attribute;  // 0x8 (0x8)
	float ReturnValue;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
struct FGetUserAbilityActivationInhibited
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
struct FWaitForOverlap
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct UAbilityTask_WaitOverlap* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
struct FIsGameplayCueActive
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbility
struct FK2_GiveAbility
{
	UGameplayAbility* AbilityClass;  // 0x0 (0x0)
	int32_t Level;  // 0x8 (0x8)
	int32_t InputID;  // 0xC (0xC)
	struct FGameplayAbilitySpecHandle ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
struct FEffectContextGetEffectCauser
{
	struct FGameplayEffectContextHandle EffectContext;  // 0x0 (0x0)
	struct AActor* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed
struct FOnSpawnedAttributesEndPlayed
{
	struct AActor* InActor;  // 0x0 (0x0)
	enum class EEndPlayReason EndPlayReason;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce
struct FK2_GiveAbilityAndActivateOnce
{
	UGameplayAbility* AbilityClass;  // 0x0 (0x0)
	int32_t Level;  // 0x8 (0x8)
	int32_t InputID;  // 0xC (0xC)
	struct FGameplayAbilitySpecHandle ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // [x14 ([x14)


}; 
 
 // Function GameplayAbilities.GameplayAbility.MontageStop
struct FMontageStop
{
	float OverrideBlendOutTime;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
struct FK2_InitStats
{
	UAttributeSet* Attributes;  // 0x0 (0x0)
	struct UDataTable* DataTable;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
struct FMakeOutgoingSpec
{
	UGameplayEffect* GameplayEffectClass;  // 0x0 (0x0)
	float Level;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEffectContextHandle Context;  // 0x10 (0x10)
	struct FGameplayEffectSpecHandle ReturnValue;  // 0x28 (0x28)


}; 
 
 // ScriptStruct GameplayAbilities.AttributeBasedFloat
struct FAttributeBasedFloat
{
	struct FScalableFloat Coefficient;  // 0x0 (0x0)
	struct FScalableFloat PreMultiplyAdditiveValue;  // 0x28 (0x28)
	struct FScalableFloat PostMultiplyAdditiveValue;  // 0x50 (0x50)
	struct FGameplayEffectAttributeCaptureDefinition BackingAttribute;  // 0x78 (0x78)
	struct FCurveTableRowHandle AttributeCurve;  // 0xB8 (0xB8)
	uint8_t AttributeCalculationType;  // 0xC8 (0xC8)
	uint8_t FinalChannel;  // 0xC9 (0xC9)
	char pad_202[6];  // 0xCA (0xCA)
	struct FGameplayTagContainer SourceTagFilter;  // 0xD0 (0xD0)
	struct FGameplayTagContainer TargetTagFilter;  // 0xF0 (0xF0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
struct FNetMulticast_InvokeGameplayCueAdded
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FPredictionKey PredictionKey;  // 0x8 (0x8)
	struct FGameplayEffectContextHandle EffectContext;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
struct FOnExecute
{
	struct AActor* MyTarget;  // 0x0 (0x0)
	struct FGameplayCueParameters Parameters;  // 0x8 (0x8)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool ReturnValue : 1;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
struct FGetTargetDataEndPoint
{
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x0 (0x0)
	int32_t Index;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct FVector ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
struct FGetActiveGameplayEffectStackCount
{
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
struct FNetMulticast_InvokeGameplayCueAdded_WithParams
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FPredictionKey PredictionKey;  // 0x8 (0x8)
	struct FGameplayCueParameters Parameters;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
struct FNetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
{
	struct FGameplayEffectSpecForRPC Spec;  // 0x0 (0x0)
	struct FPredictionKey PredictionKey;  // 0x78 (0x78)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
struct FK2_AddGameplayCueWithParams
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FGameplayCueParameters GameplayCueParameter;  // 0x8 (0x8)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool bRemoveOnAbilityEnd : 1;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
struct FGameplayEffectSpecForRPC
{
	struct UGameplayEffect* Def;  // 0x0 (0x0)
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes;  // 0x8 (0x8)
	struct FGameplayEffectContextHandle EffectContext;  // 0x18 (0x18)
	struct FGameplayTagContainer AggregatedSourceTags;  // 0x30 (0x30)
	struct FGameplayTagContainer AggregatedTargetTags;  // 0x50 (0x50)
	float Level;  // 0x70 (0x70)
	float AbilityLevel;  // 0x74 (0x74)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
struct FNetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FPredictionKey PredictionKey;  // 0x8 (0x8)
	struct FGameplayCueParameters GameplayCueParameters;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
struct FNetMulticast_InvokeGameplayCueExecuted
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FPredictionKey PredictionKey;  // 0x8 (0x8)
	struct FGameplayEffectContextHandle EffectContext;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.GameplayAbility.GetAbilityLevel
struct FGetAbilityLevel
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
struct FNetMulticast_InvokeGameplayCueExecuted_FromSpec
{
	struct FGameplayEffectSpecForRPC Spec;  // 0x0 (0x0)
	struct FPredictionKey PredictionKey;  // 0x78 (0x78)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
struct FWaitGameplayEffectAppliedToSelf_Query
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTargetDataFilterHandle SourceFilter;  // 0x8 (0x8)
	struct FGameplayTagQuery SourceTagQuery;  // 0x18 (0x18)
	struct FGameplayTagQuery TargetTagQuery;  // 0x60 (0x60)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool TriggerOnce : 1;  // 0xA8 (0xA8)
	char pad_169[7];  // 0xA9 (0xA9)
	struct AActor* OptionalExternalOwner;  // 0xB0 (0xB0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool ListenForPeriodicEffect : 1;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)
	struct UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;  // 0xC0 (0xC0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
struct FNetMulticast_InvokeGameplayCueExecuted_WithParams
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FPredictionKey PredictionKey;  // 0x8 (0x8)
	struct FGameplayCueParameters GameplayCueParameters;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
struct FNetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
{
	struct FGameplayTagContainer GameplayCueTags;  // 0x0 (0x0)
	struct FPredictionKey PredictionKey;  // 0x20 (0x20)
	struct FGameplayCueParameters GameplayCueParameters;  // 0x38 (0x38)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
struct FNetMulticast_InvokeGameplayCuesExecuted
{
	struct FGameplayTagContainer GameplayCueTags;  // 0x0 (0x0)
	struct FPredictionKey PredictionKey;  // 0x20 (0x20)
	struct FGameplayEffectContextHandle EffectContext;  // 0x38 (0x38)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed
struct FOnAvatarActorDestroyed
{
	struct AActor* InActor;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
struct FOnAbilityActivate
{
	struct UGameplayAbility* ActivatedAbility;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed
struct FOnOwnerActorDestroyed
{
	struct AActor* InActor;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
struct FMakeFilterHandle
{
	struct FGameplayTargetDataFilter Filter;  // 0x0 (0x0)
	struct AActor* FilterActor;  // 0x20 (0x20)
	struct FGameplayTargetDataFilterHandle ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
struct FWaitForAttributeChangeRatioThreshold
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayAttribute AttributeNumerator;  // 0x8 (0x8)
	struct FGameplayAttribute AttributeDenominator;  // 0x40 (0x40)
	enum class EWaitAttributeChangeComparison ComparisonType;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	float ComparisonValue;  // 0x7C (0x7C)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bTriggerOnce : 1;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)
	struct AActor* OptionalExternalOwner;  // 0x88 (0x88)
	struct UAbilityTask_WaitAttributeChangeRatioThreshold* ReturnValue;  // 0x90 (0x90)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.OnRep_SpawnedAttributes
struct FOnRep_SpawnedAttributes
{
	struct TArray<struct UAttributeSet*> PreviousSpawnedAttributes;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.PressInputID
struct FPressInputID
{
	int32_t InputID;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
struct FOnLandedCallback
{
	struct FHitResult Hit;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ReleaseInputID
struct FReleaseInputID
{
	int32_t InputID;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
struct FSetCanBeCanceled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bCanBeCanceled : 1;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
struct FRemoveActiveEffectsWithAppliedTags
{
	struct FGameplayTagContainer Tags;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function GameplayAbilities.GameplayCueFunctionLibrary.AddGameplayCueOnActor
struct FAddGameplayCueOnActor
{
	struct AActor* Target;  // 0x0 (0x0)
	struct FGameplayTag GameplayCueTag;  // 0x8 (0x8)
	struct FGameplayCueParameters Parameters;  // 0x10 (0x10)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
struct FGameplayEffectCustomExecutionParameters
{
	char pad_0[248];  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
struct FRemoveActiveEffectsWithSourceTags
{
	struct FGameplayTagContainer Tags;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
struct FEffectContextGetInstigatorActor
{
	struct FGameplayEffectContextHandle EffectContext;  // 0x0 (0x0)
	struct AActor* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
struct FRemoveActiveEffectsWithTags
{
	struct FGameplayTagContainer Tags;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
struct FRemoveActiveGameplayEffect
{
	struct FActiveGameplayEffectHandle Handle;  // 0x0 (0x0)
	int32_t StacksToRemove;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
struct FRemoveActiveGameplayEffectBySourceEffect
{
	UGameplayEffect* GameplayEffect;  // 0x0 (0x0)
	struct UAbilitySystemComponent* InstigatorAbilitySystemComponent;  // 0x8 (0x8)
	int32_t StacksToRemove;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function GameplayAbilities.GameplayAbility.GetContextFromOwner
struct FGetContextFromOwner
{
	struct FGameplayAbilityTargetDataHandle OptionalTargetData;  // 0x0 (0x0)
	struct FGameplayEffectContextHandle ReturnValue;  // 0x28 (0x28)


}; 
 
 // ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
struct FServerAbilityRPCBatch
{
	struct FGameplayAbilitySpecHandle AbilitySpecHandle;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FPredictionKey PredictionKey;  // 0x8 (0x8)
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x20 (0x20)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool InputPressed : 1;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool Ended : 1;  // 0x49 (0x49)
	char pad_74_1 : 7;  // 0x4A (0x4A)
	bool Started : 1;  // 0x4A (0x4A)
	char pad_75[5];  // 0x4B (0x4B)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
struct FServerCancelAbility
{
	struct FGameplayAbilitySpecHandle AbilityToCancel;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayAbilityActivationInfo ActivationInfo;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
struct FServerCurrentMontageJumpToSectionName
{
	struct UAnimMontage* ClientAnimMontage;  // 0x0 (0x0)
	struct FName SectionName;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
struct FSetDuration
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	float Duration;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FGameplayEffectSpecHandle ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
struct FServerCurrentMontageSetNextSectionName
{
	struct UAnimMontage* ClientAnimMontage;  // 0x0 (0x0)
	float ClientPosition;  // 0x8 (0x8)
	struct FName SectionName;  // 0xC (0xC)
	struct FName NextSectionName;  // 0x14 (0x14)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
struct FServerCurrentMontageSetPlayRate
{
	struct UAnimMontage* ClientAnimMontage;  // 0x0 (0x0)
	float InPlayRate;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
struct FK2_CommitAbilityCost
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool BroadcastCommitEvent : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
struct FServerEndAbility
{
	struct FGameplayAbilitySpecHandle AbilityToEnd;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayAbilityActivationInfo ActivationInfo;  // 0x8 (0x8)
	struct FPredictionKey PredictionKey;  // 0x28 (0x28)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
struct FServerSetInputPressed
{
	struct FGameplayAbilitySpecHandle AbilityHandle;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
struct FServerSetInputReleased
{
	struct FGameplayAbilitySpecHandle AbilityHandle;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
struct FServerSetReplicatedEvent
{
	enum class EAbilityGenericReplicatedEvent EventType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FGameplayAbilitySpecHandle AbilityHandle;  // 0x4 (0x4)
	struct FPredictionKey AbilityOriginalPredictionKey;  // 0x8 (0x8)
	struct FPredictionKey CurrentPredictionKey;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
struct FServerSetReplicatedEventWithPayload
{
	enum class EAbilityGenericReplicatedEvent EventType;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FGameplayAbilitySpecHandle AbilityHandle;  // 0x4 (0x4)
	struct FPredictionKey AbilityOriginalPredictionKey;  // 0x8 (0x8)
	struct FPredictionKey CurrentPredictionKey;  // 0x20 (0x20)
	struct FVector_NetQuantize100 VectorPayload;  // 0x38 (0x38)


}; 
 
 // Function GameplayAbilities.AbilityAsync_WaitGameplayTagQuery.WaitGameplayTagQueryOnActor
struct FWaitGameplayTagQueryOnActor
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FGameplayTagQuery TagQuery;  // 0x8 (0x8)
	uint8_t TriggerCondition;  // 0x50 (0x50)
	char pad_81_1 : 7;  // 0x51 (0x51)
	bool bOnlyTriggerOnce : 1;  // 0x51 (0x51)
	char pad_82[6];  // 0x52 (0x52)
	struct UAbilityAsync_WaitGameplayTagQuery* ReturnValue;  // 0x58 (0x58)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
struct FGameplayCueTranslatorNodeIndex
{
	int32_t Index;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
struct FServerSetReplicatedTargetData
{
	struct FGameplayAbilitySpecHandle AbilityHandle;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FPredictionKey AbilityOriginalPredictionKey;  // 0x8 (0x8)
	struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle;  // 0x20 (0x20)
	struct FGameplayTag ApplicationTag;  // 0x48 (0x48)
	struct FPredictionKey CurrentPredictionKey;  // 0x50 (0x50)


}; 
 
 // Function GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler
struct FSetSequencerTrackHandler
{
	struct FDelegate InGameplayCueTrackHandler;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
struct FServerSetReplicatedTargetDataCancelled
{
	struct FGameplayAbilitySpecHandle AbilityHandle;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FPredictionKey AbilityOriginalPredictionKey;  // 0x8 (0x8)
	struct FPredictionKey CurrentPredictionKey;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
struct FServerTryActivateAbility
{
	struct FGameplayAbilitySpecHandle AbilityToActivate;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool InputPressed : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FPredictionKey PredictionKey;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
struct FServerTryActivateAbilityWithEventData
{
	struct FGameplayAbilitySpecHandle AbilityToActivate;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool InputPressed : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FPredictionKey PredictionKey;  // 0x8 (0x8)
	struct FGameplayEventData TriggerEventData;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
struct FGetGameplayCueEndLocationAndNormal
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FGameplayCueParameters Parameters;  // 0x8 (0x8)
	struct FVector Location;  // 0xE0 (0xE0)
	struct FVector Normal;  // 0xF8 (0xF8)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool ReturnValue : 1;  // 0x110 (0x110)
	char pad_273[7];  // 0x111 (0x111)


}; 
 
 // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
struct FSetReticleMaterialParamVector
{
	struct FName ParamName;  // 0x0 (0x0)
	struct FVector Value;  // 0x8 (0x8)


}; 
 
 // ScriptStruct GameplayAbilities.ConditionalGameplayEffect
struct FConditionalGameplayEffect
{
	UGameplayEffect* EffectClass;  // 0x0 (0x0)
	struct FGameplayTagContainer RequiredSourceTags;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
struct FSetActiveGameplayEffectLevel
{
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x0 (0x0)
	int32_t NewLevel;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
struct FSetActiveGameplayEffectLevelUsingQuery
{
	struct FGameplayEffectQuery Query;  // 0x0 (0x0)
	int32_t NewLevel;  // 0x150 (0x150)
	char pad_340[4];  // 0x154 (0x154)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
struct FSetUserAbilityActivationInhibited
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool NewInhibit : 1;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
struct FTryActivateAbilitiesByTag
{
	struct FGameplayTagContainer GameplayTagContainer;  // 0x0 (0x0)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bAllowRemoteActivation : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool ReturnValue : 1;  // 0x21 (0x21)
	char pad_34[6];  // 0x22 (0x22)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbility
struct FTryActivateAbility
{
	struct FGameplayAbilitySpecHandle AbilityToActivate;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bAllowRemoteActivation : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool ReturnValue : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
struct FMakeSpecHandle
{
	struct UGameplayEffect* InGameplayEffect;  // 0x0 (0x0)
	struct AActor* InInstigator;  // 0x8 (0x8)
	struct AActor* InEffectCauser;  // 0x10 (0x10)
	float InLevel;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FGameplayEffectSpecHandle ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
struct FTryActivateAbilityByClass
{
	UGameplayAbility* InAbilityToActivate;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bAllowRemoteActivation : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool ReturnValue : 1;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
struct FOnTargetDataCancelledCallback
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude
struct FUpdateActiveGameplayEffectSetByCallerMagnitude
{
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x0 (0x0)
	struct FGameplayTag SetByCallerTag;  // 0x8 (0x8)
	float NewValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
struct FWhileActive
{
	struct AActor* MyTarget;  // 0x0 (0x0)
	struct FGameplayCueParameters Parameters;  // 0x8 (0x8)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool ReturnValue : 1;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
struct FBeginSpawningActor
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	AGameplayAbilityTargetActor* Class;  // 0x8 (0x8)
	struct AGameplayAbilityTargetActor* SpawnedActor;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes
struct FUpdateActiveGameplayEffectSetByCallerMagnitudes
{
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x0 (0x0)
	struct TMap<struct FGameplayTag, float> NewSetByCallerValues;  // 0x8 (0x8)


}; 
 
 // ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
// Size: 0x118(Inherited: 0x108)
struct FReplicatedPredictionKeyMap : FFastArraySerializer
{
	struct TArray<struct FReplicatedPredictionKeyItem> PredictionKeys;  // 0x108 (0x108)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
struct FGetEffectContext
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct FGameplayEffectContextHandle ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
// Size: 0x28(Inherited: 0xC)
struct FReplicatedPredictionKeyItem : FFastArraySerializerItem
{
	char pad_12[4];  // 0xC (0xC)
	struct FPredictionKey PredictionKey;  // 0x10 (0x10)


}; 
 
 // ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
struct FMinimalReplicationTagCountMap
{
	char pad_0[80];  // 0x0 (0x0)
	struct UAbilitySystemComponent* Owner;  // 0x50 (0x50)
	char pad_88[8];  // 0x58 (0x58)


}; 
 
 // ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// Size: 0x128(Inherited: 0x108)
struct FActiveGameplayCueContainer : FFastArraySerializer
{
	struct TArray<struct FActiveGameplayCue> GameplayCues;  // 0x108 (0x108)
	char pad_280[8];  // 0x118 (0x118)
	struct UAbilitySystemComponent* Owner;  // 0x120 (0x120)


}; 
 
 // ScriptStruct GameplayAbilities.ActiveGameplayCue
// Size: 0x110(Inherited: 0xC)
struct FActiveGameplayCue : FFastArraySerializerItem
{
	struct FGameplayTag GameplayCueTag;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct FPredictionKey PredictionKey;  // 0x18 (0x18)
	struct FGameplayCueParameters Parameters;  // 0x30 (0x30)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool bPredictivelyRemoved : 1;  // 0x108 (0x108)
	char pad_265[7];  // 0x109 (0x109)


}; 
 
 // ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// Size: 0x478(Inherited: 0x108)
struct FActiveGameplayEffectsContainer : FFastArraySerializer
{
	char pad_264[40];  // 0x108 (0x108)
	struct TArray<struct FActiveGameplayEffect> GameplayEffects_Internal;  // 0x130 (0x130)
	char pad_320[784];  // 0x140 (0x140)
	struct TArray<struct UGameplayEffect*> ApplicationImmunityQueryEffects;  // 0x450 (0x450)
	char pad_1120[24];  // 0x460 (0x460)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
struct FGameplayAbilityLocalAnimMontage
{
	struct UAnimMontage* AnimMontage;  // 0x0 (0x0)
	char PlayInstanceId;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FPredictionKey PredictionKey;  // 0x10 (0x10)
	struct UGameplayAbility* AnimatingAbility;  // 0x28 (0x28)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
struct FGameplayAbilityRepAnimMontage
{
	struct UAnimMontage* AnimMontage;  // 0x0 (0x0)
	float PlayRate;  // 0x8 (0x8)
	float Position;  // 0xC (0xC)
	float BlendTime;  // 0x10 (0x10)
	char NextSectionID;  // 0x14 (0x14)
	char PlayInstanceId;  // 0x15 (0x15)
	char bRepPosition : 1;  // 0x16 (0x16)
	char IsStopped : 1;  // 0x16 (0x16)
	char SkipPositionCorrection : 1;  // 0x16 (0x16)
	char bSkipPlayRate : 1;  // 0x16 (0x16)
	char pad_22_1 : 4;  // 0x16 (0x16)
	char pad_23[2];  // 0x17 (0x17)
	struct FPredictionKey PredictionKey;  // 0x18 (0x18)
	char SectionIdToPlay;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// Size: 0x120(Inherited: 0x108)
struct FGameplayAbilitySpecContainer : FFastArraySerializer
{
	struct TArray<struct FGameplayAbilitySpec> Items;  // 0x108 (0x108)
	struct UAbilitySystemComponent* Owner;  // 0x118 (0x118)


}; 
 
 // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
struct FOnOwnerDestroyed
{
	struct AActor* DestroyedActor;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilitySpec
// Size: 0xE8(Inherited: 0xC)
struct FGameplayAbilitySpec : FFastArraySerializerItem
{
	struct FGameplayAbilitySpecHandle Handle;  // 0xC (0xC)
	struct UGameplayAbility* Ability;  // 0x10 (0x10)
	int32_t Level;  // 0x18 (0x18)
	int32_t InputID;  // 0x1C (0x1C)
	struct TWeakObjectPtr<UObject> SourceObject;  // 0x20 (0x20)
	char ActiveCount;  // 0x28 (0x28)
	char InputPressed : 1;  // 0x29 (0x29)
	char RemoveAfterActivation : 1;  // 0x29 (0x29)
	char PendingRemove : 1;  // 0x29 (0x29)
	char bActivateOnce : 1;  // 0x29 (0x29)
	char pad_41_1 : 4;  // 0x29 (0x29)
	char pad_42[7];  // 0x2A (0x2A)
	struct FGameplayAbilityActivationInfo ActivationInfo;  // 0x30 (0x30)
	struct FGameplayTagContainer DynamicAbilityTags;  // 0x50 (0x50)
	struct TArray<struct UGameplayAbility*> NonReplicatedInstances;  // 0x70 (0x70)
	struct TArray<struct UGameplayAbility*> ReplicatedInstances;  // 0x80 (0x80)
	struct FActiveGameplayEffectHandle GameplayEffectHandle;  // 0x90 (0x90)
	char pad_152[80];  // 0x98 (0x98)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
struct FWaitInputRelease
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bTestAlreadyReleased : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct UAbilityTask_WaitInputRelease* ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct GameplayAbilities.AttributeDefaults
struct FAttributeDefaults
{
	UAttributeSet* Attributes;  // 0x0 (0x0)
	struct UDataTable* DefaultStartingTable;  // 0x8 (0x8)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
struct FGameplayEffectExecutionScopedModifierInfo
{
	struct FGameplayEffectAttributeCaptureDefinition CapturedAttribute;  // 0x0 (0x0)
	struct FGameplayTag TransientAggregatorIdentifier;  // 0x40 (0x40)
	uint8_t AggregatorType;  // 0x48 (0x48)
	enum class EGameplayModOp ModifierOp;  // 0x49 (0x49)
	char pad_74[6];  // 0x4A (0x4A)
	struct FGameplayEffectModifierMagnitude ModifierMagnitude;  // 0x50 (0x50)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings;  // 0x230 (0x230)
	char pad_561[7];  // 0x231 (0x231)
	struct FGameplayTagRequirements SourceTags;  // 0x238 (0x238)
	struct FGameplayTagRequirements TargetTags;  // 0x278 (0x278)


}; 
 
 // ScriptStruct GameplayAbilities.AbilityEndedData
struct FAbilityEndedData
{
	struct UGameplayAbility* AbilityThatEnded;  // 0x0 (0x0)
	struct FGameplayAbilitySpecHandle AbilitySpecHandle;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bReplicateEndAbility : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bWasCancelled : 1;  // 0xD (0xD)
	char pad_14[2];  // 0xE (0xE)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectContext
struct FGameplayEffectContext
{
	char pad_0[8];  // 0x0 (0x0)
	struct TWeakObjectPtr<AActor> Instigator;  // 0x8 (0x8)
	struct TWeakObjectPtr<AActor> EffectCauser;  // 0x10 (0x10)
	struct TWeakObjectPtr<UGameplayAbility> AbilityCDO;  // 0x18 (0x18)
	struct TWeakObjectPtr<UGameplayAbility> AbilityInstanceNotReplicated;  // 0x20 (0x20)
	int32_t AbilityLevel;  // 0x28 (0x28)
	struct TWeakObjectPtr<UObject> SourceObject;  // 0x2C (0x2C)
	struct TWeakObjectPtr<UAbilitySystemComponent> InstigatorAbilitySystemComponent;  // 0x34 (0x34)
	char pad_60[4];  // 0x3C (0x3C)
	struct TArray<struct TWeakObjectPtr<AActor>> Actors;  // 0x40 (0x40)
	char pad_80[16];  // 0x50 (0x50)
	struct FVector WorldOrigin;  // 0x60 (0x60)
	char bHasWorldOrigin : 1;  // 0x78 (0x78)
	char bReplicateSourceObject : 1;  // 0x78 (0x78)
	char pad_120_1 : 6;  // 0x78 (0x78)
	char pad_121[8];  // 0x79 (0x79)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontageNetSerializerConfig
// Size: 0x1(Inherited: 0x1)
struct FGameplayAbilityRepAnimMontageNetSerializerConfig : FNetSerializerConfig
{


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCuePendingExecute
struct FGameplayCuePendingExecute
{
	char pad_0[24];  // 0x0 (0x0)
	struct FPredictionKey PredictionKey;  // 0x18 (0x18)
	uint8_t PayloadType;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct UAbilitySystemComponent* OwningComponent;  // 0x38 (0x38)
	struct FGameplayEffectSpecForRPC FromSpec;  // 0x40 (0x40)
	struct FGameplayCueParameters CueParameters;  // 0xB8 (0xB8)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueNotifyActorArray
struct FGameplayCueNotifyActorArray
{
	struct TArray<struct AGameplayCueNotify_Actor*> Actors;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility
struct FServerActivatePlayerAbility
{
	struct FString AbilityNameMatch;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// Size: 0xF8(Inherited: 0x8)
struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData
{
	struct FHitResult HitResult;  // 0x8 (0x8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool bHitReplaced : 1;  // 0xF0 (0xF0)
	char pad_241[7];  // 0xF1 (0xF1)


}; 
 
 // ScriptStruct GameplayAbilities.PreallocationInfo
struct FPreallocationInfo
{
	struct TMap<, struct FGameplayCueNotifyActorArray> PreallocatedInstances;  // 0x0 (0x0)
	struct TArray<AGameplayCueNotify_Actor*> ClassesNeedingPreallocation;  // 0x50 (0x50)
	char pad_96[8];  // 0x60 (0x60)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectContextNetSerializerConfig
// Size: 0x1(Inherited: 0x1)
struct FGameplayEffectContextNetSerializerConfig : FNetSerializerConfig
{


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
struct FGameplayEffectModifierMagnitude
{
	uint8_t MagnitudeCalculationType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FScalableFloat ScalableFloatMagnitude;  // 0x8 (0x8)
	struct FAttributeBasedFloat AttributeBasedMagnitude;  // 0x30 (0x30)
	struct FCustomCalculationBasedFloat CustomMagnitude;  // 0x140 (0x140)
	struct FSetByCallerFloat SetByCallerMagnitude;  // 0x1D0 (0x1D0)


}; 
 
 // ScriptStruct GameplayAbilities.PredictionKeyNetSerializerConfig
// Size: 0x1(Inherited: 0x1)
struct FPredictionKeyNetSerializerConfig : FNetSerializerConfig
{


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
struct FEffectContextIsInstigatorLocallyControlled
{
	struct FGameplayEffectContextHandle EffectContext;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
struct FBreakGameplayCueParameters
{
	struct FGameplayCueParameters Parameters;  // 0x0 (0x0)
	float NormalizedMagnitude;  // 0xD8 (0xD8)
	float RawMagnitude;  // 0xDC (0xDC)
	struct FGameplayEffectContextHandle EffectContext;  // 0xE0 (0xE0)
	struct FGameplayTag MatchedTagName;  // 0xF8 (0xF8)
	struct FGameplayTag OriginalTag;  // 0x100 (0x100)
	struct FGameplayTagContainer AggregatedSourceTags;  // 0x108 (0x108)
	struct FGameplayTagContainer AggregatedTargetTags;  // 0x128 (0x128)
	struct FVector Location;  // 0x148 (0x148)
	struct FVector Normal;  // 0x160 (0x160)
	struct AActor* Instigator;  // 0x178 (0x178)
	struct AActor* EffectCauser;  // 0x180 (0x180)
	struct UObject* SourceObject;  // 0x188 (0x188)
	struct UPhysicalMaterial* PhysicalMaterial;  // 0x190 (0x190)
	int32_t GameplayEffectLevel;  // 0x198 (0x198)
	int32_t AbilityLevel;  // 0x19C (0x19C)
	struct USceneComponent* TargetAttachComponent;  // 0x1A0 (0x1A0)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool bReplicateLocationWhenUsingMinimalRepProxy : 1;  // 0x1A8 (0x1A8)
	char pad_425[7];  // 0x1A9 (0x1A9)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLooseGameplayTags
struct FAddLooseGameplayTags
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct FGameplayTagContainer GameplayTags;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bShouldReplicate : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool ReturnValue : 1;  // 0x29 (0x29)
	char pad_42[6];  // 0x2A (0x2A)


}; 
 
 // ScriptStruct GameplayAbilities.AbilityTriggerData
struct FAbilityTriggerData
{
	struct FGameplayTag TriggerTag;  // 0x0 (0x0)
	enum class EGameplayAbilityTriggerSource TriggerSource;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
struct FGameplayAbilityBindInfo
{
	enum class EGameplayAbilityInputBinds Command;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	UGameplayAbility* GameplayAbilityClass;  // 0x8 (0x8)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayTargetDataFilter
struct FGameplayTargetDataFilter
{
	char pad_0[8];  // 0x0 (0x0)
	struct AActor* SelfActor;  // 0x8 (0x8)
	AActor* RequiredActorClass;  // 0x10 (0x10)
	enum class ETargetDataFilterSelf SelfFilter;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bReverseFilter : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAttributeData
struct FGameplayAttributeData
{
	char pad_0[8];  // 0x0 (0x0)
	float BaseValue;  // 0x8 (0x8)
	float CurrentValue;  // 0xC (0xC)


}; 
 
 // ScriptStruct GameplayAbilities.AttributeMetaData
// Size: 0x30(Inherited: 0x8)
struct FAttributeMetaData : FTableRowBase
{
	float BaseValue;  // 0x8 (0x8)
	float MinValue;  // 0xC (0xC)
	float MaxValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FString DerivedAttributeInfo;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bCanStack : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
struct FGetTargetDataOrigin
{
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x0 (0x0)
	int32_t Index;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct FTransform ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
struct FVisualizeTargeting
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	AGameplayAbilityTargetActor* Class;  // 0x8 (0x8)
	struct FName TaskInstanceName;  // 0x10 (0x10)
	float Duration;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct UAbilityTask_VisualizeTargeting* ReturnValue;  // 0x20 (0x20)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilityTargetData
struct FGameplayAbilityTargetData
{
	char pad_0[8];  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
struct FGameplayAbilityTargetingLocationInfo
{
	char pad_0[16];  // 0x0 (0x0)
	enum class EGameplayAbilityTargetingLocationType LocationType;  // 0x10 (0x10)
	char pad_17[15];  // 0x11 (0x11)
	struct FTransform LiteralTransform;  // 0x20 (0x20)
	struct AActor* SourceActor;  // 0x80 (0x80)
	struct UMeshComponent* SourceComponent;  // 0x88 (0x88)
	struct UGameplayAbility* SourceAbility;  // 0x90 (0x90)
	struct FName SourceSocketName;  // 0x98 (0x98)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// Size: 0x150(Inherited: 0x8)
struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData
{
	char pad_8[8];  // 0x8 (0x8)
	struct FGameplayAbilityTargetingLocationInfo SourceLocation;  // 0x10 (0x10)
	struct FGameplayAbilityTargetingLocationInfo TargetLocation;  // 0xB0 (0xB0)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// Size: 0xC0(Inherited: 0x8)
struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData
{
	char pad_8[8];  // 0x8 (0x8)
	struct FGameplayAbilityTargetingLocationInfo SourceLocation;  // 0x10 (0x10)
	struct TArray<struct TWeakObjectPtr<AActor>> TargetActorArray;  // 0xB0 (0xB0)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
struct FGameplayAbilityActorInfo
{
	char pad_0[8];  // 0x0 (0x0)
	struct TWeakObjectPtr<AActor> OwnerActor;  // 0x8 (0x8)
	struct TWeakObjectPtr<AActor> AvatarActor;  // 0x10 (0x10)
	struct TWeakObjectPtr<APlayerController> PlayerController;  // 0x18 (0x18)
	struct TWeakObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;  // 0x20 (0x20)
	struct TWeakObjectPtr<USkeletalMeshComponent> SkeletalMeshComponent;  // 0x28 (0x28)
	struct TWeakObjectPtr<UAnimInstance> AnimInstance;  // 0x30 (0x30)
	struct TWeakObjectPtr<UMovementComponent> MovementComponent;  // 0x38 (0x38)
	struct FName AffectedAnimInstanceTag;  // 0x40 (0x40)


}; 
 
 // Function GameplayAbilities.GameplayCueFunctionLibrary.RemoveGameplayCueOnActor
struct FRemoveGameplayCueOnActor
{
	struct AActor* Target;  // 0x0 (0x0)
	struct FGameplayTag GameplayCueTag;  // 0x8 (0x8)
	struct FGameplayCueParameters Parameters;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
struct FMakeGameplayCueParameters
{
	float NormalizedMagnitude;  // 0x0 (0x0)
	float RawMagnitude;  // 0x4 (0x4)
	struct FGameplayEffectContextHandle EffectContext;  // 0x8 (0x8)
	struct FGameplayTag MatchedTagName;  // 0x20 (0x20)
	struct FGameplayTag OriginalTag;  // 0x28 (0x28)
	struct FGameplayTagContainer AggregatedSourceTags;  // 0x30 (0x30)
	struct FGameplayTagContainer AggregatedTargetTags;  // 0x50 (0x50)
	struct FVector Location;  // 0x70 (0x70)
	struct FVector Normal;  // 0x88 (0x88)
	struct AActor* Instigator;  // 0xA0 (0xA0)
	struct AActor* EffectCauser;  // 0xA8 (0xA8)
	struct UObject* SourceObject;  // 0xB0 (0xB0)
	struct UPhysicalMaterial* PhysicalMaterial;  // 0xB8 (0xB8)
	int32_t GameplayEffectLevel;  // 0xC0 (0xC0)
	int32_t AbilityLevel;  // 0xC4 (0xC4)
	struct USceneComponent* TargetAttachComponent;  // 0xC8 (0xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool bReplicateLocationWhenUsingMinimalRepProxy : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct FGameplayCueParameters ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
struct FAbilityTaskDebugMessage
{
	struct UGameplayTask* FromTask;  // 0x0 (0x0)
	struct FString Message;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
struct FMakeOutgoingGameplayEffectSpec
{
	UGameplayEffect* GameplayEffectClass;  // 0x0 (0x0)
	float Level;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FGameplayEffectSpecHandle ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
struct FGameplayAbilitySpecHandleAndPredictionKey
{
	struct FGameplayAbilitySpecHandle AbilityHandle;  // 0x0 (0x0)
	int32_t PredictionKeyAtCreation;  // 0x4 (0x4)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectUIData
struct FGetGameplayEffectUIData
{
	UGameplayEffect* EffectClass;  // 0x0 (0x0)
	UGameplayEffectUIData* DataType;  // 0x8 (0x8)
	struct UGameplayEffectUIData* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
struct FAssignTagSetByCallerMagnitude
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct FGameplayTag DataTag;  // 0x10 (0x10)
	float Magnitude;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FGameplayEffectSpecHandle ReturnValue;  // 0x20 (0x20)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueTag
struct FGameplayCueTag
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
struct FWaitGameplayEffectAppliedToSelf
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTargetDataFilterHandle SourceFilter;  // 0x8 (0x8)
	struct FGameplayTagRequirements SourceTagRequirements;  // 0x18 (0x18)
	struct FGameplayTagRequirements TargetTagRequirements;  // 0x58 (0x58)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool TriggerOnce : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)
	struct AActor* OptionalExternalOwner;  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool ListenForPeriodicEffect : 1;  // 0xA8 (0xA8)
	char pad_169[7];  // 0xA9 (0xA9)
	struct UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;  // 0xB0 (0xB0)


}; 
 
 // ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxy
struct FMinimalGameplayCueReplicationProxy
{
	char pad_0[832];  // 0x0 (0x0)
	struct UAbilitySystemComponent* Owner;  // 0x340 (0x340)
	char pad_840[8];  // 0x348 (0x348)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
struct FGameplayCueObjectLibrary
{
	struct TArray<struct FString> Paths;  // 0x0 (0x0)
	char pad_16[32];  // 0x10 (0x10)
	struct UObjectLibrary* ActorObjectLibrary;  // 0x30 (0x30)
	struct UObjectLibrary* StaticObjectLibrary;  // 0x38 (0x38)
	struct UGameplayCueSet* CueSet;  // 0x40 (0x40)
	char pad_72[4];  // 0x48 (0x48)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bShouldSyncScan : 1;  // 0x4C (0x4C)
	char pad_77_1 : 7;  // 0x4D (0x4D)
	bool bShouldAsyncLoad : 1;  // 0x4D (0x4D)
	char pad_78_1 : 7;  // 0x4E (0x4E)
	bool bShouldSyncLoad : 1;  // 0x4E (0x4E)
	char pad_79_1 : 7;  // 0x4F (0x4F)
	bool bHasBeenInitialized : 1;  // 0x4F (0x4F)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_HasAuthority
struct FK2_HasAuthority
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueNotify_SpawnResult
struct FGameplayCueNotify_SpawnResult
{
	struct TArray<struct UFXSystemComponent*> FxSystemComponents;  // 0x0 (0x0)
	struct TArray<struct UAudioComponent*> AudioComponents;  // 0x10 (0x10)
	struct TArray<struct UCameraShakeBase*> CameraShakes;  // 0x20 (0x20)
	struct TArray<struct TScriptInterface<ICameraLensEffectInterface>> CameraLensEffects;  // 0x30 (0x30)
	struct UForceFeedbackComponent* ForceFeedbackComponent;  // 0x40 (0x40)
	struct APlayerController* ForceFeedbackTargetPC;  // 0x48 (0x48)
	struct UDecalComponent* DecalComponent;  // 0x50 (0x50)


}; 
 
 // Function GameplayAbilities.GameplayCueNotify_Looping.OnRemoval
struct FOnRemoval
{
	struct AActor* Target;  // 0x0 (0x0)
	struct FGameplayCueParameters Parameters;  // 0x8 (0x8)
	struct FGameplayCueNotify_SpawnResult SpawnResults;  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueNotify_ParticleInfo
struct FGameplayCueNotify_ParticleInfo
{
	struct FGameplayCueNotify_SpawnCondition SpawnConditionOverride;  // 0x0 (0x0)
	struct FGameplayCueNotify_PlacementInfo PlacementInfoOverride;  // 0x38 (0x38)
	struct UNiagaraSystem* NiagaraSystem;  // 0x78 (0x78)
	char bOverrideSpawnCondition : 1;  // 0x80 (0x80)
	char bOverridePlacementInfo : 1;  // 0x80 (0x80)
	char bCastShadow : 1;  // 0x80 (0x80)
	char pad_128_1 : 5;  // 0x80 (0x80)
	char pad_129[8];  // 0x81 (0x81)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueNotify_SoundParameterInterfaceInfo
struct FGameplayCueNotify_SoundParameterInterfaceInfo
{
	struct FName StopTriggerName;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
struct FSetShouldBlockOtherAbilities
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bShouldBlockAbilities : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueNotify_SoundInfo
struct FGameplayCueNotify_SoundInfo
{
	struct FGameplayCueNotify_SpawnCondition SpawnConditionOverride;  // 0x0 (0x0)
	struct FGameplayCueNotify_PlacementInfo PlacementInfoOverride;  // 0x38 (0x38)
	struct USoundBase* Sound;  // 0x78 (0x78)
	struct USoundBase* SoundCue;  // 0x80 (0x80)
	float LoopingFadeOutDuration;  // 0x88 (0x88)
	float LoopingFadeVolumeLevel;  // 0x8C (0x8C)
	struct FGameplayCueNotify_SoundParameterInterfaceInfo SoundParameterInterfaceInfo;  // 0x90 (0x90)
	char bOverrideSpawnCondition : 1;  // 0x98 (0x98)
	char bOverridePlacementInfo : 1;  // 0x98 (0x98)
	char bUseSoundParameterInterface : 1;  // 0x98 (0x98)
	char pad_152_1 : 5;  // 0x98 (0x98)
	char pad_153[8];  // 0x99 (0x99)


}; 
 
 // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
struct FApplyRootMotionMoveToActorForce
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	struct AActor* TargetActor;  // 0x10 (0x10)
	struct FVector TargetLocationOffset;  // 0x18 (0x18)
	uint8_t OffsetAlignment;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	float Duration;  // 0x34 (0x34)
	struct UCurveFloat* TargetLerpSpeedHorizontal;  // 0x38 (0x38)
	struct UCurveFloat* TargetLerpSpeedVertical;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bSetNewMovementMode : 1;  // 0x48 (0x48)
	enum class EMovementMode MovementMode;  // 0x49 (0x49)
	char pad_74_1 : 7;  // 0x4A (0x4A)
	bool bRestrictSpeedToExpected : 1;  // 0x4A (0x4A)
	char pad_75[5];  // 0x4B (0x4B)
	struct UCurveVector* PathOffsetCurve;  // 0x50 (0x50)
	struct UCurveFloat* TimeMappingCurve;  // 0x58 (0x58)
	uint8_t VelocityOnFinishMode;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct FVector SetVelocityOnFinish;  // 0x68 (0x68)
	float ClampVelocityOnFinish;  // 0x80 (0x80)
	char pad_132_1 : 7;  // 0x84 (0x84)
	bool bDisableDestinationReachedInterrupt : 1;  // 0x84 (0x84)
	char pad_133[3];  // 0x85 (0x85)
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;  // 0x88 (0x88)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueNotify_CameraShakeInfo
struct FGameplayCueNotify_CameraShakeInfo
{
	struct FGameplayCueNotify_SpawnCondition SpawnConditionOverride;  // 0x0 (0x0)
	struct FGameplayCueNotify_PlacementInfo PlacementInfoOverride;  // 0x38 (0x38)
	UCameraShakeBase* CameraShake;  // 0x78 (0x78)
	float ShakeScale;  // 0x80 (0x80)
	uint8_t PlaySpace;  // 0x84 (0x84)
	char pad_133[3];  // 0x85 (0x85)
	char bOverrideSpawnCondition : 1;  // 0x88 (0x88)
	char bOverridePlacementInfo : 1;  // 0x88 (0x88)
	char bPlayInWorld : 1;  // 0x88 (0x88)
	char pad_136_1 : 5;  // 0x88 (0x88)
	char pad_137[4];  // 0x89 (0x89)
	float WorldInnerRadius;  // 0x8C (0x8C)
	float WorldOuterRadius;  // 0x90 (0x90)
	float WorldFalloffExponent;  // 0x94 (0x94)


}; 
 
 // Function GameplayAbilities.GameplayAbility.GetAbilityLevel_BP
struct FGetAbilityLevel_BP
{
	struct FGameplayAbilitySpecHandle Handle;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayAbilityActorInfo ActorInfo;  // 0x8 (0x8)
	int32_t ReturnValue;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueNotify_ForceFeedbackInfo
struct FGameplayCueNotify_ForceFeedbackInfo
{
	struct FGameplayCueNotify_SpawnCondition SpawnConditionOverride;  // 0x0 (0x0)
	struct FGameplayCueNotify_PlacementInfo PlacementInfoOverride;  // 0x38 (0x38)
	struct UForceFeedbackEffect* ForceFeedbackEffect;  // 0x78 (0x78)
	struct FName ForceFeedbackTag;  // 0x80 (0x80)
	char bIsLooping : 1;  // 0x88 (0x88)
	char bOverrideSpawnCondition : 1;  // 0x88 (0x88)
	char bOverridePlacementInfo : 1;  // 0x88 (0x88)
	char bPlayInWorld : 1;  // 0x88 (0x88)
	char pad_136_1 : 4;  // 0x88 (0x88)
	char pad_137[4];  // 0x89 (0x89)
	float WorldIntensity;  // 0x8C (0x8C)
	struct UForceFeedbackAttenuation* WorldAttenuation;  // 0x90 (0x90)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueNotify_DecalInfo
struct FGameplayCueNotify_DecalInfo
{
	struct FGameplayCueNotify_SpawnCondition SpawnConditionOverride;  // 0x0 (0x0)
	struct FGameplayCueNotify_PlacementInfo PlacementInfoOverride;  // 0x38 (0x38)
	struct UMaterialInterface* DecalMaterial;  // 0x78 (0x78)
	struct FVector DecalSize;  // 0x80 (0x80)
	char bOverrideSpawnCondition : 1;  // 0x98 (0x98)
	char bOverridePlacementInfo : 1;  // 0x98 (0x98)
	char bOverrideFadeOut : 1;  // 0x98 (0x98)
	char pad_152_1 : 5;  // 0x98 (0x98)
	char pad_153[4];  // 0x99 (0x99)
	float FadeOutStartDelay;  // 0x9C (0x9C)
	float FadeOutDuration;  // 0xA0 (0xA0)
	char pad_164[4];  // 0xA4 (0xA4)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
struct FAbilityTargetDataFromActorArray
{
	struct TArray<struct AActor*> ActorArray;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool OneTargetPerHandle : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FGameplayAbilityTargetDataHandle ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
struct FK2_CheckAbilityCooldown
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueNotify_BurstEffects
struct FGameplayCueNotify_BurstEffects
{
	struct TArray<struct FGameplayCueNotify_ParticleInfo> BurstParticles;  // 0x0 (0x0)
	struct TArray<struct FGameplayCueNotify_SoundInfo> BurstSounds;  // 0x10 (0x10)
	struct FGameplayCueNotify_CameraShakeInfo BurstCameraShake;  // 0x20 (0x20)
	struct FGameplayCueNotify_CameraLensEffectInfo BurstCameraLensEffect;  // 0xB8 (0xB8)
	struct FGameplayCueNotify_ForceFeedbackInfo BurstForceFeedback;  // 0x148 (0x148)
	struct FGameplayCueNotify_DecalInfo BurstDecal;  // 0x1E0 (0x1E0)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueNotify_LoopingEffects
struct FGameplayCueNotify_LoopingEffects
{
	struct TArray<struct FGameplayCueNotify_ParticleInfo> LoopingParticles;  // 0x0 (0x0)
	struct TArray<struct FGameplayCueNotify_SoundInfo> LoopingSounds;  // 0x10 (0x10)
	struct FGameplayCueNotify_CameraShakeInfo LoopingCameraShake;  // 0x20 (0x20)
	struct FGameplayCueNotify_CameraLensEffectInfo LoopingCameraLensEffect;  // 0xB8 (0xB8)
	struct FGameplayCueNotify_ForceFeedbackInfo LoopingForceFeedback;  // 0x148 (0x148)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueNotifyData
struct FGameplayCueNotifyData
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FSoftObjectPath GameplayCueNotifyObj;  // 0x8 (0x8)
	 LoadedGameplayCueClass;  // 0x28 (0x28)
	char pad_48[8];  // 0x30 (0x30)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
struct FWaitConfirmCancel
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct UAbilityTask_WaitConfirmCancel* ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
struct FGameplayCueTranslatorNode
{
	struct TArray<struct FGameplayCueTranslationLink> Links;  // 0x0 (0x0)
	struct FGameplayCueTranslatorNodeIndex CachedIndex;  // 0x10 (0x10)
	struct FGameplayTag CachedGameplayTag;  // 0x14 (0x14)
	struct FName CachedGameplayTagName;  // 0x1C (0x1C)
	char pad_36[84];  // 0x24 (0x24)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayCueTranslationManager
struct FGameplayCueTranslationManager
{
	struct TArray<struct FGameplayCueTranslatorNode> TranslationLUT;  // 0x0 (0x0)
	struct TMap<struct FName, struct FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap;  // 0x10 (0x10)
	struct UGameplayTagsManager* TagManager;  // 0x60 (0x60)
	char pad_104[24];  // 0x68 (0x68)


}; 
 
 // ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
struct FCustomCalculationBasedFloat
{
	UGameplayModMagnitudeCalculation* CalculationClassMagnitude;  // 0x0 (0x0)
	struct FScalableFloat Coefficient;  // 0x8 (0x8)
	struct FScalableFloat PreMultiplyAdditiveValue;  // 0x30 (0x30)
	struct FScalableFloat PostMultiplyAdditiveValue;  // 0x58 (0x58)
	struct FCurveTableRowHandle FinalLookupCurve;  // 0x80 (0x80)


}; 
 
 // Function GameplayAbilities.GameplayAbility.IsLocallyControlled
struct FIsLocallyControlled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayAbilities.SetByCallerFloat
struct FSetByCallerFloat
{
	struct FName DataName;  // 0x0 (0x0)
	struct FGameplayTag DataTag;  // 0x8 (0x8)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
struct FGameplayModEvaluationChannelSettings
{
	uint8_t Channel;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
struct FOnMontageEnded
{
	struct UAnimMontage* Montage;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bInterrupted : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
struct FGameplayEffectExecutionDefinition
{
	UGameplayEffectExecutionCalculation* CalculationClass;  // 0x0 (0x0)
	struct FGameplayTagContainer PassedInTags;  // 0x8 (0x8)
	struct TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;  // 0x28 (0x28)
	struct TArray<UGameplayEffect*> ConditionalGameplayEffectClasses;  // 0x38 (0x38)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects;  // 0x48 (0x48)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
struct FGetActiveGameplayEffectRemainingDuration
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x8 (0x8)
	float ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
struct FAddAssetTag
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct FGameplayTag NewGameplayTag;  // 0x10 (0x10)
	struct FGameplayEffectSpecHandle ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayModifierInfo
struct FGameplayModifierInfo
{
	struct FGameplayAttribute Attribute;  // 0x0 (0x0)
	enum class EGameplayModOp ModifierOp;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FScalableFloat Magnitude;  // 0x40 (0x40)
	struct FGameplayEffectModifierMagnitude ModifierMagnitude;  // 0x68 (0x68)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings;  // 0x248 (0x248)
	char pad_585[7];  // 0x249 (0x249)
	struct FGameplayTagRequirements SourceTags;  // 0x250 (0x250)
	struct FGameplayTagRequirements TargetTags;  // 0x290 (0x290)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
struct FOnTargetDataReplicatedCallback
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)
	struct FGameplayTag ActivationTag;  // 0x28 (0x28)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectCue
struct FGameplayEffectCue
{
	struct FGameplayAttribute MagnitudeAttribute;  // 0x0 (0x0)
	float MinLevel;  // 0x38 (0x38)
	float MaxLevel;  // 0x3C (0x3C)
	struct FGameplayTagContainer GameplayCueTags;  // 0x40 (0x40)


}; 
 
 // ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
struct FActiveGameplayEffectQuery
{
	char pad_0[136];  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
struct FGameplayEffectCustomExecutionOutput
{
	struct TArray<struct FGameplayModifierEvaluatedData> OutputModifiers;  // 0x0 (0x0)
	char bTriggerConditionalGameplayEffects : 1;  // 0x10 (0x10)
	char bHandledStackCountManually : 1;  // 0x10 (0x10)
	char bHandledGameplayCuesManually : 1;  // 0x10 (0x10)
	char pad_16_1 : 5;  // 0x10 (0x10)
	char pad_17[8];  // 0x11 (0x11)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
struct FGameplayModifierEvaluatedData
{
	struct FGameplayAttribute Attribute;  // 0x0 (0x0)
	enum class EGameplayModOp ModifierOp;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	float Magnitude;  // 0x3C (0x3C)
	struct FActiveGameplayEffectHandle Handle;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool IsValid : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMapping
struct FGameplayTagBlueprintPropertyMapping
{
	struct FGameplayTag TagToMap;  // 0x0 (0x0)
	struct TFieldPath<FNone> PropertyToEdit;  // 0x8 (0x8)
	struct FName PropertyName;  // 0x28 (0x28)
	struct FGuid PropertyGuid;  // 0x30 (0x30)
	char pad_64[8];  // 0x40 (0x40)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayTagReponsePair
struct FGameplayTagReponsePair
{
	struct FGameplayTag Tag;  // 0x0 (0x0)
	UGameplayEffect* ResponseGameplayEffect;  // 0x8 (0x8)
	struct TArray<UGameplayEffect*> ResponseGameplayEffects;  // 0x10 (0x10)
	int32_t SoftCountCap;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags
struct FGetSourceSpecTags
{
	struct FGameplayEffectSpec EffectSpec;  // 0x0 (0x0)
	struct FGameplayTagContainer ReturnValue;  // 0x298 (0x298)


}; 
 
 // ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
struct FGameplayTagResponseTableEntry
{
	struct FGameplayTagReponsePair Positive;  // 0x0 (0x0)
	struct FGameplayTagReponsePair Negative;  // 0x28 (0x28)


}; 
 
 // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
struct FOnTargetActorSwapped
{
	struct AActor* OriginalTarget;  // 0x0 (0x0)
	struct AActor* NewTarget;  // 0x8 (0x8)


}; 
 
 // ScriptStruct GameplayAbilities.MovieSceneGameplayCueChannel
// Size: 0xF8(Inherited: 0x50)
struct FMovieSceneGameplayCueChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes;  // 0x50 (0x50)
	struct TArray<struct FMovieSceneGameplayCueKey> KeyValues;  // 0x60 (0x60)
	char pad_112[136];  // 0x70 (0x70)


}; 
 
 // Function GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor
struct FWaitGameplayTagAddToActor
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FGameplayTag Tag;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool OnlyTriggerOnce : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct UAbilityAsync_WaitGameplayTagAdded* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
struct FAddAssetTags
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct FGameplayTagContainer NewGameplayTags;  // 0x10 (0x10)
	struct FGameplayEffectSpecHandle ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
struct FOnTargetingAnActor
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bNewValue : 1;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor
struct FWaitGameplayTagRemoveFromActor
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FGameplayTag Tag;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool OnlyTriggerOnce : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct UAbilityAsync_WaitGameplayTagRemoved* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
struct FBP_ApplyGameplayEffectToOwner
{
	UGameplayEffect* GameplayEffectClass;  // 0x0 (0x0)
	int32_t GameplayEffectLevel;  // 0x8 (0x8)
	int32_t Stacks;  // 0xC (0xC)
	struct FActiveGameplayEffectHandle ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
struct FBP_RemoveGameplayEffectFromOwnerWithGrantedTags
{
	struct FGameplayTagContainer WithGrantedTags;  // 0x0 (0x0)
	int32_t StacksToRemove;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
struct FBP_RemoveGameplayEffectFromOwnerWithHandle
{
	struct FActiveGameplayEffectHandle Handle;  // 0x0 (0x0)
	int32_t StacksToRemove;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
struct FOnAbilityCommit
{
	struct UGameplayAbility* ActivatedAbility;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
struct FCancelTaskByInstanceName
{
	struct FName InstanceName;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
struct FWaitForAttributeChange
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayAttribute Attribute;  // 0x8 (0x8)
	struct FGameplayTag WithSrcTag;  // 0x40 (0x40)
	struct FGameplayTag WithoutSrcTag;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool TriggerOnce : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct AActor* OptionalExternalOwner;  // 0x58 (0x58)
	struct UAbilityTask_WaitAttributeChange* ReturnValue;  // 0x60 (0x60)


}; 
 
 // Function GameplayAbilities.GameplayAbility.EndAbilityState
struct FEndAbilityState
{
	struct FName OptionalStateNameToEnd;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
struct FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
struct FEndTaskByInstanceName
{
	struct FName InstanceName;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
struct FGetAbilitySystemComponentFromActorInfo
{
	struct UAbilitySystemComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
struct FWaitConfirm
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct UAbilityTask_WaitConfirm* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.GameplayAbility.GetActorInfo
struct FGetActorInfo
{
	struct FGameplayAbilityActorInfo ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
struct FGetAvatarActorFromActorInfo
{
	struct AActor* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.GetCurrentMontage
struct FGetCurrentMontage
{
	struct UAnimMontage* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
struct FGetCurrentSourceObject
{
	struct UObject* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
struct FGetGrantedByEffectContext
{
	struct FGameplayEffectContextHandle ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
struct FOnGameplayEffectRemoved
{
	struct FGameplayEffectRemovalInfo InGameplayEffectRemovalInfo;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
struct FK2_CommitAbilityCooldown
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool BroadcastCommitEvent : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool ForceCooldown : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool ReturnValue : 1;  // 0x2 (0x2)


}; 
 
 // Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
struct FGetOwningComponentFromActorInfo
{
	struct USkeletalMeshComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.GetSourceObject_BP
struct FGetSourceObject_BP
{
	struct FGameplayAbilitySpecHandle Handle;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayAbilityActorInfo ActorInfo;  // 0x8 (0x8)
	struct UObject* ReturnValue;  // 0x50 (0x50)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectFromActiveEffectHandle
struct FGetGameplayEffectFromActiveEffectHandle
{
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x0 (0x0)
	struct UGameplayEffect* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
struct FK2_AddGameplayCue
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FGameplayEffectContextHandle Context;  // 0x8 (0x8)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bRemoveOnAbilityEnd : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
struct FK2_ApplyGameplayEffectSpecToOwner
{
	struct FGameplayEffectSpecHandle EffectSpecHandle;  // 0x0 (0x0)
	struct FActiveGameplayEffectHandle ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
struct FK2_ApplyGameplayEffectSpecToTarget
{
	struct FGameplayEffectSpecHandle EffectSpecHandle;  // 0x0 (0x0)
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x10 (0x10)
	struct TArray<struct FActiveGameplayEffectHandle> ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
struct FK2_CanActivateAbility
{
	struct FGameplayAbilityActorInfo ActorInfo;  // 0x0 (0x0)
	struct FGameplayAbilitySpecHandle Handle;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct FGameplayTagContainer RelevantTags;  // 0x50 (0x50)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool ReturnValue : 1;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
struct FOnApplyGameplayEffectCallback
{
	struct UAbilitySystemComponent* Target;  // 0x0 (0x0)
	struct FGameplayEffectSpec SpecApplied;  // 0x8 (0x8)
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x2A0 (0x2A0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
struct FK2_CheckAbilityCost
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_CommitAbility
struct FK2_CommitAbility
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
struct FK2_ExecuteGameplayCue
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FGameplayEffectContextHandle Context;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
struct FBlueprintCustomHandler
{
	enum class EGameplayCueEvent EventType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FGameplayCueParameters Parameters;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
struct FK2_ExecuteGameplayCueWithParams
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)
	struct FGameplayCueParameters GameplayCueParameters;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
struct FK2_OnEndAbility
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
struct FK2_RemoveGameplayCue
{
	struct FGameplayTag GameplayCueTag;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
struct FK2_ShouldAbilityRespondToEvent
{
	struct FGameplayAbilityActorInfo ActorInfo;  // 0x0 (0x0)
	struct FGameplayEventData Payload;  // 0x48 (0x48)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool ReturnValue : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
struct FGetAbilitySystemComponent
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct UAbilitySystemComponent* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
struct FMakeTargetLocationInfoFromOwnerActor
{
	struct FGameplayAbilityTargetingLocationInfo ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
struct FMakeTargetLocationInfoFromOwnerSkeletalMeshComponent
{
	struct FName SocketName;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FGameplayAbilityTargetingLocationInfo ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.GameplayAbility.MontageJumpToSection
struct FMontageJumpToSection
{
	struct FName SectionName;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
struct FWaitGameplayEffectAppliedToTarget_Query
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTargetDataFilterHandle SourceFilter;  // 0x8 (0x8)
	struct FGameplayTagQuery SourceTagQuery;  // 0x18 (0x18)
	struct FGameplayTagQuery TargetTagQuery;  // 0x60 (0x60)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool TriggerOnce : 1;  // 0xA8 (0xA8)
	char pad_169[7];  // 0xA9 (0xA9)
	struct AActor* OptionalExternalOwner;  // 0xB0 (0xB0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool ListenForPeriodicEffect : 1;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)
	struct UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;  // 0xC0 (0xC0)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
struct FWaitForAbilityCommit_Query
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTagQuery Query;  // 0x8 (0x8)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool TriggerOnce : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct UAbilityTask_WaitAbilityCommit* ReturnValue;  // 0x58 (0x58)


}; 
 
 // Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
struct FMontageSetNextSectionName
{
	struct FName FromSectionName;  // 0x0 (0x0)
	struct FName ToSectionName;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
struct FSpawnActor
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x8 (0x8)
	AActor* Class;  // 0x30 (0x30)
	struct UAbilityTask_SpawnActor* ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function GameplayAbilities.GameplayAbility.SendGameplayEvent
struct FSendGameplayEvent
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData Payload;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
struct FFaceTowardSource
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bFaceIn2D : 1;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
struct FOnValidTargetChanged
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bNewValue : 1;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
struct FAbilityTargetDataFromActor
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct FGameplayAbilityTargetDataHandle ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
struct FSetReticleMaterialParamFloat
{
	struct FName ParamName;  // 0x0 (0x0)
	float Value;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
struct FGetFloatAttributeBase
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct FGameplayAttribute Attribute;  // 0x8 (0x8)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bSuccessfullyFoundAttribute : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	float ReturnValue;  // 0x44 (0x44)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
struct FGameplayTagCallback
{
	struct FGameplayTag Tag;  // 0x0 (0x0)
	int32_t NewCount;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
struct FApplyRootMotionConstantForce
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	struct FVector WorldDirection;  // 0x10 (0x10)
	float Strength;  // 0x28 (0x28)
	float Duration;  // 0x2C (0x2C)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bIsAdditive : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct UCurveFloat* StrengthOverTime;  // 0x38 (0x38)
	uint8_t VelocityOnFinishMode;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct FVector SetVelocityOnFinish;  // 0x48 (0x48)
	float ClampVelocityOnFinish;  // 0x60 (0x60)
	char pad_100_1 : 7;  // 0x64 (0x64)
	bool bEnableGravity : 1;  // 0x64 (0x64)
	char pad_101[3];  // 0x65 (0x65)
	struct UAbilityTask_ApplyRootMotionConstantForce* ReturnValue;  // 0x68 (0x68)


}; 
 
 // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
struct FWaitNetSync
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	uint8_t SyncType;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct UAbilityTask_NetworkSyncPoint* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
struct FApplyRootMotionJumpForce
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	struct FRotator Rotation;  // 0x10 (0x10)
	float Distance;  // 0x28 (0x28)
	float Height;  // 0x2C (0x2C)
	float Duration;  // 0x30 (0x30)
	float MinimumLandedTriggerTime;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bFinishOnLanded : 1;  // 0x38 (0x38)
	uint8_t VelocityOnFinishMode;  // 0x39 (0x39)
	char pad_58[6];  // 0x3A (0x3A)
	struct FVector SetVelocityOnFinish;  // 0x40 (0x40)
	float ClampVelocityOnFinish;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)
	struct UCurveVector* PathOffsetCurve;  // 0x60 (0x60)
	struct UCurveFloat* TimeMappingCurve;  // 0x68 (0x68)
	struct UAbilityTask_ApplyRootMotionJumpForce* ReturnValue;  // 0x70 (0x70)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
struct FWaitTargetDataUsingActor
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	enum class EGameplayTargetingConfirmation ConfirmationType;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct AGameplayAbilityTargetActor* TargetActor;  // 0x18 (0x18)
	struct UAbilityTask_WaitTargetData* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
struct FApplyRootMotionMoveToTargetDataActorForce
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	struct FGameplayAbilityTargetDataHandle TargetDataHandle;  // 0x10 (0x10)
	int32_t TargetDataIndex;  // 0x38 (0x38)
	int32_t TargetActorIndex;  // 0x3C (0x3C)
	struct FVector TargetLocationOffset;  // 0x40 (0x40)
	uint8_t OffsetAlignment;  // 0x58 (0x58)
	char pad_89[3];  // 0x59 (0x59)
	float Duration;  // 0x5C (0x5C)
	struct UCurveFloat* TargetLerpSpeedHorizontal;  // 0x60 (0x60)
	struct UCurveFloat* TargetLerpSpeedVertical;  // 0x68 (0x68)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bSetNewMovementMode : 1;  // 0x70 (0x70)
	enum class EMovementMode MovementMode;  // 0x71 (0x71)
	char pad_114_1 : 7;  // 0x72 (0x72)
	bool bRestrictSpeedToExpected : 1;  // 0x72 (0x72)
	char pad_115[5];  // 0x73 (0x73)
	struct UCurveVector* PathOffsetCurve;  // 0x78 (0x78)
	struct UCurveFloat* TimeMappingCurve;  // 0x80 (0x80)
	uint8_t VelocityOnFinishMode;  // 0x88 (0x88)
	char pad_137[7];  // 0x89 (0x89)
	struct FVector SetVelocityOnFinish;  // 0x90 (0x90)
	float ClampVelocityOnFinish;  // 0xA8 (0xA8)
	char pad_172_1 : 7;  // 0xAC (0xAC)
	bool bDisableDestinationReachedInterrupt : 1;  // 0xAC (0xAC)
	char pad_173[3];  // 0xAD (0xAD)
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;  // 0xB0 (0xB0)


}; 
 
 // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
struct FApplyRootMotionMoveToForce
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	struct FVector TargetLocation;  // 0x10 (0x10)
	float Duration;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool bSetNewMovementMode : 1;  // 0x2C (0x2C)
	enum class EMovementMode MovementMode;  // 0x2D (0x2D)
	char pad_46_1 : 7;  // 0x2E (0x2E)
	bool bRestrictSpeedToExpected : 1;  // 0x2E (0x2E)
	char pad_47[1];  // 0x2F (0x2F)
	struct UCurveVector* PathOffsetCurve;  // 0x30 (0x30)
	uint8_t VelocityOnFinishMode;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FVector SetVelocityOnFinish;  // 0x40 (0x40)
	float ClampVelocityOnFinish;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)
	struct UAbilityTask_ApplyRootMotionMoveToForce* ReturnValue;  // 0x60 (0x60)


}; 
 
 // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
struct FApplyRootMotionRadialForce
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	struct FVector Location;  // 0x10 (0x10)
	struct AActor* LocationActor;  // 0x28 (0x28)
	float Strength;  // 0x30 (0x30)
	float Duration;  // 0x34 (0x34)
	float Radius;  // 0x38 (0x38)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool bIsPush : 1;  // 0x3C (0x3C)
	char pad_61_1 : 7;  // 0x3D (0x3D)
	bool bIsAdditive : 1;  // 0x3D (0x3D)
	char pad_62_1 : 7;  // 0x3E (0x3E)
	bool bNoZForce : 1;  // 0x3E (0x3E)
	char pad_63[1];  // 0x3F (0x3F)
	struct UCurveFloat* StrengthDistanceFalloff;  // 0x40 (0x40)
	struct UCurveFloat* StrengthOverTime;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bUseFixedWorldDirection : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct FRotator FixedWorldDirection;  // 0x58 (0x58)
	uint8_t VelocityOnFinishMode;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)
	struct FVector SetVelocityOnFinish;  // 0x78 (0x78)
	float ClampVelocityOnFinish;  // 0x90 (0x90)
	char pad_148[4];  // 0x94 (0x94)
	struct UAbilityTask_ApplyRootMotionRadialForce* ReturnValue;  // 0x98 (0x98)


}; 
 
 // Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
struct FMoveToLocation
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	struct FVector Location;  // 0x10 (0x10)
	float Duration;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct UCurveFloat* OptionalInterpolationCurve;  // 0x30 (0x30)
	struct UCurveVector* OptionalVectorInterpolationCurve;  // 0x38 (0x38)
	struct UAbilityTask_MoveToLocation* ReturnValue;  // 0x40 (0x40)


}; 
 
 // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
struct FCreatePlayMontageAndWaitProxy
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	struct UAnimMontage* MontageToPlay;  // 0x10 (0x10)
	float Rate;  // 0x18 (0x18)
	struct FName StartSection;  // 0x1C (0x1C)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool bStopWhenAbilityEnds : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	float AnimRootMotionTranslationScale;  // 0x28 (0x28)
	float StartTimeSeconds;  // 0x2C (0x2C)
	struct UAbilityTask_PlayMontageAndWait* ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
struct FOnMontageBlendingOut
{
	struct UAnimMontage* Montage;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bInterrupted : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
struct FRepeatAction
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	float TimeBetweenActions;  // 0x8 (0x8)
	int32_t TotalActionCount;  // 0xC (0xC)
	struct UAbilityTask_Repeat* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
struct FFinishSpawningActor
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct AGameplayAbilityTargetActor* SpawnedActor;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
struct FStartAbilityState
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName StateName;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bEndCurrentState : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct UAbilityTask_StartAbilityState* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
struct FWaitForAbilityActivate
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTag WithTag;  // 0x8 (0x8)
	struct FGameplayTag WithoutTag;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool IncludeTriggeredAbilities : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool TriggerOnce : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)
	struct UAbilityTask_WaitAbilityActivate* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
struct FGetAllActorsFromTargetData
{
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x0 (0x0)
	struct TArray<struct AActor*> ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
struct FWaitForAbilityActivate_Query
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTagQuery Query;  // 0x8 (0x8)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool IncludeTriggeredAbilities : 1;  // 0x50 (0x50)
	char pad_81_1 : 7;  // 0x51 (0x51)
	bool TriggerOnce : 1;  // 0x51 (0x51)
	char pad_82[6];  // 0x52 (0x52)
	struct UAbilityTask_WaitAbilityActivate* ReturnValue;  // 0x58 (0x58)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
struct FWaitForAbilityActivateWithTagRequirements
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTagRequirements TagRequirements;  // 0x8 (0x8)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool IncludeTriggeredAbilities : 1;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool TriggerOnce : 1;  // 0x49 (0x49)
	char pad_74[6];  // 0x4A (0x4A)
	struct UAbilityTask_WaitAbilityActivate* ReturnValue;  // 0x50 (0x50)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
struct FWaitForAttributeChangeWithComparison
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayAttribute InAttribute;  // 0x8 (0x8)
	struct FGameplayTag InWithTag;  // 0x40 (0x40)
	struct FGameplayTag InWithoutTag;  // 0x48 (0x48)
	enum class EWaitAttributeChangeComparison InComparisonType;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	float InComparisonValue;  // 0x54 (0x54)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool TriggerOnce : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct AActor* OptionalExternalOwner;  // 0x60 (0x60)
	struct UAbilityTask_WaitAttributeChange* ReturnValue;  // 0x68 (0x68)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
struct FWaitForAttributeChangeThreshold
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayAttribute Attribute;  // 0x8 (0x8)
	enum class EWaitAttributeChangeComparison ComparisonType;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	float ComparisonValue;  // 0x44 (0x44)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bTriggerOnce : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct AActor* OptionalExternalOwner;  // 0x50 (0x50)
	struct UAbilityTask_WaitAttributeChangeThreshold* ReturnValue;  // 0x58 (0x58)


}; 
 
 // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
struct FK2_HandleGameplayCue
{
	struct AActor* MyTarget;  // 0x0 (0x0)
	enum class EGameplayCueEvent EventType;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FGameplayCueParameters Parameters;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
struct FWaitCancel
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct UAbilityTask_WaitCancel* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
struct FOnConfirmCallback
{
	struct UGameplayAbility* InAbility;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
struct FWaitDelay
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	float Time;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UAbilityTask_WaitDelay* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
struct FWaitGameplayEffectBlockedByImmunity
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTagRequirements SourceTagRequirements;  // 0x8 (0x8)
	struct FGameplayTagRequirements TargetTagRequirements;  // 0x48 (0x48)
	struct AActor* OptionalExternalTarget;  // 0x88 (0x88)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool OnlyTriggerOnce : 1;  // 0x90 (0x90)
	char pad_145[7];  // 0x91 (0x91)
	struct UAbilityTask_WaitGameplayEffectBlockedImmunity* ReturnValue;  // 0x98 (0x98)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
struct FEffectContextAddHitResult
{
	struct FGameplayEffectContextHandle EffectContext;  // 0x0 (0x0)
	struct FHitResult HitResult;  // 0x18 (0x18)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool bReset : 1;  // 0x100 (0x100)
	char pad_257[7];  // 0x101 (0x101)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
struct FAppendTargetDataHandle
{
	struct FGameplayAbilityTargetDataHandle TargetHandle;  // 0x0 (0x0)
	struct FGameplayAbilityTargetDataHandle HandleToAdd;  // 0x28 (0x28)
	struct FGameplayAbilityTargetDataHandle ReturnValue;  // 0x50 (0x50)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
struct FWaitForGameplayEffectRemoved
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FActiveGameplayEffectHandle Handle;  // 0x8 (0x8)
	struct UAbilityTask_WaitGameplayEffectRemoved* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
struct FGetFloatAttributeFromAbilitySystemComponent
{
	struct UAbilitySystemComponent* AbilitySystem;  // 0x0 (0x0)
	struct FGameplayAttribute Attribute;  // 0x8 (0x8)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bSuccessfullyFoundAttribute : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	float ReturnValue;  // 0x44 (0x44)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
struct FOnGameplayEffectStackChange
{
	struct FActiveGameplayEffectHandle Handle;  // 0x0 (0x0)
	int32_t NewCount;  // 0x8 (0x8)
	int32_t OldCount;  // 0xC (0xC)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
struct FTargetDataHasOrigin
{
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x0 (0x0)
	int32_t Index;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool ReturnValue : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
struct FWaitForGameplayEffectStackChange
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FActiveGameplayEffectHandle Handle;  // 0x8 (0x8)
	struct UAbilityTask_WaitGameplayEffectStackChange* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
struct FSetStackCount
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	int32_t StackCount;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FGameplayEffectSpecHandle ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
struct FWaitGameplayEvent
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTag EventTag;  // 0x8 (0x8)
	struct AActor* OptionalExternalTarget;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool OnlyTriggerOnce : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool OnlyMatchExact : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)
	struct UAbilityTask_WaitGameplayEvent* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
struct FWaitGameplayTagAdd
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FGameplayTag Tag;  // 0x8 (0x8)
	struct AActor* InOptionalExternalTarget;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool OnlyTriggerOnce : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct UAbilityTask_WaitGameplayTagAdded* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
struct FGetAllLinkedGameplayEffectSpecHandles
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct TArray<struct FGameplayEffectSpecHandle> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.UpdateTargetTags
struct FUpdateTargetTags
{
	struct FGameplayTag Tag;  // 0x0 (0x0)
	int32_t NewCount;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
struct FWaitInputPress
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bTestAlreadyPressed : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct UAbilityTask_WaitInputPress* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
struct FCreateWaitMovementModeChange
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	enum class EMovementMode NewMode;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct UAbilityTask_WaitMovementModeChange* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
struct FOnMovementModeChange
{
	struct ACharacter* Character;  // 0x0 (0x0)
	enum class EMovementMode PrevMovementMode;  // 0x8 (0x8)
	char PreviousCustomMode;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
struct FOnHitCallback
{
	struct UPrimitiveComponent* HitComp;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10 (0x10)
	struct FVector NormalImpulse;  // 0x18 (0x18)
	struct FHitResult Hit;  // 0x30 (0x30)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
struct FOnTargetDataReadyCallback
{
	struct FGameplayAbilityTargetDataHandle Data;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
struct FWaitTargetData
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FName TaskInstanceName;  // 0x8 (0x8)
	enum class EGameplayTargetingConfirmation ConfirmationType;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	AGameplayAbilityTargetActor* Class;  // 0x18 (0x18)
	struct UAbilityTask_WaitTargetData* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
struct FCreateWaitVelocityChange
{
	struct UGameplayAbility* OwningAbility;  // 0x0 (0x0)
	struct FVector Direction;  // 0x8 (0x8)
	float MinimumMagnitude;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct UAbilityTask_WaitVelocityChange* ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
struct FAbilityTargetDataFromHitResult
{
	struct FHitResult HitResult;  // 0x0 (0x0)
	struct FGameplayAbilityTargetDataHandle ReturnValue;  // 0xE8 (0xE8)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
struct FAbilityTargetDataFromLocations
{
	struct FGameplayAbilityTargetingLocationInfo SourceLocation;  // 0x0 (0x0)
	struct FGameplayAbilityTargetingLocationInfo TargetLocation;  // 0xA0 (0xA0)
	struct FGameplayAbilityTargetDataHandle ReturnValue;  // 0x140 (0x140)
	char pad_360[8];  // 0x168 (0x168)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
struct FAddGrantedTag
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct FGameplayTag NewGameplayTag;  // 0x10 (0x10)
	struct FGameplayEffectSpecHandle ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
struct FAddGrantedTags
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct FGameplayTagContainer NewGameplayTags;  // 0x10 (0x10)
	struct FGameplayEffectSpecHandle ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
struct FAddLinkedGameplayEffect
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	UGameplayEffect* LinkedGameplayEffect;  // 0x10 (0x10)
	struct FGameplayEffectSpecHandle ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
struct FAddLinkedGameplayEffectSpec
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec;  // 0x10 (0x10)
	struct FGameplayEffectSpecHandle ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
struct FCloneSpecHandle
{
	struct AActor* InNewInstigator;  // 0x0 (0x0)
	struct AActor* InEffectCauser;  // 0x8 (0x8)
	struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone;  // 0x10 (0x10)
	struct FGameplayEffectSpecHandle ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
struct FDoesTargetDataContainActor
{
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x0 (0x0)
	int32_t Index;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct AActor* Actor;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool ReturnValue : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
struct FEffectContextGetOrigin
{
	struct FGameplayEffectContextHandle EffectContext;  // 0x0 (0x0)
	struct FVector ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
struct FEffectContextGetOriginalInstigatorActor
{
	struct FGameplayEffectContextHandle EffectContext;  // 0x0 (0x0)
	struct AActor* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
struct FEffectContextGetSourceObject
{
	struct FGameplayEffectContextHandle EffectContext;  // 0x0 (0x0)
	struct UObject* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
struct FEffectContextHasHitResult
{
	struct FGameplayEffectContextHandle EffectContext;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
struct FEffectContextIsValid
{
	struct FGameplayEffectContextHandle EffectContext;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
struct FEffectContextSetOrigin
{
	struct FGameplayEffectContextHandle EffectContext;  // 0x0 (0x0)
	struct FVector Origin;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAbilitySpecHandle
struct FEqualEqual_GameplayAbilitySpecHandle
{
	struct FGameplayAbilitySpecHandle A;  // 0x0 (0x0)
	struct FGameplayAbilitySpecHandle B;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
struct FEvaluateAttributeValueWithTagsAndBase
{
	struct UAbilitySystemComponent* AbilitySystem;  // 0x0 (0x0)
	struct FGameplayAttribute Attribute;  // 0x8 (0x8)
	struct FGameplayTagContainer SourceTags;  // 0x40 (0x40)
	struct FGameplayTagContainer TargetTags;  // 0x60 (0x60)
	float BaseValue;  // 0x80 (0x80)
	char pad_132_1 : 7;  // 0x84 (0x84)
	bool bSuccess : 1;  // 0x84 (0x84)
	char pad_133[3];  // 0x85 (0x85)
	float ReturnValue;  // 0x88 (0x88)
	char pad_140[4];  // 0x8C (0x8C)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
struct FEqualEqual_GameplayAttributeGameplayAttribute
{
	struct FGameplayAttribute AttributeA;  // 0x0 (0x0)
	struct FGameplayAttribute AttributeB;  // 0x38 (0x38)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool ReturnValue : 1;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
struct FEvaluateAttributeValueWithTags
{
	struct UAbilitySystemComponent* AbilitySystem;  // 0x0 (0x0)
	struct FGameplayAttribute Attribute;  // 0x8 (0x8)
	struct FGameplayTagContainer SourceTags;  // 0x40 (0x40)
	struct FGameplayTagContainer TargetTags;  // 0x60 (0x60)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bSuccess : 1;  // 0x80 (0x80)
	char pad_129[3];  // 0x81 (0x81)
	float ReturnValue;  // 0x84 (0x84)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
struct FForwardGameplayCueToTarget
{
	struct TScriptInterface<IGameplayCueInterface> TargetCueInterface;  // 0x0 (0x0)
	enum class EGameplayCueEvent EventType;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FGameplayCueParameters Parameters;  // 0x18 (0x18)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
struct FGetActiveGameplayEffectDebugString
{
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.GameplayCueNotify_Static.OnActive
struct FOnActive
{
	struct AActor* MyTarget;  // 0x0 (0x0)
	struct FGameplayCueParameters Parameters;  // 0x8 (0x8)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool ReturnValue : 1;  // 0xE0 (0xE0)
	char pad_225[7];  // 0xE1 (0xE1)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
struct FGetActiveGameplayEffectStackLimitCount
{
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
struct FGetActiveGameplayEffectStartTime
{
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags
struct FGetTargetActorTags
{
	struct FGameplayEffectSpec EffectSpec;  // 0x0 (0x0)
	struct FGameplayTagContainer ReturnValue;  // 0x298 (0x298)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
struct FGetActiveGameplayEffectTotalDuration
{
	struct FActiveGameplayEffectHandle ActiveHandle;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
struct FGetActorCount
{
	struct FGameplayCueParameters Parameters;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0xD8 (0xD8)
	char pad_220[4];  // 0xDC (0xDC)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
struct FGetActorsFromTargetData
{
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x0 (0x0)
	int32_t Index;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct TArray<struct AActor*> ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
struct FGetDataCountFromTargetData
{
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
struct FGetFloatAttribute
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct FGameplayAttribute Attribute;  // 0x8 (0x8)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bSuccessfullyFoundAttribute : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	float ReturnValue;  // 0x44 (0x44)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
struct FGetFloatAttributeBaseFromAbilitySystemComponent
{
	struct UAbilitySystemComponent* AbilitySystemComponent;  // 0x0 (0x0)
	struct FGameplayAttribute Attribute;  // 0x8 (0x8)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bSuccessfullyFoundAttribute : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	float ReturnValue;  // 0x44 (0x44)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayAbilityFromSpecHandle
struct FGetGameplayAbilityFromSpecHandle
{
	struct UAbilitySystemComponent* AbilitySystem;  // 0x0 (0x0)
	struct FGameplayAbilitySpecHandle AbilitySpecHandle;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bIsInstance : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct UGameplayAbility* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
struct FGetGameplayCueDirection
{
	struct AActor* TargetActor;  // 0x0 (0x0)
	struct FGameplayCueParameters Parameters;  // 0x8 (0x8)
	struct FVector Direction;  // 0xE0 (0xE0)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool ReturnValue : 1;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
struct FGetHitResult
{
	struct FGameplayCueParameters Parameters;  // 0x0 (0x0)
	struct FHitResult ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
struct FGetInstigatorActor
{
	struct FGameplayCueParameters Parameters;  // 0x0 (0x0)
	struct AActor* ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
struct FGetModifiedAttributeMagnitude
{
	struct FGameplayEffectSpecHandle SpecHandle;  // 0x0 (0x0)
	struct FGameplayAttribute Attribute;  // 0x10 (0x10)
	float ReturnValue;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
struct FGetOrigin
{
	struct FGameplayCueParameters Parameters;  // 0x0 (0x0)
	struct FVector ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
struct FHasHitResult
{
	struct FGameplayCueParameters Parameters;  // 0x0 (0x0)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool ReturnValue : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
struct FIsInstigatorLocallyControlled
{
	struct FGameplayCueParameters Parameters;  // 0x0 (0x0)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool ReturnValue : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
struct FIsInstigatorLocallyControlledPlayer
{
	struct FGameplayCueParameters Parameters;  // 0x0 (0x0)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool ReturnValue : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
struct FIsValid
{
	struct FGameplayAttribute Attribute;  // 0x0 (0x0)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool ReturnValue : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // Function GameplayAbilities.GameplayCueFunctionLibrary.MakeGameplayCueParametersFromHitResult
struct FMakeGameplayCueParametersFromHitResult
{
	struct FHitResult HitResult;  // 0x0 (0x0)
	struct FGameplayCueParameters ReturnValue;  // 0xE8 (0xE8)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAbilitySpecHandle
struct FNotEqual_GameplayAbilitySpecHandle
{
	struct FGameplayAbilitySpecHandle A;  // 0x0 (0x0)
	struct FGameplayAbilitySpecHandle B;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_ActiveGameplayEffectHandle
struct FNotEqual_ActiveGameplayEffectHandle
{
	struct FActiveGameplayEffectHandle A;  // 0x0 (0x0)
	struct FActiveGameplayEffectHandle B;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
struct FNotEqual_GameplayAttributeGameplayAttribute
{
	struct FGameplayAttribute AttributeA;  // 0x0 (0x0)
	struct FGameplayAttribute AttributeB;  // 0x38 (0x38)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool ReturnValue : 1;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.RemoveLooseGameplayTags
struct FRemoveLooseGameplayTags
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct FGameplayTagContainer GameplayTags;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bShouldReplicate : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool ReturnValue : 1;  // 0x29 (0x29)
	char pad_42[6];  // 0x2A (0x2A)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
struct FSendGameplayEventToActor
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct FGameplayTag EventTag;  // 0x8 (0x8)
	struct FGameplayEventData Payload;  // 0x10 (0x10)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
struct FTargetDataHasActor
{
	struct FGameplayAbilityTargetDataHandle TargetData;  // 0x0 (0x0)
	int32_t Index;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool ReturnValue : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)


}; 
 
 // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
struct FTargetDataHasHitResult
{
	struct FGameplayAbilityTargetDataHandle HitResult;  // 0x0 (0x0)
	int32_t Index;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool ReturnValue : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)


}; 
 
 // Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility
struct FServerCancelPlayerAbility
{
	struct FString AbilityNameMatch;  // 0x0 (0x0)


}; 
 
 // Function GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst
struct FOnBurst
{
	struct AActor* Target;  // 0x0 (0x0)
	struct FGameplayCueParameters Parameters;  // 0x8 (0x8)
	struct FGameplayCueNotify_SpawnResult SpawnResults;  // 0xE0 (0xE0)


}; 
 
 // Function GameplayAbilities.GameplayCueNotify_Looping.OnRecurring
struct FOnRecurring
{
	struct AActor* Target;  // 0x0 (0x0)
	struct FGameplayCueParameters Parameters;  // 0x8 (0x8)
	struct FGameplayCueNotify_SpawnResult SpawnResults;  // 0xE0 (0xE0)


}; 
 
 // Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
struct FCanApplyGameplayEffect
{
	struct UGameplayEffect* GameplayEffect;  // 0x0 (0x0)
	struct FGameplayEffectSpec Spec;  // 0x8 (0x8)
	struct UAbilitySystemComponent* ASC;  // 0x2A0 (0x2A0)
	char pad_680_1 : 7;  // 0x2A8 (0x2A8)
	bool ReturnValue : 1;  // 0x2A8 (0x2A8)
	char pad_681[7];  // 0x2A9 (0x2A9)


}; 
 
 // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName
struct FGetSetByCallerMagnitudeByName
{
	struct FGameplayEffectSpec EffectSpec;  // 0x0 (0x0)
	struct FName MagnitudeName;  // 0x298 (0x298)
	float ReturnValue;  // 0x2A0 (0x2A0)
	char pad_676[4];  // 0x2A4 (0x2A4)


}; 
 
 // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag
struct FGetSetByCallerMagnitudeByTag
{
	struct FGameplayEffectSpec EffectSpec;  // 0x0 (0x0)
	struct FGameplayTag Tag;  // 0x298 (0x298)
	float ReturnValue;  // 0x2A0 (0x2A0)
	char pad_676[4];  // 0x2A4 (0x2A4)


}; 
 
 // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags
struct FGetSourceActorTags
{
	struct FGameplayEffectSpec EffectSpec;  // 0x0 (0x0)
	struct FGameplayTagContainer ReturnValue;  // 0x298 (0x298)


}; 
 
 // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags
struct FGetSourceAggregatedTags
{
	struct FGameplayEffectSpec EffectSpec;  // 0x0 (0x0)
	struct FGameplayTagContainer ReturnValue;  // 0x298 (0x298)


}; 
 
 // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags
struct FGetTargetAggregatedTags
{
	struct FGameplayEffectSpec EffectSpec;  // 0x0 (0x0)
	struct FGameplayTagContainer ReturnValue;  // 0x298 (0x298)


}; 
 
 // Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags
struct FGetTargetSpecTags
{
	struct FGameplayEffectSpec EffectSpec;  // 0x0 (0x0)
	struct FGameplayTagContainer ReturnValue;  // 0x298 (0x298)


}; 
 
 
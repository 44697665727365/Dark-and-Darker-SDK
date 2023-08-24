#pragma once 
#include <EnhancedInput_Structs.h>
 
 
 
// Class EnhancedInput.EnhancedInputActionDelegateBinding
// Size: 0x38(Inherited: 0x28)
struct UEnhancedInputActionDelegateBinding : UInputDelegateBinding
{
	struct TArray<struct FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings;  // 0x28 (0x28)


}; 
 
 


// Class EnhancedInput.EnhancedInputActionValueBinding
// Size: 0x38(Inherited: 0x28)
struct UEnhancedInputActionValueBinding : UInputDelegateBinding
{
	struct TArray<struct FBlueprintEnhancedInputActionBinding> InputActionValueBindings;  // 0x28 (0x28)


}; 
 
 


// Class EnhancedInput.EnhancedInputDeveloperSettings
// Size: 0x50(Inherited: 0x38)
struct UEnhancedInputDeveloperSettings : UDeveloperSettingsBackedByCVars
{
	struct FPerPlatformSettings PlatformSettings;  // 0x38 (0x38)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bShouldOnlyTriggerLastActionInChord : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)


}; 
 
 


// Class EnhancedInput.EnhancedInputComponent
// Size: 0x160(Inherited: 0x128)
struct UEnhancedInputComponent : UInputComponent
{
	char pad_296[56];  // 0x128 (0x128)


	struct FInputActionValue GetBoundActionValue(struct UInputAction* Action); // Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue
}; 
 
 


// Class EnhancedInput.InputTriggerHold
// Size: 0x68(Inherited: 0x58)
struct UInputTriggerHold : UInputTriggerTimedBase
{
	char pad_88[4];  // 0x58 (0x58)
	float HoldTimeThreshold;  // 0x5C (0x5C)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bIsOneShot : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)


}; 
 
 


// Class EnhancedInput.EnhancedInputLibrary
// Size: 0x28(Inherited: 0x28)
struct UEnhancedInputLibrary : UBlueprintFunctionLibrary
{


	void RequestRebuildControlMappingsUsingContext(struct UInputMappingContext* Context, bool bForceImmediately); // Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
	struct FInputActionValue MakeInputActionValueOfType(double X, double Y, double Z, uint8_t ValueType); // Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType
	struct FInputActionValue MakeInputActionValue(double X, double Y, double Z, struct FInputActionValue& MatchValueType); // Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
	struct FInputActionValue GetBoundActionValue(struct AActor* Actor, struct UInputAction* Action); // Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
	struct FString Conv_InputActionValueToString(struct FInputActionValue ActionValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString
	bool Conv_InputActionValueToBool(struct FInputActionValue InValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
	struct FVector Conv_InputActionValueToAxis3D(struct FInputActionValue ActionValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
	struct FVector2D Conv_InputActionValueToAxis2D(struct FInputActionValue InValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
	double Conv_InputActionValueToAxis1D(struct FInputActionValue InValue); // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
	void BreakInputActionValue(struct FInputActionValue InActionValue, double& X, double& Y, double& Z, uint8_t& Type); // Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
}; 
 
 


// Class EnhancedInput.EnhancedInputPlatformSettings
// Size: 0x68(Inherited: 0x40)
struct UEnhancedInputPlatformSettings : UPlatformSettings
{
	struct TArray<struct TSoftClassPtr<UObject>> InputData;  // 0x40 (0x40)
	struct TArray<UEnhancedInputPlatformData*> InputDataClasses;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bShouldLogMappingContextRedirects : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)


}; 
 
 


// Class EnhancedInput.EnhancedInputPlatformData
// Size: 0x78(Inherited: 0x28)
struct UEnhancedInputPlatformData : UObject
{
	struct TMap<struct UInputMappingContext*, struct UInputMappingContext*> MappingContextRedirects;  // 0x28 (0x28)


	struct UInputMappingContext* GetContextRedirect(struct UInputMappingContext* InContext); // Function EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
}; 
 
 


// Class EnhancedInput.PlayerMappableInputConfig
// Size: 0xB0(Inherited: 0x30)
struct UPlayerMappableInputConfig : UPrimaryDataAsset
{
	struct FName ConfigName;  // 0x30 (0x30)
	struct FText ConfigDisplayName;  // 0x38 (0x38)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bIsDeprecated : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct UObject* MetaData;  // 0x58 (0x58)
	struct TMap<struct UInputMappingContext*, int32_t> Contexts;  // 0x60 (0x60)


	void ResetToDefault(); // Function EnhancedInput.PlayerMappableInputConfig.ResetToDefault
	bool IsDeprecated(); // Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated
	struct TArray<struct FEnhancedActionKeyMapping> GetPlayerMappableKeys(); // Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
	struct UObject* GetMetadata(); // Function EnhancedInput.PlayerMappableInputConfig.GetMetadata
	struct TMap<struct UInputMappingContext*, int32_t> GetMappingContexts(); // Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
	struct FEnhancedActionKeyMapping GetMappingByName(struct FName MappingName); // Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName
	struct TArray<struct FEnhancedActionKeyMapping> GetKeysBoundToAction(struct UInputAction* InAction); // Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
	struct FText GetDisplayName(); // Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName
	struct FName GetConfigName(); // Function EnhancedInput.PlayerMappableInputConfig.GetConfigName
}; 
 
 


// Class EnhancedInput.InputMappingContext
// Size: 0x58(Inherited: 0x30)
struct UInputMappingContext : UDataAsset
{
	struct TArray<struct FEnhancedActionKeyMapping> Mappings;  // 0x30 (0x30)
	struct FText ContextDescription;  // 0x40 (0x40)


	void UnmapKey(struct UInputAction* Action, struct FKey Key); // Function EnhancedInput.InputMappingContext.UnmapKey
	void UnmapAllKeysFromAction(struct UInputAction* Action); // Function EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
	void UnmapAll(); // Function EnhancedInput.InputMappingContext.UnmapAll
	void UnmapAction(struct UInputAction* Action); // Function EnhancedInput.InputMappingContext.UnmapAction
	struct FEnhancedActionKeyMapping MapKey(struct UInputAction* Action, struct FKey ToKey); // Function EnhancedInput.InputMappingContext.MapKey
}; 
 
 


// Class EnhancedInput.EnhancedInputSubsystemInterface
// Size: 0x28(Inherited: 0x28)
struct UEnhancedInputSubsystemInterface : UInterface
{


	void RequestRebuildControlMappings(struct FModifyContextOptions& Options, uint8_t RebuildType); // Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
	int32_t RemovePlayerMappedKey(struct FName MappingName, struct FModifyContextOptions& Options); // Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappedKey
	void RemovePlayerMappableConfig(struct UPlayerMappableInputConfig* Config, struct FModifyContextOptions& Options); // Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig
	void RemoveMappingContext(struct UInputMappingContext* MappingContext, struct FModifyContextOptions& Options); // Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
	void RemoveAllPlayerMappedKeys(struct FModifyContextOptions& Options); // Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
	uint8_t QueryMapKeyInContextSet(struct TArray<struct UInputMappingContext*>& PrioritizedActiveContexts, struct UInputMappingContext* InputContext, struct UInputAction* Action, struct FKey Key, struct TArray<struct FMappingQueryIssue>& OutIssues, uint8_t BlockingIssues); // Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
	uint8_t QueryMapKeyInActiveContextSet(struct UInputMappingContext* InputContext, struct UInputAction* Action, struct FKey Key, struct TArray<struct FMappingQueryIssue>& OutIssues, uint8_t BlockingIssues); // Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
	struct TArray<struct FKey> QueryKeysMappedToAction(struct UInputAction* Action); // Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
	void InjectInputVectorForAction(struct UInputAction* Action, struct FVector Value, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers); // Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction
	void InjectInputForAction(struct UInputAction* Action, struct FInputActionValue RawValue, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers); // Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction
	bool HasMappingContext(struct UInputMappingContext* MappingContext, int32_t& OutFoundPriority); // Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
	struct FKey GetPlayerMappedKey(struct FName MappingName); // Function EnhancedInput.EnhancedInputSubsystemInterface.GetPlayerMappedKey
	struct TArray<struct FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings(); // Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings
	void ClearAllMappings(); // Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
	int32_t AddPlayerMappedKey(struct FName MappingName, struct FKey NewKey, struct FModifyContextOptions& Options); // Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappedKey
	void AddPlayerMappableConfig(struct UPlayerMappableInputConfig* Config, struct FModifyContextOptions& Options); // Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig
	void AddMappingContext(struct UInputMappingContext* MappingContext, int32_t Priority, struct FModifyContextOptions& Options); // Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
}; 
 
 


// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
// Size: 0x1E0(Inherited: 0x30)
struct UEnhancedInputLocalPlayerSubsystem : ULocalPlayerSubsystem
{
	char pad_48[416];  // 0x30 (0x30)
	struct FMulticastInlineDelegate ControlMappingsRebuiltDelegate;  // 0x1D0 (0x1D0)


}; 
 
 


// Class EnhancedInput.EnhancedPlayerInput
// Size: 0x740(Inherited: 0x498)
struct UEnhancedPlayerInput : UPlayerInput
{
	struct TMap<struct UInputMappingContext*, int32_t> AppliedInputContexts;  // 0x498 (0x498)
	struct TArray<struct FEnhancedActionKeyMapping> EnhancedActionMappings;  // 0x4E8 (0x4E8)
	char pad_1272[80];  // 0x4F8 (0x4F8)
	struct TMap<struct UInputAction*, struct FInputActionInstance> ActionInstanceData;  // 0x548 (0x548)
	char pad_1432[160];  // 0x598 (0x598)
	struct TMap<struct FKey, struct FVector> KeysPressedThisTick;  // 0x638 (0x638)
	struct TMap<struct UInputAction*, struct FInjectedInputArray> InputsInjectedThisTick;  // 0x688 (0x688)
	struct TSet<struct UInputAction*> LastInjectedActions;  // 0x6D8 (0x6D8)
	char pad_1832[24];  // 0x728 (0x728)


}; 
 
 


// Class EnhancedInput.InputAction
// Size: 0x70(Inherited: 0x30)
struct UInputAction : UDataAsset
{
	struct FText ActionDescription;  // 0x30 (0x30)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bConsumeInput : 1;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool bTriggerWhenPaused : 1;  // 0x49 (0x49)
	char pad_74_1 : 7;  // 0x4A (0x4A)
	bool bReserveAllMappings : 1;  // 0x4A (0x4A)
	uint8_t ValueType;  // 0x4B (0x4B)
	char pad_76[4];  // 0x4C (0x4C)
	struct TArray<struct UInputTrigger*> Triggers;  // 0x50 (0x50)
	struct TArray<struct UInputModifier*> Modifiers;  // 0x60 (0x60)


}; 
 
 


// Class EnhancedInput.InputDebugKeyDelegateBinding
// Size: 0x38(Inherited: 0x28)
struct UInputDebugKeyDelegateBinding : UInputDelegateBinding
{
	struct TArray<struct FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings;  // 0x28 (0x28)


}; 
 
 


// Class EnhancedInput.InputModifierSmooth
// Size: 0x58(Inherited: 0x28)
struct UInputModifierSmooth : UInputModifier
{
	char pad_40[48];  // 0x28 (0x28)


}; 
 
 


// Class EnhancedInput.InputModifierScaleByDeltaTime
// Size: 0x28(Inherited: 0x28)
struct UInputModifierScaleByDeltaTime : UInputModifier
{


}; 
 
 


// Class EnhancedInput.InputModifier
// Size: 0x28(Inherited: 0x28)
struct UInputModifier : UObject
{


	struct FInputActionValue ModifyRaw(struct UEnhancedPlayerInput* PlayerInput, struct FInputActionValue CurrentValue, float DeltaTime); // Function EnhancedInput.InputModifier.ModifyRaw
	struct FLinearColor GetVisualizationColor(struct FInputActionValue SampleValue, struct FInputActionValue FinalValue); // Function EnhancedInput.InputModifier.GetVisualizationColor
}; 
 
 


// Class EnhancedInput.InputModifierDeadZone
// Size: 0x38(Inherited: 0x28)
struct UInputModifierDeadZone : UInputModifier
{
	float LowerThreshold;  // 0x28 (0x28)
	float UpperThreshold;  // 0x2C (0x2C)
	uint8_t Type;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 


// Class EnhancedInput.InputModifierScalar
// Size: 0x40(Inherited: 0x28)
struct UInputModifierScalar : UInputModifier
{
	struct FVector Scalar;  // 0x28 (0x28)


}; 
 
 


// Class EnhancedInput.InputTriggerCombo
// Size: 0x78(Inherited: 0x50)
struct UInputTriggerCombo : UInputTrigger
{
	int32_t CurrentComboStepIndex;  // 0x50 (0x50)
	float CurrentTimeBetweenComboSteps;  // 0x54 (0x54)
	struct TArray<struct FInputComboStepData> ComboActions;  // 0x58 (0x58)
	struct TArray<struct UInputAction*> CancelActions;  // 0x68 (0x68)


}; 
 
 


// Class EnhancedInput.InputModifierNegate
// Size: 0x30(Inherited: 0x28)
struct UInputModifierNegate : UInputModifier
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bX : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool bY : 1;  // 0x29 (0x29)
	char pad_42_1 : 7;  // 0x2A (0x2A)
	bool bZ : 1;  // 0x2A (0x2A)
	char pad_43[5];  // 0x2B (0x2B)


}; 
 
 


// Class EnhancedInput.InputModifierResponseCurveExponential
// Size: 0x40(Inherited: 0x28)
struct UInputModifierResponseCurveExponential : UInputModifier
{
	struct FVector CurveExponent;  // 0x28 (0x28)


}; 
 
 


// Class EnhancedInput.InputTriggerHoldAndRelease
// Size: 0x60(Inherited: 0x58)
struct UInputTriggerHoldAndRelease : UInputTriggerTimedBase
{
	float HoldTimeThreshold;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)


}; 
 
 


// Class EnhancedInput.InputModifierResponseCurveUser
// Size: 0x40(Inherited: 0x28)
struct UInputModifierResponseCurveUser : UInputModifier
{
	struct UCurveFloat* ResponseX;  // 0x28 (0x28)
	struct UCurveFloat* ResponseY;  // 0x30 (0x30)
	struct UCurveFloat* ResponseZ;  // 0x38 (0x38)


}; 
 
 


// Class EnhancedInput.InputModifierFOVScaling
// Size: 0x30(Inherited: 0x28)
struct UInputModifierFOVScaling : UInputModifier
{
	float FOVScale;  // 0x28 (0x28)
	uint8_t FOVScalingType;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)


}; 
 
 


// Class EnhancedInput.InputModifierToWorldSpace
// Size: 0x28(Inherited: 0x28)
struct UInputModifierToWorldSpace : UInputModifier
{


}; 
 
 


// Class EnhancedInput.InputModifierSwizzleAxis
// Size: 0x30(Inherited: 0x28)
struct UInputModifierSwizzleAxis : UInputModifier
{
	uint8_t Order;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 


// Class EnhancedInput.InputTrigger
// Size: 0x50(Inherited: 0x28)
struct UInputTrigger : UObject
{
	float ActuationThreshold;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool bShouldAlwaysTick : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	struct FInputActionValue LastValue;  // 0x30 (0x30)


	uint8_t UpdateState(struct UEnhancedPlayerInput* PlayerInput, struct FInputActionValue ModifiedValue, float DeltaTime); // Function EnhancedInput.InputTrigger.UpdateState
	bool IsActuated(struct FInputActionValue& ForValue); // Function EnhancedInput.InputTrigger.IsActuated
	uint8_t GetTriggerType(); // Function EnhancedInput.InputTrigger.GetTriggerType
}; 
 
 


// Class EnhancedInput.InputTriggerTimedBase
// Size: 0x58(Inherited: 0x50)
struct UInputTriggerTimedBase : UInputTrigger
{
	float HeldDuration;  // 0x50 (0x50)
	char pad_84_1 : 7;  // 0x54 (0x54)
	bool bAffectedByTimeDilation : 1;  // 0x54 (0x54)
	char pad_85[3];  // 0x55 (0x55)


}; 
 
 


// Class EnhancedInput.InputTriggerDown
// Size: 0x50(Inherited: 0x50)
struct UInputTriggerDown : UInputTrigger
{


}; 
 
 


// Class EnhancedInput.InputTriggerPressed
// Size: 0x50(Inherited: 0x50)
struct UInputTriggerPressed : UInputTrigger
{


}; 
 
 


// Class EnhancedInput.InputTriggerReleased
// Size: 0x50(Inherited: 0x50)
struct UInputTriggerReleased : UInputTrigger
{


}; 
 
 


// Class EnhancedInput.InputTriggerTap
// Size: 0x60(Inherited: 0x58)
struct UInputTriggerTap : UInputTriggerTimedBase
{
	float TapReleaseTimeThreshold;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)


}; 
 
 


// Class EnhancedInput.InputTriggerPulse
// Size: 0x68(Inherited: 0x58)
struct UInputTriggerPulse : UInputTriggerTimedBase
{
	char pad_88[4];  // 0x58 (0x58)
	char pad_92_1 : 7;  // 0x5C (0x5C)
	bool bTriggerOnStart : 1;  // 0x5C (0x5C)
	char pad_93[3];  // 0x5D (0x5D)
	float Interval;  // 0x60 (0x60)
	int32_t TriggerLimit;  // 0x64 (0x64)


}; 
 
 


// Class EnhancedInput.InputTriggerChordAction
// Size: 0x58(Inherited: 0x50)
struct UInputTriggerChordAction : UInputTrigger
{
	struct UInputAction* ChordAction;  // 0x50 (0x50)


}; 
 
 


// Class EnhancedInput.InputTriggerChordBlocker
// Size: 0x58(Inherited: 0x58)
struct UInputTriggerChordBlocker : UInputTriggerChordAction
{


}; 
 
 



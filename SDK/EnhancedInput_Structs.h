#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// DelegateFunction EnhancedInput.EnhancedInputActionHandlerDynamicSignature__DelegateSignature
struct FEnhancedInputActionHandlerDynamicSignature__DelegateSignature
{
	struct FInputActionValue ActionValue;  // 0x0 (0x0)
	float ElapsedTime;  // 0x20 (0x20)
	float TriggeredTime;  // 0x24 (0x24)
	struct UInputAction* SourceAction;  // 0x28 (0x28)


}; 
 
 // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
struct FConv_InputActionValueToBool
{
	struct FInputActionValue InValue;  // 0x0 (0x0)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // ScriptStruct EnhancedInput.InputActionValue
struct FInputActionValue
{
	char pad_0[32];  // 0x0 (0x0)


}; 
 
 // DelegateFunction EnhancedInput.InputDebugKeyHandlerDynamicSignature__DelegateSignature
struct FInputDebugKeyHandlerDynamicSignature__DelegateSignature
{
	struct FKey Key;  // 0x0 (0x0)
	struct FInputActionValue ActionValue;  // 0x18 (0x18)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappedKey
struct FAddPlayerMappedKey
{
	struct FName MappingName;  // 0x0 (0x0)
	struct FKey NewKey;  // 0x8 (0x8)
	struct FModifyContextOptions Options;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	int32_t ReturnValue;  // 0x24 (0x24)


}; 
 
 // Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType
struct FMakeInputActionValueOfType
{
	double X;  // 0x0 (0x0)
	double Y;  // 0x8 (0x8)
	double Z;  // 0x10 (0x10)
	uint8_t ValueType;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FInputActionValue ReturnValue;  // 0x20 (0x20)


}; 
 
 // ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
struct FBlueprintEnhancedInputActionBinding
{
	struct UInputAction* InputAction;  // 0x0 (0x0)
	uint8_t TriggerEvent;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	struct FName FunctionNameToBind;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings
struct FGetAllPlayerMappableActionKeyMappings
{
	struct TArray<struct FEnhancedActionKeyMapping> ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct EnhancedInput.PlayerMappableKeyOptions
struct FPlayerMappableKeyOptions
{
	struct UObject* MetaData;  // 0x0 (0x0)
	struct FName Name;  // 0x8 (0x8)
	struct FText DisplayName;  // 0x10 (0x10)
	struct FText DisplayCategory;  // 0x28 (0x28)


}; 
 
 // ScriptStruct EnhancedInput.MappingQueryIssue
struct FMappingQueryIssue
{
	uint8_t Issue;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UInputMappingContext* BlockingContext;  // 0x8 (0x8)
	struct UInputAction* BlockingAction;  // 0x10 (0x10)


}; 
 
 // ScriptStruct EnhancedInput.EnhancedActionKeyMapping
struct FEnhancedActionKeyMapping
{
	struct FPlayerMappableKeyOptions PlayerMappableOptions;  // 0x0 (0x0)
	struct TArray<struct UInputTrigger*> Triggers;  // 0x40 (0x40)
	struct TArray<struct UInputModifier*> Modifiers;  // 0x50 (0x50)
	struct UInputAction* Action;  // 0x60 (0x60)
	struct FKey Key;  // 0x68 (0x68)
	char bIsPlayerMappable : 1;  // 0x80 (0x80)
	char bShouldBeIgnored : 1;  // 0x80 (0x80)
	char pad_128_1 : 6;  // 0x80 (0x80)
	char pad_129[8];  // 0x81 (0x81)


}; 
 
 // Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName
struct FGetDisplayName
{
	struct FText ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
struct FQueryMapKeyInContextSet
{
	struct TArray<struct UInputMappingContext*> PrioritizedActiveContexts;  // 0x0 (0x0)
	struct UInputMappingContext* InputContext;  // 0x10 (0x10)
	struct UInputAction* Action;  // 0x18 (0x18)
	struct FKey Key;  // 0x20 (0x20)
	struct TArray<struct FMappingQueryIssue> OutIssues;  // 0x38 (0x38)
	uint8_t BlockingIssues;  // 0x48 (0x48)
	uint8_t ReturnValue;  // 0x49 (0x49)
	char pad_74[6];  // 0x4A (0x4A)


}; 
 
 // Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
struct FGetBoundActionValue
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct UInputAction* Action;  // 0x8 (0x8)
	struct FInputActionValue ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct EnhancedInput.ModifyContextOptions
struct FModifyContextOptions
{
	char bIgnoreAllPressedKeysUntilRelease : 1;  // 0x0 (0x0)
	char bForceImmediately : 1;  // 0x0 (0x0)
	char pad_0_1 : 6;  // 0x0 (0x0)


}; 
 
 // ScriptStruct EnhancedInput.InjectedInputArray
struct FInjectedInputArray
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
struct FQueryMapKeyInActiveContextSet
{
	struct UInputMappingContext* InputContext;  // 0x0 (0x0)
	struct UInputAction* Action;  // 0x8 (0x8)
	struct FKey Key;  // 0x10 (0x10)
	struct TArray<struct FMappingQueryIssue> OutIssues;  // 0x28 (0x28)
	uint8_t BlockingIssues;  // 0x38 (0x38)
	uint8_t ReturnValue;  // 0x39 (0x39)
	char pad_58[6];  // 0x3A (0x3A)


}; 
 
 // ScriptStruct EnhancedInput.InputActionInstance
struct FInputActionInstance
{
	struct UInputAction* SourceAction;  // 0x0 (0x0)
	char pad_8[11];  // 0x8 (0x8)
	uint8_t TriggerEvent;  // 0x13 (0x13)
	float LastTriggeredWorldTime;  // 0x14 (0x14)
	struct TArray<struct UInputTrigger*> Triggers;  // 0x18 (0x18)
	struct TArray<struct UInputModifier*> Modifiers;  // 0x28 (0x28)
	char pad_56[32];  // 0x38 (0x38)
	float ElapsedProcessedTime;  // 0x58 (0x58)
	float ElapsedTriggeredTime;  // 0x5C (0x5C)


}; 
 
 // Function EnhancedInput.PlayerMappableInputConfig.GetMetadata
struct FGetMetadata
{
	struct UObject* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappedKey
struct FRemovePlayerMappedKey
{
	struct FName MappingName;  // 0x0 (0x0)
	struct FModifyContextOptions Options;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	int32_t ReturnValue;  // 0xC (0xC)


}; 
 
 // Function EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
struct FGetContextRedirect
{
	struct UInputMappingContext* InContext;  // 0x0 (0x0)
	struct UInputMappingContext* ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
struct FBlueprintInputDebugKeyDelegateBinding
{
	struct FInputChord InputChord;  // 0x0 (0x0)
	enum class EInputEvent InputKeyEvent;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	struct FName FunctionNameToBind;  // 0x24 (0x24)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool bExecuteWhenPaused : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)


}; 
 
 // ScriptStruct EnhancedInput.InputComboStepData
struct FInputComboStepData
{
	struct UInputAction* ComboStepAction;  // 0x0 (0x0)
	float TimeToPressKey;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
struct FBreakInputActionValue
{
	struct FInputActionValue InActionValue;  // 0x0 (0x0)
	double X;  // 0x20 (0x20)
	double Y;  // 0x28 (0x28)
	double Z;  // 0x30 (0x30)
	uint8_t Type;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
struct FRequestRebuildControlMappingsUsingContext
{
	struct UInputMappingContext* Context;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bForceImmediately : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
struct FConv_InputActionValueToAxis1D
{
	struct FInputActionValue InValue;  // 0x0 (0x0)
	double ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
struct FConv_InputActionValueToAxis2D
{
	struct FInputActionValue InValue;  // 0x0 (0x0)
	struct FVector2D ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
struct FConv_InputActionValueToAxis3D
{
	struct FInputActionValue ActionValue;  // 0x0 (0x0)
	struct FVector ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function EnhancedInput.InputModifier.ModifyRaw
struct FModifyRaw
{
	struct UEnhancedPlayerInput* PlayerInput;  // 0x0 (0x0)
	struct FInputActionValue CurrentValue;  // 0x8 (0x8)
	float DeltaTime;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct FInputActionValue ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString
struct FConv_InputActionValueToString
{
	struct FInputActionValue ActionValue;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
struct FMakeInputActionValue
{
	double X;  // 0x0 (0x0)
	double Y;  // 0x8 (0x8)
	double Z;  // 0x10 (0x10)
	struct FInputActionValue MatchValueType;  // 0x18 (0x18)
	struct FInputActionValue ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
struct FAddMappingContext
{
	struct UInputMappingContext* MappingContext;  // 0x0 (0x0)
	int32_t Priority;  // 0x8 (0x8)
	struct FModifyContextOptions Options;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function EnhancedInput.InputTrigger.GetTriggerType
struct FGetTriggerType
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig
struct FAddPlayerMappableConfig
{
	struct UPlayerMappableInputConfig* Config;  // 0x0 (0x0)
	struct FModifyContextOptions Options;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.GetPlayerMappedKey
struct FGetPlayerMappedKey
{
	struct FName MappingName;  // 0x0 (0x0)
	struct FKey ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function EnhancedInput.InputTrigger.IsActuated
struct FIsActuated
{
	struct FInputActionValue ForValue;  // 0x0 (0x0)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
struct FHasMappingContext
{
	struct UInputMappingContext* MappingContext;  // 0x0 (0x0)
	int32_t OutFoundPriority;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction
struct FInjectInputForAction
{
	struct UInputAction* Action;  // 0x0 (0x0)
	struct FInputActionValue RawValue;  // 0x8 (0x8)
	struct TArray<struct UInputModifier*> Modifiers;  // 0x28 (0x28)
	struct TArray<struct UInputTrigger*> Triggers;  // 0x38 (0x38)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig
struct FRemovePlayerMappableConfig
{
	struct UPlayerMappableInputConfig* Config;  // 0x0 (0x0)
	struct FModifyContextOptions Options;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction
struct FInjectInputVectorForAction
{
	struct UInputAction* Action;  // 0x0 (0x0)
	struct FVector Value;  // 0x8 (0x8)
	struct TArray<struct UInputModifier*> Modifiers;  // 0x20 (0x20)
	struct TArray<struct UInputTrigger*> Triggers;  // 0x30 (0x30)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
struct FQueryKeysMappedToAction
{
	struct UInputAction* Action;  // 0x0 (0x0)
	struct TArray<struct FKey> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
struct FRemoveAllPlayerMappedKeys
{
	struct FModifyContextOptions Options;  // 0x0 (0x0)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
struct FRemoveMappingContext
{
	struct UInputMappingContext* MappingContext;  // 0x0 (0x0)
	struct FModifyContextOptions Options;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
struct FRequestRebuildControlMappings
{
	struct FModifyContextOptions Options;  // 0x0 (0x0)
	uint8_t RebuildType;  // 0x1 (0x1)


}; 
 
 // Function EnhancedInput.InputMappingContext.MapKey
struct FMapKey
{
	struct UInputAction* Action;  // 0x0 (0x0)
	struct FKey ToKey;  // 0x8 (0x8)
	struct FEnhancedActionKeyMapping ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function EnhancedInput.InputMappingContext.UnmapAction
struct FUnmapAction
{
	struct UInputAction* Action;  // 0x0 (0x0)


}; 
 
 // Function EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
struct FUnmapAllKeysFromAction
{
	struct UInputAction* Action;  // 0x0 (0x0)


}; 
 
 // Function EnhancedInput.InputMappingContext.UnmapKey
struct FUnmapKey
{
	struct UInputAction* Action;  // 0x0 (0x0)
	struct FKey Key;  // 0x8 (0x8)


}; 
 
 // Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
struct FGetPlayerMappableKeys
{
	struct TArray<struct FEnhancedActionKeyMapping> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function EnhancedInput.InputModifier.GetVisualizationColor
struct FGetVisualizationColor
{
	struct FInputActionValue SampleValue;  // 0x0 (0x0)
	struct FInputActionValue FinalValue;  // 0x20 (0x20)
	struct FLinearColor ReturnValue;  // 0x40 (0x40)


}; 
 
 // Function EnhancedInput.InputTrigger.UpdateState
struct FUpdateState
{
	struct UEnhancedPlayerInput* PlayerInput;  // 0x0 (0x0)
	struct FInputActionValue ModifiedValue;  // 0x8 (0x8)
	float DeltaTime;  // 0x28 (0x28)
	uint8_t ReturnValue;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)


}; 
 
 // Function EnhancedInput.PlayerMappableInputConfig.GetConfigName
struct FGetConfigName
{
	struct FName ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
struct FGetKeysBoundToAction
{
	struct UInputAction* InAction;  // 0x0 (0x0)
	struct TArray<struct FEnhancedActionKeyMapping> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName
struct FGetMappingByName
{
	struct FName MappingName;  // 0x0 (0x0)
	struct FEnhancedActionKeyMapping ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
struct FGetMappingContexts
{
	struct TMap<struct UInputMappingContext*, int32_t> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated
struct FIsDeprecated
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 
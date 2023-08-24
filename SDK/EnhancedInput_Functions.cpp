#include "pch.h"
#include "SDK.h"

struct FInputActionValue UEnhancedInputComponent::GetBoundActionValue(struct UInputAction* Action){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue");

	FGetBoundActionValue parms{};	
	parms.Action = Action;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext(struct UInputMappingContext* Context, bool bForceImmediately){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext");

	FRequestRebuildControlMappingsUsingContext parms{};	
	parms.Context = Context;
	parms.bForceImmediately = bForceImmediately;

	ProcessEvent(fn, &parms);
}

struct FInputActionValue UEnhancedInputLibrary::MakeInputActionValueOfType(double X, double Y, double Z, uint8_t ValueType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType");

	FMakeInputActionValueOfType parms{};	
	parms.X = X;
	parms.Y = Y;
	parms.Z = Z;
	parms.ValueType = ValueType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FInputActionValue UEnhancedInputLibrary::MakeInputActionValue(double X, double Y, double Z, struct FInputActionValue& MatchValueType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue");

	FMakeInputActionValue parms{};	
	parms.X = X;
	parms.Y = Y;
	parms.Z = Z;
	parms.MatchValueType = MatchValueType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FInputActionValue UEnhancedInputLibrary::GetBoundActionValue(struct AActor* Actor, struct UInputAction* Action){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue");

	FGetBoundActionValue parms{};	
	parms.Actor = Actor;
	parms.Action = Action;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UEnhancedInputLibrary::Conv_InputActionValueToString(struct FInputActionValue ActionValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString");

	FConv_InputActionValueToString parms{};	
	parms.ActionValue = ActionValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UEnhancedInputLibrary::Conv_InputActionValueToBool(struct FInputActionValue InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool");

	FConv_InputActionValueToBool parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UEnhancedInputLibrary::Conv_InputActionValueToAxis3D(struct FInputActionValue ActionValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D");

	FConv_InputActionValueToAxis3D parms{};	
	parms.ActionValue = ActionValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UEnhancedInputLibrary::Conv_InputActionValueToAxis2D(struct FInputActionValue InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D");

	FConv_InputActionValueToAxis2D parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

double UEnhancedInputLibrary::Conv_InputActionValueToAxis1D(struct FInputActionValue InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D");

	FConv_InputActionValueToAxis1D parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UEnhancedInputLibrary::BreakInputActionValue(struct FInputActionValue InActionValue, double& X, double& Y, double& Z, uint8_t& Type){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue");

	FBreakInputActionValue parms{};	
	parms.InActionValue = InActionValue;
	parms.X = X;
	parms.Y = Y;
	parms.Z = Z;
	parms.Type = Type;

	ProcessEvent(fn, &parms);
}

struct UInputMappingContext* UEnhancedInputPlatformData::GetContextRedirect(struct UInputMappingContext* InContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputPlatformData.GetContextRedirect");

	FGetContextRedirect parms{};	
	parms.InContext = InContext;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPlayerMappableInputConfig::ResetToDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.ResetToDefault");

	FResetToDefault parms{};	

	ProcessEvent(fn, &parms);
}

bool UPlayerMappableInputConfig::IsDeprecated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated");

	FIsDeprecated parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetPlayerMappableKeys(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys");

	FGetPlayerMappableKeys parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UPlayerMappableInputConfig::GetMetadata(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.GetMetadata");

	FGetMetadata parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct UInputMappingContext*, int32_t> UPlayerMappableInputConfig::GetMappingContexts(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts");

	FGetMappingContexts parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEnhancedActionKeyMapping UPlayerMappableInputConfig::GetMappingByName(struct FName MappingName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName");

	FGetMappingByName parms{};	
	parms.MappingName = MappingName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetKeysBoundToAction(struct UInputAction* InAction){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction");

	FGetKeysBoundToAction parms{};	
	parms.InAction = InAction;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UPlayerMappableInputConfig::GetDisplayName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName");

	FGetDisplayName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UPlayerMappableInputConfig::GetConfigName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.GetConfigName");

	FGetConfigName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UInputMappingContext::UnmapKey(struct UInputAction* Action, struct FKey Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.InputMappingContext.UnmapKey");

	FUnmapKey parms{};	
	parms.Action = Action;
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

void UInputMappingContext::UnmapAllKeysFromAction(struct UInputAction* Action){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.InputMappingContext.UnmapAllKeysFromAction");

	FUnmapAllKeysFromAction parms{};	
	parms.Action = Action;

	ProcessEvent(fn, &parms);
}

void UInputMappingContext::UnmapAll(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.InputMappingContext.UnmapAll");

	FUnmapAll parms{};	

	ProcessEvent(fn, &parms);
}

void UInputMappingContext::UnmapAction(struct UInputAction* Action){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.InputMappingContext.UnmapAction");

	FUnmapAction parms{};	
	parms.Action = Action;

	ProcessEvent(fn, &parms);
}

struct FEnhancedActionKeyMapping UInputMappingContext::MapKey(struct UInputAction* Action, struct FKey ToKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.InputMappingContext.MapKey");

	FMapKey parms{};	
	parms.Action = Action;
	parms.ToKey = ToKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UEnhancedInputSubsystemInterface::RequestRebuildControlMappings(struct FModifyContextOptions& Options, uint8_t RebuildType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings");

	FRequestRebuildControlMappings parms{};	
	parms.Options = Options;
	parms.RebuildType = RebuildType;

	ProcessEvent(fn, &parms);
}

int32_t UEnhancedInputSubsystemInterface::RemovePlayerMappedKey(struct FName MappingName, struct FModifyContextOptions& Options){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappedKey");

	FRemovePlayerMappedKey parms{};	
	parms.MappingName = MappingName;
	parms.Options = Options;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UEnhancedInputSubsystemInterface::RemovePlayerMappableConfig(struct UPlayerMappableInputConfig* Config, struct FModifyContextOptions& Options){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig");

	FRemovePlayerMappableConfig parms{};	
	parms.Config = Config;
	parms.Options = Options;

	ProcessEvent(fn, &parms);
}

void UEnhancedInputSubsystemInterface::RemoveMappingContext(struct UInputMappingContext* MappingContext, struct FModifyContextOptions& Options){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext");

	FRemoveMappingContext parms{};	
	parms.MappingContext = MappingContext;
	parms.Options = Options;

	ProcessEvent(fn, &parms);
}

void UEnhancedInputSubsystemInterface::RemoveAllPlayerMappedKeys(struct FModifyContextOptions& Options){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys");

	FRemoveAllPlayerMappedKeys parms{};	
	parms.Options = Options;

	ProcessEvent(fn, &parms);
}

uint8_t UEnhancedInputSubsystemInterface::QueryMapKeyInContextSet(struct TArray<struct UInputMappingContext*>& PrioritizedActiveContexts, struct UInputMappingContext* InputContext, struct UInputAction* Action, struct FKey Key, struct TArray<struct FMappingQueryIssue>& OutIssues, uint8_t BlockingIssues){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet");

	FQueryMapKeyInContextSet parms{};	
	parms.PrioritizedActiveContexts = PrioritizedActiveContexts;
	parms.InputContext = InputContext;
	parms.Action = Action;
	parms.Key = Key;
	parms.OutIssues = OutIssues;
	parms.BlockingIssues = BlockingIssues;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UEnhancedInputSubsystemInterface::QueryMapKeyInActiveContextSet(struct UInputMappingContext* InputContext, struct UInputAction* Action, struct FKey Key, struct TArray<struct FMappingQueryIssue>& OutIssues, uint8_t BlockingIssues){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet");

	FQueryMapKeyInActiveContextSet parms{};	
	parms.InputContext = InputContext;
	parms.Action = Action;
	parms.Key = Key;
	parms.OutIssues = OutIssues;
	parms.BlockingIssues = BlockingIssues;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FKey> UEnhancedInputSubsystemInterface::QueryKeysMappedToAction(struct UInputAction* Action){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction");

	FQueryKeysMappedToAction parms{};	
	parms.Action = Action;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UEnhancedInputSubsystemInterface::InjectInputVectorForAction(struct UInputAction* Action, struct FVector Value, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction");

	FInjectInputVectorForAction parms{};	
	parms.Action = Action;
	parms.Value = Value;
	parms.Modifiers = Modifiers;
	parms.Triggers = Triggers;

	ProcessEvent(fn, &parms);
}

void UEnhancedInputSubsystemInterface::InjectInputForAction(struct UInputAction* Action, struct FInputActionValue RawValue, struct TArray<struct UInputModifier*>& Modifiers, struct TArray<struct UInputTrigger*>& Triggers){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction");

	FInjectInputForAction parms{};	
	parms.Action = Action;
	parms.RawValue = RawValue;
	parms.Modifiers = Modifiers;
	parms.Triggers = Triggers;

	ProcessEvent(fn, &parms);
}

bool UEnhancedInputSubsystemInterface::HasMappingContext(struct UInputMappingContext* MappingContext, int32_t& OutFoundPriority){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext");

	FHasMappingContext parms{};	
	parms.MappingContext = MappingContext;
	parms.OutFoundPriority = OutFoundPriority;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FKey UEnhancedInputSubsystemInterface::GetPlayerMappedKey(struct FName MappingName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.GetPlayerMappedKey");

	FGetPlayerMappedKey parms{};	
	parms.MappingName = MappingName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FEnhancedActionKeyMapping> UEnhancedInputSubsystemInterface::GetAllPlayerMappableActionKeyMappings(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings");

	FGetAllPlayerMappableActionKeyMappings parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UEnhancedInputSubsystemInterface::ClearAllMappings(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings");

	FClearAllMappings parms{};	

	ProcessEvent(fn, &parms);
}

int32_t UEnhancedInputSubsystemInterface::AddPlayerMappedKey(struct FName MappingName, struct FKey NewKey, struct FModifyContextOptions& Options){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappedKey");

	FAddPlayerMappedKey parms{};	
	parms.MappingName = MappingName;
	parms.NewKey = NewKey;
	parms.Options = Options;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UEnhancedInputSubsystemInterface::AddPlayerMappableConfig(struct UPlayerMappableInputConfig* Config, struct FModifyContextOptions& Options){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig");

	FAddPlayerMappableConfig parms{};	
	parms.Config = Config;
	parms.Options = Options;

	ProcessEvent(fn, &parms);
}

void UEnhancedInputSubsystemInterface::AddMappingContext(struct UInputMappingContext* MappingContext, int32_t Priority, struct FModifyContextOptions& Options){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext");

	FAddMappingContext parms{};	
	parms.MappingContext = MappingContext;
	parms.Priority = Priority;
	parms.Options = Options;

	ProcessEvent(fn, &parms);
}

struct FInputActionValue UInputModifier::ModifyRaw(struct UEnhancedPlayerInput* PlayerInput, struct FInputActionValue CurrentValue, float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.InputModifier.ModifyRaw");

	FModifyRaw parms{};	
	parms.PlayerInput = PlayerInput;
	parms.CurrentValue = CurrentValue;
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FLinearColor UInputModifier::GetVisualizationColor(struct FInputActionValue SampleValue, struct FInputActionValue FinalValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.InputModifier.GetVisualizationColor");

	FGetVisualizationColor parms{};	
	parms.SampleValue = SampleValue;
	parms.FinalValue = FinalValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UInputTrigger::UpdateState(struct UEnhancedPlayerInput* PlayerInput, struct FInputActionValue ModifiedValue, float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.InputTrigger.UpdateState");

	FUpdateState parms{};	
	parms.PlayerInput = PlayerInput;
	parms.ModifiedValue = ModifiedValue;
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UInputTrigger::IsActuated(struct FInputActionValue& ForValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.InputTrigger.IsActuated");

	FIsActuated parms{};	
	parms.ForValue = ForValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UInputTrigger::GetTriggerType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EnhancedInput.InputTrigger.GetTriggerType");

	FGetTriggerType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


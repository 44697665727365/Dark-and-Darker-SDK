#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// DelegateFunction AIModule.AIMoveCompletedSignature__DelegateSignature
struct FAIMoveCompletedSignature__DelegateSignature
{
	struct FAIRequestID RequestID;  // 0x0 (0x0)
	enum class EPathFollowingResult Result;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // ScriptStruct AIModule.ActorPerceptionUpdateInfo
struct FActorPerceptionUpdateInfo
{
	int32_t TargetId;  // 0x0 (0x0)
	struct TWeakObjectPtr<AActor> Target;  // 0x4 (0x4)
	char pad_12[4];  // 0xC (0xC)
	struct FAIStimulus Stimulus;  // 0x10 (0x10)


}; 
 
 // Function AIModule.BlackboardComponent.SetValueAsBool
struct FSetValueAsBool
{
	struct FName KeyName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool BoolValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // DelegateFunction AIModule.ActorPerceptionUpdatedDelegate__DelegateSignature
struct FActorPerceptionUpdatedDelegate__DelegateSignature
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct FAIStimulus Stimulus;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
struct FReceiveActivationAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 // Function AIModule.PawnActionsComponent.K2_PerformAction
struct FK2_PerformAction
{
	struct APawn* Pawn;  // 0x0 (0x0)
	struct UPawnAction* Action;  // 0x8 (0x8)
	enum class EAIRequestPriority Priority;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool ReturnValue : 1;  // 0x11 (0x11)
	char pad_18[6];  // 0x12 (0x12)


}; 
 
 // DelegateFunction AIModule.ActorPerceptionInfoUpdatedDelegate__DelegateSignature
struct FActorPerceptionInfoUpdatedDelegate__DelegateSignature
{
	struct FActorPerceptionUpdateInfo UpdateInfo;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
struct FReceiveExecuteAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AIModule.AIStimulus
struct FAIStimulus
{
	float Age;  // 0x0 (0x0)
	float ExpirationAge;  // 0x4 (0x4)
	float Strength;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FVector StimulusLocation;  // 0x10 (0x10)
	struct FVector ReceiverLocation;  // 0x28 (0x28)
	struct FName Tag;  // 0x40 (0x40)
	char pad_72[12];  // 0x48 (0x48)
	char pad_84_1 : 1;  // 0x54 (0x54)
	char bSuccessfullySensed : 1;  // 0x54 (0x54)
	char pad_84_2 : 6;  // 0x54 (0x54)
	char pad_85[4];  // 0x55 (0x55)


}; 
 
 // ScriptStruct AIModule.AISenseAffiliationFilter
struct FAISenseAffiliationFilter
{
	char bDetectEnemies : 1;  // 0x0 (0x0)
	char bDetectNeutrals : 1;  // 0x0 (0x0)
	char bDetectFriendlies : 1;  // 0x0 (0x0)
	char pad_0_1 : 5;  // 0x0 (0x0)
	char pad_1[4];  // 0x1 (0x1)


}; 
 
 // Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
struct FSetNamedParam
{
	struct FName ParamName;  // 0x0 (0x0)
	float Value;  // 0x8 (0x8)


}; 
 
 // DelegateFunction AIModule.MoveTaskCompletedSignature__DelegateSignature
struct FMoveTaskCompletedSignature__DelegateSignature
{
	enum class EPathFollowingResult Result;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct AAIController* AIController;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AIModule.AIRequestID
struct FAIRequestID
{
	uint32_t RequestID;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AIModule.AITouchEvent
struct FAITouchEvent
{
	char pad_0[24];  // 0x0 (0x0)
	struct AActor* TouchReceiver;  // 0x18 (0x18)
	struct AActor* OtherActor;  // 0x20 (0x20)


}; 
 
 // ScriptStruct AIModule.AIPredictionEvent
struct FAIPredictionEvent
{
	struct AActor* Requestor;  // 0x0 (0x0)
	struct AActor* PredictedActor;  // 0x8 (0x8)
	char pad_16[8];  // 0x10 (0x10)


}; 
 
 // ScriptStruct AIModule.BTDecoratorLogic
struct FBTDecoratorLogic
{
	enum class EBTDecoratorLogic Operation;  // 0x0 (0x0)
	char pad_1[1];  // 0x1 (0x1)
	uint16_t Number;  // 0x2 (0x2)


}; 
 
 // DelegateFunction AIModule.OAISimpleDelegate__DelegateSignature
struct FOAISimpleDelegate__DelegateSignature
{
	enum class EPathFollowingResult MovementResult;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AIModule.PerceptionUpdatedDelegate__DelegateSignature
struct FPerceptionUpdatedDelegate__DelegateSignature
{
	struct TArray<struct AActor*> UpdatedActors;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BrainComponent.IsPaused
struct FIsPaused
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AIModule.IntervalCountdown
struct FIntervalCountdown
{
	float Interval;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)


}; 
 
 // DelegateFunction AIModule.SmartLinkReachedSignature__DelegateSignature
struct FSmartLinkReachedSignature__DelegateSignature
{
	struct AActor* MovingActor;  // 0x0 (0x0)
	struct FVector DestinationPoint;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AIModule.EnvQueryInstanceCache
struct FEnvQueryInstanceCache
{
	struct UEnvQuery* Template;  // 0x0 (0x0)
	char pad_8[368];  // 0x8 (0x8)


}; 
 
 // DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
struct FEQSQueryDoneSignature__DelegateSignature
{
	struct UEnvQueryInstanceBlueprintWrapper* QueryInstance;  // 0x0 (0x0)
	enum class EEnvQueryStatus QueryStatus;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
struct FIsDecoratorObserverActive
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AIModule.AIDataProviderIntValue
// Size: 0x38(Inherited: 0x30)
struct FAIDataProviderIntValue : FAIDataProviderTypedValue
{
	int32_t DefaultValue;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
struct FSetPeripheralVisionAngle
{
	float NewPeripheralVisionAngle;  // 0x0 (0x0)


}; 
 
 // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
struct FGetItemScore
{
	int32_t ItemIndex;  // 0x0 (0x0)
	float ReturnValue;  // 0x4 (0x4)


}; 
 
 // ScriptStruct AIModule.AIDataProviderFloatValue
// Size: 0x38(Inherited: 0x30)
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue
{
	float DefaultValue;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
struct FGetQueryResultsAsActors
{
	struct TArray<struct AActor*> ResultActors;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
struct FEQSParametrizedQueryExecutionRequest
{
	struct UEnvQuery* QueryTemplate;  // 0x0 (0x0)
	struct TArray<struct FAIDynamicParam> QueryConfig;  // 0x8 (0x8)
	struct FBlackboardKeySelector EQSQueryBlackboardKey;  // 0x18 (0x18)
	enum class EEnvQueryRunMode RunMode;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	char bUseBBKeyForQueryTemplate : 1;  // 0x44 (0x44)
	char pad_68_1 : 7;  // 0x44 (0x44)
	char pad_69[4];  // 0x45 (0x45)


}; 
 
 // Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGenerationFromActors
struct FDoItemGenerationFromActors
{
	struct TArray<struct AActor*> ContextActors;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AIModule.IndexedHandleBase
// Size: 0x8(Inherited: 0x4)
struct FIndexedHandleBase : FSimpleIndexedHandleBase
{
	char pad_4[4];  // 0x4 (0x4)


}; 
 
 // Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
struct FSuspendCrowdSteering
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bSuspend : 1;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
struct FGetBlackboardValueAsBool
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // ScriptStruct AIModule.SimpleIndexedHandleBase
struct FSimpleIndexedHandleBase
{
	char pad_0[4];  // 0x0 (0x0)


}; 
 
 // Function AIModule.BlackboardComponent.SetValueAsObject
struct FSetValueAsObject
{
	struct FName KeyName;  // 0x0 (0x0)
	struct UObject* ObjectValue;  // 0x8 (0x8)


}; 
 
 // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
struct FHearNoiseDelegate__DelegateSignature
{
	struct APawn* Instigator;  // 0x0 (0x0)
	struct FVector Location;  // 0x8 (0x8)
	float Volume;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
struct FGetQueryResultsAsLocations
{
	struct TArray<struct FVector> ResultLocations;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct AIModule.AINoiseEvent
struct FAINoiseEvent
{
	char pad_0[8];  // 0x0 (0x0)
	struct FVector NoiseLocation;  // 0x8 (0x8)
	float Loudness;  // 0x20 (0x20)
	float MaxRange;  // 0x24 (0x24)
	struct AActor* Instigator;  // 0x28 (0x28)
	struct FName Tag;  // 0x30 (0x30)
	char pad_56[8];  // 0x38 (0x38)


}; 
 
 // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
struct FGetResultsAsActors
{
	struct TArray<struct AActor*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AIModule.NavLinkProxy.SetSmartLinkEnabled
struct FSetSmartLinkEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AIModule.EnvQueryManagerConfig
struct FEnvQueryManagerConfig
{
	float MaxAllowedTestingTime;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bTestQueriesUsingBreadth : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	int32_t QueryCountWarningThreshold;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	double QueryCountWarningInterval;  // 0x10 (0x10)
	double ExecutionTimeWarningSeconds;  // 0x18 (0x18)
	double HandlingResultTimeWarningSeconds;  // 0x20 (0x20)
	double GenerationTimeWarningSeconds;  // 0x28 (0x28)


}; 
 
 // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
struct FGetResultsAsLocations
{
	struct TArray<struct FVector> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
struct FGetPeripheralVisionAngle
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AIModule.BTCompositeChild
struct FBTCompositeChild
{
	struct UBTCompositeNode* ChildComposite;  // 0x0 (0x0)
	struct UBTTaskNode* ChildTask;  // 0x8 (0x8)
	struct TArray<struct UBTDecorator*> Decorators;  // 0x10 (0x10)
	struct TArray<struct FBTDecoratorLogic> DecoratorOps;  // 0x20 (0x20)


}; 
 
 // Function AIModule.AIController.GetFocalPointOnActor
struct FGetFocalPointOnActor
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct FVector ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
struct FGetPeripheralVisionCosine
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
struct FSeePawnDelegate__DelegateSignature
{
	struct APawn* Pawn;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BlackboardComponent.IsVectorValueSet
struct FIsVectorValueSet
{
	struct FName KeyName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function AIModule.PawnSensingComponent.SetSensingInterval
struct FSetSensingInterval
{
	float NewSensingInterval;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AIModule.AIMoveRequest
struct FAIMoveRequest
{
	struct TWeakObjectPtr<AActor> GoalActor;  // 0x0 (0x0)
	char pad_8[64];  // 0x8 (0x8)


}; 
 
 // Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
struct FSetSensingUpdatesEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AIModule.SequentialIDBase
struct FSequentialIDBase
{
	uint32_t Value;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AIModule.EnvNamedValue
struct FEnvNamedValue
{
	struct FName ParamName;  // 0x0 (0x0)
	uint8_t ParamType;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float Value;  // 0xC (0xC)


}; 
 
 // ScriptStruct AIModule.AIDataProviderTypedValue
// Size: 0x30(Inherited: 0x20)
struct FAIDataProviderTypedValue : FAIDataProviderValue
{
	 PropertyType;  // 0x20 (0x20)
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 // ScriptStruct AIModule.EnvDirection
struct FEnvDirection
{
	UEnvQueryContext* LineFrom;  // 0x0 (0x0)
	UEnvQueryContext* LineTo;  // 0x8 (0x8)
	UEnvQueryContext* Rotation;  // 0x10 (0x10)
	enum class EEnvDirection DirMode;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function AIModule.AIController.OnUsingBlackBoard
struct FOnUsingBlackBoard
{
	struct UBlackboardComponent* BlackboardComp;  // 0x0 (0x0)
	struct UBlackboardData* BlackboardAsset;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AIModule.EnvTraceData
struct FEnvTraceData
{
	int32_t VersionNum;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	UNavigationQueryFilter* NavigationFilter;  // 0x8 (0x8)
	float ProjectDown;  // 0x10 (0x10)
	float ProjectUp;  // 0x14 (0x14)
	float ExtentX;  // 0x18 (0x18)
	float ExtentY;  // 0x1C (0x1C)
	float ExtentZ;  // 0x20 (0x20)
	float PostProjectionVerticalOffset;  // 0x24 (0x24)
	enum class ETraceTypeQuery TraceChannel;  // 0x28 (0x28)
	enum class ECollisionChannel SerializedChannel;  // 0x29 (0x29)
	char pad_42[2];  // 0x2A (0x2A)
	struct FName TraceProfileName;  // 0x2C (0x2C)
	enum class EEnvTraceShape TraceShape;  // 0x34 (0x34)
	enum class EEnvQueryTrace TraceMode;  // 0x35 (0x35)
	char pad_54[2];  // 0x36 (0x36)
	char bTraceComplex : 1;  // 0x38 (0x38)
	char bOnlyBlockingHits : 1;  // 0x38 (0x38)
	char bCanTraceOnNavMesh : 1;  // 0x38 (0x38)
	char bCanTraceOnGeometry : 1;  // 0x38 (0x38)
	char bCanDisableTrace : 1;  // 0x38 (0x38)
	char bCanProjectDown : 1;  // 0x38 (0x38)
	char pad_56_1 : 2;  // 0x38 (0x38)
	char pad_57[8];  // 0x39 (0x39)


}; 
 
 // ScriptStruct AIModule.EnvOverlapData
struct FEnvOverlapData
{
	float ExtentX;  // 0x0 (0x0)
	float ExtentY;  // 0x4 (0x4)
	float ExtentZ;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FVector ShapeOffset;  // 0x10 (0x10)
	enum class ECollisionChannel OverlapChannel;  // 0x28 (0x28)
	enum class EEnvOverlapShape OverlapShape;  // 0x29 (0x29)
	char pad_42[2];  // 0x2A (0x2A)
	char bOnlyBlockingHits : 1;  // 0x2C (0x2C)
	char bOverlapComplex : 1;  // 0x2C (0x2C)
	char bSkipOverlapQuerier : 1;  // 0x2C (0x2C)
	char pad_44_1 : 5;  // 0x2C (0x2C)
	char pad_45[4];  // 0x2D (0x2D)


}; 
 
 // Function AIModule.BrainComponent.StopLogic
struct FStopLogic
{
	struct FString Reason;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AIModule.EnvQueryResult
struct FEnvQueryResult
{
	char pad_0[16];  // 0x0 (0x0)
	UEnvQueryItemType* ItemType;  // 0x10 (0x10)
	char pad_24[20];  // 0x18 (0x18)
	int32_t OptionIndex;  // 0x2C (0x2C)
	int32_t QueryID;  // 0x30 (0x30)
	char pad_52[12];  // 0x34 (0x34)


}; 
 
 // ScriptStruct AIModule.AIDynamicParam
struct FAIDynamicParam
{
	struct FName ParamName;  // 0x0 (0x0)
	uint8_t ParamType;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float Value;  // 0xC (0xC)
	struct FBlackboardKeySelector BBKey;  // 0x10 (0x10)


}; 
 
 // ScriptStruct AIModule.BlackboardKeySelector
struct FBlackboardKeySelector
{
	struct TArray<struct UBlackboardKeyType*> AllowedTypes;  // 0x0 (0x0)
	struct FName SelectedKeyName;  // 0x10 (0x10)
	UBlackboardKeyType* SelectedKeyType;  // 0x18 (0x18)
	char SelectedKeyID;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	char bNoneIsAllowedValue : 1;  // 0x24 (0x24)
	char pad_36_1 : 7;  // 0x24 (0x24)
	char pad_37[4];  // 0x25 (0x25)


}; 
 
 // ScriptStruct AIModule.GenericTeamId
struct FGenericTeamId
{
	char TeamID;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AIModule.CompactIndexedHandleBase
struct FCompactIndexedHandleBase
{
	char pad_0[4];  // 0x0 (0x0)


}; 
 
 // ScriptStruct AIModule.PawnActionStack
struct FPawnActionStack
{
	struct UPawnAction* TopAction;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
struct FSetBlackboardValueAsBool
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool Value : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // ScriptStruct AIModule.PawnActionEvent
struct FPawnActionEvent
{
	struct UPawnAction* Action;  // 0x0 (0x0)
	char pad_8[16];  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
struct FSetFinishOnMessageWithId
{
	struct FName MessageName;  // 0x0 (0x0)
	int32_t RequestID;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AIModule.BehaviorTreeTemplateInfo
struct FBehaviorTreeTemplateInfo
{
	struct UBehaviorTree* Asset;  // 0x0 (0x0)
	struct UBTCompositeNode* Template;  // 0x8 (0x8)
	char pad_16[8];  // 0x10 (0x10)


}; 
 
 // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
struct FReceiveSearchStartAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AIModule.BlackboardEntry
struct FBlackboardEntry
{
	struct FName EntryName;  // 0x0 (0x0)
	struct UBlackboardKeyType* KeyType;  // 0x8 (0x8)
	char bInstanceSynced : 1;  // 0x10 (0x10)
	char pad_16_1 : 7;  // 0x10 (0x10)
	char pad_17[8];  // 0x11 (0x11)


}; 
 
 // Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
struct FRegisterPerceptionStimuliSource
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	UAISense* Sense;  // 0x8 (0x8)
	struct AActor* Target;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function AIModule.BlackboardComponent.GetRotationFromEntry
struct FGetRotationFromEntry
{
	struct FName KeyName;  // 0x0 (0x0)
	struct FRotator ResultRotation;  // 0x8 (0x8)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // ScriptStruct AIModule.AIDataProviderValue
struct FAIDataProviderValue
{
	char pad_0[16];  // 0x0 (0x0)
	struct UAIDataProvider* DataBinding;  // 0x10 (0x10)
	struct FName DataField;  // 0x18 (0x18)


}; 
 
 // ScriptStruct AIModule.AIDataProviderStructValue
// Size: 0x30(Inherited: 0x20)
struct FAIDataProviderStructValue : FAIDataProviderValue
{
	char pad_32[16];  // 0x20 (0x20)


}; 
 
 // Function AIModule.PawnAction_BlueprintBase.ActionStart
struct FActionStart
{
	struct APawn* ControlledPawn;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AIModule.AIDataProviderBoolValue
// Size: 0x38(Inherited: 0x30)
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue
{
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool DefaultValue : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
struct FCrowdAvoidanceSamplingPattern
{
	struct TArray<float> Angles;  // 0x0 (0x0)
	struct TArray<float> Radii;  // 0x10 (0x10)


}; 
 
 // ScriptStruct AIModule.EnvQueryRequest
struct FEnvQueryRequest
{
	struct UEnvQuery* QueryTemplate;  // 0x0 (0x0)
	struct UObject* Owner;  // 0x8 (0x8)
	struct UWorld* World;  // 0x10 (0x10)
	char pad_24[80];  // 0x18 (0x18)


}; 
 
 // ScriptStruct AIModule.CrowdAvoidanceConfig
struct FCrowdAvoidanceConfig
{
	float VelocityBias;  // 0x0 (0x0)
	float DesiredVelocityWeight;  // 0x4 (0x4)
	float CurrentVelocityWeight;  // 0x8 (0x8)
	float SideBiasWeight;  // 0xC (0xC)
	float ImpactTimeWeight;  // 0x10 (0x10)
	float ImpactTimeRange;  // 0x14 (0x14)
	char CustomPatternIdx;  // 0x18 (0x18)
	char AdaptiveDivisions;  // 0x19 (0x19)
	char AdaptiveRings;  // 0x1A (0x1A)
	char AdaptiveDepth;  // 0x1B (0x1B)


}; 
 
 // ScriptStruct AIModule.RecastGraphWrapper
struct FRecastGraphWrapper
{
	struct ARecastNavMesh* RecastNavMeshActor;  // 0x0 (0x0)
	char pad_8[168];  // 0x8 (0x8)


}; 
 
 // ScriptStruct AIModule.ActorPerceptionBlueprintInfo
struct FActorPerceptionBlueprintInfo
{
	struct AActor* Target;  // 0x0 (0x0)
	struct TArray<struct FAIStimulus> LastSensedStimuli;  // 0x8 (0x8)
	char bIsHostile : 1;  // 0x18 (0x18)
	char pad_24_1 : 7;  // 0x18 (0x18)
	char pad_25[8];  // 0x19 (0x19)


}; 
 
 // ScriptStruct AIModule.AIDamageEvent
struct FAIDamageEvent
{
	float Amount;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector Location;  // 0x8 (0x8)
	struct FVector HitLocation;  // 0x20 (0x20)
	struct AActor* DamagedActor;  // 0x38 (0x38)
	struct AActor* Instigator;  // 0x40 (0x40)
	struct FName Tag;  // 0x48 (0x48)


}; 
 
 // Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
struct FFindLocalNavigationGridPath
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector Start;  // 0x8 (0x8)
	struct FVector End;  // 0x20 (0x20)
	struct TArray<struct FVector> PathPoints;  // 0x38 (0x38)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool ReturnValue : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
struct FGetCurrentPathPoints
{
	struct AController* Controller;  // 0x0 (0x0)
	struct TArray<struct FVector> ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AIModule.AISightEvent
struct FAISightEvent
{
	char pad_0[8];  // 0x0 (0x0)
	struct AActor* SeenActor;  // 0x8 (0x8)
	struct AActor* Observer;  // 0x10 (0x10)


}; 
 
 // Function AIModule.PawnAction.Finish
struct FFinish
{
	enum class EPawnActionResult WithResult;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AIModule.AITeamStimulusEvent
struct FAITeamStimulusEvent
{
	char pad_0[64];  // 0x0 (0x0)
	struct AActor* Broadcaster;  // 0x40 (0x40)
	struct AActor* Enemy;  // 0x48 (0x48)


}; 
 
 // Function AIModule.BTService_BlueprintBase.ReceiveTickAI
struct FReceiveTickAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	float DeltaSeconds;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AIModule.BTTask_BlueprintBase.FinishExecute
struct FFinishExecute
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bSuccess : 1;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTTask_BlueprintBase.IsTaskAborting
struct FIsTaskAborting
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIPerceptionComponent.SetSenseEnabled
struct FSetSenseEnabled
{
	UAISense* SenseClass;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bEnable : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
struct FIsTaskExecuting
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTTask_BlueprintBase.ReceiveAbort
struct FReceiveAbort
{
	struct AActor* OwnerActor;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
struct FReceiveAbortAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTTask_BlueprintBase.ReceiveExecute
struct FReceiveExecute
{
	struct AActor* OwnerActor;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTService_BlueprintBase.ReceiveTick
struct FReceiveTick
{
	struct AActor* OwnerActor;  // 0x0 (0x0)
	float DeltaSeconds;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
struct FSetFinishOnMessage
{
	struct FName MessageName;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIPerceptionComponent.GetActorsPerception
struct FGetActorsPerception
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct FActorPerceptionBlueprintInfo Info;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
struct FGetCurrentlyPerceivedActors
{
	UAISense* SenseToUse;  // 0x0 (0x0)
	struct TArray<struct AActor*> OutActors;  // 0x8 (0x8)


}; 
 
 // Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
struct FRequestControllerPredictionEvent
{
	struct AAIController* Requestor;  // 0x0 (0x0)
	struct AActor* PredictedActor;  // 0x8 (0x8)
	float PredictionTime;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
struct FGetKnownPerceivedActors
{
	UAISense* SenseToUse;  // 0x0 (0x0)
	struct TArray<struct AActor*> OutActors;  // 0x8 (0x8)


}; 
 
 // Function AIModule.AIPerceptionComponent.GetPerceivedActors
struct FGetPerceivedActors
{
	UAISense* SenseToUse;  // 0x0 (0x0)
	struct TArray<struct AActor*> OutActors;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
struct FSetBlackboardValueAsName
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	struct FName Value;  // 0x30 (0x30)


}; 
 
 // Function AIModule.PawnAction_BlueprintBase.ActionResume
struct FActionResume
{
	struct APawn* ControlledPawn;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
struct FGetPerceivedHostileActors
{
	struct TArray<struct AActor*> OutActors;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BlackboardComponent.SetValueAsEnum
struct FSetValueAsEnum
{
	struct FName KeyName;  // 0x0 (0x0)
	char EnumValue;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
struct FGetPerceivedHostileActorsBySense
{
	UAISense* SenseToUse;  // 0x0 (0x0)
	struct TArray<struct AActor*> OutActors;  // 0x8 (0x8)


}; 
 
 // Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
struct FGetQuerier
{
	struct UObject* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
struct FOnOwnerEndPlay
{
	struct AActor* Actor;  // 0x0 (0x0)
	enum class EEndPlayReason EndPlayReason;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function AIModule.AIController.ClaimTaskResource
struct FClaimTaskResource
{
	UGameplayTaskResource* ResourceClass;  // 0x0 (0x0)


}; 
 
 // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
struct FProvideSingleLocation
{
	struct UObject* QuerierObject;  // 0x0 (0x0)
	struct AActor* QuerierActor;  // 0x8 (0x8)
	struct FVector ResultingLocation;  // 0x10 (0x10)


}; 
 
 // Function AIModule.AIController.UseBlackboard
struct FUseBlackboard
{
	struct UBlackboardData* BlackboardAsset;  // 0x0 (0x0)
	struct UBlackboardComponent* BlackboardComponent;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AIModule.AIController.GetAIPerceptionComponent
struct FGetAIPerceptionComponent
{
	struct UAIPerceptionComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIController.GetFocalPoint
struct FGetFocalPoint
{
	struct FVector ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIController.GetFocusActor
struct FGetFocusActor
{
	struct AActor* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIController.GetImmediateMoveDestination
struct FGetImmediateMoveDestination
{
	struct FVector ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIController.GetMoveStatus
struct FGetMoveStatus
{
	enum class EPathFollowingStatus ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIController.GetPathFollowingComponent
struct FGetPathFollowingComponent
{
	struct UPathFollowingComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIController.HasPartialPath
struct FHasPartialPath
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIController.K2_SetFocalPoint
struct FK2_SetFocalPoint
{
	struct FVector FP;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIController.K2_SetFocus
struct FK2_SetFocus
{
	struct AActor* NewFocus;  // 0x0 (0x0)


}; 
 
 // Function AIModule.PathFollowingComponent.GetPathActionType
struct FGetPathActionType
{
	enum class EPathFollowingAction ReturnValue;  // 000541256] /Game/DungeonCrawler/Environment/Cave/Asset/Textures/t_PotteryTile_01_04_n (000541256] /Game/DungeonCrawler/Environment/Cave/Asset/Textures/t_PotteryTile_01_04_n)


}; 
 
 // Function AIModule.AIController.MoveToActor
struct FMoveToActor
{
	struct AActor* Goal;  // 0x0 (0x0)
	float AcceptanceRadius;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bStopOnOverlap : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bUsePathfinding : 1;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool bCanStrafe : 1;  // 0xE (0xE)
	char pad_15[1];  // 0xF (0xF)
	UNavigationQueryFilter* FilterClass;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bAllowPartialPath : 1;  // 0x18 (0x18)
	enum class EPathFollowingRequestResult ReturnValue;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // Function AIModule.AIController.MoveToLocation
struct FMoveToLocation
{
	struct FVector Dest;  // 0x0 (0x0)
	float AcceptanceRadius;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bStopOnOverlap : 1;  // 0x1C (0x1C)
	char pad_29_1 : 7;  // 0x1D (0x1D)
	bool bUsePathfinding : 1;  // 0x1D (0x1D)
	char pad_30_1 : 7;  // 0x1E (0x1E)
	bool bProjectDestinationToNavigation : 1;  // 0x1E (0x1E)
	char pad_31_1 : 7;  // 0x1F (0x1F)
	bool bCanStrafe : 1;  // 0x1F (0x1F)
	UNavigationQueryFilter* FilterClass;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bAllowPartialPath : 1;  // 0x28 (0x28)
	enum class EPathFollowingRequestResult ReturnValue;  // 0x29 (0x29)
	char pad_42[6];  // 0x2A (0x2A)


}; 
 
 // Function AIModule.AIController.OnGameplayTaskResourcesClaimed
struct FOnGameplayTaskResourcesClaimed
{
	struct FGameplayResourceSet NewlyClaimed;  // 0x0 (0x0)
	struct FGameplayResourceSet FreshlyReleased;  // 0x2 (0x2)


}; 
 
 // Function AIModule.AIController.RunBehaviorTree
struct FRunBehaviorTree
{
	struct UBehaviorTree* BTAsset;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function AIModule.AIController.SetMoveBlockDetection
struct FSetMoveBlockDetection
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnable : 1;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIController.SetPathFollowingComponent
struct FSetPathFollowingComponent
{
	struct UPathFollowingComponent* NewPFComponent;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
struct FRequestPawnPredictionEvent
{
	struct APawn* Requestor;  // 0x0 (0x0)
	struct AActor* PredictedActor;  // 0x8 (0x8)
	float PredictionTime;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AIModule.AIController.UnclaimTaskResource
struct FUnclaimTaskResource
{
	UGameplayTaskResource* ResourceClass;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
struct FOnMoveCompleted
{
	struct FAIRequestID RequestID;  // 0x0 (0x0)
	enum class EPathFollowingResult MovementResult;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function AIModule.PawnAction.CreateActionInstance
struct FCreateActionInstance
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	UPawnAction* ActionClass;  // 0x8 (0x8)
	struct UPawnAction* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AIModule.PawnAction.GetActionPriority
struct FGetActionPriority
{
	enum class EAIRequestPriority ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AIModule.PawnActionsComponent.K2_AbortAction
struct FK2_AbortAction
{
	struct UPawnAction* ActionToAbort;  // 0x0 (0x0)
	enum class EPawnActionAbortState ReturnValue;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function AIModule.BlackboardComponent.GetLocationFromEntry
struct FGetLocationFromEntry
{
	struct FName KeyName;  // 0x0 (0x0)
	struct FVector ResultLocation;  // 0x8 (0x8)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AIModule.PawnActionsComponent.K2_ForceAbortAction
struct FK2_ForceAbortAction
{
	struct UPawnAction* ActionToAbort;  // 0x0 (0x0)
	enum class EPawnActionAbortState ReturnValue;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function AIModule.PawnActionsComponent.K2_PushAction
struct FK2_PushAction
{
	struct UPawnAction* NewAction;  // 0x0 (0x0)
	enum class EAIRequestPriority Priority;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct UObject* Instigator;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function AIModule.PawnAction_BlueprintBase.ActionFinished
struct FActionFinished
{
	struct APawn* ControlledPawn;  // 0x0 (0x0)
	enum class EPawnActionResult WithResult;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function AIModule.PawnAction_BlueprintBase.ActionPause
struct FActionPause
{
	struct APawn* ControlledPawn;  // 0x0 (0x0)


}; 
 
 // Function AIModule.PawnAction_BlueprintBase.ActionTick
struct FActionTick
{
	struct APawn* ControlledPawn;  // 0x0 (0x0)
	float DeltaSeconds;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AIModule.BrainComponent.IsRunning
struct FIsRunning
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
struct FAddCooldownTagDuration
{
	struct FGameplayTag CooldownTag;  // 0x0 (0x0)
	float CooldownDuration;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bAddToExistingDuration : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
struct FGetTagCooldownEndTime
{
	struct FGameplayTag CooldownTag;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
struct FSetDynamicSubtree
{
	struct FGameplayTag InjectTag;  // 0x0 (0x0)
	struct UBehaviorTree* BehaviorAsset;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
struct FReceiveExecutionStartAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
struct FGetBlackboardAsset
{
	struct UBlackboardData* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BlackboardComponent.ClearValue
struct FClearValue
{
	struct FName KeyName;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
struct FSetBlackboardValueAsVector
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	struct FVector Value;  // 0x30 (0x30)


}; 
 
 // Function AIModule.BlackboardComponent.GetValueAsBool
struct FGetValueAsBool
{
	struct FName KeyName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function AIModule.BlackboardComponent.GetValueAsClass
struct FGetValueAsClass
{
	struct FName KeyName;  // 0x0 (0x0)
	UObject* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BlackboardComponent.GetValueAsEnum
struct FGetValueAsEnum
{
	struct FName KeyName;  // 0x0 (0x0)
	char ReturnValue;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function AIModule.BlackboardComponent.GetValueAsFloat
struct FGetValueAsFloat
{
	struct FName KeyName;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BlackboardComponent.GetValueAsInt
struct FGetValueAsInt
{
	struct FName KeyName;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BlackboardComponent.GetValueAsName
struct FGetValueAsName
{
	struct FName KeyName;  // 0x0 (0x0)
	struct FName ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BlackboardComponent.GetValueAsObject
struct FGetValueAsObject
{
	struct FName KeyName;  // 0x0 (0x0)
	struct UObject* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BlackboardComponent.SetValueAsString
struct FSetValueAsString
{
	struct FName KeyName;  // 0x0 (0x0)
	struct FString StringValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BlackboardComponent.GetValueAsRotator
struct FGetValueAsRotator
{
	struct FName KeyName;  // 0x0 (0x0)
	struct FRotator ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BlackboardComponent.GetValueAsString
struct FGetValueAsString
{
	struct FName KeyName;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BlackboardComponent.GetValueAsVector
struct FGetValueAsVector
{
	struct FName KeyName;  // 0x0 (0x0)
	struct FVector ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BlackboardComponent.SetValueAsClass
struct FSetValueAsClass
{
	struct FName KeyName;  // 0x0 (0x0)
	UObject* ClassValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BlackboardComponent.SetValueAsFloat
struct FSetValueAsFloat
{
	struct FName KeyName;  // 0x0 (0x0)
	float FloatValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
struct FReceiveExecutionFinishAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	enum class EBTNodeResult NodeResult;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AIModule.BlackboardComponent.SetValueAsInt
struct FSetValueAsInt
{
	struct FName KeyName;  // 0x0 (0x0)
	int32_t IntValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BlackboardComponent.SetValueAsName
struct FSetValueAsName
{
	struct FName KeyName;  // 0x0 (0x0)
	struct FName NameValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BlackboardComponent.SetValueAsRotator
struct FSetValueAsRotator
{
	struct FName KeyName;  // 0x0 (0x0)
	struct FRotator VectorValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BlackboardComponent.SetValueAsVector
struct FSetValueAsVector
{
	struct FName KeyName;  // 0x0 (0x0)
	struct FVector VectorValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTFunctionLibrary.ClearBlackboardValue
struct FClearBlackboardValue
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
struct FClearBlackboardValueAsVector
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
struct FGetBlackboardValueAsActor
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	struct AActor* ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
struct FGetBlackboardValueAsClass
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	UObject* ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
struct FGetBlackboardValueAsEnum
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	char ReturnValue;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
struct FGetBlackboardValueAsFloat
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	float ReturnValue;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
struct FGetBlackboardValueAsInt
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	int32_t ReturnValue;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function AIModule.AISense_Blueprint.OnListenerRegistered
struct FOnListenerRegistered
{
	struct AActor* ActorListener;  // 0x0 (0x0)
	struct UAIPerceptionComponent* PerceptionComponent;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
struct FGetBlackboardValueAsName
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	struct FName ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
struct FGetBlackboardValueAsObject
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	struct UObject* ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
struct FGetBlackboardValueAsRotator
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	struct FRotator ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
struct FGetBlackboard
{
	struct AActor* Target;  // 0x0 (0x0)
	struct UBlackboardComponent* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
struct FGetBlackboardValueAsString
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	struct FString ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
struct FSimpleMoveToActor
{
	struct AController* Controller;  // 0x0 (0x0)
	struct AActor* Goal;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
struct FGetBlackboardValueAsVector
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	struct FVector ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function AIModule.BTFunctionLibrary.GetOwnerComponent
struct FGetOwnerComponent
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct UBehaviorTreeComponent* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
struct FGetOwnersBlackboard
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct UBlackboardComponent* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
struct FSetBlackboardValueAsClass
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	UObject* Value;  // 0x30 (0x30)


}; 
 
 // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
struct FOnPerceptionStimuliSourceEndPlay
{
	struct AActor* Actor;  // 0x0 (0x0)
	enum class EEndPlayReason EndPlayReason;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
struct FSetBlackboardValueAsEnum
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	char Value;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
struct FSetBlackboardValueAsFloat
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	float Value;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
struct FSetBlackboardValueAsInt
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	int32_t Value;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
struct FSetBlackboardValueAsObject
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	struct UObject* Value;  // 0x30 (0x30)


}; 
 
 // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
struct FSetBlackboardValueAsRotator
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	struct FRotator Value;  // 0x30 (0x30)


}; 
 
 // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
struct FAddGeneratedVector
{
	struct FVector GeneratedVector;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
struct FSetBlackboardValueAsString
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct FBlackboardKeySelector Key;  // 0x8 (0x8)
	struct FString Value;  // 0x30 (0x30)


}; 
 
 // Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
struct FStartUsingExternalEvent
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)
	struct AActor* OwningActor;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
struct FStopUsingExternalEvent
{
	struct UBTNode* NodeOwner;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
struct FIsDecoratorExecutionActive
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
struct FPerformConditionCheck
{
	struct AActor* OwnerActor;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
struct FPerformConditionCheckAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
struct FReceiveExecutionFinish
{
	struct AActor* OwnerActor;  // 0x0 (0x0)
	enum class EBTNodeResult NodeResult;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
struct FReceiveExecutionStart
{
	struct AActor* OwnerActor;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
struct FReceiveObserverActivated
{
	struct AActor* OwnerActor;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
struct FReceiveObserverActivatedAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
struct FReceiveObserverDeactivated
{
	struct AActor* OwnerActor;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
struct FReceiveObserverDeactivatedAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTService_BlueprintBase.IsServiceActive
struct FIsServiceActive
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTService_BlueprintBase.ReceiveActivation
struct FReceiveActivation
{
	struct AActor* OwnerActor;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
struct FReceiveDeactivation
{
	struct AActor* OwnerActor;  // 0x0 (0x0)


}; 
 
 // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
struct FReceiveDeactivationAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
struct FReceiveSearchStart
{
	struct AActor* OwnerActor;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
struct FGetSenseClassForStimulus
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FAIStimulus Stimulus;  // 0x8 (0x8)
	UAISense* ReturnValue;  // 0x60 (0x60)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
struct FCreateMoveToProxyObject
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APawn* Pawn;  // 0x8 (0x8)
	struct FVector Destination;  // 0x10 (0x10)
	struct AActor* TargetActor;  // 0x28 (0x28)
	float AcceptanceRadius;  // 0x30 (0x30)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool bStopOnOverlap : 1;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	struct UAIAsyncTaskBlueprintProxy* ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.GetAIController
struct FGetAIController
{
	struct AActor* ControlledActor;  // 0x0 (0x0)
	struct AAIController* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
struct FGetCurrentPath
{
	struct AController* Controller;  // 0x0 (0x0)
	struct UNavigationPath* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
struct FGetCurrentPathIndex
{
	struct AController* Controller;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
struct FGetNextNavLinkIndex
{
	struct AController* Controller;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function AIModule.AISense_Blueprint.K2_OnNewPawn
struct FK2_OnNewPawn
{
	struct APawn* NewPawn;  // 0x0 (0x0)


}; 
 
 // Function AIModule.NavLinkProxy.ResumePathFollowing
struct FResumePathFollowing
{
	struct AActor* Agent;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
struct FIsValidAIDirection
{
	struct FVector DirectionVector;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
struct FIsValidAILocation
{
	struct FVector Location;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
struct FIsValidAIRotation
{
	struct FRotator Rotation;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
struct FLockAIResourcesWithAnimation
{
	struct UAnimInstance* AnimInstance;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bLockMovement : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool LockAILogic : 1;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
struct FSendAIMessage
{
	struct APawn* Target;  // 0x0 (0x0)
	struct FName Message;  // 0x8 (0x8)
	struct UObject* MessageSource;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bSuccess : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
struct FSimpleMoveToLocation
{
	struct AController* Controller;  // 0x0 (0x0)
	struct FVector Goal;  // 0x8 (0x8)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
struct FSpawnAIFromClass
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	APawn* PawnClass;  // 0x8 (0x8)
	struct UBehaviorTree* BehaviorTree;  // 0x10 (0x10)
	struct FVector Location;  // 0x18 (0x18)
	struct FRotator Rotation;  // 0x30 (0x30)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bNoCollisionFail : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct AActor* Owner;  // 0x50 (0x50)
	struct APawn* ReturnValue;  // 0x58 (0x58)


}; 
 
 // Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
struct FUnlockAIResourcesWithAnimation
{
	struct UAnimInstance* AnimInstance;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bUnlockMovement : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool UnlockAILogic : 1;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)


}; 
 
 // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
struct FProvideActorsSet
{
	struct UObject* QuerierObject;  // 0x0 (0x0)
	struct AActor* QuerierActor;  // 0x8 (0x8)
	struct TArray<struct AActor*> ResultingActorsSet;  // 0x10 (0x10)


}; 
 
 // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
struct FProvideLocationsSet
{
	struct UObject* QuerierObject;  // 0x0 (0x0)
	struct AActor* QuerierActor;  // 0x8 (0x8)
	struct TArray<struct FVector> ResultingLocationSet;  // 0x10 (0x10)


}; 
 
 // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
struct FProvideSingleActor
{
	struct UObject* QuerierObject;  // 0x0 (0x0)
	struct AActor* QuerierActor;  // 0x8 (0x8)
	struct AActor* ResultingActor;  // 0x10 (0x10)


}; 
 
 // Function AIModule.EnvQueryManager.RunEQSQuery
struct FRunEQSQuery
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UEnvQuery* QueryTemplate;  // 0x8 (0x8)
	struct UObject* Querier;  // 0x10 (0x10)
	enum class EEnvQueryRunMode RunMode;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	UEnvQueryInstanceBlueprintWrapper* WrapperClass;  // 0x20 (0x20)
	struct UEnvQueryInstanceBlueprintWrapper* ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
struct FAddGeneratedActor
{
	struct AActor* GeneratedActor;  // 0x0 (0x0)


}; 
 
 // Function AIModule.PathFollowingComponent.OnNavDataRegistered
struct FOnNavDataRegistered
{
	struct ANavigationData* NavData;  // 0x0 (0x0)


}; 
 
 // Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
struct FDoItemGeneration
{
	struct TArray<struct FVector> ContextLocations;  // 0x0 (0x0)


}; 
 
 // Function AIModule.PathFollowingComponent.GetPathDestination
struct FGetPathDestination
{
	struct FVector ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AIModule.PathFollowingComponent.OnActorBump
struct FOnActorBump
{
	struct AActor* SelfActor;  // 0x0 (0x0)
	struct AActor* OtherActor;  // 0x8 (0x8)
	struct FVector NormalImpulse;  // 0x10 (0x10)
	struct FHitResult Hit;  // 0x28 (0x28)


}; 
 
 // Function AIModule.NavLinkProxy.HasMovingAgents
struct FHasMovingAgents
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AIModule.NavLinkProxy.IsSmartLinkEnabled
struct FIsSmartLinkEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
struct FReceiveSmartLinkReached
{
	struct AActor* Agent;  // 0x0 (0x0)
	struct FVector Destination;  // 0x8 (0x8)


}; 
 
 // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
struct FAddLocalNavigationGridForBox
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector Location;  // 0x8 (0x8)
	struct FVector Extent;  // 0x20 (0x20)
	struct FRotator Rotation;  // 0x38 (0x38)
	int32_t Radius2D;  // 0x50 (0x50)
	float Height;  // 0x54 (0x54)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool bRebuildGrids : 1;  // 0x58 (0x58)
	char pad_89[3];  // 0x59 (0x59)
	int32_t ReturnValue;  // 0x5C (0x5C)


}; 
 
 // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
struct FAddLocalNavigationGridForCapsule
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector Location;  // 0x8 (0x8)
	float CapsuleRadius;  // 0x20 (0x20)
	float CapsuleHalfHeight;  // 0x24 (0x24)
	int32_t Radius2D;  // 0x28 (0x28)
	float Height;  // 0x2C (0x2C)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bRebuildGrids : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	int32_t ReturnValue;  // 0x34 (0x34)


}; 
 
 // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
struct FAddLocalNavigationGridForPoint
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector Location;  // 0x8 (0x8)
	int32_t Radius2D;  // 0x20 (0x20)
	float Height;  // 0x24 (0x24)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bRebuildGrids : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	int32_t ReturnValue;  // 0x2C (0x2C)


}; 
 
 // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
struct FAddLocalNavigationGridForPoints
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct TArray<struct FVector> Locations;  // 0x8 (0x8)
	int32_t Radius2D;  // 0x18 (0x18)
	float Height;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bRebuildGrids : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	int32_t ReturnValue;  // 0x24 (0x24)


}; 
 
 // Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
struct FRemoveLocalNavigationGrid
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	int32_t GridId;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bRebuildGrids : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
struct FSetLocalNavigationGridDensity
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	float CellSize;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
struct FRegisterForSense
{
	UAISense* SenseClass;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
struct FUnregisterFromSense
{
	UAISense* SenseClass;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIPerceptionSystem.ReportEvent
struct FReportEvent
{
	struct UAISenseEvent* PerceptionEvent;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
struct FReportPerceptionEvent
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UAISenseEvent* PerceptionEvent;  // 0x8 (0x8)


}; 
 
 // Function AIModule.AISense_Blueprint.GetAllListenerActors
struct FGetAllListenerActors
{
	struct TArray<struct AActor*> ListenerActors;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AISense_Blueprint.GetAllListenerComponents
struct FGetAllListenerComponents
{
	struct TArray<struct UAIPerceptionComponent*> ListenerComponents;  // 0x0 (0x0)


}; 
 
 // Function AIModule.AISense_Blueprint.OnListenerUnregistered
struct FOnListenerUnregistered
{
	struct AActor* ActorListener;  // 0x0 (0x0)
	struct UAIPerceptionComponent* PerceptionComponent;  // 0x8 (0x8)


}; 
 
 // Function AIModule.AISense_Blueprint.OnListenerUpdated
struct FOnListenerUpdated
{
	struct AActor* ActorListener;  // 0x0 (0x0)
	struct UAIPerceptionComponent* PerceptionComponent;  // 0x8 (0x8)


}; 
 
 // Function AIModule.AISense_Blueprint.OnUpdate
struct FOnUpdate
{
	struct TArray<struct UAISenseEvent*> EventsToProcess;  // 0x0 (0x0)
	float ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AIModule.AISense_Damage.ReportDamageEvent
struct FReportDamageEvent
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct AActor* DamagedActor;  // 0x8 (0x8)
	struct AActor* Instigator;  // 0x10 (0x10)
	float DamageAmount;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FVector EventLocation;  // 0x20 (0x20)
	struct FVector HitLocation;  // 0x38 (0x38)
	struct FName Tag;  // 0x50 (0x50)


}; 
 
 // Function AIModule.AISense_Hearing.ReportNoiseEvent
struct FReportNoiseEvent
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector NoiseLocation;  // 0x8 (0x8)
	float Loudness;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct AActor* Instigator;  // 0x28 (0x28)
	float MaxRange;  // 0x30 (0x30)
	struct FName Tag;  // 0x34 (0x34)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 // Function AIModule.AISense_Touch.ReportTouchEvent
struct FReportTouchEvent
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct AActor* TouchReceiver;  // 0x8 (0x8)
	struct AActor* OtherActor;  // 0x10 (0x10)
	struct FVector Location;  // 0x18 (0x18)


}; 
 
 // Function AIModule.AITask_MoveTo.AIMoveTo
struct FAIMoveTo
{
	struct AAIController* Controller;  // 0x0 (0x0)
	struct FVector GoalLocation;  // 0x8 (0x8)
	struct AActor* GoalActor;  // 0x20 (0x20)
	float AcceptanceRadius;  // 0x28 (0x28)
	enum class EAIOptionFlag StopOnOverlap;  // 0x2C (0x2C)
	enum class EAIOptionFlag AcceptPartialPath;  // 0x2D (0x2D)
	char pad_46_1 : 7;  // 0x2E (0x2E)
	bool bUsePathfinding : 1;  // 0x2E (0x2E)
	char pad_47_1 : 7;  // 0x2F (0x2F)
	bool bLockAILogic : 1;  // 0x2F (0x2F)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bUseContinuousGoalTracking : 1;  // 0x30 (0x30)
	enum class EAIOptionFlag ProjectGoalOnNavigation;  // 0x31 (0x31)
	char pad_50[6];  // 0x32 (0x32)
	struct UAITask_MoveTo* ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function AIModule.AITask_RunEQS.RunEQS
struct FRunEQS
{
	struct AAIController* Controller;  // 0x0 (0x0)
	struct UEnvQuery* QueryTemplate;  // 0x8 (0x8)
	struct UAITask_RunEQS* ReturnValue;  // 0x10 (0x10)


}; 
 
 
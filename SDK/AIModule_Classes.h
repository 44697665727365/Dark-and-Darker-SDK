#pragma once 
#include <AIModule_Structs.h>
 
 
 
// Class AIModule.EnvQueryNode
// Size: 0x30(Inherited: 0x28)
struct UEnvQueryNode : UObject
{
	int32_t VerNum;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 


// Class AIModule.CrowdAgentInterface
// Size: 0x28(Inherited: 0x28)
struct UCrowdAgentInterface : UInterface
{


}; 
 
 


// Class AIModule.AISenseConfig_Touch
// Size: 0x48(Inherited: 0x48)
struct UAISenseConfig_Touch : UAISenseConfig
{


}; 
 
 


// Class AIModule.BTTask_WaitBlackboardTime
// Size: 0xA0(Inherited: 0x78)
struct UBTTask_WaitBlackboardTime : UBTTask_Wait
{
	struct FBlackboardKeySelector BlackboardKey;  // 0x78 (0x78)


}; 
 
 


// Class AIModule.EnvQueryTest
// Size: 0x1F8(Inherited: 0x30)
struct UEnvQueryTest : UEnvQueryNode
{
	int32_t TestOrder;  // 0x30 (0x30)
	enum class EEnvTestPurpose TestPurpose;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	struct FString TestComment;  // 0x38 (0x38)
	enum class EEnvTestFilterOperator MultipleContextFilterOp;  // 0x48 (0x48)
	enum class EEnvTestScoreOperator MultipleContextScoreOp;  // 0x49 (0x49)
	enum class EEnvTestFilterType FilterType;  // 0x4A (0x4A)
	char pad_75[5];  // 0x4B (0x4B)
	struct FAIDataProviderBoolValue BoolValue;  // 0x50 (0x50)
	struct FAIDataProviderFloatValue FloatValueMin;  // 0x88 (0x88)
	struct FAIDataProviderFloatValue FloatValueMax;  // 0xC0 (0xC0)
	char pad_248[1];  // 0xF8 (0xF8)
	enum class EEnvTestScoreEquation ScoringEquation;  // 0xF9 (0xF9)
	enum class EEnvQueryTestClamping ClampMinType;  // 0xFA (0xFA)
	enum class EEnvQueryTestClamping ClampMaxType;  // 0xFB (0xFB)
	uint8_t NormalizationType;  // 0xFC (0xFC)
	char pad_253[3];  // 0xFD (0xFD)
	struct FAIDataProviderFloatValue ScoreClampMin;  // 0x100 (0x100)
	struct FAIDataProviderFloatValue ScoreClampMax;  // 0x138 (0x138)
	struct FAIDataProviderFloatValue ScoringFactor;  // 0x170 (0x170)
	struct FAIDataProviderFloatValue ReferenceValue;  // 0x1A8 (0x1A8)
	char pad_480_1 : 7;  // 0x1E0 (0x1E0)
	bool bDefineReferenceValue : 1;  // 0x1E0 (0x1E0)
	char pad_481[15];  // 0x1E1 (0x1E1)
	char bWorkOnFloatValues : 1;  // 0x1F0 (0x1F0)
	char pad_496_1 : 7;  // 0x1F0 (0x1F0)
	char pad_497[8];  // 0x1F1 (0x1F1)


}; 
 
 


// Class AIModule.AIPerceptionListenerInterface
// Size: 0x28(Inherited: 0x28)
struct UAIPerceptionListenerInterface : UInterface
{


}; 
 
 


// Class AIModule.BTNode
// Size: 0x58(Inherited: 0x28)
struct UBTNode : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct FString NodeName;  // 0x30 (0x30)
	struct UBehaviorTree* TreeAsset;  // 0x40 (0x40)
	struct UBTCompositeNode* ParentNode;  // 0x48 (0x48)
	char pad_80[8];  // 0x50 (0x50)


}; 
 
 


// Class AIModule.BTDecorator_Blackboard
// Size: 0xC0(Inherited: 0x90)
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase
{
	int32_t IntValue;  // 0x90 (0x90)
	float FloatValue;  // 0x94 (0x94)
	struct FString StringValue;  // 0x98 (0x98)
	struct FString CachedDescription;  // 0xA8 (0xA8)
	char OperationType;  // 0xB8 (0xB8)
	enum class EBTBlackboardRestart NotifyObserver;  // 0xB9 (0xB9)
	char pad_186[6];  // 0xBA (0xBA)


}; 
 
 


// Class AIModule.BlackboardKeyType_Vector
// Size: 0x30(Inherited: 0x30)
struct UBlackboardKeyType_Vector : UBlackboardKeyType
{


}; 
 
 


// Class AIModule.BTAuxiliaryNode
// Size: 0x60(Inherited: 0x58)
struct UBTAuxiliaryNode : UBTNode
{
	char pad_88[8];  // 0x58 (0x58)


}; 
 
 


// Class AIModule.BTDecorator_BlackboardBase
// Size: 0x90(Inherited: 0x68)
struct UBTDecorator_BlackboardBase : UBTDecorator
{
	struct FBlackboardKeySelector BlackboardKey;  // 0x68 (0x68)


}; 
 
 


// Class AIModule.BTDecorator
// Size: 0x68(Inherited: 0x60)
struct UBTDecorator : UBTAuxiliaryNode
{
	char pad_96_1 : 7;  // 0x60 (0x60)
	char bInverseCondition : 1;  // 0x60 (0x60)
	char pad_97[3];  // 0x61 (0x61)
	enum class EBTFlowAbortMode FlowAbortMode;  // 0x64 (0x64)
	char pad_101[3];  // 0x65 (0x65)


}; 
 
 


// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// Size: 0xC8(Inherited: 0x68)
struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator
{
	struct FBlackboardKeySelector ActorToCheck;  // 0x68 (0x68)
	uint8_t TagsToMatch;  // 0x90 (0x90)
	char pad_145[7];  // 0x91 (0x91)
	struct FGameplayTagContainer GameplayTags;  // 0x98 (0x98)
	struct FString CachedDescription;  // 0xB8 (0xB8)


}; 
 
 


// Class AIModule.AIResource_Movement
// Size: 0x38(Inherited: 0x38)
struct UAIResource_Movement : UGameplayTaskResource
{


}; 
 
 


// Class AIModule.BTDecorator_BlueprintBase
// Size: 0xA0(Inherited: 0x68)
struct UBTDecorator_BlueprintBase : UBTDecorator
{
	struct AAIController* AIOwner;  // 0x68 (0x68)
	struct AActor* ActorOwner;  // 0x70 (0x70)
	struct TArray<struct FName> ObservedKeyNames;  // 0x78 (0x78)
	char pad_136[16];  // 0x88 (0x88)
	char bShowPropertyDetails : 1;  // 0x98 (0x98)
	char bCheckConditionOnlyBlackBoardChanges : 1;  // 0x98 (0x98)
	char bIsObservingBB : 1;  // 0x98 (0x98)
	char pad_152_1 : 5;  // 0x98 (0x98)
	char pad_153[8];  // 0x99 (0x99)


	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	void ReceiveObserverDeactivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	void ReceiveObserverActivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	void ReceiveExecutionStart(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	void ReceiveExecutionFinish(struct AActor* OwnerActor, enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	bool PerformConditionCheck(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	bool IsDecoratorObserverActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	bool IsDecoratorExecutionActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
}; 
 
 


// Class AIModule.PawnAction
// Size: 0x90(Inherited: 0x28)
struct UPawnAction : UObject
{
	struct UPawnAction* ChildAction;  // 0x28 (0x28)
	struct UPawnAction* ParentAction;  // 0x30 (0x30)
	struct UPawnActionsComponent* OwnerComponent;  // 0x38 (0x38)
	struct UObject* Instigator;  // 0x40 (0x40)
	struct UBrainComponent* BrainComp;  // 0x48 (0x48)
	char pad_80[48];  // 0x50 (0x50)
	char bAllowNewSameClassInstance : 1;  // 0x80 (0x80)
	char bReplaceActiveSameClassInstance : 1;  // 0x80 (0x80)
	char bShouldPauseMovement : 1;  // 0x80 (0x80)
	char bAlwaysNotifyOnFinished : 1;  // 0x80 (0x80)
	char pad_128_1 : 4;  // 0x80 (0x80)
	char pad_129[16];  // 0x81 (0x81)


	enum class EAIRequestPriority GetActionPriority(); // Function AIModule.PawnAction.GetActionPriority
	void Finish(enum class EPawnActionResult WithResult); // Function AIModule.PawnAction.Finish
	struct UPawnAction* CreateActionInstance(struct UObject* WorldContextObject, UPawnAction* ActionClass); // Function AIModule.PawnAction.CreateActionInstance
}; 
 
 


// Class AIModule.EnvQueryGenerator_Donut
// Size: 0x1E0(Inherited: 0x90)
struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue InnerRadius;  // 0x90 (0x90)
	struct FAIDataProviderFloatValue OuterRadius;  // 0xC8 (0xC8)
	struct FAIDataProviderIntValue NumberOfRings;  // 0x100 (0x100)
	struct FAIDataProviderIntValue PointsPerRing;  // 0x138 (0x138)
	struct FEnvDirection ArcDirection;  // 0x170 (0x170)
	struct FAIDataProviderFloatValue ArcAngle;  // 0x190 (0x190)
	char pad_456_1 : 7;  // 0x1C8 (0x1C8)
	bool bUseSpiralPattern : 1;  // 0x1C8 (0x1C8)
	char pad_457[7];  // 0x1C9 (0x1C9)
	UEnvQueryContext* Center;  // 0x1D0 (0x1D0)
	char bDefineArc : 1;  // 0x1D8 (0x1D8)
	char pad_472_1 : 7;  // 0x1D8 (0x1D8)
	char pad_473[8];  // 0x1D9 (0x1D9)


}; 
 
 


// Class AIModule.BTService
// Size: 0x70(Inherited: 0x60)
struct UBTService : UBTAuxiliaryNode
{
	float Interval;  // 0x60 (0x60)
	float RandomDeviation;  // 0x64 (0x64)
	char bCallTickOnSearchStart : 1;  // 0x68 (0x68)
	char bRestartTimerOnEachActivation : 1;  // 0x68 (0x68)
	char pad_104_1 : 6;  // 0x68 (0x68)
	char pad_105[8];  // 0x69 (0x69)


}; 
 
 


// Class AIModule.BTTaskNode
// Size: 0x70(Inherited: 0x58)
struct UBTTaskNode : UBTNode
{
	struct TArray<struct UBTService*> Services;  // 0x58 (0x58)
	char bIgnoreRestartSelf : 1;  // 0x68 (0x68)
	char pad_104_1 : 7;  // 0x68 (0x68)
	char pad_105[8];  // 0x69 (0x69)


}; 
 
 


// Class AIModule.BlackboardKeyType_Bool
// Size: 0x30(Inherited: 0x30)
struct UBlackboardKeyType_Bool : UBlackboardKeyType
{


}; 
 
 


// Class AIModule.EnvQueryTypes
// Size: 0x28(Inherited: 0x28)
struct UEnvQueryTypes : UObject
{


}; 
 
 


// Class AIModule.BTTask_BlueprintBase
// Size: 0xA8(Inherited: 0x70)
struct UBTTask_BlueprintBase : UBTTaskNode
{
	struct AAIController* AIOwner;  // 0x70 (0x70)
	struct AActor* ActorOwner;  // 0x78 (0x78)
	struct FIntervalCountdown TickInterval;  // 0x80 (0x80)
	char pad_136[24];  // 0x88 (0x88)
	char bShowPropertyDetails : 1;  // 0xA0 (0xA0)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	char pad_161[8];  // 0xA1 (0xA1)


	void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	void SetFinishOnMessage(struct FName MessageName); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTick
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	void ReceiveExecute(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	void ReceiveAbort(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort
	bool IsTaskExecuting(); // Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
	bool IsTaskAborting(); // Function AIModule.BTTask_BlueprintBase.IsTaskAborting
	void FinishExecute(bool bSuccess); // Function AIModule.BTTask_BlueprintBase.FinishExecute
	void FinishAbort(); // Function AIModule.BTTask_BlueprintBase.FinishAbort
}; 
 
 


// Class AIModule.AIDataProvider
// Size: 0x28(Inherited: 0x28)
struct UAIDataProvider : UObject
{


}; 
 
 


// Class AIModule.BTTask_RunBehavior
// Size: 0x78(Inherited: 0x70)
struct UBTTask_RunBehavior : UBTTaskNode
{
	struct UBehaviorTree* BehaviorAsset;  // 0x70 (0x70)


}; 
 
 


// Class AIModule.BlackboardKeyType_Name
// Size: 0x30(Inherited: 0x30)
struct UBlackboardKeyType_Name : UBlackboardKeyType
{


}; 
 
 


// Class AIModule.AISenseEvent_Damage
// Size: 0x78(Inherited: 0x28)
struct UAISenseEvent_Damage : UAISenseEvent
{
	struct FAIDamageEvent Event;  // 0x28 (0x28)


}; 
 
 


// Class AIModule.AIPerceptionComponent
// Size: 0x180(Inherited: 0xA0)
struct UAIPerceptionComponent : UActorComponent
{
	struct TArray<struct UAISenseConfig*> SensesConfig;  // 0xA0 (0xA0)
	UAISense* DominantSense;  // 0xB0 (0xB0)
	char pad_184[16];  // 0xB8 (0xB8)
	struct AAIController* AIOwner;  // 0xC8 (0xC8)
	char pad_208[128];  // 0xD0 (0xD0)
	struct FMulticastInlineDelegate OnPerceptionUpdated;  // 0x150 (0x150)
	struct FMulticastInlineDelegate OnTargetPerceptionUpdated;  // 0x160 (0x160)
	struct FMulticastInlineDelegate OnTargetPerceptionInfoUpdated;  // 0x170 (0x170)


	void SetSenseEnabled(UAISense* SenseClass, bool bEnable); // Function AIModule.AIPerceptionComponent.SetSenseEnabled
	void RequestStimuliListenerUpdate(); // Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	void OnOwnerEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
	void GetPerceivedHostileActorsBySense(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
	void GetPerceivedHostileActors(struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	void GetPerceivedActors(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedActors
	void GetKnownPerceivedActors(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
	void GetCurrentlyPerceivedActors(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
	bool GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo& Info); // Function AIModule.AIPerceptionComponent.GetActorsPerception
	void ForgetAll(); // Function AIModule.AIPerceptionComponent.ForgetAll
}; 
 
 


// Class AIModule.AIController
// Size: 0x3B8(Inherited: 0x328)
struct AAIController : AController
{
	char pad_808[56];  // 0x328 (0x328)
	char bStartAILogicOnPossess : 1;  // 0x360 (0x360)
	char bStopAILogicOnUnposses : 1;  // 0x360 (0x360)
	char bLOSflag : 1;  // 0x360 (0x360)
	char bSkipExtraLOSChecks : 1;  // 0x360 (0x360)
	char bAllowStrafe : 1;  // 0x360 (0x360)
	char bWantsPlayerState : 1;  // 0x360 (0x360)
	char bSetControlRotationFromPawnOrientation : 1;  // 0x360 (0x360)
	char pad_864_1 : 1;  // 0x360 (0x360)
	char pad_865[8];  // 0x361 (0x361)
	struct UPathFollowingComponent* PathFollowingComponent;  // 0x368 (0x368)
	struct UBrainComponent* BrainComponent;  // 0x370 (0x370)
	struct UAIPerceptionComponent* PerceptionComponent;  // 0x378 (0x378)
	struct UPawnActionsComponent* ActionsComp;  // 0x380 (0x380)
	struct UBlackboardComponent* Blackboard;  // 0x388 (0x388)
	struct UGameplayTasksComponent* CachedGameplayTasksComponent;  // 0x390 (0x390)
	UNavigationQueryFilter* DefaultNavigationFilterClass;  // 0x398 (0x398)
	struct FMulticastInlineDelegate ReceiveMoveCompleted;  // 0x3A0 (0x3A0)
	char pad_944[8];  // 0x3B0 (0x3B0)


	bool UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent*& BlackboardComponent); // Function AIModule.AIController.UseBlackboard
	void UnclaimTaskResource(UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.UnclaimTaskResource
	void SetPathFollowingComponent(struct UPathFollowingComponent* NewPFComponent); // Function AIModule.AIController.SetPathFollowingComponent
	void SetMoveBlockDetection(bool bEnable); // Function AIModule.AIController.SetMoveBlockDetection
	bool RunBehaviorTree(struct UBehaviorTree* BTAsset); // Function AIModule.AIController.RunBehaviorTree
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset); // Function AIModule.AIController.OnUsingBlackBoard
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed
	enum class EPathFollowingRequestResult MoveToLocation(struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToLocation
	enum class EPathFollowingRequestResult MoveToActor(struct AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToActor
	void K2_SetFocus(struct AActor* NewFocus); // Function AIModule.AIController.K2_SetFocus
	void K2_SetFocalPoint(struct FVector FP); // Function AIModule.AIController.K2_SetFocalPoint
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus
	bool HasPartialPath(); // Function AIModule.AIController.HasPartialPath
	struct UPathFollowingComponent* GetPathFollowingComponent(); // Function AIModule.AIController.GetPathFollowingComponent
	enum class EPathFollowingStatus GetMoveStatus(); // Function AIModule.AIController.GetMoveStatus
	struct FVector GetImmediateMoveDestination(); // Function AIModule.AIController.GetImmediateMoveDestination
	struct AActor* GetFocusActor(); // Function AIModule.AIController.GetFocusActor
	struct FVector GetFocalPointOnActor(struct AActor* Actor); // Function AIModule.AIController.GetFocalPointOnActor
	struct FVector GetFocalPoint(); // Function AIModule.AIController.GetFocalPoint
	struct UAIPerceptionComponent* GetAIPerceptionComponent(); // Function AIModule.AIController.GetAIPerceptionComponent
	void ClaimTaskResource(UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.ClaimTaskResource
}; 
 
 


// Class AIModule.BlackboardData
// Size: 0x50(Inherited: 0x30)
struct UBlackboardData : UDataAsset
{
	struct UBlackboardData* Parent;  // 0x30 (0x30)
	struct TArray<struct FBlackboardEntry> Keys;  // 0x38 (0x38)
	char bHasSynchronizedKeys : 1;  // 0x48 (0x48)
	char pad_72_1 : 7;  // 0x48 (0x48)
	char pad_73[8];  // 0x49 (0x49)


}; 
 
 


// Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x68(Inherited: 0x28)
struct UAIAsyncTaskBlueprintProxy : UObject
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x28 (0x28)
	struct FMulticastInlineDelegate OnFail;  // 0x38 (0x38)
	char pad_72[32];  // 0x48 (0x48)


	void OnMoveCompleted(struct FAIRequestID RequestID, enum class EPathFollowingResult MovementResult); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
}; 
 
 


// Class AIModule.BehaviorTreeComponent
// Size: 0x288(Inherited: 0xF8)
struct UBehaviorTreeComponent : UBrainComponent
{
	char pad_248[32];  // 0xF8 (0xF8)
	struct TArray<struct UBTNode*> NodeInstances;  // 0x118 (0x118)
	char pad_296[328];  // 0x128 (0x128)
	struct UBehaviorTree* DefaultBehaviorTreeAsset;  // 0x270 (0x270)
	char pad_632[16];  // 0x278 (0x278)


	void SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset); // Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
	float GetTagCooldownEndTime(struct FGameplayTag CooldownTag); // Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	void AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration); // Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
}; 
 
 


// Class AIModule.AISenseConfig_Blueprint
// Size: 0x50(Inherited: 0x48)
struct UAISenseConfig_Blueprint : UAISenseConfig
{
	UAISense_Blueprint* Implementation;  // 0x48 (0x48)


}; 
 
 


// Class AIModule.AIResourceInterface
// Size: 0x28(Inherited: 0x28)
struct UAIResourceInterface : UInterface
{


}; 
 
 


// Class AIModule.AISenseBlueprintListener
// Size: 0x108(Inherited: 0x108)
struct UAISenseBlueprintListener : UUserDefinedStruct
{


}; 
 
 


// Class AIModule.AISystem
// Size: 0x168(Inherited: 0x60)
struct UAISystem : UAISystemBase
{
	struct FSoftClassPath PerceptionSystemClassName;  // 0x60 (0x60)
	struct FSoftClassPath HotSpotManagerClassName;  // 0x80 (0x80)
	struct FSoftClassPath EnvQueryManagerClassName;  // 0xA0 (0xA0)
	float AcceptanceRadius;  // 0xC0 (0xC0)
	float PathfollowingRegularPathPointAcceptanceRadius;  // 0xC4 (0xC4)
	float PathfollowingNavLinkAcceptanceRadius;  // 0xC8 (0xC8)
	char pad_204_1 : 7;  // 0xCC (0xCC)
	bool bFinishMoveOnGoalOverlap : 1;  // 0xCC (0xCC)
	char pad_205_1 : 7;  // 0xCD (0xCD)
	bool bAcceptPartialPaths : 1;  // 0xCD (0xCD)
	char pad_206_1 : 7;  // 0xCE (0xCE)
	bool bAllowStrafing : 1;  // 0xCE (0xCE)
	char pad_207_1 : 7;  // 0xCF (0xCF)
	bool bEnableBTAITasks : 1;  // 0xCF (0xCF)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool bAllowControllersAsEQSQuerier : 1;  // 0xD0 (0xD0)
	char pad_209_1 : 7;  // 0xD1 (0xD1)
	bool bEnableDebuggerPlugin : 1;  // 0xD1 (0xD1)
	char pad_210_1 : 7;  // 0xD2 (0xD2)
	bool bForgetStaleActors : 1;  // 0xD2 (0xD2)
	char pad_211_1 : 7;  // 0xD3 (0xD3)
	bool bAddBlackboardSelfKey : 1;  // 0xD3 (0xD3)
	char pad_212_1 : 7;  // 0xD4 (0xD4)
	bool bClearBBEntryOnBTEQSFail : 1;  // 0xD4 (0xD4)
	enum class ECollisionChannel DefaultSightCollisionChannel;  // 0xD5 (0xD5)
	char pad_214[2];  // 0xD6 (0xD6)
	struct UBehaviorTreeManager* BehaviorTreeManager;  // 0xD8 (0xD8)
	struct UEnvQueryManager* EnvironmentQueryManager;  // 0xE0 (0xE0)
	struct UAIPerceptionSystem* PerceptionSystem;  // 0xE8 (0xE8)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> AllProxyObjects;  // 0xF0 (0xF0)
	struct UAIHotSpotManager* HotSpotManager;  // 0x100 (0x100)
	struct UNavLocalGridManager* NavLocalGrids;  // 0x108 (0x108)
	char pad_272[88];  // 0x110 (0x110)


	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers
}; 
 
 


// Class AIModule.AISenseConfig
// Size: 0x48(Inherited: 0x28)
struct UAISenseConfig : UObject
{
	struct FColor DebugColor;  // 0x28 (0x28)
	float MaxAge;  // 0x2C (0x2C)
	char bStartsEnabled : 1;  // 0x30 (0x30)
	char pad_48_1 : 7;  // 0x30 (0x30)
	char pad_49[24];  // 0x31 (0x31)


}; 
 
 


// Class AIModule.AISenseConfig_Hearing
// Size: 0x60(Inherited: 0x48)
struct UAISenseConfig_Hearing : UAISenseConfig
{
	UAISense_Hearing* Implementation;  // 0x48 (0x48)
	float HearingRange;  // 0x50 (0x50)
	float LoSHearingRange;  // 0x54 (0x54)
	char bUseLoSHearing : 1;  // 0x58 (0x58)
	char pad_88_1 : 7;  // 0x58 (0x58)
	char pad_89[4];  // 0x59 (0x59)
	struct FAISenseAffiliationFilter DetectionByAffiliation;  // 0x5C (0x5C)


}; 
 
 


// Class AIModule.AISenseConfig_Team
// Size: 0x48(Inherited: 0x48)
struct UAISenseConfig_Team : UAISenseConfig
{


}; 
 
 


// Class AIModule.AISenseConfig_Prediction
// Size: 0x48(Inherited: 0x48)
struct UAISenseConfig_Prediction : UAISenseConfig
{


}; 
 
 


// Class AIModule.AISenseConfig_Sight
// Size: 0x70(Inherited: 0x48)
struct UAISenseConfig_Sight : UAISenseConfig
{
	UAISense_Sight* Implementation;  // 0x48 (0x48)
	float SightRadius;  // 0x50 (0x50)
	float LoseSightRadius;  // 0x54 (0x54)
	float PeripheralVisionAngleDegrees;  // 0x58 (0x58)
	struct FAISenseAffiliationFilter DetectionByAffiliation;  // 0x5C (0x5C)
	float AutoSuccessRangeFromLastSeenLocation;  // 0x60 (0x60)
	float PointOfViewBackwardOffset;  // 0x64 (0x64)
	float NearClippingRadius;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 


// Class AIModule.BlackboardKeyType_Int
// Size: 0x30(Inherited: 0x30)
struct UBlackboardKeyType_Int : UBlackboardKeyType
{


}; 
 
 


// Class AIModule.BlackboardAssetProvider
// Size: 0x28(Inherited: 0x28)
struct UBlackboardAssetProvider : UInterface
{


	struct UBlackboardData* GetBlackboardAsset(); // Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
}; 
 
 


// Class AIModule.AISenseEvent
// Size: 0x28(Inherited: 0x28)
struct UAISenseEvent : UObject
{


}; 
 
 


// Class AIModule.AISenseEvent_Hearing
// Size: 0x68(Inherited: 0x28)
struct UAISenseEvent_Hearing : UAISenseEvent
{
	struct FAINoiseEvent Event;  // 0x28 (0x28)


}; 
 
 


// Class AIModule.PawnAction_BlueprintBase
// Size: 0x90(Inherited: 0x90)
struct UPawnAction_BlueprintBase : UPawnAction
{


	void ActionTick(struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.PawnAction_BlueprintBase.ActionTick
	void ActionStart(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionStart
	void ActionResume(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionResume
	void ActionPause(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionPause
	void ActionFinished(struct APawn* ControlledPawn, enum class EPawnActionResult WithResult); // Function AIModule.PawnAction_BlueprintBase.ActionFinished
}; 
 
 


// Class AIModule.GenericTeamAgentInterface
// Size: 0x28(Inherited: 0x28)
struct UGenericTeamAgentInterface : UInterface
{


}; 
 
 


// Class AIModule.EQSQueryResultSourceInterface
// Size: 0x28(Inherited: 0x28)
struct UEQSQueryResultSourceInterface : UInterface
{


}; 
 
 


// Class AIModule.BlackboardKeyType_Object
// Size: 0x38(Inherited: 0x30)
struct UBlackboardKeyType_Object : UBlackboardKeyType
{
	 BaseClass;  // 0x30 (0x30)


}; 
 
 


// Class AIModule.PawnActionsComponent
// Size: 0xD8(Inherited: 0xA0)
struct UPawnActionsComponent : UActorComponent
{
	struct APawn* ControlledPawn;  // 0xA0 (0xA0)
	struct TArray<struct FPawnActionStack> ActionStacks;  // 0xA8 (0xA8)
	struct TArray<struct FPawnActionEvent> ActionEvents;  // 0xB8 (0xB8)
	struct UPawnAction* CurrentAction;  // 0xC8 (0xC8)
	char pad_208[8];  // 0xD0 (0xD0)


	bool K2_PushAction(struct UPawnAction* NewAction, enum class EAIRequestPriority Priority, struct UObject* Instigator); // Function AIModule.PawnActionsComponent.K2_PushAction
	bool K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, enum class EAIRequestPriority Priority); // Function AIModule.PawnActionsComponent.K2_PerformAction
	enum class EPawnActionAbortState K2_ForceAbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_ForceAbortAction
	enum class EPawnActionAbortState K2_AbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_AbortAction
}; 
 
 


// Class AIModule.PawnAction_Move
// Size: 0xF0(Inherited: 0x90)
struct UPawnAction_Move : UPawnAction
{
	struct AActor* GoalActor;  // 0x90 (0x90)
	struct FVector GoalLocation;  // 0x98 (0x98)
	float AcceptableRadius;  // 0xB0 (0xB0)
	char pad_180[4];  // 0xB4 (0xB4)
	UNavigationQueryFilter* FilterClass;  // 0xB8 (0xB8)
	char bAllowStrafe : 1;  // 0xC0 (0xC0)
	char bFinishOnOverlap : 1;  // 0xC0 (0xC0)
	char bUsePathfinding : 1;  // 0xC0 (0xC0)
	char bAllowPartialPath : 1;  // 0xC0 (0xC0)
	char bProjectGoalToNavigation : 1;  // 0xC0 (0xC0)
	char bUpdatePathToGoal : 1;  // 0xC0 (0xC0)
	char bAbortSubActionOnPathChange : 1;  // 0xC0 (0xC0)
	char pad_192_1 : 1;  // 0xC0 (0xC0)
	char pad_193[48];  // 0xC1 (0xC1)


}; 
 
 


// Class AIModule.PawnAction_Repeat
// Size: 0xB0(Inherited: 0x90)
struct UPawnAction_Repeat : UPawnAction
{
	struct UPawnAction* ActionToRepeat;  // 0x90 (0x90)
	struct UPawnAction* RecentActionCopy;  // 0x98 (0x98)
	enum class EPawnActionFailHandling ChildFailureHandlingMode;  // 0xA0 (0xA0)
	char pad_161[15];  // 0xA1 (0xA1)


}; 
 
 


// Class AIModule.PawnAction_Sequence
// Size: 0xB8(Inherited: 0x90)
struct UPawnAction_Sequence : UPawnAction
{
	struct TArray<struct UPawnAction*> ActionSequence;  // 0x90 (0x90)
	enum class EPawnActionFailHandling ChildFailureHandlingMode;  // 0xA0 (0xA0)
	char pad_161[7];  // 0xA1 (0xA1)
	struct UPawnAction* RecentActionCopy;  // 0xA8 (0xA8)
	char pad_176[8];  // 0xB0 (0xB0)


}; 
 
 


// Class AIModule.BTService_RunEQS
// Size: 0xF8(Inherited: 0x98)
struct UBTService_RunEQS : UBTService_BlackboardBase
{
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;  // 0x98 (0x98)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool bUpdateBBOnFail : 1;  // 0xE0 (0xE0)
	char pad_225[23];  // 0xE1 (0xE1)


}; 
 
 


// Class AIModule.PawnAction_Wait
// Size: 0xA0(Inherited: 0x90)
struct UPawnAction_Wait : UPawnAction
{
	float TimeToWait;  // 0x90 (0x90)
	char pad_148[12];  // 0x94 (0x94)


}; 
 
 


// Class AIModule.BlackboardComponent
// Size: 0x1A8(Inherited: 0xA0)
struct UBlackboardComponent : UActorComponent
{
	struct UBrainComponent* BrainComp;  // 0xA0 (0xA0)
	struct UBlackboardData* DefaultBlackboardAsset;  // 0xA8 (0xA8)
	struct UBlackboardData* BlackboardAsset;  // 0xB0 (0xB0)
	char pad_184[32];  // 0xB8 (0xB8)
	struct TArray<struct UBlackboardKeyType*> KeyInstances;  // 0xD8 (0xD8)
	char pad_232[192];  // 0xE8 (0xE8)


	void SetValueAsVector(struct FName& KeyName, struct FVector VectorValue); // Function AIModule.BlackboardComponent.SetValueAsVector
	void SetValueAsString(struct FName& KeyName, struct FString StringValue); // Function AIModule.BlackboardComponent.SetValueAsString
	void SetValueAsRotator(struct FName& KeyName, struct FRotator VectorValue); // Function AIModule.BlackboardComponent.SetValueAsRotator
	void SetValueAsObject(struct FName& KeyName, struct UObject* ObjectValue); // Function AIModule.BlackboardComponent.SetValueAsObject
	void SetValueAsName(struct FName& KeyName, struct FName NameValue); // Function AIModule.BlackboardComponent.SetValueAsName
	void SetValueAsInt(struct FName& KeyName, int32_t IntValue); // Function AIModule.BlackboardComponent.SetValueAsInt
	void SetValueAsFloat(struct FName& KeyName, float FloatValue); // Function AIModule.BlackboardComponent.SetValueAsFloat
	void SetValueAsEnum(struct FName& KeyName, char EnumValue); // Function AIModule.BlackboardComponent.SetValueAsEnum
	void SetValueAsClass(struct FName& KeyName, UObject* ClassValue); // Function AIModule.BlackboardComponent.SetValueAsClass
	void SetValueAsBool(struct FName& KeyName, bool BoolValue); // Function AIModule.BlackboardComponent.SetValueAsBool
	bool IsVectorValueSet(struct FName& KeyName); // Function AIModule.BlackboardComponent.IsVectorValueSet
	struct FVector GetValueAsVector(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsVector
	struct FString GetValueAsString(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsString
	struct FRotator GetValueAsRotator(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsRotator
	struct UObject* GetValueAsObject(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsObject
	struct FName GetValueAsName(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsName
	int32_t GetValueAsInt(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsInt
	float GetValueAsFloat(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsFloat
	char GetValueAsEnum(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsEnum
	UObject* GetValueAsClass(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsClass
	bool GetValueAsBool(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsBool
	bool GetRotationFromEntry(struct FName& KeyName, struct FRotator& ResultRotation); // Function AIModule.BlackboardComponent.GetRotationFromEntry
	bool GetLocationFromEntry(struct FName& KeyName, struct FVector& ResultLocation); // Function AIModule.BlackboardComponent.GetLocationFromEntry
	void ClearValue(struct FName& KeyName); // Function AIModule.BlackboardComponent.ClearValue
}; 
 
 


// Class AIModule.PathFollowingManager
// Size: 0x28(Inherited: 0x28)
struct UPathFollowingManager : UObject
{


}; 
 
 


// Class AIModule.AISubsystem
// Size: 0x38(Inherited: 0x28)
struct UAISubsystem : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct UAISystem* AISystem;  // 0x30 (0x30)


}; 
 
 


// Class AIModule.AISense_Damage
// Size: 0x90(Inherited: 0x80)
struct UAISense_Damage : UAISense
{
	struct TArray<struct FAIDamageEvent> RegisteredEvents;  // 0x80 (0x80)


	void ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation, struct FName Tag); // Function AIModule.AISense_Damage.ReportDamageEvent
}; 
 
 


// Class AIModule.AISense_Blueprint
// Size: 0xA8(Inherited: 0x80)
struct UAISense_Blueprint : UAISense
{
	UUserDefinedStruct* ListenerDataType;  // 0x80 (0x80)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer;  // 0x88 (0x88)
	struct TArray<struct UAISenseEvent*> UnprocessedEvents;  // 0x98 (0x98)


	float OnUpdate(struct TArray<struct UAISenseEvent*>& EventsToProcess); // Function AIModule.AISense_Blueprint.OnUpdate
	void OnListenerUpdated(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUpdated
	void OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUnregistered
	void OnListenerRegistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerRegistered
	void K2_OnNewPawn(struct APawn* NewPawn); // Function AIModule.AISense_Blueprint.K2_OnNewPawn
	void GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent*>& ListenerComponents); // Function AIModule.AISense_Blueprint.GetAllListenerComponents
	void GetAllListenerActors(struct TArray<struct AActor*>& ListenerActors); // Function AIModule.AISense_Blueprint.GetAllListenerActors
}; 
 
 


// Class AIModule.AIResource_Logic
// Size: 0x38(Inherited: 0x38)
struct UAIResource_Logic : UGameplayTaskResource
{


}; 
 
 


// Class AIModule.BehaviorTree
// Size: 0x68(Inherited: 0x28)
struct UBehaviorTree : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct UBTCompositeNode* RootNode;  // 0x30 (0x30)
	struct UBlackboardData* BlackboardAsset;  // 0x38 (0x38)
	struct TArray<struct UBTDecorator*> RootDecorators;  // 0x40 (0x40)
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps;  // 0x50 (0x50)
	char pad_96[8];  // 0x60 (0x60)


}; 
 
 


// Class AIModule.AITask_MoveTo
// Size: 0x118(Inherited: 0x70)
struct UAITask_MoveTo : UAITask
{
	struct FMulticastInlineDelegate OnRequestFailed;  // 0x70 (0x70)
	struct FMulticastInlineDelegate OnMoveFinished;  // 0x80 (0x80)
	struct FAIMoveRequest MoveRequest;  // 0x90 (0x90)
	char pad_216[64];  // 0xD8 (0xD8)


	struct UAITask_MoveTo* AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuousGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation); // Function AIModule.AITask_MoveTo.AIMoveTo
}; 
 
 


// Class AIModule.BTFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UBTFunctionLibrary : UBlueprintFunctionLibrary
{


	void StopUsingExternalEvent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
	void StartUsingExternalEvent(struct UBTNode* NodeOwner, struct AActor* OwningActor); // Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
	void SetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FVector Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	void SetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FString Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	void SetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FRotator Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
	void SetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	void SetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FName Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	void SetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, int32_t Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	void SetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, float Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	void SetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, char Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	void SetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	void SetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, bool Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	struct UBlackboardComponent* GetOwnersBlackboard(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
	struct UBehaviorTreeComponent* GetOwnerComponent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnerComponent
	struct FVector GetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	struct FString GetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	struct FRotator GetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
	struct UObject* GetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	struct FName GetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	int32_t GetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	float GetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	char GetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	UObject* GetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	bool GetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	struct AActor* GetBlackboardValueAsActor(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	void ClearBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	void ClearBlackboardValue(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValue
}; 
 
 


// Class AIModule.EnvQueryManager
// Size: 0x158(Inherited: 0x38)
struct UEnvQueryManager : UAISubsystem
{
	char pad_56[112];  // 0x38 (0x38)
	struct TArray<struct FEnvQueryInstanceCache> InstanceCache;  // 0xA8 (0xA8)
	struct TArray<struct UEnvQueryContext*> LocalContexts;  // 0xB8 (0xB8)
	struct TArray<struct UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;  // 0xC8 (0xC8)
	char pad_216[84];  // 0xD8 (0xD8)
	float MaxAllowedTestingTime;  // 0x12C (0x12C)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool bTestQueriesUsingBreadth : 1;  // 0x130 (0x130)
	char pad_305[3];  // 0x131 (0x131)
	int32_t QueryCountWarningThreshold;  // 0x134 (0x134)
	double QueryCountWarningInterval;  // 0x138 (0x138)
	double ExecutionTimeWarningSeconds;  // 0x140 (0x140)
	double HandlingResultTimeWarningSeconds;  // 0x148 (0x148)
	double GenerationTimeWarningSeconds;  // 0x150 (0x150)


	struct UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, enum class EEnvQueryRunMode RunMode, UEnvQueryInstanceBlueprintWrapper* WrapperClass); // Function AIModule.EnvQueryManager.RunEQSQuery
}; 
 
 


// Class AIModule.BlackboardKeyType_Class
// Size: 0x38(Inherited: 0x30)
struct UBlackboardKeyType_Class : UBlackboardKeyType
{
	 BaseClass;  // 0x30 (0x30)


}; 
 
 


// Class AIModule.BrainComponent
// Size: 0xF8(Inherited: 0xA0)
struct UBrainComponent : UActorComponent
{
	char pad_160[8];  // 0xA0 (0xA0)
	struct UBlackboardComponent* BlackboardComp;  // 0xA8 (0xA8)
	struct AAIController* AIOwner;  // 0xB0 (0xB0)
	char pad_184[64];  // 0xB8 (0xB8)


	void StopLogic(struct FString Reason); // Function AIModule.BrainComponent.StopLogic
	void StartLogic(); // Function AIModule.BrainComponent.StartLogic
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic
	bool IsRunning(); // Function AIModule.BrainComponent.IsRunning
	bool IsPaused(); // Function AIModule.BrainComponent.IsPaused
}; 
 
 


// Class AIModule.BehaviorTreeManager
// Size: 0x50(Inherited: 0x28)
struct UBehaviorTreeManager : UObject
{
	int32_t MaxDebuggerSteps;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates;  // 0x30 (0x30)
	struct TArray<struct UBehaviorTreeComponent*> ActiveComponents;  // 0x40 (0x40)


}; 
 
 


// Class AIModule.BehaviorTreeTypes
// Size: 0x28(Inherited: 0x28)
struct UBehaviorTreeTypes : UObject
{


}; 
 
 


// Class AIModule.BlackboardKeyType
// Size: 0x30(Inherited: 0x28)
struct UBlackboardKeyType : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class AIModule.EnvQueryTest_GameplayTags
// Size: 0x268(Inherited: 0x1F8)
struct UEnvQueryTest_GameplayTags : UEnvQueryTest
{
	struct FGameplayTagQuery TagQueryToMatch;  // 0x1F8 (0x1F8)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool bRejectIncompatibleItems : 1;  // 0x240 (0x240)
	char pad_577_1 : 7;  // 0x241 (0x241)
	bool bUpdatedToUseQuery : 1;  // 0x241 (0x241)
	uint8_t TagsToMatch;  // 0x242 (0x242)
	char pad_579[5];  // 0x243 (0x243)
	struct FGameplayTagContainer GameplayTags;  // 0x248 (0x248)


}; 
 
 


// Class AIModule.BlackboardKeyType_Enum
// Size: 0x50(Inherited: 0x30)
struct UBlackboardKeyType_Enum : UBlackboardKeyType
{
	struct UEnum* EnumType;  // 0x30 (0x30)
	struct FString EnumName;  // 0x38 (0x38)
	char bIsEnumNameValid : 1;  // 0x48 (0x48)
	char pad_72_1 : 7;  // 0x48 (0x48)
	char pad_73[8];  // 0x49 (0x49)


}; 
 
 


// Class AIModule.BlackboardKeyType_Float
// Size: 0x30(Inherited: 0x30)
struct UBlackboardKeyType_Float : UBlackboardKeyType
{


}; 
 
 


// Class AIModule.BTCompositeNode
// Size: 0x90(Inherited: 0x58)
struct UBTCompositeNode : UBTNode
{
	struct TArray<struct FBTCompositeChild> Children;  // 0x58 (0x58)
	struct TArray<struct UBTService*> Services;  // 0x68 (0x68)
	char pad_120[16];  // 0x78 (0x78)
	char bApplyDecoratorScope : 1;  // 0x88 (0x88)
	char pad_136_1 : 7;  // 0x88 (0x88)
	char pad_137[8];  // 0x89 (0x89)


}; 
 
 


// Class AIModule.BlackboardKeyType_NativeEnum
// Size: 0x48(Inherited: 0x30)
struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType
{
	struct FString EnumName;  // 0x30 (0x30)
	struct UEnum* EnumType;  // 0x40 (0x40)


}; 
 
 


// Class AIModule.EnvQueryTest_Random
// Size: 0x1F8(Inherited: 0x1F8)
struct UEnvQueryTest_Random : UEnvQueryTest
{


}; 
 
 


// Class AIModule.BlackboardKeyType_Rotator
// Size: 0x30(Inherited: 0x30)
struct UBlackboardKeyType_Rotator : UBlackboardKeyType
{


}; 
 
 


// Class AIModule.BlackboardKeyType_String
// Size: 0x40(Inherited: 0x30)
struct UBlackboardKeyType_String : UBlackboardKeyType
{
	struct FString StringValue;  // 0x30 (0x30)


}; 
 
 


// Class AIModule.BTComposite_Selector
// Size: 0x90(Inherited: 0x90)
struct UBTComposite_Selector : UBTCompositeNode
{


}; 
 
 


// Class AIModule.BTComposite_Sequence
// Size: 0x90(Inherited: 0x90)
struct UBTComposite_Sequence : UBTCompositeNode
{


}; 
 
 


// Class AIModule.BTComposite_SimpleParallel
// Size: 0x98(Inherited: 0x90)
struct UBTComposite_SimpleParallel : UBTCompositeNode
{
	enum class EBTParallelMode FinishMode;  // 0x90 (0x90)
	char pad_145[7];  // 0x91 (0x91)


}; 
 
 


// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xC0(Inherited: 0x68)
struct UBTDecorator_CompareBBEntries : UBTDecorator
{
	enum class EBlackBoardEntryComparison Operator;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct FBlackboardKeySelector BlackboardKeyA;  // 0x70 (0x70)
	struct FBlackboardKeySelector BlackboardKeyB;  // 0x98 (0x98)


}; 
 
 


// Class AIModule.BTService_BlueprintBase
// Size: 0x98(Inherited: 0x70)
struct UBTService_BlueprintBase : UBTService
{
	struct AAIController* AIOwner;  // 0x70 (0x70)
	struct AActor* ActorOwner;  // 0x78 (0x78)
	char pad_128[16];  // 0x80 (0x80)
	char bShowPropertyDetails : 1;  // 0x90 (0x90)
	char bShowEventDetails : 1;  // 0x90 (0x90)
	char pad_144_1 : 6;  // 0x90 (0x90)
	char pad_145[8];  // 0x91 (0x91)


	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTick
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	void ReceiveSearchStart(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	void ReceiveDeactivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
	void ReceiveActivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveActivation
	bool IsServiceActive(); // Function AIModule.BTService_BlueprintBase.IsServiceActive
}; 
 
 


// Class AIModule.BTDecorator_ConditionalLoop
// Size: 0xC0(Inherited: 0xC0)
struct UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard
{


}; 
 
 


// Class AIModule.BTDecorator_ConeCheck
// Size: 0xF0(Inherited: 0x68)
struct UBTDecorator_ConeCheck : UBTDecorator
{
	float ConeHalfAngle;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)
	struct FBlackboardKeySelector ConeOrigin;  // 0x70 (0x70)
	struct FBlackboardKeySelector ConeDirection;  // 0x98 (0x98)
	struct FBlackboardKeySelector Observed;  // 0xC0 (0xC0)
	char pad_232[8];  // 0xE8 (0xE8)


}; 
 
 


// Class AIModule.BTDecorator_Cooldown
// Size: 0x70(Inherited: 0x68)
struct UBTDecorator_Cooldown : UBTDecorator
{
	float CoolDownTime;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 


// Class AIModule.BTDecorator_DoesPathExist
// Size: 0xC8(Inherited: 0x68)
struct UBTDecorator_DoesPathExist : UBTDecorator
{
	struct FBlackboardKeySelector BlackboardKeyA;  // 0x68 (0x68)
	struct FBlackboardKeySelector BlackboardKeyB;  // 0x90 (0x90)
	char bUseSelf : 1;  // 0xB8 (0xB8)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	char pad_185[4];  // 0xB9 (0xB9)
	enum class EPathExistanceQueryType PathQueryType;  // 0xBC (0xBC)
	char pad_189[3];  // 0xBD (0xBD)
	UNavigationQueryFilter* FilterClass;  // 0xC0 (0xC0)


}; 
 
 


// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x68(Inherited: 0x68)
struct UBTDecorator_ForceSuccess : UBTDecorator
{


}; 
 
 


// Class AIModule.BTDecorator_IsAtLocation
// Size: 0xD8(Inherited: 0x90)
struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase
{
	float AcceptableRadius;  // 0x90 (0x90)
	char pad_148[4];  // 0x94 (0x94)
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius;  // 0x98 (0x98)
	uint8_t GeometricDistanceType;  // 0xD0 (0xD0)
	char pad_209[3];  // 0xD1 (0xD1)
	char bUseParametrizedRadius : 1;  // 0xD4 (0xD4)
	char bUseNavAgentGoalLocation : 1;  // 0xD4 (0xD4)
	char bPathFindingBasedTest : 1;  // 0xD4 (0xD4)
	char pad_212_1 : 5;  // 0xD4 (0xD4)
	char pad_213[4];  // 0xD5 (0xD5)


}; 
 
 


// Class AIModule.BTDecorator_IsBBEntryOfClass
// Size: 0x98(Inherited: 0x90)
struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase
{
	UObject* TestClass;  // 0x90 (0x90)


}; 
 
 


// Class AIModule.BTDecorator_KeepInCone
// Size: 0xC8(Inherited: 0x68)
struct UBTDecorator_KeepInCone : UBTDecorator
{
	float ConeHalfAngle;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)
	struct FBlackboardKeySelector ConeOrigin;  // 0x70 (0x70)
	struct FBlackboardKeySelector Observed;  // 0x98 (0x98)
	char bUseSelfAsOrigin : 1;  // 0xC0 (0xC0)
	char bUseSelfAsObserved : 1;  // 0xC0 (0xC0)
	char pad_192_1 : 6;  // 0xC0 (0xC0)
	char pad_193[8];  // 0xC1 (0xC1)


}; 
 
 


// Class AIModule.BTDecorator_Loop
// Size: 0x78(Inherited: 0x68)
struct UBTDecorator_Loop : UBTDecorator
{
	int32_t NumLoops;  // 0x68 (0x68)
	char pad_108_1 : 7;  // 0x6C (0x6C)
	bool bInfiniteLoop : 1;  // 0x6C (0x6C)
	char pad_109[3];  // 0x6D (0x6D)
	float InfiniteLoopTimeoutTime;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)


}; 
 
 


// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x68(Inherited: 0x68)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator
{


}; 
 
 


// Class AIModule.CrowdFollowingComponent
// Size: 0x308(Inherited: 0x2B8)
struct UCrowdFollowingComponent : UPathFollowingComponent
{
	char pad_696[24];  // 0x2B8 (0x2B8)
	struct FVector CrowdAgentMoveDirection;  // 0x2D0 (0x2D0)
	char pad_744[32];  // 0x2E8 (0x2E8)


	void SuspendCrowdSteering(bool bSuspend); // Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
}; 
 
 


// Class AIModule.BTDecorator_SetTagCooldown
// Size: 0x78(Inherited: 0x68)
struct UBTDecorator_SetTagCooldown : UBTDecorator
{
	struct FGameplayTag CooldownTag;  // 0x68 (0x68)
	float CooldownDuration;  // 0x70 (0x70)
	char pad_116_1 : 7;  // 0x74 (0x74)
	bool bAddToExistingDuration : 1;  // 0x74 (0x74)
	char pad_117[3];  // 0x75 (0x75)


}; 
 
 


// Class AIModule.BTDecorator_TagCooldown
// Size: 0x78(Inherited: 0x68)
struct UBTDecorator_TagCooldown : UBTDecorator
{
	struct FGameplayTag CooldownTag;  // 0x68 (0x68)
	float CooldownDuration;  // 0x70 (0x70)
	char pad_116_1 : 7;  // 0x74 (0x74)
	bool bAddToExistingDuration : 1;  // 0x74 (0x74)
	char pad_117_1 : 7;  // 0x75 (0x75)
	bool bActivatesCooldown : 1;  // 0x75 (0x75)
	char pad_118[2];  // 0x76 (0x76)


}; 
 
 


// Class AIModule.BTDecorator_TimeLimit
// Size: 0x70(Inherited: 0x68)
struct UBTDecorator_TimeLimit : UBTDecorator
{
	float TimeLimit;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 


// Class AIModule.BTService_BlackboardBase
// Size: 0x98(Inherited: 0x70)
struct UBTService_BlackboardBase : UBTService
{
	struct FBlackboardKeySelector BlackboardKey;  // 0x70 (0x70)


}; 
 
 


// Class AIModule.BTService_DefaultFocus
// Size: 0xA0(Inherited: 0x98)
struct UBTService_DefaultFocus : UBTService_BlackboardBase
{
	char FocusPriority;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)


}; 
 
 


// Class AIModule.BTTask_BlackboardBase
// Size: 0x98(Inherited: 0x70)
struct UBTTask_BlackboardBase : UBTTaskNode
{
	struct FBlackboardKeySelector BlackboardKey;  // 0x70 (0x70)


}; 
 
 


// Class AIModule.AIDataProvider_Random
// Size: 0x50(Inherited: 0x40)
struct UAIDataProvider_Random : UAIDataProvider_QueryParams
{
	float Min;  // 0x40 (0x40)
	float Max;  // 0x44 (0x44)
	char bInteger : 1;  // 0x48 (0x48)
	char pad_72_1 : 7;  // 0x48 (0x48)
	char pad_73[8];  // 0x49 (0x49)


}; 
 
 


// Class AIModule.BTTask_FinishWithResult
// Size: 0x78(Inherited: 0x70)
struct UBTTask_FinishWithResult : UBTTaskNode
{
	enum class EBTNodeResult Result;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)


}; 
 
 


// Class AIModule.BTTask_GameplayTaskBase
// Size: 0x78(Inherited: 0x70)
struct UBTTask_GameplayTaskBase : UBTTaskNode
{
	char bWaitForGameplayTask : 1;  // 0x70 (0x70)
	char pad_112_1 : 7;  // 0x70 (0x70)
	char pad_113[8];  // 0x71 (0x71)


}; 
 
 


// Class AIModule.BTTask_MakeNoise
// Size: 0x78(Inherited: 0x70)
struct UBTTask_MakeNoise : UBTTaskNode
{
	float Loudnes;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)


}; 
 
 


// Class AIModule.BTTask_MoveTo
// Size: 0xB0(Inherited: 0x98)
struct UBTTask_MoveTo : UBTTask_BlackboardBase
{
	float AcceptableRadius;  // 0x98 (0x98)
	char pad_156[4];  // 0x9C (0x9C)
	UNavigationQueryFilter* FilterClass;  // 0xA0 (0xA0)
	float ObservedBlackboardValueTolerance;  // 0xA8 (0xA8)
	char bObserveBlackboardValue : 1;  // 0xAC (0xAC)
	char bAllowStrafe : 1;  // 0xAC (0xAC)
	char bAllowPartialPath : 1;  // 0xAC (0xAC)
	char bTrackMovingGoal : 1;  // 0xAC (0xAC)
	char bProjectGoalLocation : 1;  // 0xAC (0xAC)
	char bReachTestIncludesAgentRadius : 1;  // 0xAC (0xAC)
	char bReachTestIncludesGoalRadius : 1;  // 0xAC (0xAC)
	char bStopOnOverlap : 1;  // 0xAC (0xAC)
	char bStopOnOverlapNeedsUpdate : 1;  // 0xAD (0xAD)
	char pad_173_1 : 7;  // 0xAD (0xAD)
	char pad_174[3];  // 0xAE (0xAE)


}; 
 
 


// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xB8(Inherited: 0xB0)
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo
{
	char bDisablePathUpdateOnGoalLocationChange : 1;  // 0xB0 (0xB0)
	char bProjectVectorGoalToNavigation : 1;  // 0xB0 (0xB0)
	char bUpdatedDeprecatedProperties : 1;  // 0xB0 (0xB0)
	char pad_176_1 : 5;  // 0xB0 (0xB0)
	char pad_177[8];  // 0xB1 (0xB1)


}; 
 
 


// Class AIModule.EnvQueryTest_Project
// Size: 0x238(Inherited: 0x1F8)
struct UEnvQueryTest_Project : UEnvQueryTest
{
	struct FEnvTraceData ProjectionData;  // 0x1F8 (0x1F8)


}; 
 
 


// Class AIModule.BTTask_PlaySound
// Size: 0x78(Inherited: 0x70)
struct UBTTask_PlaySound : UBTTaskNode
{
	struct USoundCue* SoundToPlay;  // 0x70 (0x70)


}; 
 
 


// Class AIModule.BTTask_PawnActionBase
// Size: 0x70(Inherited: 0x70)
struct UBTTask_PawnActionBase : UBTTaskNode
{


}; 
 
 


// Class AIModule.BTTask_PlayAnimation
// Size: 0xB0(Inherited: 0x70)
struct UBTTask_PlayAnimation : UBTTaskNode
{
	struct UAnimationAsset* AnimationToPlay;  // 0x70 (0x70)
	char bLooping : 1;  // 0x78 (0x78)
	char bNonBlocking : 1;  // 0x78 (0x78)
	char pad_120_1 : 6;  // 0x78 (0x78)
	char pad_121[8];  // 0x79 (0x79)
	struct UBehaviorTreeComponent* MyOwnerComp;  // 0x80 (0x80)
	struct USkeletalMeshComponent* CachedSkelMesh;  // 0x88 (0x88)
	char pad_144[32];  // 0x90 (0x90)


}; 
 
 


// Class AIModule.BTTask_PushPawnAction
// Size: 0x78(Inherited: 0x70)
struct UBTTask_PushPawnAction : UBTTask_PawnActionBase
{
	struct UPawnAction* Action;  // 0x70 (0x70)


}; 
 
 


// Class AIModule.BTTask_RotateToFaceBBEntry
// Size: 0xA0(Inherited: 0x98)
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase
{
	float Precision;  // 0x98 (0x98)
	char pad_156[4];  // 0x9C (0x9C)


}; 
 
 


// Class AIModule.BTTask_RunBehaviorDynamic
// Size: 0x88(Inherited: 0x70)
struct UBTTask_RunBehaviorDynamic : UBTTaskNode
{
	struct FGameplayTag InjectionTag;  // 0x70 (0x70)
	struct UBehaviorTree* DefaultBehaviorAsset;  // 0x78 (0x78)
	struct UBehaviorTree* BehaviorAsset;  // 0x80 (0x80)


}; 
 
 


// Class AIModule.BTTask_RunEQSQuery
// Size: 0x158(Inherited: 0x98)
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase
{
	struct UEnvQuery* QueryTemplate;  // 0x98 (0x98)
	struct TArray<struct FEnvNamedValue> QueryParams;  // 0xA0 (0xA0)
	struct TArray<struct FAIDynamicParam> QueryConfig;  // 0xB0 (0xB0)
	enum class EEnvQueryRunMode RunMode;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)
	struct FBlackboardKeySelector EQSQueryBlackboardKey;  // 0xC8 (0xC8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool bUseBBKey : 1;  // 0xF0 (0xF0)
	char pad_241[7];  // 0xF1 (0xF1)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;  // 0xF8 (0xF8)
	char pad_320_1 : 7;  // 0x140 (0x140)
	bool bUpdateBBOnFail : 1;  // 0x140 (0x140)
	char pad_321[23];  // 0x141 (0x141)


}; 
 
 


// Class AIModule.BTTask_SetTagCooldown
// Size: 0x80(Inherited: 0x70)
struct UBTTask_SetTagCooldown : UBTTaskNode
{
	struct FGameplayTag CooldownTag;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool bAddToExistingDuration : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	float CooldownDuration;  // 0x7C (0x7C)


}; 
 
 


// Class AIModule.BTTask_Wait
// Size: 0x78(Inherited: 0x70)
struct UBTTask_Wait : UBTTaskNode
{
	float WaitTime;  // 0x70 (0x70)
	float RandomDeviation;  // 0x74 (0x74)


}; 
 
 


// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x28(Inherited: 0x28)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary
{


	void UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic); // Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	struct APawn* SpawnAIFromClass(struct UObject* WorldContextObject, APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail, struct AActor* Owner); // Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	void SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
	void SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, bool bSuccess); // Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
	void LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic); // Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	bool IsValidAIRotation(struct FRotator Rotation); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	bool IsValidAILocation(struct FVector Location); // Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	bool IsValidAIDirection(struct FVector DirectionVector); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
	int32_t GetNextNavLinkIndex(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
	struct TArray<struct FVector> GetCurrentPathPoints(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
	int32_t GetCurrentPathIndex(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
	struct UNavigationPath* GetCurrentPath(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
	struct UBlackboardComponent* GetBlackboard(struct AActor* Target); // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
	struct AAIController* GetAIController(struct AActor* ControlledActor); // Function AIModule.AIBlueprintHelperLibrary.GetAIController
	struct UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
}; 
 
 


// Class AIModule.AIDataProvider_QueryParams
// Size: 0x40(Inherited: 0x28)
struct UAIDataProvider_QueryParams : UAIDataProvider
{
	struct FName ParamName;  // 0x28 (0x28)
	float FloatValue;  // 0x30 (0x30)
	int32_t IntValue;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool BoolValue : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 


// Class AIModule.DetourCrowdAIController
// Size: 0x3B8(Inherited: 0x3B8)
struct ADetourCrowdAIController : AAIController
{


}; 
 
 


// Class AIModule.EnvQueryContext
// Size: 0x28(Inherited: 0x28)
struct UEnvQueryContext : UObject
{


}; 
 
 


// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x30(Inherited: 0x28)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext
{
	char pad_40[8];  // 0x28 (0x28)


	void ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	void ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor*& ResultingActor); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	void ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector>& ResultingLocationSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	void ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*>& ResultingActorsSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
}; 
 
 


// Class AIModule.EnvQueryTest_Distance
// Size: 0x208(Inherited: 0x1F8)
struct UEnvQueryTest_Distance : UEnvQueryTest
{
	enum class EEnvTestDistance TestMode;  // 0x1F8 (0x1F8)
	char pad_505[7];  // 0x1F9 (0x1F9)
	UEnvQueryContext* DistanceTo;  // 0x200 (0x200)


}; 
 
 


// Class AIModule.EnvQueryContext_Item
// Size: 0x28(Inherited: 0x28)
struct UEnvQueryContext_Item : UEnvQueryContext
{


}; 
 
 


// Class AIModule.EnvQueryContext_Querier
// Size: 0x28(Inherited: 0x28)
struct UEnvQueryContext_Querier : UEnvQueryContext
{


}; 
 
 


// Class AIModule.EnvQuery
// Size: 0x48(Inherited: 0x30)
struct UEnvQuery : UDataAsset
{
	struct FName QueryName;  // 0x30 (0x30)
	struct TArray<struct UEnvQueryOption*> Options;  // 0x38 (0x38)


}; 
 
 


// Class AIModule.EnvQueryDebugHelpers
// Size: 0x28(Inherited: 0x28)
struct UEnvQueryDebugHelpers : UObject
{


}; 
 
 


// Class AIModule.EnvQueryGenerator
// Size: 0x50(Inherited: 0x30)
struct UEnvQueryGenerator : UEnvQueryNode
{
	struct FString OptionName;  // 0x30 (0x30)
	UEnvQueryItemType* ItemType;  // 0x40 (0x40)
	char bAutoSortTests : 1;  // 0x48 (0x48)
	char pad_72_1 : 7;  // 0x48 (0x48)
	char pad_73[8];  // 0x49 (0x49)


}; 
 
 


// Class AIModule.EnvQueryInstanceBlueprintWrapper
// Size: 0x78(Inherited: 0x28)
struct UEnvQueryInstanceBlueprintWrapper : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	int32_t QueryID;  // 0x30 (0x30)
	char pad_52[36];  // 0x34 (0x34)
	UEnvQueryItemType* ItemType;  // 0x58 (0x58)
	int32_t OptionIndex;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)
	struct FMulticastInlineDelegate OnQueryFinishedEvent;  // 0x68 (0x68)


	void SetNamedParam(struct FName ParamName, float Value); // Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
	struct TArray<struct FVector> GetResultsAsLocations(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	struct TArray<struct AActor*> GetResultsAsActors(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	bool GetQueryResultsAsLocations(struct TArray<struct FVector>& ResultLocations); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
	bool GetQueryResultsAsActors(struct TArray<struct AActor*>& ResultActors); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
	float GetItemScore(int32_t ItemIndex); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	void EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
}; 
 
 


// Class AIModule.EnvQueryItemType_Direction
// Size: 0x30(Inherited: 0x30)
struct UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase
{


}; 
 
 


// Class AIModule.EnvQueryOption
// Size: 0x40(Inherited: 0x28)
struct UEnvQueryOption : UObject
{
	struct UEnvQueryGenerator* Generator;  // 0x28 (0x28)
	struct TArray<struct UEnvQueryTest*> Tests;  // 0x30 (0x30)


}; 
 
 


// Class AIModule.EQSRenderingComponent
// Size: 0x5C0(Inherited: 0x590)
struct UEQSRenderingComponent : UDebugDrawComponent
{
	char pad_1424[48];  // 0x590 (0x590)


}; 
 
 


// Class AIModule.EQSTestingPawn
// Size: 0x6C0(Inherited: 0x620)
struct AEQSTestingPawn : ACharacter
{
	struct UEnvQuery* QueryTemplate;  // 0x620 (0x620)
	struct TArray<struct FEnvNamedValue> QueryParams;  // 0x628 (0x628)
	struct TArray<struct FAIDynamicParam> QueryConfig;  // 0x638 (0x638)
	float TimeLimitPerStep;  // 0x648 (0x648)
	int32_t StepToDebugDraw;  // 0x64C (0x64C)
	uint8_t HighlightMode;  // 0x650 (0x650)
	char pad_1617[3];  // 0x651 (0x651)
	char bDrawLabels : 1;  // 0x654 (0x654)
	char bDrawFailedItems : 1;  // 0x654 (0x654)
	char bReRunQueryOnlyOnFinishedMove : 1;  // 0x654 (0x654)
	char bShouldBeVisibleInGame : 1;  // 0x654 (0x654)
	char bTickDuringGame : 1;  // 0x654 (0x654)
	char pad_1620_1 : 3;  // 0x654 (0x654)
	char pad_1621[4];  // 0x655 (0x655)
	enum class EEnvQueryRunMode QueryingMode;  // 0x658 (0x658)
	char pad_1625[7];  // 0x659 (0x659)
	struct FNavAgentProperties NavAgentProperties;  // 0x660 (0x660)
	char pad_1688[40];  // 0x698 (0x698)


}; 
 
 


// Class AIModule.EnvQueryGenerator_ActorsOfClass
// Size: 0xD0(Inherited: 0x50)
struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator
{
	AActor* SearchedActorClass;  // 0x50 (0x50)
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius;  // 0x58 (0x58)
	struct FAIDataProviderFloatValue SearchRadius;  // 0x90 (0x90)
	UEnvQueryContext* SearchCenter;  // 0xC8 (0xC8)


}; 
 
 


// Class AIModule.EnvQueryGenerator_BlueprintBase
// Size: 0x88(Inherited: 0x50)
struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator
{
	struct FText GeneratorsActionDescription;  // 0x50 (0x50)
	UEnvQueryContext* Context;  // 0x68 (0x68)
	UEnvQueryItemType* GeneratedItemType;  // 0x70 (0x70)
	char pad_120[16];  // 0x78 (0x78)


	struct UObject* GetQuerier(); // Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	void DoItemGenerationFromActors(struct TArray<struct AActor*>& ContextActors); // Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGenerationFromActors
	void DoItemGeneration(struct TArray<struct FVector>& ContextLocations); // Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	void AddGeneratedVector(struct FVector GeneratedVector); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	void AddGeneratedActor(struct AActor* GeneratedActor); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
}; 
 
 


// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x70(Inherited: 0x50)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator
{
	struct TArray<struct UEnvQueryGenerator*> Generators;  // 0x50 (0x50)
	char bAllowDifferentItemTypes : 1;  // 0x60 (0x60)
	char bHasMatchingItemType : 1;  // 0x60 (0x60)
	char pad_96_1 : 6;  // 0x60 (0x60)
	char pad_97[8];  // 0x61 (0x61)
	UEnvQueryItemType* ForcedItemType;  // 0x68 (0x68)


}; 
 
 


// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x230(Inherited: 0x90)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue CircleRadius;  // 0x90 (0x90)
	struct FAIDataProviderFloatValue SpaceBetween;  // 0xC8 (0xC8)
	struct FAIDataProviderIntValue NumberOfPoints;  // 0x100 (0x100)
	uint8_t PointOnCircleSpacingMethod;  // 0x138 (0x138)
	char pad_313[7];  // 0x139 (0x139)
	struct FEnvDirection ArcDirection;  // 0x140 (0x140)
	struct FAIDataProviderFloatValue ArcAngle;  // 0x160 (0x160)
	float AngleRadians;  // 0x198 (0x198)
	char pad_412[4];  // 0x19C (0x19C)
	UEnvQueryContext* CircleCenter;  // 0x1A0 (0x1A0)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool bIgnoreAnyContextActorsWhenGeneratingCircle : 1;  // 0x1A8 (0x1A8)
	char pad_425[7];  // 0x1A9 (0x1A9)
	struct FAIDataProviderFloatValue CircleCenterZOffset;  // 0x1B0 (0x1B0)
	struct FEnvTraceData TraceData;  // 0x1E8 (0x1E8)
	char bDefineArc : 1;  // 0x228 (0x228)
	char pad_552_1 : 7;  // 0x228 (0x228)
	char pad_553[8];  // 0x229 (0x229)


}; 
 
 


// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x90(Inherited: 0x50)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator
{
	struct FEnvTraceData ProjectionData;  // 0x50 (0x50)


}; 
 
 


// Class AIModule.EnvQueryGenerator_Cone
// Size: 0x180(Inherited: 0x90)
struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue AlignedPointsDistance;  // 0x90 (0x90)
	struct FAIDataProviderFloatValue ConeDegrees;  // 0xC8 (0xC8)
	struct FAIDataProviderFloatValue AngleStep;  // 0x100 (0x100)
	struct FAIDataProviderFloatValue Range;  // 0x138 (0x138)
	UEnvQueryContext* CenterActor;  // 0x170 (0x170)
	char bIncludeContextLocation : 1;  // 0x178 (0x178)
	char pad_376_1 : 7;  // 0x178 (0x178)
	char pad_377[8];  // 0x179 (0x179)


}; 
 
 


// Class AIModule.EnvQueryGenerator_CurrentLocation
// Size: 0x58(Inherited: 0x50)
struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator
{
	UEnvQueryContext* QueryContext;  // 0x50 (0x50)


}; 
 
 


// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0x108(Inherited: 0x90)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue GridSize;  // 0x90 (0x90)
	struct FAIDataProviderFloatValue SpaceBetween;  // 0xC8 (0xC8)
	UEnvQueryContext* GenerateAround;  // 0x100 (0x100)


}; 
 
 


// Class AIModule.EnvQueryTest_Volume
// Size: 0x210(Inherited: 0x1F8)
struct UEnvQueryTest_Volume : UEnvQueryTest
{
	UEnvQueryContext* VolumeContext;  // 0x1F8 (0x1F8)
	AVolume* VolumeClass;  // 0x200 (0x200)
	char bDoComplexVolumeTest : 1;  // 0x208 (0x208)
	char pad_520_1 : 7;  // 0x208 (0x208)
	char pad_521[8];  // 0x209 (0x209)


}; 
 
 


// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x180(Inherited: 0x108)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid
{
	struct FAIDataProviderBoolValue PathToItem;  // 0x108 (0x108)
	UNavigationQueryFilter* NavigationFilter;  // 0x140 (0x140)
	struct FAIDataProviderFloatValue ScanRangeMultiplier;  // 0x148 (0x148)


}; 
 
 


// Class AIModule.EnvQueryGenerator_PerceivedActors
// Size: 0xA8(Inherited: 0x50)
struct UEnvQueryGenerator_PerceivedActors : UEnvQueryGenerator
{
	AActor* AllowedActorClass;  // 0x50 (0x50)
	struct FAIDataProviderFloatValue SearchRadius;  // 0x58 (0x58)
	UEnvQueryContext* ListenerContext;  // 0x90 (0x90)
	UAISense* SenseToUse;  // 0x98 (0x98)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool bIncludeKnownActors : 1;  // 0xA0 (0xA0)
	char pad_161[7];  // 0xA1 (0xA1)


}; 
 
 


// Class AIModule.EnvQueryItemType
// Size: 0x30(Inherited: 0x28)
struct UEnvQueryItemType : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class AIModule.EnvQueryItemType_VectorBase
// Size: 0x30(Inherited: 0x30)
struct UEnvQueryItemType_VectorBase : UEnvQueryItemType
{


}; 
 
 


// Class AIModule.EnvQueryItemType_ActorBase
// Size: 0x30(Inherited: 0x30)
struct UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase
{


}; 
 
 


// Class AIModule.EnvQueryItemType_Actor
// Size: 0x30(Inherited: 0x30)
struct UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase
{


}; 
 
 


// Class AIModule.EnvQueryItemType_Point
// Size: 0x30(Inherited: 0x30)
struct UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase
{


}; 
 
 


// Class AIModule.EnvQueryTest_Dot
// Size: 0x240(Inherited: 0x1F8)
struct UEnvQueryTest_Dot : UEnvQueryTest
{
	struct FEnvDirection LineA;  // 0x1F8 (0x1F8)
	struct FEnvDirection LineB;  // 0x218 (0x218)
	uint8_t TestMode;  // 0x238 (0x238)
	char pad_569_1 : 7;  // 0x239 (0x239)
	bool bAbsoluteValue : 1;  // 0x239 (0x239)
	char pad_570[6];  // 0x23A (0x23A)


}; 
 
 


// Class AIModule.EnvQueryTest_Overlap
// Size: 0x228(Inherited: 0x1F8)
struct UEnvQueryTest_Overlap : UEnvQueryTest
{
	struct FEnvOverlapData OverlapData;  // 0x1F8 (0x1F8)


}; 
 
 


// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x280(Inherited: 0x1F8)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest
{
	enum class EEnvTestPathfinding TestMode;  // 0x1F8 (0x1F8)
	char pad_505[7];  // 0x1F9 (0x1F9)
	UEnvQueryContext* Context;  // 0x200 (0x200)
	struct FAIDataProviderBoolValue PathFromContext;  // 0x208 (0x208)
	struct FAIDataProviderBoolValue SkipUnreachable;  // 0x240 (0x240)
	UNavigationQueryFilter* FilterClass;  // 0x278 (0x278)


}; 
 
 


// Class AIModule.EnvQueryTest_PathfindingBatch
// Size: 0x2B8(Inherited: 0x280)
struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding
{
	struct FAIDataProviderFloatValue ScanRangeMultiplier;  // 0x280 (0x280)


}; 
 
 


// Class AIModule.VisualLoggerExtension
// Size: 0x28(Inherited: 0x28)
struct UVisualLoggerExtension : UObject
{


}; 
 
 


// Class AIModule.EnvQueryTest_Trace
// Size: 0x2E8(Inherited: 0x1F8)
struct UEnvQueryTest_Trace : UEnvQueryTest
{
	struct FEnvTraceData TraceData;  // 0x1F8 (0x1F8)
	struct FAIDataProviderBoolValue TraceFromContext;  // 0x238 (0x238)
	struct FAIDataProviderFloatValue ItemHeightOffset;  // 0x270 (0x270)
	struct FAIDataProviderFloatValue ContextHeightOffset;  // 0x2A8 (0x2A8)
	UEnvQueryContext* Context;  // 0x2E0 (0x2E0)


}; 
 
 


// Class AIModule.GridPathAIController
// Size: 0x3B8(Inherited: 0x3B8)
struct AGridPathAIController : AAIController
{


}; 
 
 


// Class AIModule.AIHotSpotManager
// Size: 0x28(Inherited: 0x28)
struct UAIHotSpotManager : UObject
{


}; 
 
 


// Class AIModule.PathFollowingComponent
// Size: 0x2B8(Inherited: 0xA0)
struct UPathFollowingComponent : UActorComponent
{
	char pad_160[56];  // 0xA0 (0xA0)
	struct UNavMovementComponent* MovementComp;  // 0xD8 (0xD8)
	char pad_224[8];  // 0xE0 (0xE0)
	struct ANavigationData* MyNavData;  // 0xE8 (0xE8)
	char pad_240[456];  // 0xF0 (0xF0)


	void OnNavDataRegistered(struct ANavigationData* NavData); // Function AIModule.PathFollowingComponent.OnNavDataRegistered
	void OnActorBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function AIModule.PathFollowingComponent.OnActorBump
	struct FVector GetPathDestination(); // Function AIModule.PathFollowingComponent.GetPathDestination
	enum class EPathFollowingAction GetPathActionType(); // Function AIModule.PathFollowingComponent.GetPathActionType
}; 
 
 


// Class AIModule.CrowdManager
// Size: 0xF0(Inherited: 0x28)
struct UCrowdManager : UCrowdManagerBase
{
	struct ANavigationData* MyNavData;  // 0x28 (0x28)
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig;  // 0x30 (0x30)
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns;  // 0x40 (0x40)
	int32_t MaxAgents;  // 0x50 (0x50)
	float MaxAgentRadius;  // 0x54 (0x54)
	int32_t MaxAvoidedAgents;  // 0x58 (0x58)
	int32_t MaxAvoidedWalls;  // 0x5C (0x5C)
	float NavmeshCheckInterval;  // 0x60 (0x60)
	float PathOptimizationInterval;  // 0x64 (0x64)
	float SeparationDirClamp;  // 0x68 (0x68)
	float PathOffsetRadiusMultiplier;  // 0x6C (0x6C)
	char pad_112_1 : 4;  // 0x70 (0x70)
	char bResolveCollisions : 1;  // 0x70 (0x70)
	char pad_112_2 : 3;  // 0x70 (0x70)
	char pad_113[128];  // 0x71 (0x71)


}; 
 
 


// Class AIModule.GridPathFollowingComponent
// Size: 0x2E8(Inherited: 0x2B8)
struct UGridPathFollowingComponent : UPathFollowingComponent
{
	struct UNavLocalGridManager* GridManager;  // 0x2B8 (0x2B8)
	char pad_704[40];  // 0x2C0 (0x2C0)


}; 
 
 


// Class AIModule.NavFilter_AIControllerDefault
// Size: 0x48(Inherited: 0x48)
struct UNavFilter_AIControllerDefault : UNavigationQueryFilter
{


}; 
 
 


// Class AIModule.NavLinkProxy
// Size: 0x2E0(Inherited: 0x290)
struct ANavLinkProxy : AActor
{
	char pad_656[16];  // 0x290 (0x290)
	struct TArray<struct FNavigationLink> PointLinks;  // 0x2A0 (0x2A0)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks;  // 0x2B0 (0x2B0)
	struct UNavLinkCustomComponent* SmartLinkComp;  // 0x2C0 (0x2C0)
	char pad_712_1 : 7;  // 0x2C8 (0x2C8)
	bool bSmartLinkIsRelevant : 1;  // 0x2C8 (0x2C8)
	char pad_713[7];  // 0x2C9 (0x2C9)
	struct FMulticastInlineDelegate OnSmartLinkReached;  // 0x2D0 (0x2D0)


	void SetSmartLinkEnabled(bool bEnabled); // Function AIModule.NavLinkProxy.SetSmartLinkEnabled
	void ResumePathFollowing(struct AActor* Agent); // Function AIModule.NavLinkProxy.ResumePathFollowing
	void ReceiveSmartLinkReached(struct AActor* Agent, struct FVector& Destination); // Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
	bool IsSmartLinkEnabled(); // Function AIModule.NavLinkProxy.IsSmartLinkEnabled
	bool HasMovingAgents(); // Function AIModule.NavLinkProxy.HasMovingAgents
}; 
 
 


// Class AIModule.NavLocalGridManager
// Size: 0x58(Inherited: 0x28)
struct UNavLocalGridManager : UObject
{
	char pad_40[48];  // 0x28 (0x28)


	bool SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize); // Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
	void RemoveLocalNavigationGrid(struct UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
	bool FindLocalNavigationGridPath(struct UObject* WorldContextObject, struct FVector& Start, struct FVector& End, struct TArray<struct FVector>& PathPoints); // Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
	int32_t AddLocalNavigationGridForPoints(struct UObject* WorldContextObject, struct TArray<struct FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
	int32_t AddLocalNavigationGridForPoint(struct UObject* WorldContextObject, struct FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
	int32_t AddLocalNavigationGridForCapsule(struct UObject* WorldContextObject, struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
	int32_t AddLocalNavigationGridForBox(struct UObject* WorldContextObject, struct FVector& Location, struct FVector Extent, struct FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
}; 
 
 


// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0xB8(Inherited: 0xA0)
struct UAIPerceptionStimuliSourceComponent : UActorComponent
{
	char bAutoRegisterAsSource : 1;  // 0xA0 (0xA0)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	char pad_161[8];  // 0xA1 (0xA1)
	struct TArray<UAISense*> RegisterAsSourceForSenses;  // 0xA8 (0xA8)


	void UnregisterFromSense(UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	void UnregisterFromPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	void RegisterWithPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	void RegisterForSense(UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
}; 
 
 


// Class AIModule.AIPerceptionSystem
// Size: 0x130(Inherited: 0x38)
struct UAIPerceptionSystem : UAISubsystem
{
	char pad_56[80];  // 0x38 (0x38)
	struct TArray<struct UAISense*> Senses;  // 0x88 (0x88)
	float PerceptionAgingRate;  // 0x98 (0x98)
	char pad_156[148];  // 0x9C (0x9C)


	void ReportPerceptionEvent(struct UObject* WorldContextObject, struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
	void ReportEvent(struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportEvent
	bool RegisterPerceptionStimuliSource(struct UObject* WorldContextObject, UAISense* Sense, struct AActor* Target); // Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	void OnPerceptionStimuliSourceEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	UAISense* GetSenseClassForStimulus(struct UObject* WorldContextObject, struct FAIStimulus& Stimulus); // Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
}; 
 
 


// Class AIModule.AISense
// Size: 0x80(Inherited: 0x28)
struct UAISense : UObject
{
	float DefaultExpirationAge;  // 0x28 (0x28)
	uint8_t NotifyType;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	char bWantsNewPawnNotification : 1;  // 0x30 (0x30)
	char bAutoRegisterAllPawnsAsSources : 1;  // 0x30 (0x30)
	char pad_48_1 : 6;  // 0x30 (0x30)
	char pad_49[8];  // 0x31 (0x31)
	struct UAIPerceptionSystem* PerceptionSystemInstance;  // 0x38 (0x38)
	char pad_64[64];  // 0x40 (0x40)


}; 
 
 


// Class AIModule.AISenseConfig_Damage
// Size: 0x50(Inherited: 0x48)
struct UAISenseConfig_Damage : UAISenseConfig
{
	UAISense_Damage* Implementation;  // 0x48 (0x48)


}; 
 
 


// Class AIModule.AISense_Hearing
// Size: 0xE8(Inherited: 0x80)
struct UAISense_Hearing : UAISense
{
	struct TArray<struct FAINoiseEvent> NoiseEvents;  // 0x80 (0x80)
	float SpeedOfSoundSq;  // 0x90 (0x90)
	char pad_148[84];  // 0x94 (0x94)


	void ReportNoiseEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag); // Function AIModule.AISense_Hearing.ReportNoiseEvent
}; 
 
 


// Class AIModule.AISense_Prediction
// Size: 0x90(Inherited: 0x80)
struct UAISense_Prediction : UAISense
{
	struct TArray<struct FAIPredictionEvent> RegisteredEvents;  // 0x80 (0x80)


	void RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
	void RequestControllerPredictionEvent(struct AAIController* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
}; 
 
 


// Class AIModule.AISense_Sight
// Size: 0x170(Inherited: 0x80)
struct UAISense_Sight : UAISense
{
	char pad_128[200];  // 0x80 (0x80)
	int32_t MaxTracesPerTick;  // 0x148 (0x148)
	int32_t MinQueriesPerTimeSliceCheck;  // 0x14C (0x14C)
	double MaxTimeSlicePerTick;  // 0x150 (0x150)
	float HighImportanceQueryDistanceThreshold;  // 0x158 (0x158)
	char pad_348[4];  // 0x15C (0x15C)
	float MaxQueryImportance;  // 0x160 (0x160)
	float SightLimitQueryImportance;  // 0x164 (0x164)
	char pad_360[8];  // 0x168 (0x168)


}; 
 
 


// Class AIModule.AISense_Team
// Size: 0x90(Inherited: 0x80)
struct UAISense_Team : UAISense
{
	struct TArray<struct FAITeamStimulusEvent> RegisteredEvents;  // 0x80 (0x80)


}; 
 
 


// Class AIModule.AISense_Touch
// Size: 0x90(Inherited: 0x80)
struct UAISense_Touch : UAISense
{
	struct TArray<struct FAITouchEvent> RegisteredEvents;  // 0x80 (0x80)


	void ReportTouchEvent(struct UObject* WorldContextObject, struct AActor* TouchReceiver, struct AActor* OtherActor, struct FVector Location); // Function AIModule.AISense_Touch.ReportTouchEvent
}; 
 
 


// Class AIModule.AISightTargetInterface
// Size: 0x28(Inherited: 0x28)
struct UAISightTargetInterface : UInterface
{


}; 
 
 


// Class AIModule.PawnSensingComponent
// Size: 0xE8(Inherited: 0xA0)
struct UPawnSensingComponent : UActorComponent
{
	float HearingThreshold;  // 0xA0 (0xA0)
	float LOSHearingThreshold;  // 0xA4 (0xA4)
	float SightRadius;  // 0xA8 (0xA8)
	float SensingInterval;  // 0xAC (0xAC)
	float HearingMaxSoundAge;  // 0xB0 (0xB0)
	char bEnableSensingUpdates : 1;  // 0xB4 (0xB4)
	char bOnlySensePlayers : 1;  // 0xB4 (0xB4)
	char bSeePawns : 1;  // 0xB4 (0xB4)
	char bHearNoises : 1;  // 0xB4 (0xB4)
	char pad_180_1 : 4;  // 0xB4 (0xB4)
	char pad_181[12];  // 0xB5 (0xB5)
	struct FMulticastInlineDelegate OnSeePawn;  // 0xC0 (0xC0)
	struct FMulticastInlineDelegate OnHearNoise;  // 0xD0 (0xD0)
	float PeripheralVisionAngle;  // 0xE0 (0xE0)
	float PeripheralVisionCosine;  // 0xE4 (0xE4)


	void SetSensingUpdatesEnabled(bool bEnabled); // Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	void SetSensingInterval(float NewSensingInterval); // Function AIModule.PawnSensingComponent.SetSensingInterval
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle); // Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	void SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	void HearNoiseDelegate__DelegateSignature(struct APawn* Instigator, struct FVector& Location, float Volume); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	float GetPeripheralVisionCosine(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	float GetPeripheralVisionAngle(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
}; 
 
 


// Class AIModule.AITask
// Size: 0x70(Inherited: 0x68)
struct UAITask : UGameplayTask
{
	struct AAIController* OwnerController;  // 0x68 (0x68)


}; 
 
 


// Class AIModule.AITask_LockLogic
// Size: 0x70(Inherited: 0x70)
struct UAITask_LockLogic : UAITask
{


}; 
 
 


// Class AIModule.AITask_RunEQS
// Size: 0xE8(Inherited: 0x70)
struct UAITask_RunEQS : UAITask
{
	char pad_112[120];  // 0x70 (0x70)


	struct UAITask_RunEQS* RunEQS(struct AAIController* Controller, struct UEnvQuery* QueryTemplate); // Function AIModule.AITask_RunEQS.RunEQS
}; 
 
 



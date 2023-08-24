#include "pch.h"
#include "SDK.h"

void UBTDecorator_BlueprintBase::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI");

	FReceiveTickAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void UBTDecorator_BlueprintBase::ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTick");

	FReceiveTick parms{};	
	parms.OwnerActor = OwnerActor;
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI");

	FReceiveObserverDeactivatedAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(struct AActor* OwnerActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated");

	FReceiveObserverDeactivated parms{};	
	parms.OwnerActor = OwnerActor;

	ProcessEvent(fn, &parms);
}

void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI");

	FReceiveObserverActivatedAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTDecorator_BlueprintBase::ReceiveObserverActivated(struct AActor* OwnerActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated");

	FReceiveObserverActivated parms{};	
	parms.OwnerActor = OwnerActor;

	ProcessEvent(fn, &parms);
}

void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI");

	FReceiveExecutionStartAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTDecorator_BlueprintBase::ReceiveExecutionStart(struct AActor* OwnerActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart");

	FReceiveExecutionStart parms{};	
	parms.OwnerActor = OwnerActor;

	ProcessEvent(fn, &parms);
}

void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult NodeResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI");

	FReceiveExecutionFinishAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;
	parms.NodeResult = NodeResult;

	ProcessEvent(fn, &parms);
}

void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(struct AActor* OwnerActor, enum class EBTNodeResult NodeResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish");

	FReceiveExecutionFinish parms{};	
	parms.OwnerActor = OwnerActor;
	parms.NodeResult = NodeResult;

	ProcessEvent(fn, &parms);
}

bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI");

	FPerformConditionCheckAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBTDecorator_BlueprintBase::PerformConditionCheck(struct AActor* OwnerActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck");

	FPerformConditionCheck parms{};	
	parms.OwnerActor = OwnerActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive");

	FIsDecoratorObserverActive parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive");

	FIsDecoratorExecutionActive parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class EAIRequestPriority UPawnAction::GetActionPriority(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnAction.GetActionPriority");

	FGetActionPriority parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPawnAction::Finish(enum class EPawnActionResult WithResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnAction.Finish");

	FFinish parms{};	
	parms.WithResult = WithResult;

	ProcessEvent(fn, &parms);
}

struct UPawnAction* UPawnAction::CreateActionInstance(struct UObject* WorldContextObject, UPawnAction* ActionClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnAction.CreateActionInstance");

	FCreateActionInstance parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ActionClass = ActionClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBTTask_BlueprintBase::SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId");

	FSetFinishOnMessageWithId parms{};	
	parms.MessageName = MessageName;
	parms.RequestID = RequestID;

	ProcessEvent(fn, &parms);
}

void UBTTask_BlueprintBase::SetFinishOnMessage(struct FName MessageName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage");

	FSetFinishOnMessage parms{};	
	parms.MessageName = MessageName;

	ProcessEvent(fn, &parms);
}

void UBTTask_BlueprintBase::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTickAI");

	FReceiveTickAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void UBTTask_BlueprintBase::ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTick");

	FReceiveTick parms{};	
	parms.OwnerActor = OwnerActor;
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void UBTTask_BlueprintBase::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTTask_BlueprintBase::ReceiveExecute(struct AActor* OwnerActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecute");

	FReceiveExecute parms{};	
	parms.OwnerActor = OwnerActor;

	ProcessEvent(fn, &parms);
}

void UBTTask_BlueprintBase::ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI");

	FReceiveAbortAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTTask_BlueprintBase::ReceiveAbort(struct AActor* OwnerActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbort");

	FReceiveAbort parms{};	
	parms.OwnerActor = OwnerActor;

	ProcessEvent(fn, &parms);
}

bool UBTTask_BlueprintBase::IsTaskExecuting(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskExecuting");

	FIsTaskExecuting parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBTTask_BlueprintBase::IsTaskAborting(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskAborting");

	FIsTaskAborting parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBTTask_BlueprintBase::FinishExecute(bool bSuccess){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishExecute");

	FFinishExecute parms{};	
	parms.bSuccess = bSuccess;

	ProcessEvent(fn, &parms);
}

void UBTTask_BlueprintBase::FinishAbort(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishAbort");

	FFinishAbort parms{};	

	ProcessEvent(fn, &parms);
}

void UAIPerceptionComponent::SetSenseEnabled(UAISense* SenseClass, bool bEnable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.SetSenseEnabled");

	FSetSenseEnabled parms{};	
	parms.SenseClass = SenseClass;
	parms.bEnable = bEnable;

	ProcessEvent(fn, &parms);
}

void UAIPerceptionComponent::RequestStimuliListenerUpdate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate");

	FRequestStimuliListenerUpdate parms{};	

	ProcessEvent(fn, &parms);
}

void UAIPerceptionComponent::OnOwnerEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.OnOwnerEndPlay");

	FOnOwnerEndPlay parms{};	
	parms.Actor = Actor;
	parms.EndPlayReason = EndPlayReason;

	ProcessEvent(fn, &parms);
}

void UAIPerceptionComponent::GetPerceivedHostileActorsBySense(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense");

	FGetPerceivedHostileActorsBySense parms{};	
	parms.SenseToUse = SenseToUse;
	parms.OutActors = OutActors;

	ProcessEvent(fn, &parms);
}

void UAIPerceptionComponent::GetPerceivedHostileActors(struct TArray<struct AActor*>& OutActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors");

	FGetPerceivedHostileActors parms{};	
	parms.OutActors = OutActors;

	ProcessEvent(fn, &parms);
}

void UAIPerceptionComponent::GetPerceivedActors(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedActors");

	FGetPerceivedActors parms{};	
	parms.SenseToUse = SenseToUse;
	parms.OutActors = OutActors;

	ProcessEvent(fn, &parms);
}

void UAIPerceptionComponent::GetKnownPerceivedActors(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors");

	FGetKnownPerceivedActors parms{};	
	parms.SenseToUse = SenseToUse;
	parms.OutActors = OutActors;

	ProcessEvent(fn, &parms);
}

void UAIPerceptionComponent::GetCurrentlyPerceivedActors(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors");

	FGetCurrentlyPerceivedActors parms{};	
	parms.SenseToUse = SenseToUse;
	parms.OutActors = OutActors;

	ProcessEvent(fn, &parms);
}

bool UAIPerceptionComponent::GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo& Info){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetActorsPerception");

	FGetActorsPerception parms{};	
	parms.Actor = Actor;
	parms.Info = Info;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAIPerceptionComponent::ForgetAll(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.ForgetAll");

	FForgetAll parms{};	

	ProcessEvent(fn, &parms);
}

bool AAIController::UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent*& BlackboardComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.UseBlackboard");

	FUseBlackboard parms{};	
	parms.BlackboardAsset = BlackboardAsset;
	parms.BlackboardComponent = BlackboardComponent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AAIController::UnclaimTaskResource(UGameplayTaskResource* ResourceClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.UnclaimTaskResource");

	FUnclaimTaskResource parms{};	
	parms.ResourceClass = ResourceClass;

	ProcessEvent(fn, &parms);
}

void AAIController::SetPathFollowingComponent(struct UPathFollowingComponent* NewPFComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.SetPathFollowingComponent");

	FSetPathFollowingComponent parms{};	
	parms.NewPFComponent = NewPFComponent;

	ProcessEvent(fn, &parms);
}

void AAIController::SetMoveBlockDetection(bool bEnable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.SetMoveBlockDetection");

	FSetMoveBlockDetection parms{};	
	parms.bEnable = bEnable;

	ProcessEvent(fn, &parms);
}

bool AAIController::RunBehaviorTree(struct UBehaviorTree* BTAsset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.RunBehaviorTree");

	FRunBehaviorTree parms{};	
	parms.BTAsset = BTAsset;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AAIController::OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.OnUsingBlackBoard");

	FOnUsingBlackBoard parms{};	
	parms.BlackboardComp = BlackboardComp;
	parms.BlackboardAsset = BlackboardAsset;

	ProcessEvent(fn, &parms);
}

void AAIController::OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.OnGameplayTaskResourcesClaimed");

	FOnGameplayTaskResourcesClaimed parms{};	
	parms.NewlyClaimed = NewlyClaimed;
	parms.FreshlyReleased = FreshlyReleased;

	ProcessEvent(fn, &parms);
}

enum class EPathFollowingRequestResult AAIController::MoveToLocation(struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UNavigationQueryFilter* FilterClass, bool bAllowPartialPath){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToLocation");

	FMoveToLocation parms{};	
	parms.Dest = Dest;
	parms.AcceptanceRadius = AcceptanceRadius;
	parms.bStopOnOverlap = bStopOnOverlap;
	parms.bUsePathfinding = bUsePathfinding;
	parms.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	parms.bCanStrafe = bCanStrafe;
	parms.FilterClass = FilterClass;
	parms.bAllowPartialPath = bAllowPartialPath;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class EPathFollowingRequestResult AAIController::MoveToActor(struct AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, UNavigationQueryFilter* FilterClass, bool bAllowPartialPath){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToActor");

	FMoveToActor parms{};	
	parms.Goal = Goal;
	parms.AcceptanceRadius = AcceptanceRadius;
	parms.bStopOnOverlap = bStopOnOverlap;
	parms.bUsePathfinding = bUsePathfinding;
	parms.bCanStrafe = bCanStrafe;
	parms.FilterClass = FilterClass;
	parms.bAllowPartialPath = bAllowPartialPath;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AAIController::K2_SetFocus(struct AActor* NewFocus){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocus");

	FK2_SetFocus parms{};	
	parms.NewFocus = NewFocus;

	ProcessEvent(fn, &parms);
}

void AAIController::K2_SetFocalPoint(struct FVector FP){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocalPoint");

	FK2_SetFocalPoint parms{};	
	parms.FP = FP;

	ProcessEvent(fn, &parms);
}

void AAIController::K2_ClearFocus(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.K2_ClearFocus");

	FK2_ClearFocus parms{};	

	ProcessEvent(fn, &parms);
}

bool AAIController::HasPartialPath(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.HasPartialPath");

	FHasPartialPath parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UPathFollowingComponent* AAIController::GetPathFollowingComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.GetPathFollowingComponent");

	FGetPathFollowingComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class EPathFollowingStatus AAIController::GetMoveStatus(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.GetMoveStatus");

	FGetMoveStatus parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector AAIController::GetImmediateMoveDestination(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.GetImmediateMoveDestination");

	FGetImmediateMoveDestination parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* AAIController::GetFocusActor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocusActor");

	FGetFocusActor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector AAIController::GetFocalPointOnActor(struct AActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPointOnActor");

	FGetFocalPointOnActor parms{};	
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector AAIController::GetFocalPoint(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPoint");

	FGetFocalPoint parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAIPerceptionComponent* AAIController::GetAIPerceptionComponent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.GetAIPerceptionComponent");

	FGetAIPerceptionComponent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AAIController::ClaimTaskResource(UGameplayTaskResource* ResourceClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIController.ClaimTaskResource");

	FClaimTaskResource parms{};	
	parms.ResourceClass = ResourceClass;

	ProcessEvent(fn, &parms);
}

void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(struct FAIRequestID RequestID, enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted");

	FOnMoveCompleted parms{};	
	parms.RequestID = RequestID;
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UBehaviorTreeComponent::SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.SetDynamicSubtree");

	FSetDynamicSubtree parms{};	
	parms.InjectTag = InjectTag;
	parms.BehaviorAsset = BehaviorAsset;

	ProcessEvent(fn, &parms);
}

float UBehaviorTreeComponent::GetTagCooldownEndTime(struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime");

	FGetTagCooldownEndTime parms{};	
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBehaviorTreeComponent::AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration");

	FAddCooldownTagDuration parms{};	
	parms.CooldownTag = CooldownTag;
	parms.CooldownDuration = CooldownDuration;
	parms.bAddToExistingDuration = bAddToExistingDuration;

	ProcessEvent(fn, &parms);
}

void UAISystem::AILoggingVerbose(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AISystem.AILoggingVerbose");

	FAILoggingVerbose parms{};	

	ProcessEvent(fn, &parms);
}

void UAISystem::AIIgnorePlayers(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AISystem.AIIgnorePlayers");

	FAIIgnorePlayers parms{};	

	ProcessEvent(fn, &parms);
}

struct UBlackboardData* UBlackboardAssetProvider::GetBlackboardAsset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardAssetProvider.GetBlackboardAsset");

	FGetBlackboardAsset parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPawnAction_BlueprintBase::ActionTick(struct APawn* ControlledPawn, float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionTick");

	FActionTick parms{};	
	parms.ControlledPawn = ControlledPawn;
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void UPawnAction_BlueprintBase::ActionStart(struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionStart");

	FActionStart parms{};	
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UPawnAction_BlueprintBase::ActionResume(struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionResume");

	FActionResume parms{};	
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UPawnAction_BlueprintBase::ActionPause(struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionPause");

	FActionPause parms{};	
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UPawnAction_BlueprintBase::ActionFinished(struct APawn* ControlledPawn, enum class EPawnActionResult WithResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionFinished");

	FActionFinished parms{};	
	parms.ControlledPawn = ControlledPawn;
	parms.WithResult = WithResult;

	ProcessEvent(fn, &parms);
}

bool UPawnActionsComponent::K2_PushAction(struct UPawnAction* NewAction, enum class EAIRequestPriority Priority, struct UObject* Instigator){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PushAction");

	FK2_PushAction parms{};	
	parms.NewAction = NewAction;
	parms.Priority = Priority;
	parms.Instigator = Instigator;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPawnActionsComponent::K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, enum class EAIRequestPriority Priority){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PerformAction");

	FK2_PerformAction parms{};	
	parms.Pawn = Pawn;
	parms.Action = Action;
	parms.Priority = Priority;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class EPawnActionAbortState UPawnActionsComponent::K2_ForceAbortAction(struct UPawnAction* ActionToAbort){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_ForceAbortAction");

	FK2_ForceAbortAction parms{};	
	parms.ActionToAbort = ActionToAbort;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class EPawnActionAbortState UPawnActionsComponent::K2_AbortAction(struct UPawnAction* ActionToAbort){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_AbortAction");

	FK2_AbortAction parms{};	
	parms.ActionToAbort = ActionToAbort;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBlackboardComponent::SetValueAsVector(struct FName& KeyName, struct FVector VectorValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsVector");

	FSetValueAsVector parms{};	
	parms.KeyName = KeyName;
	parms.VectorValue = VectorValue;

	ProcessEvent(fn, &parms);
}

void UBlackboardComponent::SetValueAsString(struct FName& KeyName, struct FString StringValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsString");

	FSetValueAsString parms{};	
	parms.KeyName = KeyName;
	parms.StringValue = StringValue;

	ProcessEvent(fn, &parms);
}

void UBlackboardComponent::SetValueAsRotator(struct FName& KeyName, struct FRotator VectorValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsRotator");

	FSetValueAsRotator parms{};	
	parms.KeyName = KeyName;
	parms.VectorValue = VectorValue;

	ProcessEvent(fn, &parms);
}

void UBlackboardComponent::SetValueAsObject(struct FName& KeyName, struct UObject* ObjectValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsObject");

	FSetValueAsObject parms{};	
	parms.KeyName = KeyName;
	parms.ObjectValue = ObjectValue;

	ProcessEvent(fn, &parms);
}

void UBlackboardComponent::SetValueAsName(struct FName& KeyName, struct FName NameValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsName");

	FSetValueAsName parms{};	
	parms.KeyName = KeyName;
	parms.NameValue = NameValue;

	ProcessEvent(fn, &parms);
}

void UBlackboardComponent::SetValueAsInt(struct FName& KeyName, int32_t IntValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsInt");

	FSetValueAsInt parms{};	
	parms.KeyName = KeyName;
	parms.IntValue = IntValue;

	ProcessEvent(fn, &parms);
}

void UBlackboardComponent::SetValueAsFloat(struct FName& KeyName, float FloatValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsFloat");

	FSetValueAsFloat parms{};	
	parms.KeyName = KeyName;
	parms.FloatValue = FloatValue;

	ProcessEvent(fn, &parms);
}

void UBlackboardComponent::SetValueAsEnum(struct FName& KeyName, char EnumValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsEnum");

	FSetValueAsEnum parms{};	
	parms.KeyName = KeyName;
	parms.EnumValue = EnumValue;

	ProcessEvent(fn, &parms);
}

void UBlackboardComponent::SetValueAsClass(struct FName& KeyName, UObject* ClassValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsClass");

	FSetValueAsClass parms{};	
	parms.KeyName = KeyName;
	parms.ClassValue = ClassValue;

	ProcessEvent(fn, &parms);
}

void UBlackboardComponent::SetValueAsBool(struct FName& KeyName, bool BoolValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsBool");

	FSetValueAsBool parms{};	
	parms.KeyName = KeyName;
	parms.BoolValue = BoolValue;

	ProcessEvent(fn, &parms);
}

bool UBlackboardComponent::IsVectorValueSet(struct FName& KeyName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.IsVectorValueSet");

	FIsVectorValueSet parms{};	
	parms.KeyName = KeyName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UBlackboardComponent::GetValueAsVector(struct FName& KeyName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsVector");

	FGetValueAsVector parms{};	
	parms.KeyName = KeyName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UBlackboardComponent::GetValueAsString(struct FName& KeyName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsString");

	FGetValueAsString parms{};	
	parms.KeyName = KeyName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRotator UBlackboardComponent::GetValueAsRotator(struct FName& KeyName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsRotator");

	FGetValueAsRotator parms{};	
	parms.KeyName = KeyName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UBlackboardComponent::GetValueAsObject(struct FName& KeyName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsObject");

	FGetValueAsObject parms{};	
	parms.KeyName = KeyName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UBlackboardComponent::GetValueAsName(struct FName& KeyName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsName");

	FGetValueAsName parms{};	
	parms.KeyName = KeyName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UBlackboardComponent::GetValueAsInt(struct FName& KeyName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsInt");

	FGetValueAsInt parms{};	
	parms.KeyName = KeyName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UBlackboardComponent::GetValueAsFloat(struct FName& KeyName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsFloat");

	FGetValueAsFloat parms{};	
	parms.KeyName = KeyName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

char UBlackboardComponent::GetValueAsEnum(struct FName& KeyName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsEnum");

	FGetValueAsEnum parms{};	
	parms.KeyName = KeyName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

UObject* UBlackboardComponent::GetValueAsClass(struct FName& KeyName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsClass");

	FGetValueAsClass parms{};	
	parms.KeyName = KeyName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlackboardComponent::GetValueAsBool(struct FName& KeyName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsBool");

	FGetValueAsBool parms{};	
	parms.KeyName = KeyName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlackboardComponent::GetRotationFromEntry(struct FName& KeyName, struct FRotator& ResultRotation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetRotationFromEntry");

	FGetRotationFromEntry parms{};	
	parms.KeyName = KeyName;
	parms.ResultRotation = ResultRotation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlackboardComponent::GetLocationFromEntry(struct FName& KeyName, struct FVector& ResultLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetLocationFromEntry");

	FGetLocationFromEntry parms{};	
	parms.KeyName = KeyName;
	parms.ResultLocation = ResultLocation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBlackboardComponent::ClearValue(struct FName& KeyName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.ClearValue");

	FClearValue parms{};	
	parms.KeyName = KeyName;

	ProcessEvent(fn, &parms);
}

void UAISense_Damage::ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation, struct FName Tag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AISense_Damage.ReportDamageEvent");

	FReportDamageEvent parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.DamagedActor = DamagedActor;
	parms.Instigator = Instigator;
	parms.DamageAmount = DamageAmount;
	parms.EventLocation = EventLocation;
	parms.HitLocation = HitLocation;
	parms.Tag = Tag;

	ProcessEvent(fn, &parms);
}

float UAISense_Blueprint::OnUpdate(struct TArray<struct UAISenseEvent*>& EventsToProcess){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnUpdate");

	FOnUpdate parms{};	
	parms.EventsToProcess = EventsToProcess;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAISense_Blueprint::OnListenerUpdated(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUpdated");

	FOnListenerUpdated parms{};	
	parms.ActorListener = ActorListener;
	parms.PerceptionComponent = PerceptionComponent;

	ProcessEvent(fn, &parms);
}

void UAISense_Blueprint::OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUnregistered");

	FOnListenerUnregistered parms{};	
	parms.ActorListener = ActorListener;
	parms.PerceptionComponent = PerceptionComponent;

	ProcessEvent(fn, &parms);
}

void UAISense_Blueprint::OnListenerRegistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerRegistered");

	FOnListenerRegistered parms{};	
	parms.ActorListener = ActorListener;
	parms.PerceptionComponent = PerceptionComponent;

	ProcessEvent(fn, &parms);
}

void UAISense_Blueprint::K2_OnNewPawn(struct APawn* NewPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.K2_OnNewPawn");

	FK2_OnNewPawn parms{};	
	parms.NewPawn = NewPawn;

	ProcessEvent(fn, &parms);
}

void UAISense_Blueprint::GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent*>& ListenerComponents){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerComponents");

	FGetAllListenerComponents parms{};	
	parms.ListenerComponents = ListenerComponents;

	ProcessEvent(fn, &parms);
}

void UAISense_Blueprint::GetAllListenerActors(struct TArray<struct AActor*>& ListenerActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerActors");

	FGetAllListenerActors parms{};	
	parms.ListenerActors = ListenerActors;

	ProcessEvent(fn, &parms);
}

struct UAITask_MoveTo* UAITask_MoveTo::AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuousGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AITask_MoveTo.AIMoveTo");

	FAIMoveTo parms{};	
	parms.Controller = Controller;
	parms.GoalLocation = GoalLocation;
	parms.GoalActor = GoalActor;
	parms.AcceptanceRadius = AcceptanceRadius;
	parms.StopOnOverlap = StopOnOverlap;
	parms.AcceptPartialPath = AcceptPartialPath;
	parms.bUsePathfinding = bUsePathfinding;
	parms.bLockAILogic = bLockAILogic;
	parms.bUseContinuousGoalTracking = bUseContinuousGoalTracking;
	parms.ProjectGoalOnNavigation = ProjectGoalOnNavigation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBTFunctionLibrary::StopUsingExternalEvent(struct UBTNode* NodeOwner){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StopUsingExternalEvent");

	FStopUsingExternalEvent parms{};	
	parms.NodeOwner = NodeOwner;

	ProcessEvent(fn, &parms);
}

void UBTFunctionLibrary::StartUsingExternalEvent(struct UBTNode* NodeOwner, struct AActor* OwningActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StartUsingExternalEvent");

	FStartUsingExternalEvent parms{};	
	parms.NodeOwner = NodeOwner;
	parms.OwningActor = OwningActor;

	ProcessEvent(fn, &parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FVector Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector");

	FSetBlackboardValueAsVector parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FString Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString");

	FSetBlackboardValueAsString parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FRotator Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator");

	FSetBlackboardValueAsRotator parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject");

	FSetBlackboardValueAsObject parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FName Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName");

	FSetBlackboardValueAsName parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, int32_t Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt");

	FSetBlackboardValueAsInt parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, float Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat");

	FSetBlackboardValueAsFloat parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, char Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum");

	FSetBlackboardValueAsEnum parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, UObject* Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass");

	FSetBlackboardValueAsClass parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, bool Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool");

	FSetBlackboardValueAsBool parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

struct UBlackboardComponent* UBTFunctionLibrary::GetOwnersBlackboard(struct UBTNode* NodeOwner){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetOwnersBlackboard");

	FGetOwnersBlackboard parms{};	
	parms.NodeOwner = NodeOwner;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UBehaviorTreeComponent* UBTFunctionLibrary::GetOwnerComponent(struct UBTNode* NodeOwner){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetOwnerComponent");

	FGetOwnerComponent parms{};	
	parms.NodeOwner = NodeOwner;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UBTFunctionLibrary::GetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector");

	FGetBlackboardValueAsVector parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UBTFunctionLibrary::GetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString");

	FGetBlackboardValueAsString parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRotator UBTFunctionLibrary::GetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator");

	FGetBlackboardValueAsRotator parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UBTFunctionLibrary::GetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject");

	FGetBlackboardValueAsObject parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UBTFunctionLibrary::GetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName");

	FGetBlackboardValueAsName parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UBTFunctionLibrary::GetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt");

	FGetBlackboardValueAsInt parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UBTFunctionLibrary::GetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat");

	FGetBlackboardValueAsFloat parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

char UBTFunctionLibrary::GetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum");

	FGetBlackboardValueAsEnum parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

UObject* UBTFunctionLibrary::GetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass");

	FGetBlackboardValueAsClass parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBTFunctionLibrary::GetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool");

	FGetBlackboardValueAsBool parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* UBTFunctionLibrary::GetBlackboardValueAsActor(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor");

	FGetBlackboardValueAsActor parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBTFunctionLibrary::ClearBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector");

	FClearBlackboardValueAsVector parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

void UBTFunctionLibrary::ClearBlackboardValue(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ClearBlackboardValue");

	FClearBlackboardValue parms{};	
	parms.NodeOwner = NodeOwner;
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

struct UEnvQueryInstanceBlueprintWrapper* UEnvQueryManager::RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, enum class EEnvQueryRunMode RunMode, UEnvQueryInstanceBlueprintWrapper* WrapperClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryManager.RunEQSQuery");

	FRunEQSQuery parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.QueryTemplate = QueryTemplate;
	parms.Querier = Querier;
	parms.RunMode = RunMode;
	parms.WrapperClass = WrapperClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBrainComponent::StopLogic(struct FString Reason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BrainComponent.StopLogic");

	FStopLogic parms{};	
	parms.Reason = Reason;

	ProcessEvent(fn, &parms);
}

void UBrainComponent::StartLogic(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BrainComponent.StartLogic");

	FStartLogic parms{};	

	ProcessEvent(fn, &parms);
}

void UBrainComponent::RestartLogic(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BrainComponent.RestartLogic");

	FRestartLogic parms{};	

	ProcessEvent(fn, &parms);
}

bool UBrainComponent::IsRunning(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsRunning");

	FIsRunning parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBrainComponent::IsPaused(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsPaused");

	FIsPaused parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBTService_BlueprintBase::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTickAI");

	FReceiveTickAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void UBTService_BlueprintBase::ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTick");

	FReceiveTick parms{};	
	parms.OwnerActor = OwnerActor;
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void UBTService_BlueprintBase::ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI");

	FReceiveSearchStartAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTService_BlueprintBase::ReceiveSearchStart(struct AActor* OwnerActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStart");

	FReceiveSearchStart parms{};	
	parms.OwnerActor = OwnerActor;

	ProcessEvent(fn, &parms);
}

void UBTService_BlueprintBase::ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI");

	FReceiveDeactivationAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTService_BlueprintBase::ReceiveDeactivation(struct AActor* OwnerActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivation");

	FReceiveDeactivation parms{};	
	parms.OwnerActor = OwnerActor;

	ProcessEvent(fn, &parms);
}

void UBTService_BlueprintBase::ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivationAI");

	FReceiveActivationAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTService_BlueprintBase::ReceiveActivation(struct AActor* OwnerActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivation");

	FReceiveActivation parms{};	
	parms.OwnerActor = OwnerActor;

	ProcessEvent(fn, &parms);
}

bool UBTService_BlueprintBase::IsServiceActive(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.IsServiceActive");

	FIsServiceActive parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering");

	FSuspendCrowdSteering parms{};	
	parms.bSuspend = bSuspend;

	ProcessEvent(fn, &parms);
}

void UAIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation");

	FUnlockAIResourcesWithAnimation parms{};	
	parms.AnimInstance = AnimInstance;
	parms.bUnlockMovement = bUnlockMovement;
	parms.UnlockAILogic = UnlockAILogic;

	ProcessEvent(fn, &parms);
}

struct APawn* UAIBlueprintHelperLibrary::SpawnAIFromClass(struct UObject* WorldContextObject, APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail, struct AActor* Owner){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass");

	FSpawnAIFromClass parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PawnClass = PawnClass;
	parms.BehaviorTree = BehaviorTree;
	parms.Location = Location;
	parms.Rotation = Rotation;
	parms.bNoCollisionFail = bNoCollisionFail;
	parms.Owner = Owner;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAIBlueprintHelperLibrary::SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation");

	FSimpleMoveToLocation parms{};	
	parms.Controller = Controller;
	parms.Goal = Goal;

	ProcessEvent(fn, &parms);
}

void UAIBlueprintHelperLibrary::SimpleMoveToActor(struct AController* Controller, struct AActor* Goal){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor");

	FSimpleMoveToActor parms{};	
	parms.Controller = Controller;
	parms.Goal = Goal;

	ProcessEvent(fn, &parms);
}

void UAIBlueprintHelperLibrary::SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, bool bSuccess){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SendAIMessage");

	FSendAIMessage parms{};	
	parms.Target = Target;
	parms.Message = Message;
	parms.MessageSource = MessageSource;
	parms.bSuccess = bSuccess;

	ProcessEvent(fn, &parms);
}

void UAIBlueprintHelperLibrary::LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation");

	FLockAIResourcesWithAnimation parms{};	
	parms.AnimInstance = AnimInstance;
	parms.bLockMovement = bLockMovement;
	parms.LockAILogic = LockAILogic;

	ProcessEvent(fn, &parms);
}

bool UAIBlueprintHelperLibrary::IsValidAIRotation(struct FRotator Rotation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation");

	FIsValidAIRotation parms{};	
	parms.Rotation = Rotation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAIBlueprintHelperLibrary::IsValidAILocation(struct FVector Location){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation");

	FIsValidAILocation parms{};	
	parms.Location = Location;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAIBlueprintHelperLibrary::IsValidAIDirection(struct FVector DirectionVector){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection");

	FIsValidAIDirection parms{};	
	parms.DirectionVector = DirectionVector;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAIBlueprintHelperLibrary::GetNextNavLinkIndex(struct AController* Controller){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex");

	FGetNextNavLinkIndex parms{};	
	parms.Controller = Controller;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FVector> UAIBlueprintHelperLibrary::GetCurrentPathPoints(struct AController* Controller){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints");

	FGetCurrentPathPoints parms{};	
	parms.Controller = Controller;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UAIBlueprintHelperLibrary::GetCurrentPathIndex(struct AController* Controller){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex");

	FGetCurrentPathIndex parms{};	
	parms.Controller = Controller;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UNavigationPath* UAIBlueprintHelperLibrary::GetCurrentPath(struct AController* Controller){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath");

	FGetCurrentPath parms{};	
	parms.Controller = Controller;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UBlackboardComponent* UAIBlueprintHelperLibrary::GetBlackboard(struct AActor* Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetBlackboard");

	FGetBlackboard parms{};	
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AAIController* UAIBlueprintHelperLibrary::GetAIController(struct AActor* ControlledActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetAIController");

	FGetAIController parms{};	
	parms.ControlledActor = ControlledActor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject");

	FCreateMoveToProxyObject parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Pawn = Pawn;
	parms.Destination = Destination;
	parms.TargetActor = TargetActor;
	parms.AcceptanceRadius = AcceptanceRadius;
	parms.bStopOnOverlap = bStopOnOverlap;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation");

	FProvideSingleLocation parms{};	
	parms.QuerierObject = QuerierObject;
	parms.QuerierActor = QuerierActor;
	parms.ResultingLocation = ResultingLocation;

	ProcessEvent(fn, &parms);
}

void UEnvQueryContext_BlueprintBase::ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor*& ResultingActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor");

	FProvideSingleActor parms{};	
	parms.QuerierObject = QuerierObject;
	parms.QuerierActor = QuerierActor;
	parms.ResultingActor = ResultingActor;

	ProcessEvent(fn, &parms);
}

void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector>& ResultingLocationSet){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet");

	FProvideLocationsSet parms{};	
	parms.QuerierObject = QuerierObject;
	parms.QuerierActor = QuerierActor;
	parms.ResultingLocationSet = ResultingLocationSet;

	ProcessEvent(fn, &parms);
}

void UEnvQueryContext_BlueprintBase::ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*>& ResultingActorsSet){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet");

	FProvideActorsSet parms{};	
	parms.QuerierObject = QuerierObject;
	parms.QuerierActor = QuerierActor;
	parms.ResultingActorsSet = ResultingActorsSet;

	ProcessEvent(fn, &parms);
}

void UEnvQueryInstanceBlueprintWrapper::SetNamedParam(struct FName ParamName, float Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam");

	FSetNamedParam parms{};	
	parms.ParamName = ParamName;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FVector> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations");

	FGetResultsAsLocations parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct AActor*> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors");

	FGetResultsAsActors parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsLocations(struct TArray<struct FVector>& ResultLocations){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations");

	FGetQueryResultsAsLocations parms{};	
	parms.ResultLocations = ResultLocations;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsActors(struct TArray<struct AActor*>& ResultActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors");

	FGetQueryResultsAsActors parms{};	
	parms.ResultActors = ResultActors;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int32_t ItemIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore");

	FGetItemScore parms{};	
	parms.ItemIndex = ItemIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature");

	FEQSQueryDoneSignature__DelegateSignature parms{};	
	parms.QueryInstance = QueryInstance;
	parms.QueryStatus = QueryStatus;

	ProcessEvent(fn, &parms);
}

struct UObject* UEnvQueryGenerator_BlueprintBase::GetQuerier(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier");

	FGetQuerier parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UEnvQueryGenerator_BlueprintBase::DoItemGenerationFromActors(struct TArray<struct AActor*>& ContextActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGenerationFromActors");

	FDoItemGenerationFromActors parms{};	
	parms.ContextActors = ContextActors;

	ProcessEvent(fn, &parms);
}

void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(struct TArray<struct FVector>& ContextLocations){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration");

	FDoItemGeneration parms{};	
	parms.ContextLocations = ContextLocations;

	ProcessEvent(fn, &parms);
}

void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(struct FVector GeneratedVector){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector");

	FAddGeneratedVector parms{};	
	parms.GeneratedVector = GeneratedVector;

	ProcessEvent(fn, &parms);
}

void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(struct AActor* GeneratedActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor");

	FAddGeneratedActor parms{};	
	parms.GeneratedActor = GeneratedActor;

	ProcessEvent(fn, &parms);
}

void UPathFollowingComponent::OnNavDataRegistered(struct ANavigationData* NavData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnNavDataRegistered");

	FOnNavDataRegistered parms{};	
	parms.NavData = NavData;

	ProcessEvent(fn, &parms);
}

void UPathFollowingComponent::OnActorBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnActorBump");

	FOnActorBump parms{};	
	parms.SelfActor = SelfActor;
	parms.OtherActor = OtherActor;
	parms.NormalImpulse = NormalImpulse;
	parms.Hit = Hit;

	ProcessEvent(fn, &parms);
}

struct FVector UPathFollowingComponent::GetPathDestination(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathDestination");

	FGetPathDestination parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class EPathFollowingAction UPathFollowingComponent::GetPathActionType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathActionType");

	FGetPathActionType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ANavLinkProxy::SetSmartLinkEnabled(bool bEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.SetSmartLinkEnabled");

	FSetSmartLinkEnabled parms{};	
	parms.bEnabled = bEnabled;

	ProcessEvent(fn, &parms);
}

void ANavLinkProxy::ResumePathFollowing(struct AActor* Agent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ResumePathFollowing");

	FResumePathFollowing parms{};	
	parms.Agent = Agent;

	ProcessEvent(fn, &parms);
}

void ANavLinkProxy::ReceiveSmartLinkReached(struct AActor* Agent, struct FVector& Destination){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ReceiveSmartLinkReached");

	FReceiveSmartLinkReached parms{};	
	parms.Agent = Agent;
	parms.Destination = Destination;

	ProcessEvent(fn, &parms);
}

bool ANavLinkProxy::IsSmartLinkEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.IsSmartLinkEnabled");

	FIsSmartLinkEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ANavLinkProxy::HasMovingAgents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.HasMovingAgents");

	FHasMovingAgents parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNavLocalGridManager::SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity");

	FSetLocalNavigationGridDensity parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.CellSize = CellSize;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UNavLocalGridManager::RemoveLocalNavigationGrid(struct UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid");

	FRemoveLocalNavigationGrid parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.GridId = GridId;
	parms.bRebuildGrids = bRebuildGrids;

	ProcessEvent(fn, &parms);
}

bool UNavLocalGridManager::FindLocalNavigationGridPath(struct UObject* WorldContextObject, struct FVector& Start, struct FVector& End, struct TArray<struct FVector>& PathPoints){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath");

	FFindLocalNavigationGridPath parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Start = Start;
	parms.End = End;
	parms.PathPoints = PathPoints;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UNavLocalGridManager::AddLocalNavigationGridForPoints(struct UObject* WorldContextObject, struct TArray<struct FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints");

	FAddLocalNavigationGridForPoints parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Locations = Locations;
	parms.Radius2D = Radius2D;
	parms.Height = Height;
	parms.bRebuildGrids = bRebuildGrids;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UNavLocalGridManager::AddLocalNavigationGridForPoint(struct UObject* WorldContextObject, struct FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint");

	FAddLocalNavigationGridForPoint parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Location = Location;
	parms.Radius2D = Radius2D;
	parms.Height = Height;
	parms.bRebuildGrids = bRebuildGrids;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UNavLocalGridManager::AddLocalNavigationGridForCapsule(struct UObject* WorldContextObject, struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule");

	FAddLocalNavigationGridForCapsule parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Location = Location;
	parms.CapsuleRadius = CapsuleRadius;
	parms.CapsuleHalfHeight = CapsuleHalfHeight;
	parms.Radius2D = Radius2D;
	parms.Height = Height;
	parms.bRebuildGrids = bRebuildGrids;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UNavLocalGridManager::AddLocalNavigationGridForBox(struct UObject* WorldContextObject, struct FVector& Location, struct FVector Extent, struct FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox");

	FAddLocalNavigationGridForBox parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Location = Location;
	parms.Extent = Extent;
	parms.Rotation = Rotation;
	parms.Radius2D = Radius2D;
	parms.Height = Height;
	parms.bRebuildGrids = bRebuildGrids;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(UAISense* SenseClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense");

	FUnregisterFromSense parms{};	
	parms.SenseClass = SenseClass;

	ProcessEvent(fn, &parms);
}

void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem");

	FUnregisterFromPerceptionSystem parms{};	

	ProcessEvent(fn, &parms);
}

void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem");

	FRegisterWithPerceptionSystem parms{};	

	ProcessEvent(fn, &parms);
}

void UAIPerceptionStimuliSourceComponent::RegisterForSense(UAISense* SenseClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense");

	FRegisterForSense parms{};	
	parms.SenseClass = SenseClass;

	ProcessEvent(fn, &parms);
}

void UAIPerceptionSystem::ReportPerceptionEvent(struct UObject* WorldContextObject, struct UAISenseEvent* PerceptionEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportPerceptionEvent");

	FReportPerceptionEvent parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PerceptionEvent = PerceptionEvent;

	ProcessEvent(fn, &parms);
}

void UAIPerceptionSystem::ReportEvent(struct UAISenseEvent* PerceptionEvent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportEvent");

	FReportEvent parms{};	
	parms.PerceptionEvent = PerceptionEvent;

	ProcessEvent(fn, &parms);
}

bool UAIPerceptionSystem::RegisterPerceptionStimuliSource(struct UObject* WorldContextObject, UAISense* Sense, struct AActor* Target){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource");

	FRegisterPerceptionStimuliSource parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Sense = Sense;
	parms.Target = Target;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay");

	FOnPerceptionStimuliSourceEndPlay parms{};	
	parms.Actor = Actor;
	parms.EndPlayReason = EndPlayReason;

	ProcessEvent(fn, &parms);
}

UAISense* UAIPerceptionSystem::GetSenseClassForStimulus(struct UObject* WorldContextObject, struct FAIStimulus& Stimulus){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus");

	FGetSenseClassForStimulus parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Stimulus = Stimulus;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAISense_Hearing::ReportNoiseEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AISense_Hearing.ReportNoiseEvent");

	FReportNoiseEvent parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.NoiseLocation = NoiseLocation;
	parms.Loudness = Loudness;
	parms.Instigator = Instigator;
	parms.MaxRange = MaxRange;
	parms.Tag = Tag;

	ProcessEvent(fn, &parms);
}

void UAISense_Prediction::RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestPawnPredictionEvent");

	FRequestPawnPredictionEvent parms{};	
	parms.Requestor = Requestor;
	parms.PredictedActor = PredictedActor;
	parms.PredictionTime = PredictionTime;

	ProcessEvent(fn, &parms);
}

void UAISense_Prediction::RequestControllerPredictionEvent(struct AAIController* Requestor, struct AActor* PredictedActor, float PredictionTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestControllerPredictionEvent");

	FRequestControllerPredictionEvent parms{};	
	parms.Requestor = Requestor;
	parms.PredictedActor = PredictedActor;
	parms.PredictionTime = PredictionTime;

	ProcessEvent(fn, &parms);
}

void UAISense_Touch::ReportTouchEvent(struct UObject* WorldContextObject, struct AActor* TouchReceiver, struct AActor* OtherActor, struct FVector Location){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AISense_Touch.ReportTouchEvent");

	FReportTouchEvent parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.TouchReceiver = TouchReceiver;
	parms.OtherActor = OtherActor;
	parms.Location = Location;

	ProcessEvent(fn, &parms);
}

void UPawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled");

	FSetSensingUpdatesEnabled parms{};	
	parms.bEnabled = bEnabled;

	ProcessEvent(fn, &parms);
}

void UPawnSensingComponent::SetSensingInterval(float NewSensingInterval){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingInterval");

	FSetSensingInterval parms{};	
	parms.NewSensingInterval = NewSensingInterval;

	ProcessEvent(fn, &parms);
}

void UPawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle");

	FSetPeripheralVisionAngle parms{};	
	parms.NewPeripheralVisionAngle = NewPeripheralVisionAngle;

	ProcessEvent(fn, &parms);
}

void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(struct APawn* Pawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature");

	FSeePawnDelegate__DelegateSignature parms{};	
	parms.Pawn = Pawn;

	ProcessEvent(fn, &parms);
}

void UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(struct APawn* Instigator, struct FVector& Location, float Volume){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature");

	FHearNoiseDelegate__DelegateSignature parms{};	
	parms.Instigator = Instigator;
	parms.Location = Location;
	parms.Volume = Volume;

	ProcessEvent(fn, &parms);
}

float UPawnSensingComponent::GetPeripheralVisionCosine(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine");

	FGetPeripheralVisionCosine parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UPawnSensingComponent::GetPeripheralVisionAngle(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle");

	FGetPeripheralVisionAngle parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAITask_RunEQS* UAITask_RunEQS::RunEQS(struct AAIController* Controller, struct UEnvQuery* QueryTemplate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AIModule.AITask_RunEQS.RunEQS");

	FRunEQS parms{};	
	parms.Controller = Controller;
	parms.QueryTemplate = QueryTemplate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


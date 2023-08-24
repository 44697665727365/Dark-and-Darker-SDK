#include "pch.h"
#include "SDK.h"

void UGeometryCollectionComponent::SetRestCollection(struct UGeometryCollection* RestCollectionIn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection");

	FSetRestCollection parms{};	
	parms.RestCollectionIn = RestCollectionIn;

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::SetNotifyRemovals(bool bNewNotifyRemovals){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals");

	FSetNotifyRemovals parms{};	
	parms.bNewNotifyRemovals = bNewNotifyRemovals;

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::SetNotifyCrumblings(bool bNewNotifyCrumblings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings");

	FSetNotifyCrumblings parms{};	
	parms.bNewNotifyCrumblings = bNewNotifyCrumblings;

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks");

	FSetNotifyBreaks parms{};	
	parms.bNewNotifyBreaks = bNewNotifyBreaks;

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::RemoveAllAnchors(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors");

	FRemoveAllAnchors parms{};	

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision");

	FReceivePhysicsCollision parms{};	
	parms.CollisionInfo = CollisionInfo;

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");

	FNotifyGeometryCollectionPhysicsStateChange__DelegateSignature parms{};	
	parms.FracturedComponent = FracturedComponent;

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");

	FNotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature parms{};	
	parms.FracturedComponent = FracturedComponent;

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::GetMassAndExtents(int32_t ItemIndex, float& OutMass, struct FBox& OutExtents){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents");

	FGetMassAndExtents parms{};	
	parms.ItemIndex = ItemIndex;
	parms.OutMass = OutMass;
	parms.OutExtents = OutExtents;

	ProcessEvent(fn, &parms);
}

int32_t UGeometryCollectionComponent::GetInitialLevel(int32_t ItemIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel");

	FGetInitialLevel parms{};	
	parms.ItemIndex = ItemIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGeometryCollectionComponent::CrumbleCluster(int32_t ItemIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster");

	FCrumbleCluster parms{};	
	parms.ItemIndex = ItemIndex;

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::CrumbleActiveClusters(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters");

	FCrumbleActiveClusters parms{};	

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::ApplyPhysicsField(bool Enabled, uint8_t Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField");

	FApplyPhysicsField parms{};	
	parms.Enabled = Enabled;
	parms.Target = Target;
	parms.MetaData = MetaData;
	parms.Field = Field;

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::ApplyLinearVelocity(int32_t ItemIndex, struct FVector& LinearVelocity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity");

	FApplyLinearVelocity parms{};	
	parms.ItemIndex = ItemIndex;
	parms.LinearVelocity = LinearVelocity;

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::ApplyKinematicField(float Radius, struct FVector Position){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField");

	FApplyKinematicField parms{};	
	parms.Radius = Radius;
	parms.Position = Position;

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::ApplyInternalStrain(int32_t ItemIndex, struct FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain");

	FApplyInternalStrain parms{};	
	parms.ItemIndex = ItemIndex;
	parms.Location = Location;
	parms.Radius = Radius;
	parms.PropagationDepth = PropagationDepth;
	parms.PropagationFactor = PropagationFactor;
	parms.Strain = Strain;

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::ApplyExternalStrain(int32_t ItemIndex, struct FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain");

	FApplyExternalStrain parms{};	
	parms.ItemIndex = ItemIndex;
	parms.Location = Location;
	parms.Radius = Radius;
	parms.PropagationDepth = PropagationDepth;
	parms.PropagationFactor = PropagationFactor;
	parms.Strain = Strain;

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::ApplyBreakingLinearVelocity(int32_t ItemIndex, struct FVector& LinearVelocity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity");

	FApplyBreakingLinearVelocity parms{};	
	parms.ItemIndex = ItemIndex;
	parms.LinearVelocity = LinearVelocity;

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::ApplyBreakingAngularVelocity(int32_t ItemIndex, struct FVector& AngularVelocity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity");

	FApplyBreakingAngularVelocity parms{};	
	parms.ItemIndex = ItemIndex;
	parms.AngularVelocity = AngularVelocity;

	ProcessEvent(fn, &parms);
}

void UGeometryCollectionComponent::ApplyAngularVelocity(int32_t ItemIndex, struct FVector& AngularVelocity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity");

	FApplyAngularVelocity parms{};	
	parms.ItemIndex = ItemIndex;
	parms.AngularVelocity = AngularVelocity;

	ProcessEvent(fn, &parms);
}

void UChaosDestructionListener::SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, uint8_t SortMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents");

	FSortTrailingEvents parms{};	
	parms.TrailingEvents = TrailingEvents;
	parms.SortMethod = SortMethod;

	ProcessEvent(fn, &parms);
}

void UChaosDestructionListener::SortRemovalEvents(struct TArray<struct FChaosRemovalEventData>& RemovalEvents, uint8_t SortMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents");

	FSortRemovalEvents parms{};	
	parms.RemovalEvents = RemovalEvents;
	parms.SortMethod = SortMethod;

	ProcessEvent(fn, &parms);
}

void UChaosDestructionListener::SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, uint8_t SortMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents");

	FSortCollisionEvents parms{};	
	parms.CollisionEvents = CollisionEvents;
	parms.SortMethod = SortMethod;

	ProcessEvent(fn, &parms);
}

void UChaosDestructionListener::SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, uint8_t SortMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents");

	FSortBreakingEvents parms{};	
	parms.BreakingEvents = BreakingEvents;
	parms.SortMethod = SortMethod;

	ProcessEvent(fn, &parms);
}

void UChaosDestructionListener::SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings");

	FSetTrailingEventRequestSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void UChaosDestructionListener::SetTrailingEventEnabled(bool bIsEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled");

	FSetTrailingEventEnabled parms{};	
	parms.bIsEnabled = bIsEnabled;

	ProcessEvent(fn, &parms);
}

void UChaosDestructionListener::SetRemovalEventRequestSettings(struct FChaosRemovalEventRequestSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings");

	FSetRemovalEventRequestSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void UChaosDestructionListener::SetRemovalEventEnabled(bool bIsEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled");

	FSetRemovalEventEnabled parms{};	
	parms.bIsEnabled = bIsEnabled;

	ProcessEvent(fn, &parms);
}

void UChaosDestructionListener::SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings");

	FSetCollisionEventRequestSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void UChaosDestructionListener::SetCollisionEventEnabled(bool bIsEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled");

	FSetCollisionEventEnabled parms{};	
	parms.bIsEnabled = bIsEnabled;

	ProcessEvent(fn, &parms);
}

void UChaosDestructionListener::SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings");

	FSetBreakingEventRequestSettings parms{};	
	parms.InSettings = InSettings;

	ProcessEvent(fn, &parms);
}

void UChaosDestructionListener::SetBreakingEventEnabled(bool bIsEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled");

	FSetBreakingEventEnabled parms{};	
	parms.bIsEnabled = bIsEnabled;

	ProcessEvent(fn, &parms);
}

void UChaosDestructionListener::RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor");

	FRemoveGeometryCollectionActor parms{};	
	parms.GeometryCollectionActor = GeometryCollectionActor;

	ProcessEvent(fn, &parms);
}

void UChaosDestructionListener::RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor");

	FRemoveChaosSolverActor parms{};	
	parms.ChaosSolverActor = ChaosSolverActor;

	ProcessEvent(fn, &parms);
}

bool UChaosDestructionListener::IsEventListening(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening");

	FIsEventListening parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UChaosDestructionListener::AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor");

	FAddGeometryCollectionActor parms{};	
	parms.GeometryCollectionActor = GeometryCollectionActor;

	ProcessEvent(fn, &parms);
}

void UChaosDestructionListener::AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor");

	FAddChaosSolverActor parms{};	
	parms.ChaosSolverActor = ChaosSolverActor;

	ProcessEvent(fn, &parms);
}

bool AGeometryCollectionActor::RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle");

	FRaycastSingle parms{};	
	parms.Start = Start;
	parms.End = End;
	parms.OutHit = OutHit;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


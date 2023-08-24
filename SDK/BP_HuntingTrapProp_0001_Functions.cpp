#include "pch.h"
#include "SDK.h"

void ABP_HuntingTrapProp_0001_C::OnRep_bDisarmed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.OnRep_bDisarmed");

	FOnRep_bDisarmed parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_HuntingTrapProp_0001_C::OnRep_TrappedCharacter(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.OnRep_TrappedCharacter");

	FOnRep_TrappedCharacter parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_HuntingTrapProp_0001_C::InitializeChain(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.InitializeChain");

	FInitializeChain parms{};	

	ProcessEvent(fn, &parms);
}

bool ABP_HuntingTrapProp_0001_C::IsTargetReachesMaxRange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.IsTargetReachesMaxRange");

	FIsTargetReachesMaxRange parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ABP_HuntingTrapProp_0001_C::Deactivate Trap(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.Deactivate Trap");

	FDeactivate Trap parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_HuntingTrapProp_0001_C::Removed_19BFACE841FF14F023B948A3DED73C7C(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.Removed_19BFACE841FF14F023B948A3DED73C7C");

	FRemoved_19BFACE841FF14F023B948A3DED73C7C parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_HuntingTrapProp_0001_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_HuntingTrapProp_0001_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_HuntingTrapProp_0001_C::BndEvt__BP_HuntingTrapProp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.BndEvt__BP_HuntingTrapProp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	FBndEvt__BP_HuntingTrapProp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void ABP_HuntingTrapProp_0001_C::BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature(bool bDetected, struct FAccountDataReplication AccountDataReplication){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature");

	FBndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature parms{};	
	parms.bDetected = bDetected;
	parms.AccountDataReplication = AccountDataReplication;

	ProcessEvent(fn, &parms);
}

void ABP_HuntingTrapProp_0001_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_HuntingTrapProp_0001_C::OnChainSound(struct FVector Velocity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.OnChainSound");

	FOnChainSound parms{};	
	parms.Velocity = Velocity;

	ProcessEvent(fn, &parms);
}

void ABP_HuntingTrapProp_0001_C::OnCharacterMovementUpdated(float DeltaSeconds, struct FVector OldLocation, struct FVector OldVelocity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.OnCharacterMovementUpdated");

	FOnCharacterMovementUpdated parms{};	
	parms.DeltaSeconds = DeltaSeconds;
	parms.OldLocation = OldLocation;
	parms.OldVelocity = OldVelocity;

	ProcessEvent(fn, &parms);
}

void ABP_HuntingTrapProp_0001_C::ExecuteUbergraph_BP_HuntingTrapProp_0001(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrapProp_0001.BP_HuntingTrapProp_0001_C.ExecuteUbergraph_BP_HuntingTrapProp_0001");

	FExecuteUbergraph_BP_HuntingTrapProp_0001 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


#include "pch.h"
#include "SDK.h"

void ABP_TorchOn_C::Timeline_0__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TorchOn.BP_TorchOn_C.Timeline_0__FinishedFunc");

	FTimeline_0__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_TorchOn_C::Timeline_0__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TorchOn.BP_TorchOn_C.Timeline_0__UpdateFunc");

	FTimeline_0__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_TorchOn_C::Timeline_1__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TorchOn.BP_TorchOn_C.Timeline_1__FinishedFunc");

	FTimeline_1__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_TorchOn_C::Timeline_1__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TorchOn.BP_TorchOn_C.Timeline_1__UpdateFunc");

	FTimeline_1__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_TorchOn_C::BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TorchOn.BP_TorchOn_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	FBndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void ABP_TorchOn_C::BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TorchOn.BP_TorchOn_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	FBndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(fn, &parms);
}

void ABP_TorchOn_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TorchOn.BP_TorchOn_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_TorchOn_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TorchOn.BP_TorchOn_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_TorchOn_C::ExecuteUbergraph_BP_TorchOn(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TorchOn.BP_TorchOn_C.ExecuteUbergraph_BP_TorchOn");

	FExecuteUbergraph_BP_TorchOn parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


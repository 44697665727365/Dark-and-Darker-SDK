#include "pch.h"
#include "SDK.h"

void ABP_FloorPortalScrollBase_C::OnRep_bOpen(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.OnRep_bOpen");

	FOnRep_bOpen parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollBase_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollBase_C::BndEvt__BP_FloorPortalScrollBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.BndEvt__BP_FloorPortalScrollBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	FBndEvt__BP_FloorPortalScrollBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollBase_C::OnOpen(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.OnOpen");

	FOnOpen parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollBase_C::FX_PlayerPortalInteraction(struct ADCPlayerCharacterBase* PlayerCharacter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.FX_PlayerPortalInteraction");

	FFX_PlayerPortalInteraction parms{};	
	parms.PlayerCharacter = PlayerCharacter;

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollBase_C::ClosePortalScroll(struct ADCPlayerCharacterBase* Character){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.ClosePortalScroll");

	FClosePortalScroll parms{};	
	parms.Character = Character;

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollBase_C::ExecuteUbergraph_BP_FloorPortalScrollBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C.ExecuteUbergraph_BP_FloorPortalScrollBase");

	FExecuteUbergraph_BP_FloorPortalScrollBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


#include "pch.h"
#include "SDK.h"

void ABP_DCAoeDefineBase_AutoActive_C::Remove Gameplay Cue(struct UObject* Input Pin){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.Remove Gameplay Cue");

	FRemove Gameplay Cue parms{};	
	parms.Input Pin = Input Pin;

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::Trigger GameplayCue(struct UObject* Input Pin){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.Trigger GameplayCue");

	FTrigger GameplayCue parms{};	
	parms.Input Pin = Input Pin;

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::Remove(struct ADCCharacterBase* InputPin){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.Remove");

	FRemove parms{};	
	parms.InputPin = InputPin;

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::Trigger(struct ADCCharacterBase* InputPin){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.Trigger");

	FTrigger parms{};	
	parms.InputPin = InputPin;

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::SetComponentTag(struct UActorComponent* InComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.SetComponentTag");

	FSetComponentTag parms{};	
	parms.InComponent = InComponent;

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::Send Gameplay Event To Hit(struct ADCCharacterBase* DCCharacterBase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.Send Gameplay Event To Hit");

	FSend Gameplay Event To Hit parms{};	
	parms.DCCharacterBase = DCCharacterBase;

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::ProcessDespawn(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.ProcessDespawn");

	FProcessDespawn parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::DespawnFiringFX(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.DespawnFiringFX");

	FDespawnFiringFX parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::DespawnPrecedingFX(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.DespawnPrecedingFX");

	FDespawnPrecedingFX parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::SpawnFiringFX(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.SpawnFiringFX");

	FSpawnFiringFX parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::SpawnPrecedingFX(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.SpawnPrecedingFX");

	FSpawnPrecedingFX parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::ClearVariables(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.ClearVariables");

	FClearVariables parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::SetVariables(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.SetVariables");

	FSetVariables parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::SpawnAntiAuraCollision(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.SpawnAntiAuraCollision");

	FSpawnAntiAuraCollision parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::SpawnCollision(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.SpawnCollision");

	FSpawnCollision parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.ReceiveEndPlay");

	FReceiveEndPlay parms{};	
	parms.EndPlayReason = EndPlayReason;

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::AddBeginOverlapActor(struct ADCCharacterBase* CharacterBase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.AddBeginOverlapActor");

	FAddBeginOverlapActor parms{};	
	parms.CharacterBase = CharacterBase;

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::RemoveEndOverlapActor(struct ADCCharacterBase* CharacterBase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.RemoveEndOverlapActor");

	FRemoveEndOverlapActor parms{};	
	parms.CharacterBase = CharacterBase;

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::ReceiveTick(float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.ReceiveTick");

	FReceiveTick parms{};	
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void ABP_DCAoeDefineBase_AutoActive_C::ExecuteUbergraph_BP_DCAoeDefineBase_AutoActive(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DCAoeDefineBase_AutoActive.BP_DCAoeDefineBase_AutoActive_C.ExecuteUbergraph_BP_DCAoeDefineBase_AutoActive");

	FExecuteUbergraph_BP_DCAoeDefineBase_AutoActive parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


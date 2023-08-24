#include "pch.h"
#include "SDK.h"

void ABP_Lich_DeathSwarm_C::UpdateBorderMaterial(bool Off, double Transition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.UpdateBorderMaterial");

	FUpdateBorderMaterial parms{};	
	parms.Off = Off;
	parms.Transition = Transition;

	ProcessEvent(fn, &parms);
}

void ABP_Lich_DeathSwarm_C::UserConstructionScript(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.UserConstructionScript");

	FUserConstructionScript parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lich_DeathSwarm_C::EventReceived_1A39A2D34C7FB40840D2729BBC7F2F56(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.EventReceived_1A39A2D34C7FB40840D2729BBC7F2F56");

	FEventReceived_1A39A2D34C7FB40840D2729BBC7F2F56 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void ABP_Lich_DeathSwarm_C::ReceiveTick(float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.ReceiveTick");

	FReceiveTick parms{};	
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void ABP_Lich_DeathSwarm_C::UpdateDeathSwarm(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.UpdateDeathSwarm");

	FUpdateDeathSwarm parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lich_DeathSwarm_C::SetTargetAoeScale(double TargetScale, double DurationSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.SetTargetAoeScale");

	FSetTargetAoeScale parms{};	
	parms.TargetScale = TargetScale;
	parms.DurationSeconds = DurationSeconds;

	ProcessEvent(fn, &parms);
}

void ABP_Lich_DeathSwarm_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lich_DeathSwarm_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Lich_DeathSwarm_C::ExecuteUbergraph_BP_Lich_DeathSwarm(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.ExecuteUbergraph_BP_Lich_DeathSwarm");

	FExecuteUbergraph_BP_Lich_DeathSwarm parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


#include "pch.h"
#include "SDK.h"

void AReplicationGraphDebugActor::ServerStopDebugging(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging");

	FServerStopDebugging parms{};	

	ProcessEvent(fn, &parms);
}

void AReplicationGraphDebugActor::ServerStartDebugging(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging");

	FServerStartDebugging parms{};	

	ProcessEvent(fn, &parms);
}

void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass(UObject* Class, int32_t PeriodFrame){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass");

	FServerSetPeriodFrameForClass parms{};	
	parms.Class = Class;
	parms.PeriodFrame = PeriodFrame;

	ProcessEvent(fn, &parms);
}

void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(UObject* Class, float CullDistance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass");

	FServerSetCullDistanceForClass parms{};	
	parms.Class = Class;
	parms.CullDistance = CullDistance;

	ProcessEvent(fn, &parms);
}

void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint(struct AActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint");

	FServerSetConditionalActorBreakpoint parms{};	
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);
}

void AReplicationGraphDebugActor::ServerPrintCullDistances(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances");

	FServerPrintCullDistances parms{};	

	ProcessEvent(fn, &parms);
}

void AReplicationGraphDebugActor::ServerPrintAllActorInfo(struct FString Str){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo");

	FServerPrintAllActorInfo parms{};	
	parms.Str = Str;

	ProcessEvent(fn, &parms);
}

void AReplicationGraphDebugActor::ServerCellInfo(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo");

	FServerCellInfo parms{};	

	ProcessEvent(fn, &parms);
}

void AReplicationGraphDebugActor::ClientCellInfo(struct FVector CellLocation, struct FVector CellExtent, struct TArray<struct AActor*> Actors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo");

	FClientCellInfo parms{};	
	parms.CellLocation = CellLocation;
	parms.CellExtent = CellExtent;
	parms.Actors = Actors;

	ProcessEvent(fn, &parms);
}


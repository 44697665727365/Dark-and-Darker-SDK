#include "pch.h"
#include "SDK.h"

void ULayersBlueprintLibrary::RemoveActorFromLayer(struct AActor* InActor, struct FActorLayer& Layer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer");

	FRemoveActorFromLayer parms{};	
	parms.InActor = InActor;
	parms.Layer = Layer;

	ProcessEvent(fn, &parms);
}

struct TArray<struct AActor*> ULayersBlueprintLibrary::GetActors(struct UObject* WorldContextObject, struct FActorLayer& ActorLayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors");

	FGetActors parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ActorLayer = ActorLayer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ULayersBlueprintLibrary::AddActorToLayer(struct AActor* InActor, struct FActorLayer& Layer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer");

	FAddActorToLayer parms{};	
	parms.InActor = InActor;
	parms.Layer = Layer;

	ProcessEvent(fn, &parms);
}


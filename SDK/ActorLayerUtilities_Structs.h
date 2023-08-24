#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ActorLayerUtilities.ActorLayer
struct FActorLayer
{
	struct FName Name;  // 0x0 (0x0)


}; 
 
 // Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
struct FAddActorToLayer
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FActorLayer Layer;  // 0x8 (0x8)


}; 
 
 // Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
struct FGetActors
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FActorLayer ActorLayer;  // 0x8 (0x8)
	struct TArray<struct AActor*> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
struct FRemoveActorFromLayer
{
	struct AActor* InActor;  // 0x0 (0x0)
	struct FActorLayer Layer;  // 0x8 (0x8)


}; 
 
 
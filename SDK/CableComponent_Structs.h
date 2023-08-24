#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function CableComponent.CableComponent.GetAttachedActor
struct FGetAttachedActor
{
	struct AActor* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CableComponent.CableComponent.SetAttachEndTo
struct FSetAttachEndTo
{
	struct AActor* Actor;  // 0x0 (0x0)
	struct FName ComponentProperty;  // 0x8 (0x8)
	struct FName SocketName;  // 0x10 (0x10)


}; 
 
 // Function CableComponent.CableComponent.GetAttachedComponent
struct FGetAttachedComponent
{
	struct USceneComponent* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CableComponent.CableComponent.GetCableParticleLocations
struct FGetCableParticleLocations
{
	struct TArray<struct FVector> Locations;  // 0x0 (0x0)


}; 
 
 // Function CableComponent.CableComponent.SetAttachEndToComponent
struct FSetAttachEndToComponent
{
	struct USceneComponent* Component;  // 0x0 (0x0)
	struct FName SocketName;  // 0x8 (0x8)


}; 
 
 
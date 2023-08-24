#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ActorSequence.ActorSequenceObjectReference
struct FActorSequenceObjectReference
{
	uint8_t Type;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FGuid ActorId;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct FString PathToComponent;  // 0x18 (0x18)


}; 
 
 // ScriptStruct ActorSequence.ActorSequenceObjectReferences
struct FActorSequenceObjectReferences
{
	struct TArray<struct FActorSequenceObjectReference> Array;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
struct FActorSequenceObjectReferenceMap
{
	struct TArray<struct FGuid> BindingIds;  // 0x0 (0x0)
	struct TArray<struct FActorSequenceObjectReferences> References;  // 0x10 (0x10)


}; 
 
 
#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
struct FServerPrintAllActorInfo
{
	struct FString Str;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
struct FConnectionAlwaysRelevantNodePair
{
	struct UNetConnection* NetConnection;  // 0x0 (0x0)
	struct UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
struct FAlwaysRelevantActorInfo
{
	struct UNetConnection* Connection;  // 0x0 (0x0)
	struct AActor* LastViewer;  // 0x8 (0x8)
	struct AActor* LastViewTarget;  // 0x10 (0x10)


}; 
 
 // ScriptStruct ReplicationGraph.ClassReplicationInfo
struct FClassReplicationInfo
{
	float DistancePriorityScale;  // 0x0 (0x0)
	float StarvationPriorityScale;  // 0x4 (0x4)
	float AccumulatedNetPriorityBias;  // 0x8 (0x8)
	uint16_t ReplicationPeriodFrame;  // 0xC (0xC)
	uint16_t FastPath_ReplicationPeriodFrame;  // 0xE (0xE)
	uint16_t ActorChannelFrameTimeout;  // 0x10 (0x10)
	char pad_18[86];  // 0x12 (0x12)
	float CullDistance;  // 0x68 (0x68)
	float CullDistanceSquared;  // 0x6C (0x6C)


}; 
 
 // ScriptStruct ReplicationGraph.TearOffActorInfo
struct FTearOffActorInfo
{
	char pad_0[8];  // 0x0 (0x0)
	struct AActor* Actor;  // 0x8 (0x8)
	char pad_16[8];  // 0x10 (0x10)


}; 
 
 // ScriptStruct ReplicationGraph.LastLocationGatherInfo
struct FLastLocationGatherInfo
{
	struct UNetConnection* Connection;  // 0x0 (0x0)
	struct FVector LastLocation;  // 0x8 (0x8)
	struct FVector LastOutOfRangeLocationCheck;  // 0x20 (0x20)


}; 
 
 // Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
struct FClientCellInfo
{
	struct FVector CellLocation;  // 0x0 (0x0)
	struct FVector CellExtent;  // 0x18 (0x18)
	struct TArray<struct AActor*> Actors;  // 0x30 (0x30)


}; 
 
 // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
struct FServerSetConditionalActorBreakpoint
{
	struct AActor* Actor;  // 0x0 (0x0)


}; 
 
 // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
struct FServerSetCullDistanceForClass
{
	UObject* Class;  // 0x0 (0x0)
	float CullDistance;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
struct FServerSetPeriodFrameForClass
{
	UObject* Class;  // 0x0 (0x0)
	int32_t PeriodFrame;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 
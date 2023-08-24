#pragma once 
#include <ReplicationGraph_Structs.h>
 
 
 
// Class ReplicationGraph.ReplicationGraph
// Size: 0x570(Inherited: 0x28)
struct UReplicationGraph : UReplicationDriver
{
	UNetReplicationGraphConnection* ReplicationConnectionManagerClass;  // 0x28 (0x28)
	struct UNetDriver* NetDriver;  // 0x30 (0x30)
	struct TArray<struct UNetReplicationGraphConnection*> Connections;  // 0x38 (0x38)
	struct TArray<struct UNetReplicationGraphConnection*> PendingConnections;  // 0x48 (0x48)
	char pad_88[64];  // 0x58 (0x58)
	struct TArray<struct UReplicationGraphNode*> GlobalGraphNodes;  // 0x98 (0x98)
	struct TArray<struct UReplicationGraphNode*> PrepareForReplicationNodes;  // 0xA8 (0xA8)
	char pad_184[1208];  // 0xB8 (0xB8)


}; 
 
 


// Class ReplicationGraph.ReplicationGraphNode_ActorList
// Size: 0xD0(Inherited: 0x50)
struct UReplicationGraphNode_ActorList : UReplicationGraphNode
{
	char pad_80[128];  // 0x50 (0x50)


}; 
 
 


// Class ReplicationGraph.BasicReplicationGraph
// Size: 0x5A0(Inherited: 0x570)
struct UBasicReplicationGraph : UReplicationGraph
{
	struct UReplicationGraphNode_GridSpatialization2D* GridNode;  // 0x570 (0x570)
	struct UReplicationGraphNode_ActorList* AlwaysRelevantNode;  // 0x578 (0x578)
	struct TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;  // 0x580 (0x580)
	struct TArray<struct AActor*> ActorsWithoutNetConnection;  // 0x590 (0x590)


}; 
 
 


// Class ReplicationGraph.ReplicationGraphNode
// Size: 0x50(Inherited: 0x28)
struct UReplicationGraphNode : UObject
{
	struct TArray<struct UReplicationGraphNode*> AllChildNodes;  // 0x28 (0x28)
	char pad_56[24];  // 0x38 (0x38)


}; 
 
 


// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// Size: 0x108(Inherited: 0x50)
struct UReplicationGraphNode_ActorListFrequencyBuckets : UReplicationGraphNode
{
	char pad_80[184];  // 0x50 (0x50)


}; 
 
 


// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// Size: 0x100(Inherited: 0xD0)
struct UReplicationGraphNode_DynamicSpatialFrequency : UReplicationGraphNode_ActorList
{
	char pad_208[48];  // 0xD0 (0xD0)


}; 
 
 


// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// Size: 0xE0(Inherited: 0xD0)
struct UReplicationGraphNode_DormancyNode : UReplicationGraphNode_ActorList
{
	char pad_208[16];  // 0xD0 (0xD0)


}; 
 
 


// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// Size: 0x150(Inherited: 0xD0)
struct UReplicationGraphNode_ConnectionDormancyNode : UReplicationGraphNode_ActorList
{
	char pad_208[128];  // 0xD0 (0xD0)


}; 
 
 


// Class ReplicationGraph.ReplicationGraphNode_GridCell
// Size: 0x120(Inherited: 0xD0)
struct UReplicationGraphNode_GridCell : UReplicationGraphNode_ActorList
{
	char pad_208[64];  // 0xD0 (0xD0)
	struct UReplicationGraphNode* DynamicNode;  // 0x110 (0x110)
	struct UReplicationGraphNode_DormancyNode* DormancyNode;  // 0x118 (0x118)


}; 
 
 


// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// Size: 0x260(Inherited: 0x50)
struct UReplicationGraphNode_GridSpatialization2D : UReplicationGraphNode
{
	char pad_80[528];  // 0x50 (0x50)


}; 
 
 


// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// Size: 0x68(Inherited: 0x50)
struct UReplicationGraphNode_AlwaysRelevant : UReplicationGraphNode
{
	struct UReplicationGraphNode* ChildNode;  // 0x50 (0x50)
	char pad_88[16];  // 0x58 (0x58)


}; 
 
 


// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// Size: 0xF0(Inherited: 0xD0)
struct UReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode_ActorList
{
	char pad_208[16];  // 0xD0 (0xD0)
	struct TArray<struct FAlwaysRelevantActorInfo> PastRelevantActors;  // 0xE0 (0xE0)


}; 
 
 


// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// Size: 0x70(Inherited: 0x50)
struct UReplicationGraphNode_TearOff_ForConnection : UReplicationGraphNode
{
	struct TArray<struct FTearOffActorInfo> TearOffActors;  // 0x50 (0x50)
	char pad_96[16];  // 0x60 (0x60)


}; 
 
 


// Class ReplicationGraph.NetReplicationGraphConnection
// Size: 0x2D8(Inherited: 0x28)
struct UNetReplicationGraphConnection : UReplicationConnectionDriver
{
	struct UNetConnection* NetConnection;  // 0x28 (0x28)
	char pad_48[328];  // 0x30 (0x30)
	struct AReplicationGraphDebugActor* DebugActor;  // 0x178 (0x178)
	char pad_384[8];  // 0x180 (0x180)
	struct TArray<struct FLastLocationGatherInfo> LastGatherLocations;  // 0x188 (0x188)
	char pad_408[88];  // 0x198 (0x198)
	struct TArray<struct UReplicationGraphNode*> ConnectionGraphNodes;  // 0x1F0 (0x1F0)
	struct UReplicationGraphNode_TearOff_ForConnection* TearOffNode;  // 0x200 (0x200)
	char pad_520[208];  // 0x208 (0x208)


}; 
 
 


// Class ReplicationGraph.ReplicationGraphDebugActor
// Size: 0x2A0(Inherited: 0x290)
struct AReplicationGraphDebugActor : AActor
{
	struct UReplicationGraph* ReplicationGraph;  // 0x290 (0x290)
	struct UNetReplicationGraphConnection* ConnectionManager;  // 0x298 (0x298)


	void ServerStopDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
	void ServerStartDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
	void ServerSetPeriodFrameForClass(UObject* Class, int32_t PeriodFrame); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
	void ServerSetCullDistanceForClass(UObject* Class, float CullDistance); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
	void ServerSetConditionalActorBreakpoint(struct AActor* Actor); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
	void ServerPrintCullDistances(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
	void ServerPrintAllActorInfo(struct FString Str); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
	void ServerCellInfo(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
	void ClientCellInfo(struct FVector CellLocation, struct FVector CellExtent, struct TArray<struct AActor*> Actors); // Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
}; 
 
 



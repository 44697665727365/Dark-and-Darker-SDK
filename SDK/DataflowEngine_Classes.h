#pragma once 
#include <DataflowEngine_Structs.h>
 
 
 
// Class DataflowEngine.DataflowEdNode
// Size: 0xB8(Inherited: 0x98)
struct UDataflowEdNode : UEdGraphNode
{
	char pad_152[32];  // 0x98 (0x98)


}; 
 
 


// Class DataflowEngine.Dataflow
// Size: 0x88(Inherited: 0x60)
struct UDataflow : UEdGraph
{
	char pad_96[16];  // 0x60 (0x60)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bActive : 1;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)
	struct TArray<struct UObject*> Targets;  // 0x78 (0x78)


}; 
 
 



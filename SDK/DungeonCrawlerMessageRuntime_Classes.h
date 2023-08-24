#pragma once 
#include <DungeonCrawlerMessageRuntime_Structs.h>
 
 
 
// Class DungeonCrawlerMessageRuntime.BaseInterface
// Size: 0x28(Inherited: 0x28)
struct UBaseInterface : UInterface
{


	void UnbindMsgAll(struct UObject* InObject); // Function DungeonCrawlerMessageRuntime.BaseInterface.UnbindMsgAll
	void UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject); // Function DungeonCrawlerMessageRuntime.BaseInterface.UnbindMsg
	void TerminateBase(); // Function DungeonCrawlerMessageRuntime.BaseInterface.TerminateBase
	void BroadcastMsgBlueprint(int32_t& InMsg); // Function DungeonCrawlerMessageRuntime.BaseInterface.BroadcastMsgBlueprint
}; 
 
 


// Class DungeonCrawlerMessageRuntime.BaseObject
// Size: 0xC8(Inherited: 0x28)
struct UBaseObject : UObject
{
	char pad_40[80];  // 0x28 (0x28)
	struct TMap<struct FString, struct FBindMsgNodeArray> MsgMulticastDelegateBlueprintMap;  // 0x78 (0x78)


}; 
 
 


// Class DungeonCrawlerMessageRuntime.MsgBaseNode
// Size: 0x70(Inherited: 0x30)
struct UMsgBaseNode : UCancellableAsyncAction
{
	struct FMulticastInlineDelegate OnMessageReceived;  // 0x30 (0x30)
	char pad_64[48];  // 0x40 (0x40)


	void ReplyMsg(int32_t& InMsg); // Function DungeonCrawlerMessageRuntime.MsgBaseNode.ReplyMsg
	bool GetPayload(int32_t& OutRecvMsgType); // Function DungeonCrawlerMessageRuntime.MsgBaseNode.GetPayload
}; 
 
 


// Class DungeonCrawlerMessageRuntime.BindMsgNode
// Size: 0x70(Inherited: 0x70)
struct UBindMsgNode : UMsgBaseNode
{


	struct UBindMsgNode* BindMsgNode(struct UObject* Owner, struct UScriptStruct* RecvMsgType, struct TScriptInterface<IBaseInterface> BaseInterface); // Function DungeonCrawlerMessageRuntime.BindMsgNode.BindMsgNode
}; 
 
 


// Class DungeonCrawlerMessageRuntime.BroadcastMsgNode
// Size: 0x70(Inherited: 0x70)
struct UBroadcastMsgNode : UMsgBaseNode
{


	struct UBroadcastMsgNode* BroadcastMsgNode(struct UObject* Owner, struct UScriptStruct* RecvMsgType, struct TScriptInterface<IBaseInterface> BaseInterface); // Function DungeonCrawlerMessageRuntime.BroadcastMsgNode.BroadcastMsgNode
	void BroadcastMsg(int32_t& InMsg); // Function DungeonCrawlerMessageRuntime.BroadcastMsgNode.BroadcastMsg
}; 
 
 



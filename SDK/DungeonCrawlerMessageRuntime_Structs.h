#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// DelegateFunction DungeonCrawlerMessageRuntime.AsyncMessageReceivedDelegate__DelegateSignature
struct FAsyncMessageReceivedDelegate__DelegateSignature
{
	struct UMsgBaseNode* ProxyObject;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawlerMessageRuntime.MsgBaseNode.GetPayload
struct FGetPayload
{
	int32_t OutRecvMsgType;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // ScriptStruct DungeonCrawlerMessageRuntime.MsgBase
struct FMsgBase
{
	char pad_0[16];  // 0x0 (0x0)
	struct UMsgBaseNode* ReplyMsgDelegateBlueprint;  // 0x10 (0x10)


}; 
 
 // Function DungeonCrawlerMessageRuntime.MsgBaseNode.ReplyMsg
struct FReplyMsg
{
	int32_t InMsg;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DungeonCrawlerMessageRuntime.BindMsgNodeArray
struct FBindMsgNodeArray
{
	struct TArray<struct UBindMsgNode*> BindMsgNodeArray;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawlerMessageRuntime.BaseInterface.BroadcastMsgBlueprint
struct FBroadcastMsgBlueprint
{
	int32_t InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawlerMessageRuntime.BaseInterface.UnbindMsg
struct FUnbindMsg
{
	struct UScriptStruct* InMsgType;  // 0x0 (0x0)
	struct UObject* InObject;  // 0x8 (0x8)


}; 
 
 // Function DungeonCrawlerMessageRuntime.BaseInterface.UnbindMsgAll
struct FUnbindMsgAll
{
	struct UObject* InObject;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawlerMessageRuntime.BindMsgNode.BindMsgNode
struct FBindMsgNode
{
	struct UObject* Owner;  // 0x0 (0x0)
	struct UScriptStruct* RecvMsgType;  // 0x8 (0x8)
	struct TScriptInterface<IBaseInterface> BaseInterface;  // 0x10 (0x10)
	struct UBindMsgNode* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function DungeonCrawlerMessageRuntime.BroadcastMsgNode.BroadcastMsg
struct FBroadcastMsg
{
	int32_t InMsg;  // 0x0 (0x0)


}; 
 
 // Function DungeonCrawlerMessageRuntime.BroadcastMsgNode.BroadcastMsgNode
struct FBroadcastMsgNode
{
	struct UObject* Owner;  // 0x0 (0x0)
	struct UScriptStruct* RecvMsgType;  // 0x8 (0x8)
	struct TScriptInterface<IBaseInterface> BaseInterface;  // 0x10 (0x10)
	struct UBroadcastMsgNode* ReturnValue;  // 0x20 (0x20)


}; 
 
 
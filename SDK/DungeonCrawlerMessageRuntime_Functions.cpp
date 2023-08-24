#include "pch.h"
#include "SDK.h"

void UBaseInterface::UnbindMsgAll(struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.BaseInterface.UnbindMsgAll");

	FUnbindMsgAll parms{};	
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UBaseInterface::UnbindMsg(struct UScriptStruct* InMsgType, struct UObject* InObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.BaseInterface.UnbindMsg");

	FUnbindMsg parms{};	
	parms.InMsgType = InMsgType;
	parms.InObject = InObject;

	ProcessEvent(fn, &parms);
}

void UBaseInterface::TerminateBase(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.BaseInterface.TerminateBase");

	FTerminateBase parms{};	

	ProcessEvent(fn, &parms);
}

void UBaseInterface::BroadcastMsgBlueprint(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.BaseInterface.BroadcastMsgBlueprint");

	FBroadcastMsgBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void UMsgBaseNode::ReplyMsg(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.MsgBaseNode.ReplyMsg");

	FReplyMsg parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

bool UMsgBaseNode::GetPayload(int32_t& OutRecvMsgType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.MsgBaseNode.GetPayload");

	FGetPayload parms{};	
	parms.OutRecvMsgType = OutRecvMsgType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UBindMsgNode* UBindMsgNode::BindMsgNode(struct UObject* Owner, struct UScriptStruct* RecvMsgType, struct TScriptInterface<IBaseInterface> BaseInterface){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.BindMsgNode.BindMsgNode");

	FBindMsgNode parms{};	
	parms.Owner = Owner;
	parms.RecvMsgType = RecvMsgType;
	parms.BaseInterface = BaseInterface;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UBroadcastMsgNode* UBroadcastMsgNode::BroadcastMsgNode(struct UObject* Owner, struct UScriptStruct* RecvMsgType, struct TScriptInterface<IBaseInterface> BaseInterface){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.BroadcastMsgNode.BroadcastMsgNode");

	FBroadcastMsgNode parms{};	
	parms.Owner = Owner;
	parms.RecvMsgType = RecvMsgType;
	parms.BaseInterface = BaseInterface;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBroadcastMsgNode::BroadcastMsg(int32_t& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DungeonCrawlerMessageRuntime.BroadcastMsgNode.BroadcastMsg");

	FBroadcastMsg parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}


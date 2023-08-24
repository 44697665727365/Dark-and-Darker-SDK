#pragma once 
#include <WB_GameSystemMessageGroup_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C
// Size: 0x32C(Inherited: 0x300)
struct UWB_GameSystemMessageGroup_C : UDCWidgetBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x300 (0x300)
	struct UVerticalBox* MessageVerticalGroup;  // 0x308 (0x308)
	struct UWB_GameSystemMessage_C* WB_GameSystemMessage;  // 0x310 (0x310)
	struct TArray<struct UWB_GameSystemMessage_C*> WidgetArray;  // 0x318 (0x318)
	int32_t MessageIndex;  // 0x328 (0x328)


	void SetNextIndex(); // Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.SetNextIndex
	void OnMessageReceived_4934A8F44FB5D389A11568A9ECAB4816(struct UMsgBaseNode* ProxyObject); // Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.OnMessageReceived_4934A8F44FB5D389A11568A9ECAB4816
	void OnInitialized(); // Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.OnInitialized
	void EventFMsgSystemMessageNotify(struct FMsgSystemMessageNotify Msg); // Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.EventFMsgSystemMessageNotify
	void ExecuteUbergraph_WB_GameSystemMessageGroup(int32_t EntryPoint); // Function WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C.ExecuteUbergraph_WB_GameSystemMessageGroup
}; 
 
 



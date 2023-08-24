#pragma once 
#include <BP_MetaPlayerController_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_MetaPlayerController.BP_MetaPlayerController_C
// Size: 0x980(Inherited: 0x900)
struct ABP_MetaPlayerController_C : ADCMetaPlayerController
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x900 (0x900)
	struct UBP_VoipAkComponent_C* SendVoipAkComponent;  // 0x908 (0x908)
	struct UDCAkComponent* DCAk;  // 0x910 (0x910)
	struct UMetaKarmaComponent* MetaKarmaComponent;  // 0x918 (0x918)
	struct UDCMetaCustomizeComponent* DCMetaCustomize;  // 0x920 (0x920)
	struct UMetaFriendComponent* MetaFriend;  // 0x928 (0x928)
	struct UDCPlayerChatComponent* DCPlayerChat;  // 0x930 (0x930)
	struct UDCMetaTradeComponent* DCMetaTradeComponent;  // 0x938 (0x938)
	struct UDCContextComponent* DCContextComponent;  // 0x940 (0x940)
	struct UMetaClassComponent* MetaClassComponent;  // 0x948 (0x948)
	struct UMetaLeaderboardComponent* MetaLeaderboard;  // 0x950 (0x950)
	struct UMetaItemComponent* MetaItemComponent;  // 0x958 (0x958)
	struct UMetaPlayComponent* MetaPlayComponent;  // 0x960 (0x960)
	uint8_t MovedItemInventoryType;  // 0x968 (0x968)
	char pad_2409[7];  // 0x969 (0x969)
	struct TArray<struct AActor*> PlayerFootprintArray;  // 0x970 (0x970)


	void OnLoadSoundData(struct UObject* Object); // Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnLoadSoundData
	void OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2(struct UMsgBaseNode* ProxyObject); // Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2
	void ReceiveBeginPlay(); // Function BP_MetaPlayerController.BP_MetaPlayerController_C.ReceiveBeginPlay
	void EventFMsgSucceedWidgetMoveItem(struct FMsgSucceedWidgetMoveItem Msg); // Function BP_MetaPlayerController.BP_MetaPlayerController_C.EventFMsgSucceedWidgetMoveItem
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_MetaPlayerController.BP_MetaPlayerController_C.ReceiveEndPlay
	void UpdateGameState(struct FGameStateData& InGameStateData); // Function BP_MetaPlayerController.BP_MetaPlayerController_C.UpdateGameState
	void BindMouse(); // Function BP_MetaPlayerController.BP_MetaPlayerController_C.BindMouse
	void FreeMouse(); // Function BP_MetaPlayerController.BP_MetaPlayerController_C.FreeMouse
	void BndEvt__BP_MetaPlayerController_DCMetaTradeComponent_K2Node_ComponentBoundEvent_0_DCTradeSucceedEvent__DelegateSignature(); // Function BP_MetaPlayerController.BP_MetaPlayerController_C.BndEvt__BP_MetaPlayerController_DCMetaTradeComponent_K2Node_ComponentBoundEvent_0_DCTradeSucceedEvent__DelegateSignature
	void ExecuteUbergraph_BP_MetaPlayerController(int32_t EntryPoint); // Function BP_MetaPlayerController.BP_MetaPlayerController_C.ExecuteUbergraph_BP_MetaPlayerController
}; 
 
 



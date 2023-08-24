#pragma once 
#include <BP_DungeonExitBase_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_DungeonExitBase.BP_DungeonExitBase_C
// Size: 0x511(Inherited: 0x4D8)
struct ABP_DungeonExitBase_C : ABP_TriggerBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4D8 (0x4D8)
	struct UBoxComponent* Box;  // 0x4E0 (0x4E0)
	double DelaySecToOpen;  // 0x4E8 (0x4E8)
	struct TArray<double> TimeRange;  // 0x4F0 (0x4F0)
	int32_t MaxPlayerCount;  // 0x500 (0x500)
	int32_t CurPlayerCount;  // 0x504 (0x504)
	uint8_t TriggerFloorRulePhase;  // 0x508 (0x508)
	char pad_1289[3];  // 0x509 (0x509)
	int32_t TriggerFloorRuleIndex;  // 0x50C (0x50C)
	char pad_1296_1 : 7;  // 0x510 (0x510)
	bool bExitOpened : 1;  // 0x510 (0x510)


	void OnDungeonExitOverlapped(struct ADCPlayerCharacterBase* PlayerCharacter, bool& bResult); // Function BP_DungeonExitBase.BP_DungeonExitBase_C.OnDungeonExitOverlapped
	void OnMessageReceived_D18DDADA4EFE928E7998E1A5730C06EE(struct UMsgBaseNode* ProxyObject); // Function BP_DungeonExitBase.BP_DungeonExitBase_C.OnMessageReceived_D18DDADA4EFE928E7998E1A5730C06EE
	void OnMessageReceived_40B3AB014AC456228E29568172E97769(struct UMsgBaseNode* ProxyObject); // Function BP_DungeonExitBase.BP_DungeonExitBase_C.OnMessageReceived_40B3AB014AC456228E29568172E97769
	void ReceiveBeginPlay(); // Function BP_DungeonExitBase.BP_DungeonExitBase_C.ReceiveBeginPlay
	void BndEvt__BP_CaveExit_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_DungeonExitBase.BP_DungeonExitBase_C.BndEvt__BP_CaveExit_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void EventOnFMsgDungeonInfoNotify(struct FMsgDungeonInfoNotify Msg); // Function BP_DungeonExitBase.BP_DungeonExitBase_C.EventOnFMsgDungeonInfoNotify
	void EventOnFMsgGameFloorRuleNotify(struct FMsgGameFloorRuleNotify Msg); // Function BP_DungeonExitBase.BP_DungeonExitBase_C.EventOnFMsgGameFloorRuleNotify
	void OpenExit(); // Function BP_DungeonExitBase.BP_DungeonExitBase_C.OpenExit
	void ExecuteUbergraph_BP_DungeonExitBase(int32_t EntryPoint); // Function BP_DungeonExitBase.BP_DungeonExitBase_C.ExecuteUbergraph_BP_DungeonExitBase
}; 
 
 



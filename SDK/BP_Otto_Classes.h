#pragma once 
#include <BP_Otto_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Otto.BP_Otto_C
// Size: 0x11D8(Inherited: 0x11B8)
struct ABP_Otto_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct TArray<struct AActor*> Interacters;  // 0x11C0 (0x11C0)
	struct FGameplayTag Selection;  // 0x11D0 (0x11D0)


	void RandomActionFromLie(); // Function BP_Otto.BP_Otto_C.RandomActionFromLie
	void RandomActionFromSit(); // Function BP_Otto.BP_Otto_C.RandomActionFromSit
	void RandomActionFromStand(); // Function BP_Otto.BP_Otto_C.RandomActionFromStand
	void Removed_6EE33BEA4490BDF397E479ADC218DF7F(); // Function BP_Otto.BP_Otto_C.Removed_6EE33BEA4490BDF397E479ADC218DF7F
	void OnMessageReceived_C089C7A74477A8F15E2C599BA276E0B8(struct UMsgBaseNode* ProxyObject); // Function BP_Otto.BP_Otto_C.OnMessageReceived_C089C7A74477A8F15E2C599BA276E0B8
	void OnMessageReceived_B39992A64B1101C700A945B3A442429D(struct UMsgBaseNode* ProxyObject); // Function BP_Otto.BP_Otto_C.OnMessageReceived_B39992A64B1101C700A945B3A442429D
	void ReceiveBeginPlay(); // Function BP_Otto.BP_Otto_C.ReceiveBeginPlay
	void EventFMsgInteractStarted(struct FMsgInteractStarted Msg); // Function BP_Otto.BP_Otto_C.EventFMsgInteractStarted
	void InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult); // Function BP_Otto.BP_Otto_C.InteractSucceed
	void EventFMsgInteractFailed(struct FMsgInteractFailed Msg); // Function BP_Otto.BP_Otto_C.EventFMsgInteractFailed
	void ExecuteUbergraph_BP_Otto(int32_t EntryPoint); // Function BP_Otto.BP_Otto_C.ExecuteUbergraph_BP_Otto
}; 
 
 



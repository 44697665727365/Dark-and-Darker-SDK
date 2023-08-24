#pragma once 
#include <GA_TrapDetection_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_TrapDetection.GA_TrapDetection_C
// Size: 0x578(Inherited: 0x558)
struct UGA_TrapDetection_C : UGA_ActivateOnGranted_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct AActor* GameplayTagCollider;  // 0x560 (0x560)
	struct FPrimaryAssetId PerkId;  // 0x568 (0x568)


	void OnMessageReceived_AB747E83435B04EED3CD2F9F715D5068(struct UMsgBaseNode* ProxyObject); // Function GA_TrapDetection.GA_TrapDetection_C.OnMessageReceived_AB747E83435B04EED3CD2F9F715D5068
	void EventFMsgAccountLinkAccountSessionDataResponse(struct FMsgAccountLinkAccountSessionDataResponse Msg); // Function GA_TrapDetection.GA_TrapDetection_C.EventFMsgAccountLinkAccountSessionDataResponse
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_TrapDetection.GA_TrapDetection_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_TrapDetection(int32_t EntryPoint); // Function GA_TrapDetection.GA_TrapDetection_C.ExecuteUbergraph_GA_TrapDetection
}; 
 
 



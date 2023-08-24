#pragma once 
#include <GA_Chase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Chase.GA_Chase_C
// Size: 0x578(Inherited: 0x558)
struct UGA_Chase_C : UGA_ActivateOnGranted_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct AActor* GameplayTagCollider;  // 0x560 (0x560)
	struct FPrimaryAssetId PerkId;  // 0x568 (0x568)


	void OnMessageReceived_48415CF145A92DD77B9BB2ACD9934E4C(struct UMsgBaseNode* ProxyObject); // Function GA_Chase.GA_Chase_C.OnMessageReceived_48415CF145A92DD77B9BB2ACD9934E4C
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Chase.GA_Chase_C.K2_ActivateAbilityFromEvent
	void EventFMsgAccountLinkAccountSessionDataResponse(struct FMsgAccountLinkAccountSessionDataResponse Msg); // Function GA_Chase.GA_Chase_C.EventFMsgAccountLinkAccountSessionDataResponse
	void ExecuteUbergraph_GA_Chase(int32_t EntryPoint); // Function GA_Chase.GA_Chase_C.ExecuteUbergraph_GA_Chase
}; 
 
 



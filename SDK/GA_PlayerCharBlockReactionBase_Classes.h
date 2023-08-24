#pragma once 
#include <GA_PlayerCharBlockReactionBase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C
// Size: 0x581(Inherited: 0x558)
struct UGA_PlayerCharBlockReactionBase_C : UDCGameplayAbilityBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	struct UAnimMontage* MontageToPlayOnWeakStrike;  // 0x560 (0x560)
	struct UAnimMontage* MontageToPlayOnMidStrike;  // 0x568 (0x568)
	struct UAnimMontage* MontageToPlayOnHeavyStrike;  // 0x570 (0x570)
	struct UAnimMontage* ResultMontageToPlay;  // 0x578 (0x578)
	char pad_1408_1 : 7;  // 0x580 (0x580)
	bool ItemActivate : 1;  // 0x580 (0x580)


	void RemoveItemActivateTag(); // Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.RemoveItemActivateTag
	void EventReceived_9082A8194C120F827B853A826395D816(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.EventReceived_9082A8194C120F827B853A826395D816
	void OnCancelled_9082A8194C120F827B853A826395D816(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.OnCancelled_9082A8194C120F827B853A826395D816
	void OnInterrupted_9082A8194C120F827B853A826395D816(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.OnInterrupted_9082A8194C120F827B853A826395D816
	void OnBlendOut_9082A8194C120F827B853A826395D816(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.OnBlendOut_9082A8194C120F827B853A826395D816
	void OnCompleted_9082A8194C120F827B853A826395D816(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.OnCompleted_9082A8194C120F827B853A826395D816
	void OnFinish_639A2A34444688AA7279D58FA53595DE(); // Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.OnFinish_639A2A34444688AA7279D58FA53595DE
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.K2_ActivateAbilityFromEvent
	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.ReceivedEvent
	void OnFinished(); // Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.OnFinished
	void ExecuteUbergraph_GA_PlayerCharBlockReactionBase(int32_t EntryPoint); // Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.ExecuteUbergraph_GA_PlayerCharBlockReactionBase
}; 
 
 



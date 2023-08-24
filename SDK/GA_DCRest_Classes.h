#pragma once 
#include <GA_DCRest_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DCRest.GA_DCRest_C
// Size: 0x590(Inherited: 0x558)
struct UGA_DCRest_C : UDCGameplayAbilityBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	char pad_1376_1 : 7;  // 0x560 (0x560)
	bool bIsRestEnded : 1;  // 0x560 (0x560)
	char pad_1377[7];  // 0x561 (0x561)
	struct FGameplayTagContainer Input Config Tags;  // 0x568 (0x568)
	struct UAnimMontage* MontageToPlay;  // 0x588 (0x588)


	void RechargeSpellAndSkill(); // Function GA_DCRest.GA_DCRest_C.RechargeSpellAndSkill
	void GetInCampfireRechargeInterval(double& RechargeAmount); // Function GA_DCRest.GA_DCRest_C.GetInCampfireRechargeInterval
	void GetNormalRechargeInterval(double& RechargeAmount); // Function GA_DCRest.GA_DCRest_C.GetNormalRechargeInterval
	void GetSkillRechargeAmount(int32_t& RechargeAmount); // Function GA_DCRest.GA_DCRest_C.GetSkillRechargeAmount
	void GetSpellRechargeAmount(int32_t& RechargeAmount); // Function GA_DCRest.GA_DCRest_C.GetSpellRechargeAmount
	void EventReceived_1354684B4ED7CD1780504781985CC179(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_DCRest.GA_DCRest_C.EventReceived_1354684B4ED7CD1780504781985CC179
	void OnCancelled_1354684B4ED7CD1780504781985CC179(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_DCRest.GA_DCRest_C.OnCancelled_1354684B4ED7CD1780504781985CC179
	void OnInterrupted_1354684B4ED7CD1780504781985CC179(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_DCRest.GA_DCRest_C.OnInterrupted_1354684B4ED7CD1780504781985CC179
	void OnBlendOut_1354684B4ED7CD1780504781985CC179(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_DCRest.GA_DCRest_C.OnBlendOut_1354684B4ED7CD1780504781985CC179
	void OnCompleted_1354684B4ED7CD1780504781985CC179(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_DCRest.GA_DCRest_C.OnCompleted_1354684B4ED7CD1780504781985CC179
	void OnVelocityChange_B977E483464C8462F9CCFEAAC9BC697B(); // Function GA_DCRest.GA_DCRest_C.OnVelocityChange_B977E483464C8462F9CCFEAAC9BC697B
	void OnSync_F91698B446A3FF36AB7603AD2D824105(); // Function GA_DCRest.GA_DCRest_C.OnSync_F91698B446A3FF36AB7603AD2D824105
	void OnFinished_08B6AFA441544B64E6F9A8854A58A87C(int32_t ActionNumber); // Function GA_DCRest.GA_DCRest_C.OnFinished_08B6AFA441544B64E6F9A8854A58A87C
	void OnPerformAction_08B6AFA441544B64E6F9A8854A58A87C(int32_t ActionNumber); // Function GA_DCRest.GA_DCRest_C.OnPerformAction_08B6AFA441544B64E6F9A8854A58A87C
	void OnSync_BAECC0EE47841CCD9C7F0E84FCA28F0B(); // Function GA_DCRest.GA_DCRest_C.OnSync_BAECC0EE47841CCD9C7F0E84FCA28F0B
	void InputActionCompleted_F9FF161049750AD2CEBBE5BA27364FF1(); // Function GA_DCRest.GA_DCRest_C.InputActionCompleted_F9FF161049750AD2CEBBE5BA27364FF1
	void InputActionStarted_F9FF161049750AD2CEBBE5BA27364FF1(); // Function GA_DCRest.GA_DCRest_C.InputActionStarted_F9FF161049750AD2CEBBE5BA27364FF1
	void OnFinished_B9B77D9E49AEACAC3199F88123537880(int32_t ActionNumber); // Function GA_DCRest.GA_DCRest_C.OnFinished_B9B77D9E49AEACAC3199F88123537880
	void OnPerformAction_B9B77D9E49AEACAC3199F88123537880(int32_t ActionNumber); // Function GA_DCRest.GA_DCRest_C.OnPerformAction_B9B77D9E49AEACAC3199F88123537880
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DCRest.GA_DCRest_C.K2_OnEndAbility
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_DCRest.GA_DCRest_C.K2_ActivateAbilityFromEvent
	void OnRestEnd(); // Function GA_DCRest.GA_DCRest_C.OnRestEnd
	void ExecuteUbergraph_GA_DCRest(int32_t EntryPoint); // Function GA_DCRest.GA_DCRest_C.ExecuteUbergraph_GA_DCRest
}; 
 
 



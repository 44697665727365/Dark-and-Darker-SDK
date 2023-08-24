#include "pch.h"
#include "SDK.h"

void UGA_DCRest_C::RechargeSpellAndSkill(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.RechargeSpellAndSkill");

	FRechargeSpellAndSkill parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::GetInCampfireRechargeInterval(double& RechargeAmount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.GetInCampfireRechargeInterval");

	FGetInCampfireRechargeInterval parms{};	
	parms.RechargeAmount = RechargeAmount;

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::GetNormalRechargeInterval(double& RechargeAmount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.GetNormalRechargeInterval");

	FGetNormalRechargeInterval parms{};	
	parms.RechargeAmount = RechargeAmount;

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::GetSkillRechargeAmount(int32_t& RechargeAmount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.GetSkillRechargeAmount");

	FGetSkillRechargeAmount parms{};	
	parms.RechargeAmount = RechargeAmount;

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::GetSpellRechargeAmount(int32_t& RechargeAmount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.GetSpellRechargeAmount");

	FGetSpellRechargeAmount parms{};	
	parms.RechargeAmount = RechargeAmount;

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::EventReceived_1354684B4ED7CD1780504781985CC179(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.EventReceived_1354684B4ED7CD1780504781985CC179");

	FEventReceived_1354684B4ED7CD1780504781985CC179 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::OnCancelled_1354684B4ED7CD1780504781985CC179(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.OnCancelled_1354684B4ED7CD1780504781985CC179");

	FOnCancelled_1354684B4ED7CD1780504781985CC179 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::OnInterrupted_1354684B4ED7CD1780504781985CC179(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.OnInterrupted_1354684B4ED7CD1780504781985CC179");

	FOnInterrupted_1354684B4ED7CD1780504781985CC179 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::OnBlendOut_1354684B4ED7CD1780504781985CC179(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.OnBlendOut_1354684B4ED7CD1780504781985CC179");

	FOnBlendOut_1354684B4ED7CD1780504781985CC179 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::OnCompleted_1354684B4ED7CD1780504781985CC179(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.OnCompleted_1354684B4ED7CD1780504781985CC179");

	FOnCompleted_1354684B4ED7CD1780504781985CC179 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::OnVelocityChange_B977E483464C8462F9CCFEAAC9BC697B(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.OnVelocityChange_B977E483464C8462F9CCFEAAC9BC697B");

	FOnVelocityChange_B977E483464C8462F9CCFEAAC9BC697B parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::OnSync_F91698B446A3FF36AB7603AD2D824105(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.OnSync_F91698B446A3FF36AB7603AD2D824105");

	FOnSync_F91698B446A3FF36AB7603AD2D824105 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::OnFinished_08B6AFA441544B64E6F9A8854A58A87C(int32_t ActionNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.OnFinished_08B6AFA441544B64E6F9A8854A58A87C");

	FOnFinished_08B6AFA441544B64E6F9A8854A58A87C parms{};	
	parms.ActionNumber = ActionNumber;

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::OnPerformAction_08B6AFA441544B64E6F9A8854A58A87C(int32_t ActionNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.OnPerformAction_08B6AFA441544B64E6F9A8854A58A87C");

	FOnPerformAction_08B6AFA441544B64E6F9A8854A58A87C parms{};	
	parms.ActionNumber = ActionNumber;

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::OnSync_BAECC0EE47841CCD9C7F0E84FCA28F0B(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.OnSync_BAECC0EE47841CCD9C7F0E84FCA28F0B");

	FOnSync_BAECC0EE47841CCD9C7F0E84FCA28F0B parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::InputActionCompleted_F9FF161049750AD2CEBBE5BA27364FF1(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.InputActionCompleted_F9FF161049750AD2CEBBE5BA27364FF1");

	FInputActionCompleted_F9FF161049750AD2CEBBE5BA27364FF1 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::InputActionStarted_F9FF161049750AD2CEBBE5BA27364FF1(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.InputActionStarted_F9FF161049750AD2CEBBE5BA27364FF1");

	FInputActionStarted_F9FF161049750AD2CEBBE5BA27364FF1 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::OnFinished_B9B77D9E49AEACAC3199F88123537880(int32_t ActionNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.OnFinished_B9B77D9E49AEACAC3199F88123537880");

	FOnFinished_B9B77D9E49AEACAC3199F88123537880 parms{};	
	parms.ActionNumber = ActionNumber;

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::OnPerformAction_B9B77D9E49AEACAC3199F88123537880(int32_t ActionNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.OnPerformAction_B9B77D9E49AEACAC3199F88123537880");

	FOnPerformAction_B9B77D9E49AEACAC3199F88123537880 parms{};	
	parms.ActionNumber = ActionNumber;

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::OnRestEnd(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.OnRestEnd");

	FOnRestEnd parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DCRest_C::ExecuteUbergraph_GA_DCRest(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCRest.GA_DCRest_C.ExecuteUbergraph_GA_DCRest");

	FExecuteUbergraph_GA_DCRest parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


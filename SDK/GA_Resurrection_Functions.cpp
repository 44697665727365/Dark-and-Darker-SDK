#include "pch.h"
#include "SDK.h"

void UGA_Resurrection_C::BroadcastSystemMessage(struct FText SystemMessage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Resurrection.GA_Resurrection_C.BroadcastSystemMessage");

	FBroadcastSystemMessage parms{};	
	parms.SystemMessage = SystemMessage;

	ProcessEvent(fn, &parms);
}

void UGA_Resurrection_C::CheckSoulHeartEquip(bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Resurrection.GA_Resurrection_C.CheckSoulHeartEquip");

	FCheckSoulHeartEquip parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_Resurrection_C::Check Corpse Is Party Member(struct FString PartyId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Resurrection.GA_Resurrection_C.Check Corpse Is Party Member");

	FCheck Corpse Is Party Member parms{};	
	parms.PartyId = PartyId;

	ProcessEvent(fn, &parms);
}

void UGA_Resurrection_C::Cancelled_EA1ED724476E505943D50C8012DA1AF4(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Resurrection.GA_Resurrection_C.Cancelled_EA1ED724476E505943D50C8012DA1AF4");

	FCancelled_EA1ED724476E505943D50C8012DA1AF4 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Resurrection_C::ValidData_EA1ED724476E505943D50C8012DA1AF4(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Resurrection.GA_Resurrection_C.ValidData_EA1ED724476E505943D50C8012DA1AF4");

	FValidData_EA1ED724476E505943D50C8012DA1AF4 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_Resurrection_C::OnDirectionChanged_CF4D66C54B0F5708CE4F1D9E3DBB3CF7(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Resurrection.GA_Resurrection_C.OnDirectionChanged_CF4D66C54B0F5708CE4F1D9E3DBB3CF7");

	FOnDirectionChanged_CF4D66C54B0F5708CE4F1D9E3DBB3CF7 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Resurrection_C::EventReceived_BE736C43450D5B046C0B1F9F28997628(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Resurrection.GA_Resurrection_C.EventReceived_BE736C43450D5B046C0B1F9F28997628");

	FEventReceived_BE736C43450D5B046C0B1F9F28997628 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Resurrection_C::EventReceived_9BDC3DCE498E0FDB511BA29F64F2685F(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Resurrection.GA_Resurrection_C.EventReceived_9BDC3DCE498E0FDB511BA29F64F2685F");

	FEventReceived_9BDC3DCE498E0FDB511BA29F64F2685F parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Resurrection_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Resurrection.GA_Resurrection_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_Resurrection_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Resurrection.GA_Resurrection_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_Resurrection_C::StartResurrection(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Resurrection.GA_Resurrection_C.StartResurrection");

	FStartResurrection parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Resurrection_C::EndSpell(struct FText SystemMessage, bool IsEndAbilty){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Resurrection.GA_Resurrection_C.EndSpell");

	FEndSpell parms{};	
	parms.SystemMessage = SystemMessage;
	parms.IsEndAbilty = IsEndAbilty;

	ProcessEvent(fn, &parms);
}

void UGA_Resurrection_C::ExecuteUbergraph_GA_Resurrection(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Resurrection.GA_Resurrection_C.ExecuteUbergraph_GA_Resurrection");

	FExecuteUbergraph_GA_Resurrection parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


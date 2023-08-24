#include "pch.h"
#include "SDK.h"

void UGA_DoubleJump_C::SetJumpZVelocity(double JumpZVelocity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DoubleJump.GA_DoubleJump_C.SetJumpZVelocity");

	FSetJumpZVelocity parms{};	
	parms.JumpZVelocity = JumpZVelocity;

	ProcessEvent(fn, &parms);
}

void UGA_DoubleJump_C::EventReceived_110D27D243C1B5BD2C64868F4B1A027E(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DoubleJump.GA_DoubleJump_C.EventReceived_110D27D243C1B5BD2C64868F4B1A027E");

	FEventReceived_110D27D243C1B5BD2C64868F4B1A027E parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_DoubleJump_C::OnFinish_6C2FDA30484B4E7D75CD42B563495496(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DoubleJump.GA_DoubleJump_C.OnFinish_6C2FDA30484B4E7D75CD42B563495496");

	FOnFinish_6C2FDA30484B4E7D75CD42B563495496 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DoubleJump_C::OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DoubleJump.GA_DoubleJump_C.OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D");

	FOnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D parms{};	
	parms.PrevMovementMode = PrevMovementMode;
	parms.NewMovementMode = NewMovementMode;

	ProcessEvent(fn, &parms);
}

void UGA_DoubleJump_C::OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DoubleJump.GA_DoubleJump_C.OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9");

	FOnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9 parms{};	
	parms.PrevMovementMode = PrevMovementMode;
	parms.NewMovementMode = NewMovementMode;

	ProcessEvent(fn, &parms);
}

void UGA_DoubleJump_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DoubleJump.GA_DoubleJump_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DoubleJump_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DoubleJump.GA_DoubleJump_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DoubleJump_C::ExecuteUbergraph_GA_DoubleJump(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DoubleJump.GA_DoubleJump_C.ExecuteUbergraph_GA_DoubleJump");

	FExecuteUbergraph_GA_DoubleJump parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


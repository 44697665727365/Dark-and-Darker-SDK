#include "pch.h"
#include "SDK.h"

void UGA_LichCloseAttack_C::EventReceived_B89F65DB45E74AE38A9C60A1FF2184F6(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCloseAttack.GA_LichCloseAttack_C.EventReceived_B89F65DB45E74AE38A9C60A1FF2184F6");

	FEventReceived_B89F65DB45E74AE38A9C60A1FF2184F6 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_LichCloseAttack_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCloseAttack.GA_LichCloseAttack_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_LichCloseAttack_C::ExecuteUbergraph_GA_LichCloseAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichCloseAttack.GA_LichCloseAttack_C.ExecuteUbergraph_GA_LichCloseAttack");

	FExecuteUbergraph_GA_LichCloseAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


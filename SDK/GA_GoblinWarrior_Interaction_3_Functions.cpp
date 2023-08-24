#include "pch.h"
#include "SDK.h"

void UGA_GoblinWarrior_Interaction_2_C::EventReceived_54FAB9564F96290A84B48B89342BD34A(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_Interaction_3.GA_GoblinWarrior_Interaction_2_C.EventReceived_54FAB9564F96290A84B48B89342BD34A");

	FEventReceived_54FAB9564F96290A84B48B89342BD34A parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_Interaction_2_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_Interaction_3.GA_GoblinWarrior_Interaction_2_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_Interaction_2_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_Interaction_3.GA_GoblinWarrior_Interaction_2_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_Interaction_2_C::Rotate To Actor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_Interaction_3.GA_GoblinWarrior_Interaction_2_C.Rotate To Actor");

	FRotate To Actor parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_Interaction_2_C::ExecuteUbergraph_GA_GoblinWarrior_Interaction_3(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_Interaction_3.GA_GoblinWarrior_Interaction_2_C.ExecuteUbergraph_GA_GoblinWarrior_Interaction_3");

	FExecuteUbergraph_GA_GoblinWarrior_Interaction_3 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


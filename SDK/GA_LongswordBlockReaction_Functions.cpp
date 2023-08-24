#include "pch.h"
#include "SDK.h"

void UGA_LongswordBlockReaction_C::InputActionCompleted_F37C73224C498F24B25B72863E97E15A(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LongswordBlockReaction.GA_LongswordBlockReaction_C.InputActionCompleted_F37C73224C498F24B25B72863E97E15A");

	FInputActionCompleted_F37C73224C498F24B25B72863E97E15A parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_LongswordBlockReaction_C::InputActionStarted_F37C73224C498F24B25B72863E97E15A(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LongswordBlockReaction.GA_LongswordBlockReaction_C.InputActionStarted_F37C73224C498F24B25B72863E97E15A");

	FInputActionStarted_F37C73224C498F24B25B72863E97E15A parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_LongswordBlockReaction_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LongswordBlockReaction.GA_LongswordBlockReaction_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_LongswordBlockReaction_C::ExecuteUbergraph_GA_LongswordBlockReaction(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LongswordBlockReaction.GA_LongswordBlockReaction_C.ExecuteUbergraph_GA_LongswordBlockReaction");

	FExecuteUbergraph_GA_LongswordBlockReaction parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


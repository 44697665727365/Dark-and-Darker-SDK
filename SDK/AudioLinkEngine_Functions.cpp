#include "pch.h"
#include "SDK.h"

void UAudioLinkBlueprintInterface::StopLink(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink");

	FStopLink parms{};	

	ProcessEvent(fn, &parms);
}

void UAudioLinkBlueprintInterface::SetLinkSound(struct USoundBase* NewSound){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound");

	FSetLinkSound parms{};	
	parms.NewSound = NewSound;

	ProcessEvent(fn, &parms);
}

void UAudioLinkBlueprintInterface::PlayLink(float StartTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink");

	FPlayLink parms{};	
	parms.StartTime = StartTime;

	ProcessEvent(fn, &parms);
}

bool UAudioLinkBlueprintInterface::IsLinkPlaying(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying");

	FIsLinkPlaying parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


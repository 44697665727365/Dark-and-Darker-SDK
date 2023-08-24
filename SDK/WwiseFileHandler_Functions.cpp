#include "pch.h"
#include "SDK.h"

void UWwiseExternalSourceStatics::SetExternalSourceMediaWithIds(struct FAkUniqueID ExternalSourceCookie, int32_t MediaId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaWithIds");

	FSetExternalSourceMediaWithIds parms{};	
	parms.ExternalSourceCookie = ExternalSourceCookie;
	parms.MediaId = MediaId;

	ProcessEvent(fn, &parms);
}

void UWwiseExternalSourceStatics::SetExternalSourceMediaByName(struct FString ExternalSourceName, struct FString MediaName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaByName");

	FSetExternalSourceMediaByName parms{};	
	parms.ExternalSourceName = ExternalSourceName;
	parms.MediaName = MediaName;

	ProcessEvent(fn, &parms);
}

void UWwiseExternalSourceStatics::SetExternalSourceMediaById(struct FString ExternalSourceName, int32_t MediaId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaById");

	FSetExternalSourceMediaById parms{};	
	parms.ExternalSourceName = ExternalSourceName;
	parms.MediaId = MediaId;

	ProcessEvent(fn, &parms);
}


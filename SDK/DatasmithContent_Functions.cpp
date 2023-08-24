#include "pch.h"
#include "SDK.h"

struct TArray<struct FString> UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValuesForKey(struct UObject* Object, struct FName Key, bool bPartialMatchKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValuesForKey");

	FGetDatasmithUserDataValuesForKey parms{};	
	parms.Object = Object;
	parms.Key = Key;
	parms.bPartialMatchKey = bPartialMatchKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValueForKey(struct UObject* Object, struct FName Key, bool bPartialMatchKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey");

	FGetDatasmithUserDataValueForKey parms{};	
	parms.Object = Object;
	parms.Key = Key;
	parms.bPartialMatchKey = bPartialMatchKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDatasmithContentBlueprintLibrary::GetDatasmithUserDataKeysAndValuesForValue(struct UObject* Object, struct FString StringToMatch, struct TArray<struct FName>& OutKeys, struct TArray<struct FString>& OutValues){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue");

	FGetDatasmithUserDataKeysAndValuesForValue parms{};	
	parms.Object = Object;
	parms.StringToMatch = StringToMatch;
	parms.OutKeys = OutKeys;
	parms.OutValues = OutValues;

	ProcessEvent(fn, &parms);
}

struct UDatasmithAssetUserData* UDatasmithContentBlueprintLibrary::GetDatasmithUserData(struct UObject* Object){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData");

	FGetDatasmithUserData parms{};	
	parms.Object = Object;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ADatasmithImportedSequencesActor::PlayLevelSequence(struct ULevelSequence* SequenceToPlay){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence");

	FPlayLevelSequence parms{};	
	parms.SequenceToPlay = SequenceToPlay;

	ProcessEvent(fn, &parms);
}


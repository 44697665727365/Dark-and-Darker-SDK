#include "pch.h"
#include "SDK.h"

void UImgMediaSource::SetTokenizedSequencePath(struct FString Path){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.SetTokenizedSequencePath");

	FSetTokenizedSequencePath parms{};	
	parms.Path = Path;

	ProcessEvent(fn, &parms);
}

void UImgMediaSource::SetSequencePath(struct FString Path){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.SetSequencePath");

	FSetSequencePath parms{};	
	parms.Path = Path;

	ProcessEvent(fn, &parms);
}

void UImgMediaSource::SetMipLevelDistance(float Distance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.SetMipLevelDistance");

	FSetMipLevelDistance parms{};	
	parms.Distance = Distance;

	ProcessEvent(fn, &parms);
}

void UImgMediaSource::RemoveTargetObject(struct AActor* InActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.RemoveTargetObject");

	FRemoveTargetObject parms{};	
	parms.InActor = InActor;

	ProcessEvent(fn, &parms);
}

void UImgMediaSource::RemoveGlobalCamera(struct AActor* InActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.RemoveGlobalCamera");

	FRemoveGlobalCamera parms{};	
	parms.InActor = InActor;

	ProcessEvent(fn, &parms);
}

struct FString UImgMediaSource::GetSequencePath(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetSequencePath");

	FGetSequencePath parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UImgMediaSource::GetProxies(struct TArray<struct FString>& OutProxies){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetProxies");

	FGetProxies parms{};	
	parms.OutProxies = OutProxies;

	ProcessEvent(fn, &parms);
}

void UImgMediaSource::AddTargetObject(struct AActor* InActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.AddTargetObject");

	FAddTargetObject parms{};	
	parms.InActor = InActor;

	ProcessEvent(fn, &parms);
}

void UImgMediaSource::AddGlobalCamera(struct AActor* InActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.AddGlobalCamera");

	FAddGlobalCamera parms{};	
	parms.InActor = InActor;

	ProcessEvent(fn, &parms);
}


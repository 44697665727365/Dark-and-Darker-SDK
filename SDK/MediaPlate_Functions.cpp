#include "pch.h"
#include "SDK.h"

void UMediaPlateComponent::SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible");

	FSetPlayOnlyWhenVisible parms{};	
	parms.bInPlayOnlyWhenVisible = bInPlayOnlyWhenVisible;

	ProcessEvent(fn, &parms);
}

void UMediaPlateComponent::SetMeshRange(struct FVector2D InMeshRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.SetMeshRange");

	FSetMeshRange parms{};	
	parms.InMeshRange = InMeshRange;

	ProcessEvent(fn, &parms);
}

void UMediaPlateComponent::SetLoop(bool bInLoop){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.SetLoop");

	FSetLoop parms{};	
	parms.bInLoop = bInLoop;

	ProcessEvent(fn, &parms);
}

void UMediaPlateComponent::SetLetterboxAspectRatio(float AspectRatio){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio");

	FSetLetterboxAspectRatio parms{};	
	parms.AspectRatio = AspectRatio;

	ProcessEvent(fn, &parms);
}

bool UMediaPlateComponent::Seek(struct FTimespan& Time){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.Seek");

	FSeek parms{};	
	parms.Time = Time;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlateComponent::Rewind(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.Rewind");

	FRewind parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMediaPlateComponent::Play(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.Play");

	FPlay parms{};	

	ProcessEvent(fn, &parms);
}

void UMediaPlateComponent::Pause(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.Pause");

	FPause parms{};	

	ProcessEvent(fn, &parms);
}

void UMediaPlateComponent::Open(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.Open");

	FOpen parms{};	

	ProcessEvent(fn, &parms);
}

void UMediaPlateComponent::OnMediaOpened(struct FString DeviceUrl){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.OnMediaOpened");

	FOnMediaOpened parms{};	
	parms.DeviceUrl = DeviceUrl;

	ProcessEvent(fn, &parms);
}

void UMediaPlateComponent::OnMediaEnd(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.OnMediaEnd");

	FOnMediaEnd parms{};	

	ProcessEvent(fn, &parms);
}

bool UMediaPlateComponent::IsMediaPlatePlaying(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.IsMediaPlatePlaying");

	FIsMediaPlatePlaying parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UMediaPlateComponent::GetMeshRange(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.GetMeshRange");

	FGetMeshRange parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMediaTexture* UMediaPlateComponent::GetMediaTexture(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.GetMediaTexture");

	FGetMediaTexture parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMediaPlayer* UMediaPlateComponent::GetMediaPlayer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.GetMediaPlayer");

	FGetMediaPlayer parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMediaPlateComponent::GetLoop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.GetLoop");

	FGetLoop parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMediaPlateComponent::GetLetterboxAspectRatio(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio");

	FGetLetterboxAspectRatio parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMediaPlateComponent::Close(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MediaPlate.MediaPlateComponent.Close");

	FClose parms{};	

	ProcessEvent(fn, &parms);
}


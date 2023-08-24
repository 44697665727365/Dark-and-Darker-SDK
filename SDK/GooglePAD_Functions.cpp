#include "pch.h"
#include "SDK.h"

uint8_t UGooglePADFunctionLibrary::ShowCellularDataConfirmation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation");

	FShowCellularDataConfirmation parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UGooglePADFunctionLibrary::RequestRemoval(struct FString Name){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval");

	FRequestRemoval parms{};	
	parms.Name = Name;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UGooglePADFunctionLibrary::RequestInfo(struct TArray<struct FString> AssetPacks){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestInfo");

	FRequestInfo parms{};	
	parms.AssetPacks = AssetPacks;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UGooglePADFunctionLibrary::RequestDownload(struct TArray<struct FString> AssetPacks){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestDownload");

	FRequestDownload parms{};	
	parms.AssetPacks = AssetPacks;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGooglePADFunctionLibrary::ReleaseDownloadState(int32_t State){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState");

	FReleaseDownloadState parms{};	
	parms.State = State;

	ProcessEvent(fn, &parms);
}

void UGooglePADFunctionLibrary::ReleaseAssetPackLocation(int32_t Location){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation");

	FReleaseAssetPackLocation parms{};	
	parms.Location = Location;

	ProcessEvent(fn, &parms);
}

int32_t UGooglePADFunctionLibrary::GetTotalBytesToDownload(int32_t State){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload");

	FGetTotalBytesToDownload parms{};	
	parms.State = State;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UGooglePADFunctionLibrary::GetStorageMethod(int32_t Location){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod");

	FGetStorageMethod parms{};	
	parms.Location = Location;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus(uint8_t& Status){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus");

	FGetShowCellularDataConfirmationStatus parms{};	
	parms.Status = Status;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UGooglePADFunctionLibrary::GetDownloadStatus(int32_t State){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus");

	FGetDownloadStatus parms{};	
	parms.State = State;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UGooglePADFunctionLibrary::GetDownloadState(struct FString Name, int32_t& State){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState");

	FGetDownloadState parms{};	
	parms.Name = Name;
	parms.State = State;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UGooglePADFunctionLibrary::GetBytesDownloaded(int32_t State){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded");

	FGetBytesDownloaded parms{};	
	parms.State = State;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UGooglePADFunctionLibrary::GetAssetsPath(int32_t Location){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath");

	FGetAssetsPath parms{};	
	parms.Location = Location;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UGooglePADFunctionLibrary::GetAssetPackLocation(struct FString Name, int32_t& Location){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation");

	FGetAssetPackLocation parms{};	
	parms.Name = Name;
	parms.Location = Location;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UGooglePADFunctionLibrary::CancelDownload(struct TArray<struct FString> AssetPacks){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.CancelDownload");

	FCancelDownload parms{};	
	parms.AssetPacks = AssetPacks;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


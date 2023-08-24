#pragma once 
#include <GooglePAD_Structs.h>
 
 
 
// Class GooglePAD.GooglePADFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UGooglePADFunctionLibrary : UBlueprintFunctionLibrary
{


	uint8_t ShowCellularDataConfirmation(); // Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
	uint8_t RequestRemoval(struct FString Name); // Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
	uint8_t RequestInfo(struct TArray<struct FString> AssetPacks); // Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
	uint8_t RequestDownload(struct TArray<struct FString> AssetPacks); // Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
	void ReleaseDownloadState(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
	void ReleaseAssetPackLocation(int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
	int32_t GetTotalBytesToDownload(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
	uint8_t GetStorageMethod(int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
	uint8_t GetShowCellularDataConfirmationStatus(uint8_t& Status); // Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
	uint8_t GetDownloadStatus(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
	uint8_t GetDownloadState(struct FString Name, int32_t& State); // Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
	int32_t GetBytesDownloaded(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
	struct FString GetAssetsPath(int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
	uint8_t GetAssetPackLocation(struct FString Name, int32_t& Location); // Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
	uint8_t CancelDownload(struct TArray<struct FString> AssetPacks); // Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
}; 
 
 



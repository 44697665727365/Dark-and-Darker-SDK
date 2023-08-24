#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
struct FCancelDownload
{
	struct TArray<struct FString> AssetPacks;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
struct FGetShowCellularDataConfirmationStatus
{
	uint8_t Status;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x1 (0x1)


}; 
 
 // Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
struct FGetTotalBytesToDownload
{
	int32_t State;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
struct FGetBytesDownloaded
{
	int32_t State;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
struct FReleaseDownloadState
{
	int32_t State;  // 0x0 (0x0)


}; 
 
 // Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
struct FGetAssetPackLocation
{
	struct FString Name;  // 0x0 (0x0)
	int32_t Location;  // 0x10 (0x10)
	uint8_t ReturnValue;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
struct FGetAssetsPath
{
	int32_t Location;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FString ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
struct FGetStorageMethod
{
	int32_t Location;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
struct FGetDownloadStatus
{
	int32_t State;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
struct FGetDownloadState
{
	struct FString Name;  // 0x0 (0x0)
	int32_t State;  // 0x10 (0x10)
	uint8_t ReturnValue;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
struct FReleaseAssetPackLocation
{
	int32_t Location;  // 0x0 (0x0)


}; 
 
 // Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
struct FRequestDownload
{
	struct TArray<struct FString> AssetPacks;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
struct FRequestInfo
{
	struct TArray<struct FString> AssetPacks;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
struct FRequestRemoval
{
	struct FString Name;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
struct FShowCellularDataConfirmation
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 
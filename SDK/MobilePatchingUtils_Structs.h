#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
struct FGetDownloadSpeed
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction MobilePatchingUtils.OnContentInstallFailed__DelegateSignature
struct FOnContentInstallFailed__DelegateSignature
{
	struct FText ErrorText;  // 0x0 (0x0)
	int32_t ErrorCode;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // DelegateFunction MobilePatchingUtils.OnRequestContentFailed__DelegateSignature
struct FOnRequestContentFailed__DelegateSignature
{
	struct FText ErrorText;  // 0x0 (0x0)
	int32_t ErrorCode;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // DelegateFunction MobilePatchingUtils.OnRequestContentSucceeded__DelegateSignature
struct FOnRequestContentSucceeded__DelegateSignature
{
	struct UMobilePendingContent* MobilePendingContent;  // 0x0 (0x0)


}; 
 
 // Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
struct FGetDownloadSize
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
struct FGetDiskFreeSpace
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MobilePatchingUtils.MobileInstalledContent.Mount
struct FMount
{
	int32_t PakOrder;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FString MountPoint;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
struct FGetInstalledContentSize
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
struct FGetDownloadStatusText
{
	struct FText ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
struct FGetInstallProgress
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
struct FRequestContent
{
	struct FString RemoteManifestURL;  // 0x0 (0x0)
	struct FString CloudURL;  // 0x10 (0x10)
	struct FString InstallDirectory;  // 0x20 (0x20)
	struct FDelegate OnSucceeded;  // 0x30 (0x30)
	struct FDelegate OnFailed;  // 0x40 (0x40)


}; 
 
 // Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
struct FGetTotalDownloadedSize
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
struct FGetRequiredDiskSpace
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MobilePatchingUtils.MobilePendingContent.StartInstall
struct FStartInstall
{
	struct FDelegate OnSucceeded;  // 0x0 (0x0)
	struct FDelegate OnFailed;  // 0x10 (0x10)


}; 
 
 // Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
struct FGetActiveDeviceProfileName
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
struct FGetInstalledContent
{
	struct FString InstallDirectory;  // 0x0 (0x0)
	struct UMobileInstalledContent* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
struct FGetSupportedPlatformNames
{
	struct TArray<struct FString> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
struct FHasActiveWiFiConnection
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 
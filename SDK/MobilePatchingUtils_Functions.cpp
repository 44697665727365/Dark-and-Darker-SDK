#include "pch.h"
#include "SDK.h"

bool UMobileInstalledContent::Mount(int32_t PakOrder, struct FString MountPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobileInstalledContent.Mount");

	FMount parms{};	
	parms.PakOrder = PakOrder;
	parms.MountPoint = MountPoint;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMobileInstalledContent::GetInstalledContentSize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize");

	FGetInstalledContentSize parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMobileInstalledContent::GetDiskFreeSpace(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace");

	FGetDiskFreeSpace parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMobilePendingContent::StartInstall(struct FDelegate OnSucceeded, struct FDelegate OnFailed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.StartInstall");

	FStartInstall parms{};	
	parms.OnSucceeded = OnSucceeded;
	parms.OnFailed = OnFailed;

	ProcessEvent(fn, &parms);
}

float UMobilePendingContent::GetTotalDownloadedSize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize");

	FGetTotalDownloadedSize parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMobilePendingContent::GetRequiredDiskSpace(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace");

	FGetRequiredDiskSpace parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMobilePendingContent::GetInstallProgress(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress");

	FGetInstallProgress parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UMobilePendingContent::GetDownloadStatusText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText");

	FGetDownloadStatusText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMobilePendingContent::GetDownloadSpeed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed");

	FGetDownloadSpeed parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UMobilePendingContent::GetDownloadSize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize");

	FGetDownloadSize parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMobilePatchingLibrary::RequestContent(struct FString RemoteManifestURL, struct FString CloudURL, struct FString InstallDirectory, struct FDelegate OnSucceeded, struct FDelegate OnFailed){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent");

	FRequestContent parms{};	
	parms.RemoteManifestURL = RemoteManifestURL;
	parms.CloudURL = CloudURL;
	parms.InstallDirectory = InstallDirectory;
	parms.OnSucceeded = OnSucceeded;
	parms.OnFailed = OnFailed;

	ProcessEvent(fn, &parms);
}

bool UMobilePatchingLibrary::HasActiveWiFiConnection(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection");

	FHasActiveWiFiConnection parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FString> UMobilePatchingLibrary::GetSupportedPlatformNames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames");

	FGetSupportedPlatformNames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UMobileInstalledContent* UMobilePatchingLibrary::GetInstalledContent(struct FString InstallDirectory){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent");

	FGetInstalledContent parms{};	
	parms.InstallDirectory = InstallDirectory;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UMobilePatchingLibrary::GetActiveDeviceProfileName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName");

	FGetActiveDeviceProfileName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


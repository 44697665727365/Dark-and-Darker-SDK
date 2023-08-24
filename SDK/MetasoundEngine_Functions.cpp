#include "pch.h"
#include "SDK.h"

void UMetaSoundAssetSubsystem::UnregisterAssetClassesInDirectories(struct TArray<struct FMetaSoundAssetDirectory>& Directories){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories");

	FUnregisterAssetClassesInDirectories parms{};	
	parms.Directories = Directories;

	ProcessEvent(fn, &parms);
}

void UMetaSoundAssetSubsystem::RegisterAssetClassesInDirectories(struct TArray<struct FMetaSoundAssetDirectory>& Directories){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories");

	FRegisterAssetClassesInDirectories parms{};	
	parms.Directories = Directories;

	ProcessEvent(fn, &parms);
}


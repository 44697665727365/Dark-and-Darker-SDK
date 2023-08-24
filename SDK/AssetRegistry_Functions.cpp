#include "pch.h"
#include "SDK.h"

struct FSoftObjectPath UAssetRegistryHelpers::ToSoftObjectPath(struct FAssetData& InAssetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath");

	FToSoftObjectPath parms{};	
	parms.InAssetData = InAssetData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FARFilter UAssetRegistryHelpers::SetFilterTagsAndValues(struct FARFilter& InFilter, struct TArray<struct FTagAndValue>& InTagsAndValues){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues");

	FSetFilterTagsAndValues parms{};	
	parms.InFilter = InFilter;
	parms.InTagsAndValues = InTagsAndValues;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetRegistryHelpers::IsValid(struct FAssetData& InAssetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsValid");

	FIsValid parms{};	
	parms.InAssetData = InAssetData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetRegistryHelpers::IsUAsset(struct FAssetData& InAssetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsUAsset");

	FIsUAsset parms{};	
	parms.InAssetData = InAssetData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetRegistryHelpers::IsRedirector(struct FAssetData& InAssetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsRedirector");

	FIsRedirector parms{};	
	parms.InAssetData = InAssetData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetRegistryHelpers::IsAssetLoaded(struct FAssetData& InAssetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded");

	FIsAssetLoaded parms{};	
	parms.InAssetData = InAssetData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetRegistryHelpers::GetTagValue(struct FAssetData& InAssetData, struct FName& InTagName, struct FString& OutTagValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetTagValue");

	FGetTagValue parms{};	
	parms.InAssetData = InAssetData;
	parms.InTagName = InTagName;
	parms.OutTagValue = OutTagValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UAssetRegistryHelpers::GetFullName(struct FAssetData& InAssetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetFullName");

	FGetFullName parms{};	
	parms.InAssetData = InAssetData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UAssetRegistryHelpers::GetExportTextName(struct FAssetData& InAssetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetExportTextName");

	FGetExportTextName parms{};	
	parms.InAssetData = InAssetData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

UObject* UAssetRegistryHelpers::GetClass(struct FAssetData& InAssetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetClass");

	FGetClass parms{};	
	parms.InAssetData = InAssetData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAssetRegistryHelpers::GetBlueprintAssets(struct FARFilter& InFilter, struct TArray<struct FAssetData>& OutAssetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetBlueprintAssets");

	FGetBlueprintAssets parms{};	
	parms.InFilter = InFilter;
	parms.OutAssetData = OutAssetData;

	ProcessEvent(fn, &parms);
}

struct TScriptInterface<IAssetRegistry> UAssetRegistryHelpers::GetAssetRegistry(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry");

	FGetAssetRegistry parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UAssetRegistryHelpers::GetAsset(struct FAssetData& InAssetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetAsset");

	FGetAsset parms{};	
	parms.InAssetData = InAssetData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAssetData UAssetRegistryHelpers::CreateAssetData(struct UObject* InAsset, bool bAllowBlueprintClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.CreateAssetData");

	FCreateAssetData parms{};	
	parms.InAsset = InAsset;
	parms.bAllowBlueprintClass = bAllowBlueprintClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAssetRegistry::WaitForPackage(struct FString PackageName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.WaitForPackage");

	FWaitForPackage parms{};	
	parms.PackageName = PackageName;

	ProcessEvent(fn, &parms);
}

void UAssetRegistry::WaitForCompletion(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.WaitForCompletion");

	FWaitForCompletion parms{};	

	ProcessEvent(fn, &parms);
}

void UAssetRegistry::UseFilterToExcludeAssets(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets");

	FUseFilterToExcludeAssets parms{};	
	parms.AssetDataList = AssetDataList;
	parms.Filter = Filter;

	ProcessEvent(fn, &parms);
}

void UAssetRegistry::SearchAllAssets(bool bSynchronousSearch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.SearchAllAssets");

	FSearchAllAssets parms{};	
	parms.bSynchronousSearch = bSynchronousSearch;

	ProcessEvent(fn, &parms);
}

void UAssetRegistry::ScanPathsSynchronous(struct TArray<struct FString>& InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.ScanPathsSynchronous");

	FScanPathsSynchronous parms{};	
	parms.InPaths = InPaths;
	parms.bForceRescan = bForceRescan;
	parms.bIgnoreDenyListScanFilters = bIgnoreDenyListScanFilters;

	ProcessEvent(fn, &parms);
}

void UAssetRegistry::ScanModifiedAssetFiles(struct TArray<struct FString>& InFilePaths){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles");

	FScanModifiedAssetFiles parms{};	
	parms.InFilePaths = InFilePaths;

	ProcessEvent(fn, &parms);
}

void UAssetRegistry::ScanFilesSynchronous(struct TArray<struct FString>& InFilePaths, bool bForceRescan){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.ScanFilesSynchronous");

	FScanFilesSynchronous parms{};	
	parms.InFilePaths = InFilePaths;
	parms.bForceRescan = bForceRescan;

	ProcessEvent(fn, &parms);
}

void UAssetRegistry::RunAssetsThroughFilter(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter");

	FRunAssetsThroughFilter parms{};	
	parms.AssetDataList = AssetDataList;
	parms.Filter = Filter;

	ProcessEvent(fn, &parms);
}

void UAssetRegistry::PrioritizeSearchPath(struct FString PathToPrioritize){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.PrioritizeSearchPath");

	FPrioritizeSearchPath parms{};	
	parms.PathToPrioritize = PathToPrioritize;

	ProcessEvent(fn, &parms);
}

bool UAssetRegistry::K2_GetReferencers(struct FName PackageName, struct FAssetRegistryDependencyOptions& ReferenceOptions, struct TArray<struct FName>& OutReferencers){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.K2_GetReferencers");

	FK2_GetReferencers parms{};	
	parms.PackageName = PackageName;
	parms.ReferenceOptions = ReferenceOptions;
	parms.OutReferencers = OutReferencers;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetRegistry::K2_GetDependencies(struct FName PackageName, struct FAssetRegistryDependencyOptions& DependencyOptions, struct TArray<struct FName>& OutDependencies){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.K2_GetDependencies");

	FK2_GetDependencies parms{};	
	parms.PackageName = PackageName;
	parms.DependencyOptions = DependencyOptions;
	parms.OutDependencies = OutDependencies;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAssetData UAssetRegistry::K2_GetAssetByObjectPath(struct FSoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.K2_GetAssetByObjectPath");

	FK2_GetAssetByObjectPath parms{};	
	parms.ObjectPath = ObjectPath;
	parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetRegistry::IsSearchAsync(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.IsSearchAsync");

	FIsSearchAsync parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetRegistry::IsSearchAllAssets(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.IsSearchAllAssets");

	FIsSearchAllAssets parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetRegistry::IsLoadingAssets(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.IsLoadingAssets");

	FIsLoadingAssets parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetRegistry::HasAssets(struct FName PackagePath, bool bRecursive){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.HasAssets");

	FHasAssets parms{};	
	parms.PackagePath = PackagePath;
	parms.bRecursive = bRecursive;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAssetRegistry::GetSubPaths(struct FString InBasePath, struct TArray<struct FString>& OutPathList, bool bInRecurse){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetSubPaths");

	FGetSubPaths parms{};	
	parms.InBasePath = InBasePath;
	parms.OutPathList = OutPathList;
	parms.bInRecurse = bInRecurse;

	ProcessEvent(fn, &parms);
}

void UAssetRegistry::GetDerivedClassNames(struct TArray<struct FTopLevelAssetPath>& ClassNames, struct TSet<struct FTopLevelAssetPath>& ExcludedClassNames, struct TSet<struct FTopLevelAssetPath>& OutDerivedClassNames){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetDerivedClassNames");

	FGetDerivedClassNames parms{};	
	parms.ClassNames = ClassNames;
	parms.ExcludedClassNames = ExcludedClassNames;
	parms.OutDerivedClassNames = OutDerivedClassNames;

	ProcessEvent(fn, &parms);
}

bool UAssetRegistry::GetAssetsByPaths(struct TArray<struct FName> PackagePaths, struct TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByPaths");

	FGetAssetsByPaths parms{};	
	parms.PackagePaths = PackagePaths;
	parms.OutAssetData = OutAssetData;
	parms.bRecursive = bRecursive;
	parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetRegistry::GetAssetsByPath(struct FName PackagePath, struct TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByPath");

	FGetAssetsByPath parms{};	
	parms.PackagePath = PackagePath;
	parms.OutAssetData = OutAssetData;
	parms.bRecursive = bRecursive;
	parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetRegistry::GetAssetsByPackageName(struct FName PackageName, struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByPackageName");

	FGetAssetsByPackageName parms{};	
	parms.PackageName = PackageName;
	parms.OutAssetData = OutAssetData;
	parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;
	parms.bSkipARFilteredAssets = bSkipARFilteredAssets;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetRegistry::GetAssetsByClass(struct FTopLevelAssetPath ClassPathName, struct TArray<struct FAssetData>& OutAssetData, bool bSearchSubClasses){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByClass");

	FGetAssetsByClass parms{};	
	parms.ClassPathName = ClassPathName;
	parms.OutAssetData = OutAssetData;
	parms.bSearchSubClasses = bSearchSubClasses;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetRegistry::GetAssets(struct FARFilter& Filter, struct TArray<struct FAssetData>& OutAssetData, bool bSkipARFilteredAssets){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssets");

	FGetAssets parms{};	
	parms.Filter = Filter;
	parms.OutAssetData = OutAssetData;
	parms.bSkipARFilteredAssets = bSkipARFilteredAssets;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAssetData UAssetRegistry::GetAssetByObjectPath(struct FName ObjectPath, bool bIncludeOnlyOnDiskAssets){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetByObjectPath");

	FGetAssetByObjectPath parms{};	
	parms.ObjectPath = ObjectPath;
	parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetRegistry::GetAncestorClassNames(struct FTopLevelAssetPath ClassPathName, struct TArray<struct FTopLevelAssetPath>& OutAncestorClassNames){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAncestorClassNames");

	FGetAncestorClassNames parms{};	
	parms.ClassPathName = ClassPathName;
	parms.OutAncestorClassNames = OutAncestorClassNames;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAssetRegistry::GetAllCachedPaths(struct TArray<struct FString>& OutPathList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAllCachedPaths");

	FGetAllCachedPaths parms{};	
	parms.OutPathList = OutPathList;

	ProcessEvent(fn, &parms);
}

bool UAssetRegistry::GetAllAssets(struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAllAssets");

	FGetAllAssets parms{};	
	parms.OutAssetData = OutAssetData;
	parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


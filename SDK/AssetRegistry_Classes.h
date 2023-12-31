#pragma once 
#include <AssetRegistry_Structs.h>
 
 
 
// Class AssetRegistry.AssetRegistryHelpers
// Size: 0x28(Inherited: 0x28)
struct UAssetRegistryHelpers : UObject
{


	struct FSoftObjectPath ToSoftObjectPath(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
	struct FARFilter SetFilterTagsAndValues(struct FARFilter& InFilter, struct TArray<struct FTagAndValue>& InTagsAndValues); // Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
	bool IsValid(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsValid
	bool IsUAsset(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsUAsset
	bool IsRedirector(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsRedirector
	bool IsAssetLoaded(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
	bool GetTagValue(struct FAssetData& InAssetData, struct FName& InTagName, struct FString& OutTagValue); // Function AssetRegistry.AssetRegistryHelpers.GetTagValue
	struct FString GetFullName(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetFullName
	struct FString GetExportTextName(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
	UObject* GetClass(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetClass
	void GetBlueprintAssets(struct FARFilter& InFilter, struct TArray<struct FAssetData>& OutAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetBlueprintAssets
	struct TScriptInterface<IAssetRegistry> GetAssetRegistry(); // Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
	struct UObject* GetAsset(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetAsset
	struct FAssetData CreateAssetData(struct UObject* InAsset, bool bAllowBlueprintClass); // Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
}; 
 
 


// Class AssetRegistry.AssetRegistry
// Size: 0x28(Inherited: 0x28)
struct UAssetRegistry : UInterface
{


	void WaitForPackage(struct FString PackageName); // Function AssetRegistry.AssetRegistry.WaitForPackage
	void WaitForCompletion(); // Function AssetRegistry.AssetRegistry.WaitForCompletion
	void UseFilterToExcludeAssets(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter); // Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
	void SearchAllAssets(bool bSynchronousSearch); // Function AssetRegistry.AssetRegistry.SearchAllAssets
	void ScanPathsSynchronous(struct TArray<struct FString>& InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters); // Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
	void ScanModifiedAssetFiles(struct TArray<struct FString>& InFilePaths); // Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
	void ScanFilesSynchronous(struct TArray<struct FString>& InFilePaths, bool bForceRescan); // Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
	void RunAssetsThroughFilter(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter); // Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
	void PrioritizeSearchPath(struct FString PathToPrioritize); // Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
	bool K2_GetReferencers(struct FName PackageName, struct FAssetRegistryDependencyOptions& ReferenceOptions, struct TArray<struct FName>& OutReferencers); // Function AssetRegistry.AssetRegistry.K2_GetReferencers
	bool K2_GetDependencies(struct FName PackageName, struct FAssetRegistryDependencyOptions& DependencyOptions, struct TArray<struct FName>& OutDependencies); // Function AssetRegistry.AssetRegistry.K2_GetDependencies
	struct FAssetData K2_GetAssetByObjectPath(struct FSoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.K2_GetAssetByObjectPath
	bool IsSearchAsync(); // Function AssetRegistry.AssetRegistry.IsSearchAsync
	bool IsSearchAllAssets(); // Function AssetRegistry.AssetRegistry.IsSearchAllAssets
	bool IsLoadingAssets(); // Function AssetRegistry.AssetRegistry.IsLoadingAssets
	bool HasAssets(struct FName PackagePath, bool bRecursive); // Function AssetRegistry.AssetRegistry.HasAssets
	void GetSubPaths(struct FString InBasePath, struct TArray<struct FString>& OutPathList, bool bInRecurse); // Function AssetRegistry.AssetRegistry.GetSubPaths
	void GetDerivedClassNames(struct TArray<struct FTopLevelAssetPath>& ClassNames, struct TSet<struct FTopLevelAssetPath>& ExcludedClassNames, struct TSet<struct FTopLevelAssetPath>& OutDerivedClassNames); // Function AssetRegistry.AssetRegistry.GetDerivedClassNames
	bool GetAssetsByPaths(struct TArray<struct FName> PackagePaths, struct TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetsByPaths
	bool GetAssetsByPath(struct FName PackagePath, struct TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetsByPath
	bool GetAssetsByPackageName(struct FName PackageName, struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets); // Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
	bool GetAssetsByClass(struct FTopLevelAssetPath ClassPathName, struct TArray<struct FAssetData>& OutAssetData, bool bSearchSubClasses); // Function AssetRegistry.AssetRegistry.GetAssetsByClass
	bool GetAssets(struct FARFilter& Filter, struct TArray<struct FAssetData>& OutAssetData, bool bSkipARFilteredAssets); // Function AssetRegistry.AssetRegistry.GetAssets
	struct FAssetData GetAssetByObjectPath(struct FName ObjectPath, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
	bool GetAncestorClassNames(struct FTopLevelAssetPath ClassPathName, struct TArray<struct FTopLevelAssetPath>& OutAncestorClassNames); // Function AssetRegistry.AssetRegistry.GetAncestorClassNames
	void GetAllCachedPaths(struct TArray<struct FString>& OutPathList); // Function AssetRegistry.AssetRegistry.GetAllCachedPaths
	bool GetAllAssets(struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAllAssets
}; 
 
 


// Class AssetRegistry.AssetRegistryImpl
// Size: 0x9C0(Inherited: 0x28)
struct UAssetRegistryImpl : UObject
{
	char pad_40[2456];  // 0x28 (0x28)


}; 
 
 



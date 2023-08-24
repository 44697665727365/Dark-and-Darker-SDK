#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
struct FGetExportTextName
{
	struct FAssetData InAssetData;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x68 (0x68)


}; 
 
 // ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
struct FAssetRegistryDependencyOptions
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIncludeSoftPackageReferences : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bIncludeHardPackageReferences : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bIncludeSearchableNames : 1;  // 0x2 (0x2)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool bIncludeSoftManagementReferences : 1;  // 0x3 (0x3)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bIncludeHardManagementReferences : 1;  // 0x4 (0x4)


}; 
 
 // ScriptStruct AssetRegistry.TagAndValue
struct FTagAndValue
{
	struct FName Tag;  // 0x0 (0x0)
	struct FString Value;  // 0x8 (0x8)


}; 
 
 // Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
struct FCreateAssetData
{
	struct UObject* InAsset;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bAllowBlueprintClass : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FAssetData ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AssetRegistry.AssetRegistryHelpers.GetClass
struct FGetClass
{
	struct FAssetData InAssetData;  // 0x0 (0x0)
	UObject* ReturnValue;  // 0x68 (0x68)


}; 
 
 // Function AssetRegistry.AssetRegistryHelpers.GetAsset
struct FGetAsset
{
	struct FAssetData InAssetData;  // 0x0 (0x0)
	struct UObject* ReturnValue;  // 0x68 (0x68)


}; 
 
 // Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
struct FGetAssetRegistry
{
	struct TScriptInterface<IAssetRegistry> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AssetRegistry.AssetRegistryHelpers.GetBlueprintAssets
struct FGetBlueprintAssets
{
	struct FARFilter InFilter;  // 0x0 (0x0)
	struct TArray<struct FAssetData> OutAssetData;  // 0x150 (0x150)


}; 
 
 // Function AssetRegistry.AssetRegistryHelpers.GetFullName
struct FGetFullName
{
	struct FAssetData InAssetData;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x68 (0x68)


}; 
 
 // Function AssetRegistry.AssetRegistryHelpers.GetTagValue
struct FGetTagValue
{
	struct FAssetData InAssetData;  // 0x0 (0x0)
	struct FName InTagName;  // 0x68 (0x68)
	struct FString OutTagValue;  // 0x70 (0x70)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool ReturnValue : 1;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)


}; 
 
 // Function AssetRegistry.AssetRegistry.GetAncestorClassNames
struct FGetAncestorClassNames
{
	struct FTopLevelAssetPath ClassPathName;  // 0x0 (0x0)
	struct TArray<struct FTopLevelAssetPath> OutAncestorClassNames;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
struct FIsAssetLoaded
{
	struct FAssetData InAssetData;  // 0x0 (0x0)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool ReturnValue : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)


}; 
 
 // Function AssetRegistry.AssetRegistry.GetAllCachedPaths
struct FGetAllCachedPaths
{
	struct TArray<struct FString> OutPathList;  // 0x0 (0x0)


}; 
 
 // Function AssetRegistry.AssetRegistryHelpers.IsRedirector
struct FIsRedirector
{
	struct FAssetData InAssetData;  // 0x0 (0x0)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool ReturnValue : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)


}; 
 
 // Function AssetRegistry.AssetRegistryHelpers.IsUAsset
struct FIsUAsset
{
	struct FAssetData InAssetData;  // 0x0 (0x0)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool ReturnValue : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)


}; 
 
 // Function AssetRegistry.AssetRegistryHelpers.IsValid
struct FIsValid
{
	struct FAssetData InAssetData;  // 0x0 (0x0)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool ReturnValue : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)


}; 
 
 // Function AssetRegistry.AssetRegistry.GetAllAssets
struct FGetAllAssets
{
	struct TArray<struct FAssetData> OutAssetData;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bIncludeOnlyOnDiskAssets : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool ReturnValue : 1;  // 0x11 (0x11)
	char pad_18[6];  // 0x12 (0x12)


}; 
 
 // Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
struct FSetFilterTagsAndValues
{
	struct FARFilter InFilter;  // 0x0 (0x0)
	struct TArray<struct FTagAndValue> InTagsAndValues;  // 0x150 (0x150)
	struct FARFilter ReturnValue;  // 0x160 (0x160)


}; 
 
 // Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
struct FToSoftObjectPath
{
	struct FAssetData InAssetData;  // 0x0 (0x0)
	struct FSoftObjectPath ReturnValue;  // 0x68 (0x68)


}; 
 
 // Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
struct FGetAssetByObjectPath
{
	struct FName ObjectPath;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIncludeOnlyOnDiskAssets : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FAssetData ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
struct FUseFilterToExcludeAssets
{
	struct TArray<struct FAssetData> AssetDataList;  // 0x0 (0x0)
	struct FARFilter Filter;  // 0x10 (0x10)


}; 
 
 // Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
struct FGetAssetsByPackageName
{
	struct FName PackageName;  // 0x0 (0x0)
	struct TArray<struct FAssetData> OutAssetData;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bIncludeOnlyOnDiskAssets : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bSkipARFilteredAssets : 1;  // 0x19 (0x19)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	bool ReturnValue : 1;  // 0x1A (0x1A)
	char pad_27[5];  // 0x1B (0x1B)


}; 
 
 // Function AssetRegistry.AssetRegistry.GetAssets
struct FGetAssets
{
	struct FARFilter Filter;  // 0x0 (0x0)
	struct TArray<struct FAssetData> OutAssetData;  // 0x150 (0x150)
	char pad_352_1 : 7;  // 0x160 (0x160)
	bool bSkipARFilteredAssets : 1;  // 0x160 (0x160)
	char pad_353_1 : 7;  // 0x161 (0x161)
	bool ReturnValue : 1;  // 0x161 (0x161)
	char pad_354[6];  // 0x162 (0x162)


}; 
 
 // Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
struct FScanPathsSynchronous
{
	struct TArray<struct FString> InPaths;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bForceRescan : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool bIgnoreDenyListScanFilters : 1;  // 0x11 (0x11)
	char pad_18[6];  // 0x12 (0x12)


}; 
 
 // Function AssetRegistry.AssetRegistry.GetAssetsByPaths
struct FGetAssetsByPaths
{
	struct TArray<struct FName> PackagePaths;  // 0x0 (0x0)
	struct TArray<struct FAssetData> OutAssetData;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bRecursive : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool bIncludeOnlyOnDiskAssets : 1;  // 0x21 (0x21)
	char pad_34_1 : 7;  // 0x22 (0x22)
	bool ReturnValue : 1;  // 0x22 (0x22)
	char pad_35[5];  // 0x23 (0x23)


}; 
 
 // Function AssetRegistry.AssetRegistry.GetAssetsByClass
struct FGetAssetsByClass
{
	struct FTopLevelAssetPath ClassPathName;  // 0x0 (0x0)
	struct TArray<struct FAssetData> OutAssetData;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bSearchSubClasses : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool ReturnValue : 1;  // 0x21 (0x21)
	char pad_34[6];  // 0x22 (0x22)


}; 
 
 // Function AssetRegistry.AssetRegistry.GetAssetsByPath
struct FGetAssetsByPath
{
	struct FName PackagePath;  // 0x0 (0x0)
	struct TArray<struct FAssetData> OutAssetData;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bRecursive : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bIncludeOnlyOnDiskAssets : 1;  // 0x19 (0x19)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	bool ReturnValue : 1;  // 0x1A (0x1A)
	char pad_27[5];  // 0x1B (0x1B)


}; 
 
 // Function AssetRegistry.AssetRegistry.GetDerivedClassNames
struct FGetDerivedClassNames
{
	struct TArray<struct FTopLevelAssetPath> ClassNames;  // 0x0 (0x0)
	struct TSet<struct FTopLevelAssetPath> ExcludedClassNames;  // 0x10 (0x10)
	struct TSet<struct FTopLevelAssetPath> OutDerivedClassNames;  // 0x60 (0x60)


}; 
 
 // Function AssetRegistry.AssetRegistry.GetSubPaths
struct FGetSubPaths
{
	struct FString InBasePath;  // 0x0 (0x0)
	struct TArray<struct FString> OutPathList;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bInRecurse : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AssetRegistry.AssetRegistry.HasAssets
struct FHasAssets
{
	struct FName PackagePath;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bRecursive : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool ReturnValue : 1;  // 0x9 (0x9)
	char pad_10[2];  // 0xA (0xA)


}; 
 
 // Function AssetRegistry.AssetRegistry.IsLoadingAssets
struct FIsLoadingAssets
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AssetRegistry.AssetRegistry.SearchAllAssets
struct FSearchAllAssets
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bSynchronousSearch : 1;  // 0x0 (0x0)


}; 
 
 // Function AssetRegistry.AssetRegistry.IsSearchAllAssets
struct FIsSearchAllAssets
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AssetRegistry.AssetRegistry.K2_GetReferencers
struct FK2_GetReferencers
{
	struct FName PackageName;  // 0x0 (0x0)
	struct FAssetRegistryDependencyOptions ReferenceOptions;  // 0x8 (0x8)
	char pad_13[3];  // 0xD (0xD)
	struct TArray<struct FName> OutReferencers;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AssetRegistry.AssetRegistry.IsSearchAsync
struct FIsSearchAsync
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function AssetRegistry.AssetRegistry.K2_GetAssetByObjectPath
struct FK2_GetAssetByObjectPath
{
	struct FSoftObjectPath ObjectPath;  // 0x0 (0x0)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bIncludeOnlyOnDiskAssets : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct FAssetData ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function AssetRegistry.AssetRegistry.K2_GetDependencies
struct FK2_GetDependencies
{
	struct FName PackageName;  // 0x0 (0x0)
	struct FAssetRegistryDependencyOptions DependencyOptions;  // 0x8 (0x8)
	char pad_13[3];  // 0xD (0xD)
	struct TArray<struct FName> OutDependencies;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
struct FPrioritizeSearchPath
{
	struct FString PathToPrioritize;  // 0x0 (0x0)


}; 
 
 // Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
struct FRunAssetsThroughFilter
{
	struct TArray<struct FAssetData> AssetDataList;  // 0x0 (0x0)
	struct FARFilter Filter;  // 0x10 (0x10)


}; 
 
 // Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
struct FScanFilesSynchronous
{
	struct TArray<struct FString> InFilePaths;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bForceRescan : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
struct FScanModifiedAssetFiles
{
	struct TArray<struct FString> InFilePaths;  // 0x0 (0x0)


}; 
 
 // Function AssetRegistry.AssetRegistry.WaitForPackage
struct FWaitForPackage
{
	struct FString PackageName;  // 0x0 (0x0)


}; 
 
 
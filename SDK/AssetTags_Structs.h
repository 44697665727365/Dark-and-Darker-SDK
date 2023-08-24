#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function AssetTags.AssetTagsSubsystem.CollectionExists
struct FCollectionExists
{
	struct FName Name;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
struct FGetAssetsInCollection
{
	struct FName Name;  // 0x0 (0x0)
	struct TArray<struct FAssetData> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AssetTags.AssetTagsSubsystem.K2_GetCollectionsContainingAsset
struct FK2_GetCollectionsContainingAsset
{
	struct FSoftObjectPath AssetPath;  // 0x0 (0x0)
	struct TArray<struct FName> ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
struct FGetCollectionsContainingAssetData
{
	struct FAssetData AssetData;  // 0x0 (0x0)
	struct TArray<struct FName> ReturnValue;  // 0x68 (0x68)


}; 
 
 // Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
struct FGetCollectionsContainingAsset
{
	struct FName AssetPathName;  // 0x0 (0x0)
	struct TArray<struct FName> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function AssetTags.AssetTagsSubsystem.GetCollections
struct FGetCollections
{
	struct TArray<struct FName> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
struct FGetCollectionsContainingAssetPtr
{
	struct UObject* AssetPtr;  // 0x0 (0x0)
	struct TArray<struct FName> ReturnValue;  // 0x8 (0x8)


}; 
 
 
#include "pch.h"
#include "SDK.h"

struct TArray<struct FName> UAssetTagsSubsystem::K2_GetCollectionsContainingAsset(struct FSoftObjectPath& AssetPath){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.K2_GetCollectionsContainingAsset");

	FK2_GetCollectionsContainingAsset parms{};	
	parms.AssetPath = AssetPath;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> UAssetTagsSubsystem::GetCollectionsContainingAssetPtr(struct UObject* AssetPtr){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr");

	FGetCollectionsContainingAssetPtr parms{};	
	parms.AssetPtr = AssetPtr;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> UAssetTagsSubsystem::GetCollectionsContainingAssetData(struct FAssetData& AssetData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData");

	FGetCollectionsContainingAssetData parms{};	
	parms.AssetData = AssetData;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> UAssetTagsSubsystem::GetCollectionsContainingAsset(struct FName AssetPathName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset");

	FGetCollectionsContainingAsset parms{};	
	parms.AssetPathName = AssetPathName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> UAssetTagsSubsystem::GetCollections(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetCollections");

	FGetCollections parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FAssetData> UAssetTagsSubsystem::GetAssetsInCollection(struct FName Name){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection");

	FGetAssetsInCollection parms{};	
	parms.Name = Name;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAssetTagsSubsystem::CollectionExists(struct FName Name){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AssetTags.AssetTagsSubsystem.CollectionExists");

	FCollectionExists parms{};	
	parms.Name = Name;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


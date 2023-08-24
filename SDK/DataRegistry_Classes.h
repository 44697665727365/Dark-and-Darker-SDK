#pragma once 
#include <DataRegistry_Structs.h>
 
 
 
// Class DataRegistry.DataRegistrySource_DataTable
// Size: 0xA8(Inherited: 0x38)
struct UDataRegistrySource_DataTable : UDataRegistrySource
{
	struct TSoftObjectPtr<UDataTable> SourceTable;  // 0x38 (0x38)
	struct FDataRegistrySource_DataTableRules TableRules;  // 0x68 (0x68)
	struct UDataTable* CachedTable;  // 0x70 (0x70)
	struct UDataTable* PreloadTable;  // 0x78 (0x78)
	char pad_128[40];  // 0x80 (0x80)


}; 
 
 


// Class DataRegistry.DataRegistrySettings
// Size: 0x50(Inherited: 0x38)
struct UDataRegistrySettings : UDeveloperSettings
{
	struct TArray<struct FDirectoryPath> DirectoriesToScan;  // 0x38 (0x38)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bInitializeAllLoadedRegistries : 1;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool bIgnoreMissingCookedAssetRegistryData : 1;  // 0x49 (0x49)
	char pad_74[6];  // 0x4A (0x4A)


}; 
 
 


// Class DataRegistry.DataRegistry
// Size: 0xC0(Inherited: 0x28)
struct UDataRegistry : UObject
{
	struct FName RegistryType;  // 0x28 (0x28)
	struct FDataRegistryIdFormat IdFormat;  // 0x30 (0x30)
	struct UScriptStruct* ItemStruct;  // 0x38 (0x38)
	struct TArray<struct UDataRegistrySource*> DataSources;  // 0x40 (0x40)
	struct TArray<struct UDataRegistrySource*> RuntimeSources;  // 0x50 (0x50)
	float TimerUpdateFrequency;  // 0x60 (0x60)
	struct FDataRegistryCachePolicy DefaultCachePolicy;  // 0x64 (0x64)
	char pad_120[72];  // 0x78 (0x78)


}; 
 
 


// Class DataRegistry.DataRegistrySource
// Size: 0x38(Inherited: 0x28)
struct UDataRegistrySource : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct UDataRegistrySource* ParentSource;  // 0x30 (0x30)


}; 
 
 


// Class DataRegistry.MetaDataRegistrySource
// Size: 0x108(Inherited: 0x38)
struct UMetaDataRegistrySource : UDataRegistrySource
{
	uint8_t AssetUsage;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct FAssetManagerSearchRules SearchRules;  // 0x40 (0x40)
	struct TMap<struct FName, struct UDataRegistrySource*> RuntimeChildren;  // 0x90 (0x90)
	char pad_224[40];  // 0xE0 (0xE0)


}; 
 
 


// Class DataRegistry.DataRegistrySource_CurveTable
// Size: 0xA8(Inherited: 0x38)
struct UDataRegistrySource_CurveTable : UDataRegistrySource
{
	struct TSoftObjectPtr<UCurveTable> SourceTable;  // 0x38 (0x38)
	struct FDataRegistrySource_DataTableRules TableRules;  // 0x68 (0x68)
	struct UCurveTable* CachedTable;  // 0x70 (0x70)
	struct UCurveTable* PreloadTable;  // 0x78 (0x78)
	char pad_128[40];  // 0x80 (0x80)


}; 
 
 


// Class DataRegistry.MetaDataRegistrySource_CurveTable
// Size: 0x118(Inherited: 0x108)
struct UMetaDataRegistrySource_CurveTable : UMetaDataRegistrySource
{
	UDataRegistrySource_CurveTable* CreatedSource;  // 0x108 (0x108)
	struct FDataRegistrySource_DataTableRules TableRules;  // 0x110 (0x110)


}; 
 
 


// Class DataRegistry.MetaDataRegistrySource_DataTable
// Size: 0x118(Inherited: 0x108)
struct UMetaDataRegistrySource_DataTable : UMetaDataRegistrySource
{
	UDataRegistrySource_DataTable* CreatedSource;  // 0x108 (0x108)
	struct FDataRegistrySource_DataTableRules TableRules;  // 0x110 (0x110)


}; 
 
 


// Class DataRegistry.DataRegistrySubsystem
// Size: 0xC8(Inherited: 0x30)
struct UDataRegistrySubsystem : UEngineSubsystem
{
	char pad_48[152];  // 0x30 (0x30)


	bool NotEqual_DataRegistryType(struct FDataRegistryType A, struct FDataRegistryType B); // Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType
	bool NotEqual_DataRegistryId(struct FDataRegistryId A, struct FDataRegistryId B); // Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId
	bool IsValidDataRegistryType(struct FDataRegistryType DataRegistryType); // Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType
	bool IsValidDataRegistryId(struct FDataRegistryId DataRegistryId); // Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId
	bool GetCachedItemFromLookupBP(struct FDataRegistryId ItemId, struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase& OutItem); // Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP
	bool GetCachedItemBP(struct FDataRegistryId ItemId, struct FTableRowBase& OutItem); // Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP
	void FindCachedItemBP(struct FDataRegistryId ItemId, uint8_t& OutResult, struct FTableRowBase& OutItem); // Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP
	void EvaluateDataRegistryCurve(struct FDataRegistryId ItemId, float InputValue, float DefaultValue, uint8_t& OutResult, float& OutValue); // Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve
	bool EqualEqual_DataRegistryType(struct FDataRegistryType A, struct FDataRegistryType B); // Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType
	bool EqualEqual_DataRegistryId(struct FDataRegistryId A, struct FDataRegistryId B); // Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId
	struct FString Conv_DataRegistryTypeToString(struct FDataRegistryType DataRegistryType); // Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString
	struct FString Conv_DataRegistryIdToString(struct FDataRegistryId DataRegistryId); // Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString
	bool AcquireItemBP(struct FDataRegistryId ItemId, struct FDelegate AcquireCallback); // Function DataRegistry.DataRegistrySubsystem.AcquireItemBP
}; 
 
 



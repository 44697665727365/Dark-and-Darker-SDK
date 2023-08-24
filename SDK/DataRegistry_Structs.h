#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct DataRegistry.DataRegistrySourceItemId
struct FDataRegistrySourceItemId
{
	char pad_0[64];  // 0x0 (0x0)


}; 
 
 // DelegateFunction DataRegistry.DataRegistryItemAcquiredBPCallback__DelegateSignature
struct FDataRegistryItemAcquiredBPCallback__DelegateSignature
{
	struct FDataRegistryId ItemId;  // 0x0 (0x0)
	struct FDataRegistryLookup ResolvedLookup;  // 0x10 (0x10)
	uint8_t Status;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId
struct FEqualEqual_DataRegistryId
{
	struct FDataRegistryId A;  // 0x0 (0x0)
	struct FDataRegistryId B;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)


}; 
 
 // ScriptStruct DataRegistry.DataRegistryLookup
struct FDataRegistryLookup
{
	char pad_0[32];  // 0x0 (0x0)


}; 
 
 // ScriptStruct DataRegistry.DataRegistryId
struct FDataRegistryId
{
	struct FDataRegistryType RegistryType;  // 0x0 (0x0)
	struct FName ItemName;  // 0x8 (0x8)


}; 
 
 // ScriptStruct DataRegistry.DataRegistryCachePolicy
struct FDataRegistryCachePolicy
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bCacheIsAlwaysVolatile : 1;  // [x0 ([x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bUseCurveTableCacheVersion : 1;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	int32_t MinNumberKept;  // 0x4 (0x4)
	int32_t MaxNumberKept;  // 0x8 (0x8)
	float ForceKeepSeconds;  // 0xC (0xC)
	float ForceReleaseSeconds;  // 0x10 (0x10)


}; 
 
 // Function DataRegistry.DataRegistrySubsystem.AcquireItemBP
struct FAcquireItemBP
{
	struct FDataRegistryId ItemId;  // 0x0 (0x0)
	struct FDelegate AcquireCallback;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)


}; 
 
 // ScriptStruct DataRegistry.DataRegistryType
struct FDataRegistryType
{
	struct FName Name;  // 0x0 (0x0)


}; 
 
 // ScriptStruct DataRegistry.DataRegistrySource_DataTableRules
struct FDataRegistrySource_DataTableRules
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bPrecacheTable : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float CachedTableKeepSeconds;  // 0x4 (0x4)


}; 
 
 // ScriptStruct DataRegistry.DataRegistryIdFormat
struct FDataRegistryIdFormat
{
	struct FGameplayTag BaseGameplayTag;  // 0x0 (0x0)


}; 
 
 // Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString
struct FConv_DataRegistryIdToString
{
	struct FDataRegistryId DataRegistryId;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString
struct FConv_DataRegistryTypeToString
{
	struct FDataRegistryType DataRegistryType;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType
struct FEqualEqual_DataRegistryType
{
	struct FDataRegistryType A;  // 0x0 (0x0)
	struct FDataRegistryType B;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve
struct FEvaluateDataRegistryCurve
{
	struct FDataRegistryId ItemId;  // 0x0 (0x0)
	float InputValue;  // 0x10 (0x10)
	float DefaultValue;  // 0x14 (0x14)
	uint8_t OutResult;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	float OutValue;  // 0x1C (0x1C)


}; 
 
 // Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId
struct FNotEqual_DataRegistryId
{
	struct FDataRegistryId A;  // 0x0 (0x0)
	struct FDataRegistryId B;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)


}; 
 
 // Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP
struct FFindCachedItemBP
{
	struct FDataRegistryId ItemId;  // 0x0 (0x0)
	uint8_t OutResult;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FTableRowBase OutItem;  // 0x18 (0x18)


}; 
 
 // Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP
struct FGetCachedItemBP
{
	struct FDataRegistryId ItemId;  // 0x0 (0x0)
	struct FTableRowBase OutItem;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP
struct FGetCachedItemFromLookupBP
{
	struct FDataRegistryId ItemId;  // 0x0 (0x0)
	struct FDataRegistryLookup ResolvedLookup;  // 0x10 (0x10)
	struct FTableRowBase OutItem;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool ReturnValue : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId
struct FIsValidDataRegistryId
{
	struct FDataRegistryId DataRegistryId;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType
struct FIsValidDataRegistryType
{
	struct FDataRegistryType DataRegistryType;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType
struct FNotEqual_DataRegistryType
{
	struct FDataRegistryType A;  // 0x0 (0x0)
	struct FDataRegistryType B;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 
#include "pch.h"
#include "SDK.h"

bool UDataRegistrySubsystem::NotEqual_DataRegistryType(struct FDataRegistryType A, struct FDataRegistryType B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType");

	FNotEqual_DataRegistryType parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDataRegistrySubsystem::NotEqual_DataRegistryId(struct FDataRegistryId A, struct FDataRegistryId B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId");

	FNotEqual_DataRegistryId parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDataRegistrySubsystem::IsValidDataRegistryType(struct FDataRegistryType DataRegistryType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType");

	FIsValidDataRegistryType parms{};	
	parms.DataRegistryType = DataRegistryType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDataRegistrySubsystem::IsValidDataRegistryId(struct FDataRegistryId DataRegistryId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId");

	FIsValidDataRegistryId parms{};	
	parms.DataRegistryId = DataRegistryId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDataRegistrySubsystem::GetCachedItemFromLookupBP(struct FDataRegistryId ItemId, struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase& OutItem){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP");

	FGetCachedItemFromLookupBP parms{};	
	parms.ItemId = ItemId;
	parms.ResolvedLookup = ResolvedLookup;
	parms.OutItem = OutItem;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDataRegistrySubsystem::GetCachedItemBP(struct FDataRegistryId ItemId, struct FTableRowBase& OutItem){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP");

	FGetCachedItemBP parms{};	
	parms.ItemId = ItemId;
	parms.OutItem = OutItem;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UDataRegistrySubsystem::FindCachedItemBP(struct FDataRegistryId ItemId, uint8_t& OutResult, struct FTableRowBase& OutItem){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP");

	FFindCachedItemBP parms{};	
	parms.ItemId = ItemId;
	parms.OutResult = OutResult;
	parms.OutItem = OutItem;

	ProcessEvent(fn, &parms);
}

void UDataRegistrySubsystem::EvaluateDataRegistryCurve(struct FDataRegistryId ItemId, float InputValue, float DefaultValue, uint8_t& OutResult, float& OutValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve");

	FEvaluateDataRegistryCurve parms{};	
	parms.ItemId = ItemId;
	parms.InputValue = InputValue;
	parms.DefaultValue = DefaultValue;
	parms.OutResult = OutResult;
	parms.OutValue = OutValue;

	ProcessEvent(fn, &parms);
}

bool UDataRegistrySubsystem::EqualEqual_DataRegistryType(struct FDataRegistryType A, struct FDataRegistryType B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType");

	FEqualEqual_DataRegistryType parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDataRegistrySubsystem::EqualEqual_DataRegistryId(struct FDataRegistryId A, struct FDataRegistryId B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId");

	FEqualEqual_DataRegistryId parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UDataRegistrySubsystem::Conv_DataRegistryTypeToString(struct FDataRegistryType DataRegistryType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString");

	FConv_DataRegistryTypeToString parms{};	
	parms.DataRegistryType = DataRegistryType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UDataRegistrySubsystem::Conv_DataRegistryIdToString(struct FDataRegistryId DataRegistryId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString");

	FConv_DataRegistryIdToString parms{};	
	parms.DataRegistryId = DataRegistryId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UDataRegistrySubsystem::AcquireItemBP(struct FDataRegistryId ItemId, struct FDelegate AcquireCallback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DataRegistry.DataRegistrySubsystem.AcquireItemBP");

	FAcquireItemBP parms{};	
	parms.ItemId = ItemId;
	parms.AcquireCallback = AcquireCallback;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


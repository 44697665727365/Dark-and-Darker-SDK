#include "pch.h"
#include "SDK.h"

struct FWwiseEventInfo UWwiseEventInfoLibrary::SetWwiseShortId(struct FWwiseEventInfo& Ref, int32_t WwiseShortId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseShortId");

	FSetWwiseShortId parms{};	
	parms.Ref = Ref;
	parms.WwiseShortId = WwiseShortId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FWwiseEventInfo UWwiseEventInfoLibrary::SetWwiseName(struct FWwiseEventInfo& Ref, struct FString WwiseName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseName");

	FSetWwiseName parms{};	
	parms.Ref = Ref;
	parms.WwiseName = WwiseName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FWwiseEventInfo UWwiseEventInfoLibrary::SetWwiseGuid(struct FWwiseEventInfo& Ref, struct FGuid& WwiseGuid){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseGuid");

	FSetWwiseGuid parms{};	
	parms.Ref = Ref;
	parms.WwiseGuid = WwiseGuid;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FWwiseEventInfo UWwiseEventInfoLibrary::SetSwitchContainerLoading(struct FWwiseEventInfo& Ref, uint8_t& SwitchContainerLoading){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.SetSwitchContainerLoading");

	FSetSwitchContainerLoading parms{};	
	parms.Ref = Ref;
	parms.SwitchContainerLoading = SwitchContainerLoading;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FWwiseEventInfo UWwiseEventInfoLibrary::SetHardCodedSoundBankShortId(struct FWwiseEventInfo& Ref, int32_t HardCodedSoundBankShortId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.SetHardCodedSoundBankShortId");

	FSetHardCodedSoundBankShortId parms{};	
	parms.Ref = Ref;
	parms.HardCodedSoundBankShortId = HardCodedSoundBankShortId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FWwiseEventInfo UWwiseEventInfoLibrary::SetDestroyOptions(struct FWwiseEventInfo& Ref, uint8_t& DestroyOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.SetDestroyOptions");

	FSetDestroyOptions parms{};	
	parms.Ref = Ref;
	parms.DestroyOptions = DestroyOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FWwiseEventInfo UWwiseEventInfoLibrary::MakeStruct(struct FGuid& WwiseGuid, int32_t WwiseShortId, struct FString WwiseName, uint8_t SwitchContainerLoading, uint8_t DestroyOptions, int32_t HardCodedSoundBankShortId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.MakeStruct");

	FMakeStruct parms{};	
	parms.WwiseGuid = WwiseGuid;
	parms.WwiseShortId = WwiseShortId;
	parms.WwiseName = WwiseName;
	parms.SwitchContainerLoading = SwitchContainerLoading;
	parms.DestroyOptions = DestroyOptions;
	parms.HardCodedSoundBankShortId = HardCodedSoundBankShortId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UWwiseEventInfoLibrary::GetWwiseShortID(struct FWwiseEventInfo& Ref){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseShortID");

	FGetWwiseShortID parms{};	
	parms.Ref = Ref;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UWwiseEventInfoLibrary::GetWwiseName(struct FWwiseEventInfo& Ref){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseName");

	FGetWwiseName parms{};	
	parms.Ref = Ref;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGuid UWwiseEventInfoLibrary::GetWwiseGuid(struct FWwiseEventInfo& Ref){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseGuid");

	FGetWwiseGuid parms{};	
	parms.Ref = Ref;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWwiseEventInfoLibrary::GetSwitchContainerLoading(struct FWwiseEventInfo& Ref){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.GetSwitchContainerLoading");

	FGetSwitchContainerLoading parms{};	
	parms.Ref = Ref;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UWwiseEventInfoLibrary::GetHardCodedSoundBankShortId(struct FWwiseEventInfo& Ref){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.GetHardCodedSoundBankShortId");

	FGetHardCodedSoundBankShortId parms{};	
	parms.Ref = Ref;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UWwiseEventInfoLibrary::GetDestroyOptions(struct FWwiseEventInfo& Ref){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.GetDestroyOptions");

	FGetDestroyOptions parms{};	
	parms.Ref = Ref;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWwiseEventInfoLibrary::BreakStruct(struct FWwiseEventInfo Ref, struct FGuid& OutWwiseGuid, int32_t& OutWwiseShortId, struct FString& OutWwiseName, uint8_t& OutSwitchContainerLoading, uint8_t& OutDestroyOptions, int32_t& OutHardCodedSoundBankShortId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.BreakStruct");

	FBreakStruct parms{};	
	parms.Ref = Ref;
	parms.OutWwiseGuid = OutWwiseGuid;
	parms.OutWwiseShortId = OutWwiseShortId;
	parms.OutWwiseName = OutWwiseName;
	parms.OutSwitchContainerLoading = OutSwitchContainerLoading;
	parms.OutDestroyOptions = OutDestroyOptions;
	parms.OutHardCodedSoundBankShortId = OutHardCodedSoundBankShortId;

	ProcessEvent(fn, &parms);
}

struct FWwiseGroupValueInfo UWwiseGroupValueInfoLibrary::SetWwiseShortId(struct FWwiseGroupValueInfo& Ref, int32_t WwiseShortId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseShortId");

	FSetWwiseShortId parms{};	
	parms.Ref = Ref;
	parms.WwiseShortId = WwiseShortId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FWwiseGroupValueInfo UWwiseGroupValueInfoLibrary::SetWwiseName(struct FWwiseGroupValueInfo& Ref, struct FString WwiseName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseName");

	FSetWwiseName parms{};	
	parms.Ref = Ref;
	parms.WwiseName = WwiseName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FWwiseGroupValueInfo UWwiseGroupValueInfoLibrary::SetGroupShortId(struct FWwiseGroupValueInfo& Ref, int32_t GroupShortId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetGroupShortId");

	FSetGroupShortId parms{};	
	parms.Ref = Ref;
	parms.GroupShortId = GroupShortId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FWwiseGroupValueInfo UWwiseGroupValueInfoLibrary::SetAssetGuid(struct FWwiseGroupValueInfo& Ref, struct FGuid& AssetGuid){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetAssetGuid");

	FSetAssetGuid parms{};	
	parms.Ref = Ref;
	parms.AssetGuid = AssetGuid;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FWwiseGroupValueInfo UWwiseGroupValueInfoLibrary::MakeStruct(struct FGuid& AssetGuid, int32_t GroupShortId, int32_t WwiseShortId, struct FString WwiseName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.MakeStruct");

	FMakeStruct parms{};	
	parms.AssetGuid = AssetGuid;
	parms.GroupShortId = GroupShortId;
	parms.WwiseShortId = WwiseShortId;
	parms.WwiseName = WwiseName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UWwiseGroupValueInfoLibrary::GetWwiseShortID(struct FWwiseGroupValueInfo& Ref){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseShortID");

	FGetWwiseShortID parms{};	
	parms.Ref = Ref;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UWwiseGroupValueInfoLibrary::GetWwiseName(struct FWwiseGroupValueInfo& Ref){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseName");

	FGetWwiseName parms{};	
	parms.Ref = Ref;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UWwiseGroupValueInfoLibrary::GetGroupShortId(struct FWwiseGroupValueInfo& Ref){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetGroupShortId");

	FGetGroupShortId parms{};	
	parms.Ref = Ref;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGuid UWwiseGroupValueInfoLibrary::GetAssetGuid(struct FWwiseGroupValueInfo& Ref){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetAssetGuid");

	FGetAssetGuid parms{};	
	parms.Ref = Ref;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWwiseGroupValueInfoLibrary::BreakStruct(struct FWwiseGroupValueInfo Ref, struct FGuid& OutAssetGuid, int32_t& OutGroupShortId, int32_t& OutWwiseShortId, struct FString& OutWwiseName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.BreakStruct");

	FBreakStruct parms{};	
	parms.Ref = Ref;
	parms.OutAssetGuid = OutAssetGuid;
	parms.OutGroupShortId = OutGroupShortId;
	parms.OutWwiseShortId = OutWwiseShortId;
	parms.OutWwiseName = OutWwiseName;

	ProcessEvent(fn, &parms);
}

struct FWwiseObjectInfo UWwiseObjectInfoLibrary::SetWwiseShortId(struct FWwiseObjectInfo& Ref, int32_t WwiseShortId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseShortId");

	FSetWwiseShortId parms{};	
	parms.Ref = Ref;
	parms.WwiseShortId = WwiseShortId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FWwiseObjectInfo UWwiseObjectInfoLibrary::SetWwiseName(struct FWwiseObjectInfo& Ref, struct FString WwiseName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseName");

	FSetWwiseName parms{};	
	parms.Ref = Ref;
	parms.WwiseName = WwiseName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FWwiseObjectInfo UWwiseObjectInfoLibrary::SetWwiseGuid(struct FWwiseObjectInfo& Ref, struct FGuid& WwiseGuid){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseGuid");

	FSetWwiseGuid parms{};	
	parms.Ref = Ref;
	parms.WwiseGuid = WwiseGuid;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FWwiseObjectInfo UWwiseObjectInfoLibrary::SetHardCodedSoundBankShortId(struct FWwiseObjectInfo& Ref, int32_t HardCodedSoundBankShortId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetHardCodedSoundBankShortId");

	FSetHardCodedSoundBankShortId parms{};	
	parms.Ref = Ref;
	parms.HardCodedSoundBankShortId = HardCodedSoundBankShortId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FWwiseObjectInfo UWwiseObjectInfoLibrary::MakeStruct(struct FGuid& WwiseGuid, int32_t WwiseShortId, struct FString WwiseName, int32_t HardCodedSoundBankShortId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.MakeStruct");

	FMakeStruct parms{};	
	parms.WwiseGuid = WwiseGuid;
	parms.WwiseShortId = WwiseShortId;
	parms.WwiseName = WwiseName;
	parms.HardCodedSoundBankShortId = HardCodedSoundBankShortId;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UWwiseObjectInfoLibrary::GetWwiseShortID(struct FWwiseObjectInfo& Ref){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseShortID");

	FGetWwiseShortID parms{};	
	parms.Ref = Ref;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UWwiseObjectInfoLibrary::GetWwiseName(struct FWwiseObjectInfo& Ref){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseName");

	FGetWwiseName parms{};	
	parms.Ref = Ref;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGuid UWwiseObjectInfoLibrary::GetWwiseGuid(struct FWwiseObjectInfo& Ref){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseGuid");

	FGetWwiseGuid parms{};	
	parms.Ref = Ref;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UWwiseObjectInfoLibrary::GetHardCodedSoundBankShortId(struct FWwiseObjectInfo& Ref){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetHardCodedSoundBankShortId");

	FGetHardCodedSoundBankShortId parms{};	
	parms.Ref = Ref;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UWwiseObjectInfoLibrary::BreakStruct(struct FWwiseObjectInfo Ref, struct FGuid& OutWwiseGuid, int32_t& OutWwiseShortId, struct FString& OutWwiseName, int32_t& OutHardCodedSoundBankShortId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.BreakStruct");

	FBreakStruct parms{};	
	parms.Ref = Ref;
	parms.OutWwiseGuid = OutWwiseGuid;
	parms.OutWwiseShortId = OutWwiseShortId;
	parms.OutWwiseName = OutWwiseName;
	parms.OutHardCodedSoundBankShortId = OutHardCodedSoundBankShortId;

	ProcessEvent(fn, &parms);
}


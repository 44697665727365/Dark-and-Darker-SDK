#pragma once 
#include <WwiseResourceLoader_Structs.h>
 
 
 
// Class WwiseResourceLoader.WwiseEventInfoLibrary
// Size: 0x28(Inherited: 0x28)
struct UWwiseEventInfoLibrary : UBlueprintFunctionLibrary
{


	struct FWwiseEventInfo SetWwiseShortId(struct FWwiseEventInfo& Ref, int32_t WwiseShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseShortId
	struct FWwiseEventInfo SetWwiseName(struct FWwiseEventInfo& Ref, struct FString WwiseName); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseName
	struct FWwiseEventInfo SetWwiseGuid(struct FWwiseEventInfo& Ref, struct FGuid& WwiseGuid); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseGuid
	struct FWwiseEventInfo SetSwitchContainerLoading(struct FWwiseEventInfo& Ref, uint8_t& SwitchContainerLoading); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetSwitchContainerLoading
	struct FWwiseEventInfo SetHardCodedSoundBankShortId(struct FWwiseEventInfo& Ref, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetHardCodedSoundBankShortId
	struct FWwiseEventInfo SetDestroyOptions(struct FWwiseEventInfo& Ref, uint8_t& DestroyOptions); // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetDestroyOptions
	struct FWwiseEventInfo MakeStruct(struct FGuid& WwiseGuid, int32_t WwiseShortId, struct FString WwiseName, uint8_t SwitchContainerLoading, uint8_t DestroyOptions, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.MakeStruct
	int32_t GetWwiseShortID(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseShortID
	struct FString GetWwiseName(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseName
	struct FGuid GetWwiseGuid(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseGuid
	uint8_t GetSwitchContainerLoading(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetSwitchContainerLoading
	int32_t GetHardCodedSoundBankShortId(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetHardCodedSoundBankShortId
	uint8_t GetDestroyOptions(struct FWwiseEventInfo& Ref); // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetDestroyOptions
	void BreakStruct(struct FWwiseEventInfo Ref, struct FGuid& OutWwiseGuid, int32_t& OutWwiseShortId, struct FString& OutWwiseName, uint8_t& OutSwitchContainerLoading, uint8_t& OutDestroyOptions, int32_t& OutHardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseEventInfoLibrary.BreakStruct
}; 
 
 


// Class WwiseResourceLoader.WwiseGroupValueInfoLibrary
// Size: 0x28(Inherited: 0x28)
struct UWwiseGroupValueInfoLibrary : UBlueprintFunctionLibrary
{


	struct FWwiseGroupValueInfo SetWwiseShortId(struct FWwiseGroupValueInfo& Ref, int32_t WwiseShortId); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseShortId
	struct FWwiseGroupValueInfo SetWwiseName(struct FWwiseGroupValueInfo& Ref, struct FString WwiseName); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseName
	struct FWwiseGroupValueInfo SetGroupShortId(struct FWwiseGroupValueInfo& Ref, int32_t GroupShortId); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetGroupShortId
	struct FWwiseGroupValueInfo SetAssetGuid(struct FWwiseGroupValueInfo& Ref, struct FGuid& AssetGuid); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetAssetGuid
	struct FWwiseGroupValueInfo MakeStruct(struct FGuid& AssetGuid, int32_t GroupShortId, int32_t WwiseShortId, struct FString WwiseName); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.MakeStruct
	int32_t GetWwiseShortID(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseShortID
	struct FString GetWwiseName(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseName
	int32_t GetGroupShortId(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetGroupShortId
	struct FGuid GetAssetGuid(struct FWwiseGroupValueInfo& Ref); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetAssetGuid
	void BreakStruct(struct FWwiseGroupValueInfo Ref, struct FGuid& OutAssetGuid, int32_t& OutGroupShortId, int32_t& OutWwiseShortId, struct FString& OutWwiseName); // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.BreakStruct
}; 
 
 


// Class WwiseResourceLoader.WwiseObjectInfoLibrary
// Size: 0x28(Inherited: 0x28)
struct UWwiseObjectInfoLibrary : UBlueprintFunctionLibrary
{


	struct FWwiseObjectInfo SetWwiseShortId(struct FWwiseObjectInfo& Ref, int32_t WwiseShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseShortId
	struct FWwiseObjectInfo SetWwiseName(struct FWwiseObjectInfo& Ref, struct FString WwiseName); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseName
	struct FWwiseObjectInfo SetWwiseGuid(struct FWwiseObjectInfo& Ref, struct FGuid& WwiseGuid); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseGuid
	struct FWwiseObjectInfo SetHardCodedSoundBankShortId(struct FWwiseObjectInfo& Ref, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetHardCodedSoundBankShortId
	struct FWwiseObjectInfo MakeStruct(struct FGuid& WwiseGuid, int32_t WwiseShortId, struct FString WwiseName, int32_t HardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.MakeStruct
	int32_t GetWwiseShortID(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseShortID
	struct FString GetWwiseName(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseName
	struct FGuid GetWwiseGuid(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseGuid
	int32_t GetHardCodedSoundBankShortId(struct FWwiseObjectInfo& Ref); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetHardCodedSoundBankShortId
	void BreakStruct(struct FWwiseObjectInfo Ref, struct FGuid& OutWwiseGuid, int32_t& OutWwiseShortId, struct FString& OutWwiseName, int32_t& OutHardCodedSoundBankShortId); // Function WwiseResourceLoader.WwiseObjectInfoLibrary.BreakStruct
}; 
 
 



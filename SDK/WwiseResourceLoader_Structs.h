#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct WwiseResourceLoader.WwiseObjectInfo
struct FWwiseObjectInfo
{
	struct FGuid WwiseGuid;  // 0x0 (0x0)
	uint32_t WwiseShortId;  // 0x10 (0x10)
	struct FName WwiseName;  // 0x14 (0x14)
	uint32_t HardCodedSoundBankShortId;  // 0x1C (0x1C)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseAcousticTextureCookedData
struct FWwiseAcousticTextureCookedData
{
	int32_t ShortId;  // 0x0 (0x0)
	struct FName DebugName;  // 0x4 (0x4)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseGroupValueCookedData
struct FWwiseGroupValueCookedData
{
	uint8_t Type;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t GroupId;  // 0x4 (0x4)
	int32_t ID;  // 0x8 (0x8)
	struct FName DebugName;  // 0xC (0xC)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseTriggerCookedData
struct FWwiseTriggerCookedData
{
	int32_t TriggerId;  // 0x0 (0x0)
	struct FName DebugName;  // 0x4 (0x4)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseAuxBusCookedData
struct FWwiseAuxBusCookedData
{
	int32_t AuxBusId;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FWwiseSoundBankCookedData> SoundBanks;  // 0x8 (0x8)
	struct TArray<struct FWwiseMediaCookedData> Media;  // 0x18 (0x18)
	struct FName DebugName;  // 0x28 (0x28)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseEventCookedData
struct FWwiseEventCookedData
{
	int32_t EventId;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FWwiseSoundBankCookedData> SoundBanks;  // 0x8 (0x8)
	struct TArray<struct FWwiseMediaCookedData> Media;  // 0x18 (0x18)
	struct TArray<struct FWwiseExternalSourceCookedData> ExternalSources;  // 0x28 (0x28)
	struct TArray<struct FWwiseSwitchContainerLeafCookedData> SwitchContainerLeaves;  // 0x38 (0x38)
	struct TSet<struct FWwiseGroupValueCookedData> RequiredGroupValueSet;  // 0x48 (0x48)
	uint8_t DestroyOptions;  // 0x98 (0x98)
	char pad_153[3];  // 0x99 (0x99)
	struct FName DebugName;  // 0x9C (0x9C)
	char pad_164[4];  // 0xA4 (0xA4)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseSwitchContainerLeafCookedData
struct FWwiseSwitchContainerLeafCookedData
{
	struct TSet<struct FWwiseGroupValueCookedData> GroupValueSet;  // 0x0 (0x0)
	struct TArray<struct FWwiseSoundBankCookedData> SoundBanks;  // 0x50 (0x50)
	struct TArray<struct FWwiseMediaCookedData> Media;  // 0x60 (0x60)
	struct TArray<struct FWwiseExternalSourceCookedData> ExternalSources;  // 0x70 (0x70)


}; 
 
 // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetAssetGuid
struct FSetAssetGuid
{
	struct FWwiseGroupValueInfo Ref;  // 0x0 (0x0)
	struct FGuid AssetGuid;  // 0x24 (0x24)
	struct FWwiseGroupValueInfo ReturnValue;  // 0x34 (0x34)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseLocalizedEventCookedData
struct FWwiseLocalizedEventCookedData
{
	struct TMap<struct FWwiseLanguageCookedData, struct FWwiseEventCookedData> EventLanguageMap;  // 0x0 (0x0)
	struct FName DebugName;  // 0x50 (0x50)
	int32_t EventId;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseEventInfo
// Size: 0x24(Inherited: 0x20)
struct FWwiseEventInfo : FWwiseObjectInfo
{
	uint8_t SwitchContainerLoading;  // 0x20 (0x20)
	uint8_t DestroyOptions;  // 0x21 (0x21)
	char pad_34[2];  // 0x22 (0x22)


}; 
 
 // Function WwiseResourceLoader.WwiseObjectInfoLibrary.MakeStruct
struct FMakeStruct
{
	struct FGuid WwiseGuid;  // 0x0 (0x0)
	int32_t WwiseShortId;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FString WwiseName;  // 0x18 (0x18)
	int32_t HardCodedSoundBankShortId;  // 0x28 (0x28)
	struct FWwiseObjectInfo ReturnValue;  // 0x2C (0x2C)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseLocalizedAuxBusCookedData
struct FWwiseLocalizedAuxBusCookedData
{
	struct TMap<struct FWwiseLanguageCookedData, struct FWwiseAuxBusCookedData> AuxBusLanguageMap;  // 0x0 (0x0)
	struct FName DebugName;  // 0x50 (0x50)
	int32_t AuxBusId;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseGameParameterCookedData
struct FWwiseGameParameterCookedData
{
	int32_t ShortId;  // 0x0 (0x0)
	struct FName DebugName;  // 0x4 (0x4)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseSharedLanguageId
struct FWwiseSharedLanguageId
{
	char pad_0[16];  // 0x0 (0x0)
	uint8_t LanguageRequirement;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseGroupValueInfo
// Size: 0x24(Inherited: 0x20)
struct FWwiseGroupValueInfo : FWwiseObjectInfo
{
	uint32_t GroupShortId;  // 0x20 (0x20)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseInitBankCookedData
// Size: 0x40(Inherited: 0x1C)
struct FWwiseInitBankCookedData : FWwiseSoundBankCookedData
{
	char pad_28[4];  // 0x1C (0x1C)
	struct TArray<struct FWwiseMediaCookedData> Media;  // 0x20 (0x20)
	struct TArray<struct FWwiseLanguageCookedData> Language;  // 0x30 (0x30)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseLanguageId
struct FWwiseLanguageId
{
	int32_t LanguageId;  // 0x0 (0x0)
	struct FName LanguageName;  // 0x4 (0x4)


}; 
 
 // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseName
struct FSetWwiseName
{
	struct FWwiseObjectInfo Ref;  // 0x0 (0x0)
	struct FString WwiseName;  // 0x20 (0x20)
	struct FWwiseObjectInfo ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetDestroyOptions
struct FSetDestroyOptions
{
	struct FWwiseEventInfo Ref;  // 0x0 (0x0)
	uint8_t DestroyOptions;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FWwiseEventInfo ReturnValue;  // 0x28 (0x28)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseLocalizedShareSetCookedData
struct FWwiseLocalizedShareSetCookedData
{
	struct TMap<struct FWwiseLanguageCookedData, struct FWwiseShareSetCookedData> ShareSetLanguageMap;  // 0x0 (0x0)
	struct FName DebugName;  // 0x50 (0x50)
	int32_t ShareSetId;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseShareSetCookedData
struct FWwiseShareSetCookedData
{
	int32_t ShareSetId;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FWwiseSoundBankCookedData> SoundBanks;  // 0x8 (0x8)
	struct TArray<struct FWwiseMediaCookedData> Media;  // 0x18 (0x18)
	struct FName DebugName;  // 0x28 (0x28)


}; 
 
 // Function WwiseResourceLoader.WwiseObjectInfoLibrary.BreakStruct
struct FBreakStruct
{
	struct FWwiseObjectInfo Ref;  // 0x0 (0x0)
	struct FGuid OutWwiseGuid;  // 0x20 (0x20)
	int32_t OutWwiseShortId;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)
	struct FString OutWwiseName;  // 0x38 (0x38)
	int32_t OutHardCodedSoundBankShortId;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseSharedPlatformId
struct FWwiseSharedPlatformId
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseLocalizedSoundBankCookedData
struct FWwiseLocalizedSoundBankCookedData
{
	struct TMap<struct FWwiseLanguageCookedData, struct FWwiseSoundBankCookedData> SoundBankLanguageMap;  // 0x0 (0x0)
	struct FName DebugName;  // 0x50 (0x50)
	int32_t SoundBankId;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)


}; 
 
 // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetAssetGuid
struct FGetAssetGuid
{
	struct FWwiseGroupValueInfo Ref;  // 0x0 (0x0)
	struct FGuid ReturnValue;  // 0x24 (0x24)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwisePlatformId
struct FWwisePlatformId
{
	struct FGuid PlatformGuid;  // 0x0 (0x0)
	struct FName PlatformName;  // 0x10 (0x10)


}; 
 
 // ScriptStruct WwiseResourceLoader.WwiseSharedGroupValueKey
struct FWwiseSharedGroupValueKey
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseShortId
struct FSetWwiseShortId
{
	struct FWwiseObjectInfo Ref;  // 0x0 (0x0)
	int32_t WwiseShortId;  // 0x20 (0x20)
	struct FWwiseObjectInfo ReturnValue;  // 0x24 (0x24)


}; 
 
 // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetDestroyOptions
struct FGetDestroyOptions
{
	struct FWwiseEventInfo Ref;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)


}; 
 
 // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetHardCodedSoundBankShortId
struct FGetHardCodedSoundBankShortId
{
	struct FWwiseObjectInfo Ref;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function WwiseResourceLoader.WwiseEventInfoLibrary.GetSwitchContainerLoading
struct FGetSwitchContainerLoading
{
	struct FWwiseEventInfo Ref;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)


}; 
 
 // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseGuid
struct FGetWwiseGuid
{
	struct FWwiseObjectInfo Ref;  // 0x0 (0x0)
	struct FGuid ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseName
struct FGetWwiseName
{
	struct FWwiseObjectInfo Ref;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseShortID
struct FGetWwiseShortID
{
	struct FWwiseObjectInfo Ref;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetHardCodedSoundBankShortId
struct FSetHardCodedSoundBankShortId
{
	struct FWwiseObjectInfo Ref;  // 0x0 (0x0)
	int32_t HardCodedSoundBankShortId;  // 0x20 (0x20)
	struct FWwiseObjectInfo ReturnValue;  // 0x24 (0x24)


}; 
 
 // Function WwiseResourceLoader.WwiseEventInfoLibrary.SetSwitchContainerLoading
struct FSetSwitchContainerLoading
{
	struct FWwiseEventInfo Ref;  // 0x0 (0x0)
	uint8_t SwitchContainerLoading;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FWwiseEventInfo ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseGuid
struct FSetWwiseGuid
{
	struct FWwiseObjectInfo Ref;  // 0x0 (0x0)
	struct FGuid WwiseGuid;  // 0x20 (0x20)
	struct FWwiseObjectInfo ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetGroupShortId
struct FGetGroupShortId
{
	struct FWwiseGroupValueInfo Ref;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x24 (0x24)


}; 
 
 // Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetGroupShortId
struct FSetGroupShortId
{
	struct FWwiseGroupValueInfo Ref;  // 0x0 (0x0)
	int32_t GroupShortId;  // 0x24 (0x24)
	struct FWwiseGroupValueInfo ReturnValue;  // 0x28 (0x28)


}; 
 
 
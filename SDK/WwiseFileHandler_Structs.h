#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaByName
struct FSetExternalSourceMediaByName
{
	struct FString ExternalSourceName;  // 0x0 (0x0)
	struct FString MediaName;  // 0x10 (0x10)


}; 
 
 // ScriptStruct WwiseFileHandler.WwiseExternalSourceCookedData
struct FWwiseExternalSourceCookedData
{
	int32_t Cookie;  // 0x0 (0x0)
	struct FName DebugName;  // 0x4 (0x4)


}; 
 
 // ScriptStruct WwiseFileHandler.WwiseLanguageCookedData
struct FWwiseLanguageCookedData
{
	int32_t LanguageId;  // 0x0 (0x0)
	struct FName LanguageName;  // 0x4 (0x4)
	uint8_t LanguageRequirement;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaById
struct FSetExternalSourceMediaById
{
	struct FString ExternalSourceName;  // 0x0 (0x0)
	int32_t MediaId;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct WwiseFileHandler.WwiseMediaCookedData
struct FWwiseMediaCookedData
{
	int32_t MediaId;  // 0x0 (0x0)
	struct FName MediaPathName;  // 0x4 (0x4)
	int32_t PrefetchSize;  // 0xC (0xC)
	int32_t MemoryAlignment;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bDeviceMemory : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool bStreaming : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)
	struct FName DebugName;  // 0x18 (0x18)


}; 
 
 // ScriptStruct WwiseFileHandler.WwiseSoundBankCookedData
struct FWwiseSoundBankCookedData
{
	int32_t SoundBankId;  // 0x0 (0x0)
	struct FName SoundBankPathName;  // 0x4 (0x4)
	int32_t MemoryAlignment;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bDeviceMemory : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool bContainsMedia : 1;  // 0x11 (0x11)
	uint8_t SoundBankType;  // 0x12 (0x12)
	char pad_19[1];  // 0x13 (0x13)
	struct FName DebugName;  // 0x14 (0x14)


}; 
 
 // Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaWithIds
struct FSetExternalSourceMediaWithIds
{
	struct FAkUniqueID ExternalSourceCookie;  // 0x0 (0x0)
	int32_t MediaId;  // 0x4 (0x4)


}; 
 
 
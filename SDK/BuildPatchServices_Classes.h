#pragma once 
#include <BuildPatchServices_Structs.h>
 
 
 
// Class BuildPatchServices.BuildPatchManifest
// Size: 0x120(Inherited: 0x28)
struct UBuildPatchManifest : UObject
{
	char ManifestFileVersion;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool bIsFileData : 1;  // 0x29 (0x29)
	char pad_42[2];  // 0x2A (0x2A)
	uint32_t AppID;  // 0x2C (0x2C)
	struct FString AppName;  // 0x30 (0x30)
	struct FString BuildVersion;  // 0x40 (0x40)
	struct FString LaunchExe;  // 0x50 (0x50)
	struct FString LaunchCommand;  // 0x60 (0x60)
	struct TSet<struct FString> PrereqIds;  // 0x70 (0x70)
	struct FString PrereqName;  // 0xC0 (0xC0)
	struct FString PrereqPath;  // 0xD0 (0xD0)
	struct FString PrereqArgs;  // 0xE0 (0xE0)
	struct TArray<struct FFileManifestData> FileManifestList;  // 0xF0 (0xF0)
	struct TArray<struct FChunkInfoData> ChunkList;  // 0x100 (0x100)
	struct TArray<struct FCustomFieldData> CustomFields;  // 0x110 (0x110)


}; 
 
 



#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct BuildPatchServices.ChunkInfoData
struct FChunkInfoData
{
	struct FGuid Guid;  // 0x0 (0x0)
	uint64_t Hash;  // 0x10 (0x10)
	struct FSHAHashData ShaHash;  // 0x18 (0x18)
	char pad_44[4];  // 0x2C (0x2C)
	int64_t FileSize;  // 0x30 (0x30)
	char GroupNumber;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)


}; 
 
 // ScriptStruct BuildPatchServices.CustomFieldData
struct FCustomFieldData
{
	struct FString Key;  // 0x0 (0x0)
	struct FString Value;  // 0x10 (0x10)


}; 
 
 // ScriptStruct BuildPatchServices.SHAHashData
struct FSHAHashData
{
	char Hash[14];  // 0x0 (0x0)


}; 
 
 // ScriptStruct BuildPatchServices.ChunkPartData
struct FChunkPartData
{
	struct FGuid Guid;  // 0x0 (0x0)
	uint32_t Offset;  // 0x10 (0x10)
	uint32_t Size;  // 0x14 (0x14)


}; 
 
 // ScriptStruct BuildPatchServices.FileManifestData
struct FFileManifestData
{
	struct FString Filename;  // 0x0 (0x0)
	struct FSHAHashData FileHash;  // 0x10 (0x10)
	char pad_36[4];  // 0x24 (0x24)
	struct TArray<struct FChunkPartData> FileChunkParts;  // 0x28 (0x28)
	struct TArray<struct FString> InstallTags;  // 0x38 (0x38)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bIsUnixExecutable : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct FString SymlinkTarget;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bIsReadOnly : 1;  // 0x60 (0x60)
	char pad_97_1 : 7;  // 0x61 (0x61)
	bool bIsCompressed : 1;  // 0x61 (0x61)
	char pad_98[6];  // 0x62 (0x62)


}; 
 
 
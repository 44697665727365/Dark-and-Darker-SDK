#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// DelegateFunction ImageWriteQueue.OnImageWriteComplete__DelegateSignature
struct FOnImageWriteComplete__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bSuccess : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ImageWriteQueue.ImageWriteOptions
struct FImageWriteOptions
{
	uint8_t Format;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FDelegate OnComplete;  // 0x4 (0x4)
	int32_t CompressionQuality;  // 0x14 (0x14)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bOverwriteFile : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bAsync : 1;  // 0x19 (0x19)
	char pad_26[70];  // 0x1A (0x1A)


}; 
 
 // Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
struct FExportToDisk
{
	struct UTexture* Texture;  // 0x0 (0x0)
	struct FString Filename;  // 0x8 (0x8)
	char pad_24[8];  // 0x18 (0x18)
	struct FImageWriteOptions Options;  // 0x20 (0x20)


}; 
 
 
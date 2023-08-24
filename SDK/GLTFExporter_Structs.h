#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct GLTFExporter.GLTFExportMessages
struct FGLTFExportMessages
{
	struct TArray<struct FString> Suggestions;  // 0x0 (0x0)
	struct TArray<struct FString> Warnings;  // 0x10 (0x10)
	struct TArray<struct FString> Errors;  // 0x20 (0x20)


}; 
 
 // ScriptStruct GLTFExporter.GLTFOverrideMaterialBakeSettings
struct FGLTFOverrideMaterialBakeSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bOverrideSize : 1;  // 0x0 (0x0)
	uint8_t Size;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bOverrideFilter : 1;  // 0x2 (0x2)
	enum class TextureFilter Filter;  // 0x3 (0x3)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bOverrideTiling : 1;  // 0x4 (0x4)
	enum class TextureAddress Tiling;  // 0x5 (0x5)


}; 
 
 // Function GLTFExporter.GLTFExporter.ExportToGLTF
struct FExportToGLTF
{
	struct UObject* Object;  // 0x0 (0x0)
	struct FString FilePath;  // 0x8 (0x8)
	struct UGLTFExportOptions* Options;  // 0x18 (0x18)
	struct TSet<struct AActor*> SelectedActors;  // 0x20 (0x20)
	struct FGLTFExportMessages OutMessages;  // 0x70 (0x70)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool ReturnValue : 1;  // 0xA0 (0xA0)
	char pad_161[7];  // 0xA1 (0xA1)


}; 
 
 
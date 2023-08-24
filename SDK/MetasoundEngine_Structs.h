#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
struct FDefaultMetaSoundAssetAutoUpdateSettings
{
	struct FSoftObjectPath Metasound;  // 000 (000)


}; 
 
 // ScriptStruct MetasoundEngine.MetaSoundAssetDirectory
struct FMetaSoundAssetDirectory
{
	struct FDirectoryPath Directory;  // 0x0 (0x0)


}; 
 
 // Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
struct FRegisterAssetClassesInDirectories
{
	struct TArray<struct FMetaSoundAssetDirectory> Directories;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MetasoundEngine.MetaSoundAsyncAssetDependencies
struct FMetaSoundAsyncAssetDependencies
{
	char pad_0[8];  // 0x0 (0x0)
	struct UObject* Metasound;  // 0x8 (0x8)
	char pad_16[32];  // 0x10 (0x10)


}; 
 
 // Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
struct FUnregisterAssetClassesInDirectories
{
	struct TArray<struct FMetaSoundAssetDirectory> Directories;  // 0x0 (0x0)


}; 
 
 
#pragma once 
#include <MetasoundEngine_Structs.h>
 
 
 
// Class MetasoundEngine.MetaSoundSettings
// Size: 0x80(Inherited: 0x38)
struct UMetaSoundSettings : UDeveloperSettings
{
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bAutoUpdateEnabled : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct TArray<struct FMetasoundFrontendClassName> AutoUpdateDenylist;  // 0x40 (0x40)
	struct TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;  // 0x50 (0x50)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bAutoUpdateLogWarningOnDroppedConnection : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	struct TArray<struct FDirectoryPath> DirectoriesToRegister;  // 0x68 (0x68)
	int32_t DenyListCacheChangeID;  // 0x78 (0x78)
	char pad_124[4];  // 0x7C (0x7C)


}; 
 
 


// Class MetasoundEngine.MetasoundEditorGraphBase
// Size: 0x60(Inherited: 0x60)
struct UMetasoundEditorGraphBase : UEdGraph
{


}; 
 
 


// Class MetasoundEngine.MetaSoundPatch
// Size: 0x358(Inherited: 0x28)
struct UMetaSoundPatch : UObject
{
	char pad_40[104];  // 0x28 (0x28)
	struct FMetasoundFrontendDocument RootMetaSoundDocument;  // 0x90 (0x90)
	struct TSet<struct FString> ReferencedAssetClassKeys;  // 0x258 (0x258)
	struct TSet<struct UObject*> ReferencedAssetClassObjects;  // 0x2A8 (0x2A8)
	struct TSet<struct FSoftObjectPath> ReferenceAssetClassCache;  // 0x2F8 (0x2F8)
	struct FGuid AssetClassID;  // 0x348 (0x348)


}; 
 
 


// Class MetasoundEngine.MetaSoundAssetSubsystem
// Size: 0x1E0(Inherited: 0x30)
struct UMetaSoundAssetSubsystem : UEngineSubsystem
{
	char pad_48[8];  // 0x30 (0x30)
	struct TArray<struct FMetaSoundAsyncAssetDependencies> LoadingDependencies;  // 0x38 (0x38)
	char pad_72[408];  // 0x48 (0x48)


	void UnregisterAssetClassesInDirectories(struct TArray<struct FMetaSoundAssetDirectory>& Directories); // Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
	void RegisterAssetClassesInDirectories(struct TArray<struct FMetaSoundAssetDirectory>& Directories); // Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
}; 
 
 


// Class MetasoundEngine.MetaSoundSource
// Size: 0x7E0(Inherited: 0x4A0)
struct UMetaSoundSource : USoundWaveProcedural
{
	char pad_1184[104];  // 0x4A0 (0x4A0)
	struct FMetasoundFrontendDocument RootMetaSoundDocument;  // 0x508 (0x508)
	struct TSet<struct FString> ReferencedAssetClassKeys;  // 0x6D0 (0x6D0)
	struct TSet<struct UObject*> ReferencedAssetClassObjects;  // 0x720 (0x720)
	struct TSet<struct FSoftObjectPath> ReferenceAssetClassCache;  // 0x770 (0x770)
	uint8_t OutputFormat;  // 0x7C0 (0x7C0)
	char pad_1985[3];  // 0x7C1 (0x7C1)
	struct FGuid AssetClassID;  // 0x7C4 (0x7C4)
	char pad_2004[12];  // 0x7D4 (0x7D4)


}; 
 
 



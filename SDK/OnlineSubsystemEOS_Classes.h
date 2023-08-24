#pragma once 
#include <OnlineSubsystemEOS_Structs.h>
 
 
 
// Class OnlineSubsystemEOS.NetDriverEOS
// Size: 0x848(Inherited: 0x848)
struct UNetDriverEOS : UNetDriverEOSBase
{


}; 
 
 


// Class OnlineSubsystemEOS.EOSArtifactSettings
// Size: 0x30(Inherited: 0x30)
struct UEOSArtifactSettings : UDataAsset
{


}; 
 
 


// Class OnlineSubsystemEOS.EOSSettings
// Size: 0x90(Inherited: 0x38)
struct UEOSSettings : URuntimeOptionsBase
{
	struct FString CacheDir;  // 0x38 (0x38)
	struct FString DefaultArtifactName;  // 0x48 (0x48)
	int32_t TickBudgetInMilliseconds;  // 0x58 (0x58)
	char pad_92_1 : 7;  // 0x5C (0x5C)
	bool bEnableOverlay : 1;  // 0x5C (0x5C)
	char pad_93_1 : 7;  // 0x5D (0x5D)
	bool bEnableSocialOverlay : 1;  // 0x5D (0x5D)
	char pad_94_1 : 7;  // 0x5E (0x5E)
	bool bEnableEditorOverlay : 1;  // 0x5E (0x5E)
	char pad_95_1 : 7;  // 0x5F (0x5F)
	bool bShouldEnforceBeingLaunchedByEGS : 1;  // 0x5F (0x5F)
	struct TArray<struct FString> TitleStorageTags;  // 0x60 (0x60)
	int32_t TitleStorageReadChunkLength;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)
	struct TArray<struct FArtifactSettings> Artifacts;  // 0x78 (0x78)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool bUseEAS : 1;  // 0x88 (0x88)
	char pad_137_1 : 7;  // 0x89 (0x89)
	bool bUseEOSConnect : 1;  // 0x89 (0x89)
	char pad_138_1 : 7;  // 0x8A (0x8A)
	bool bMirrorStatsToEOS : 1;  // 0x8A (0x8A)
	char pad_139_1 : 7;  // 0x8B (0x8B)
	bool bMirrorAchievementsToEOS : 1;  // 0x8B (0x8B)
	char pad_140_1 : 7;  // 0x8C (0x8C)
	bool bUseEOSSessions : 1;  // 0x8C (0x8C)
	char pad_141_1 : 7;  // 0x8D (0x8D)
	bool bMirrorPresenceToEAS : 1;  // 0x8D (0x8D)
	char pad_142[2];  // 0x8E (0x8E)


}; 
 
 



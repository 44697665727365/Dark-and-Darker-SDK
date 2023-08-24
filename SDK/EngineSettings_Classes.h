#pragma once 
#include <EngineSettings_Structs.h>
 
 
 
// Class EngineSettings.GameMapsSettings
// Size: 0x120(Inherited: 0x28)
struct UGameMapsSettings : UObject
{
	struct FString LocalMapOptions;  // 0x28 (0x28)
	struct FSoftObjectPath TransitionMap;  // 0x38 (0x38)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool bUseSplitscreen : 1;  // 0x58 (0x58)
	enum class ETwoPlayerSplitScreenType TwoPlayerSplitscreenLayout;  // 0x59 (0x59)
	enum class EThreePlayerSplitScreenType ThreePlayerSplitscreenLayout;  // 0x5A (0x5A)
	uint8_t FourPlayerSplitscreenLayout;  // 0x5B (0x5B)
	char pad_92_1 : 7;  // 0x5C (0x5C)
	bool bOffsetPlayerGamepadIds : 1;  // 0x5C (0x5C)
	char pad_93[3];  // 0x5D (0x5D)
	struct FSoftClassPath GameInstanceClass;  // 0x60 (0x60)
	struct FSoftObjectPath GameDefaultMap;  // 0x80 (0x80)
	struct FSoftObjectPath ServerDefaultMap;  // 0xA0 (0xA0)
	struct FSoftClassPath GlobalDefaultGameMode;  // 0xC0 (0xC0)
	struct FSoftClassPath GlobalDefaultServerGameMode;  // 0xE0 (0xE0)
	struct TArray<struct FGameModeName> GameModeMapPrefixes;  // 0x100 (0x100)
	struct TArray<struct FGameModeName> GameModeClassAliases;  // 0x110 (0x110)


	void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer); // Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
	bool GetSkipAssigningGamepadToPlayer1(); // Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
	struct UGameMapsSettings* GetGameMapsSettings(); // Function EngineSettings.GameMapsSettings.GetGameMapsSettings
}; 
 
 


// Class EngineSettings.GeneralProjectSettings
// Size: 0x118(Inherited: 0x28)
struct UGeneralProjectSettings : UObject
{
	struct FString CompanyName;  // 0x28 (0x28)
	struct FString CompanyDistinguishedName;  // 0x38 (0x38)
	struct FString CopyrightNotice;  // 0x48 (0x48)
	struct FString Description;  // 0x58 (0x58)
	struct FString Homepage;  // 0x68 (0x68)
	struct FString LicensingTerms;  // 0x78 (0x78)
	struct FString PrivacyPolicy;  // 0x88 (0x88)
	struct FGuid ProjectID;  // 0x98 (0x98)
	struct FString ProjectName;  // 0xA8 (0xA8)
	struct FString ProjectVersion;  // 0xB8 (0xB8)
	struct FString SupportContact;  // 0xC8 (0xC8)
	struct FText ProjectDisplayedTitle;  // 0xD8 (0xD8)
	struct FText ProjectDebugTitleInfo;  // 0xF0 (0xF0)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool bShouldWindowPreserveAspectRatio : 1;  // 0x108 (0x108)
	char pad_265_1 : 7;  // 0x109 (0x109)
	bool bUseBorderlessWindow : 1;  // 0x109 (0x109)
	char pad_266_1 : 7;  // 0x10A (0x10A)
	bool bStartInVR : 1;  // 0x10A (0x10A)
	char pad_267_1 : 7;  // 0x10B (0x10B)
	bool bAllowWindowResize : 1;  // 0x10B (0x10B)
	char pad_268_1 : 7;  // 0x10C (0x10C)
	bool bAllowClose : 1;  // 0x10C (0x10C)
	char pad_269_1 : 7;  // 0x10D (0x10D)
	bool bAllowMaximize : 1;  // 0x10D (0x10D)
	char pad_270_1 : 7;  // 0x10E (0x10E)
	bool bAllowMinimize : 1;  // 0x10E (0x10E)
	char pad_271[1];  // 0x10F (0x10F)
	float EyeOffsetForFakeStereoRenderingDevice;  // 0x110 (0x110)
	float FOVForFakeStereoRenderingDevice;  // 0x114 (0x114)


}; 
 
 


// Class EngineSettings.HudSettings
// Size: 0x40(Inherited: 0x28)
struct UHudSettings : UObject
{
	char bShowHUD : 1;  // 0x28 (0x28)
	char pad_40_1 : 7;  // 0x28 (0x28)
	char pad_41[8];  // 0x29 (0x29)
	struct TArray<struct FName> DebugDisplay;  // 0x30 (0x30)


}; 
 
 


// Class EngineSettings.ConsoleSettings
// Size: 0x70(Inherited: 0x28)
struct UConsoleSettings : UObject
{
	int32_t MaxScrollbackSize;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct TArray<struct FAutoCompleteCommand> ManualAutoCompleteList;  // 0x30 (0x30)
	struct TArray<struct FString> AutoCompleteMapPaths;  // 0x40 (0x40)
	float BackgroundOpacityPercentage;  // 0x50 (0x50)
	char pad_84_1 : 7;  // 0x54 (0x54)
	bool bOrderTopToBottom : 1;  // 0x54 (0x54)
	char pad_85_1 : 7;  // 0x55 (0x55)
	bool bDisplayHelpInAutoComplete : 1;  // 0x55 (0x55)
	char pad_86[2];  // 0x56 (0x56)
	struct FColor InputColor;  // 0x58 (0x58)
	struct FColor HistoryColor;  // 0x5C (0x5C)
	struct FColor AutoCompleteCommandColor;  // 0x60 (0x60)
	struct FColor AutoCompleteCVarColor;  // 0x64 (0x64)
	struct FColor AutoCompleteFadedColor;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 


// Class EngineSettings.GameNetworkManagerSettings
// Size: 0x58(Inherited: 0x28)
struct UGameNetworkManagerSettings : UObject
{
	int32_t MinDynamicBandwidth;  // 0x28 (0x28)
	int32_t MaxDynamicBandwidth;  // 0x2C (0x2C)
	int32_t TotalNetBandwidth;  // 0x30 (0x30)
	int32_t BadPingThreshold;  // 0x34 (0x34)
	char bIsStandbyCheckingEnabled : 1;  // 0x38 (0x38)
	char pad_56_1 : 7;  // 0x38 (0x38)
	char pad_57[4];  // 0x39 (0x39)
	float StandbyRxCheatTime;  // 0x3C (0x3C)
	float StandbyTxCheatTime;  // 0x40 (0x40)
	float PercentMissingForRxStandby;  // 0x44 (0x44)
	float PercentMissingForTxStandby;  // 0x48 (0x48)
	float PercentForBadPing;  // 0x4C (0x4C)
	float JoinInProgressStandbyWaitTime;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 


// Class EngineSettings.GameSessionSettings
// Size: 0x38(Inherited: 0x28)
struct UGameSessionSettings : UObject
{
	int32_t MaxSpectators;  // 0x28 (0x28)
	int32_t MaxPlayers;  // 0x2C (0x2C)
	char bRequiresPushToTalk : 1;  // 0x30 (0x30)
	char pad_48_1 : 7;  // 0x30 (0x30)
	char pad_49[8];  // 0x31 (0x31)


}; 
 
 


// Class EngineSettings.GeneralEngineSettings
// Size: 0x28(Inherited: 0x28)
struct UGeneralEngineSettings : UObject
{


}; 
 
 



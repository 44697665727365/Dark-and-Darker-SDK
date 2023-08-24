#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
struct FCacheAchievements
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct UAchievementQueryCallbackProxy* ReturnValue;  // 0x10 (0x10)


}; 
 
 // DelegateFunction OnlineSubsystemUtils.AchievementWriteDelegate__DelegateSignature
struct FAchievementWriteDelegate__DelegateSignature
{
	struct FName WrittenAchievementName;  // 0x0 (0x0)
	float WrittenProgress;  // 0x8 (0x8)
	int32_t WrittenUserTag;  // 0xC (0xC)


}; 
 
 // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
struct FClientCancelReservationResponse
{
	enum class ESpectatorReservationResult ReservationResponse;  // 0x0 (0x0)


}; 
 
 // ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
struct FBlueprintSessionResult
{
	char pad_0[288];  // 0x0 (0x0)


}; 
 
 // DelegateFunction OnlineSubsystemUtils.BlueprintFindSessionsResultDelegate__DelegateSignature
struct FBlueprintFindSessionsResultDelegate__DelegateSignature
{
	struct TArray<struct FBlueprintSessionResult> Results;  // 0x0 (0x0)


}; 
 
 // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
struct FGetIsMyTurn
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct FString MatchID;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bIsMyTurn : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // ScriptStruct OnlineSubsystemUtils.PlayerReservation
struct FPlayerReservation
{
	struct FUniqueNetIdRepl UniqueId;  // 0x0 (0x0)
	struct FString ValidationStr;  // 0x30 (0x30)
	struct FString Platform;  // 0x40 (0x40)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bAllowCrossplay : 1;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	float ElapsedTime;  // 0x54 (0x54)


}; 
 
 // DelegateFunction OnlineSubsystemUtils.InAppPurchaseQuery2Result__DelegateSignature
struct FInAppPurchaseQuery2Result__DelegateSignature
{
	struct TArray<struct FOnlineProxyStoreOffer> InAppOfferInformation;  // 0x0 (0x0)


}; 
 
 // ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
struct FOnlineProxyStoreOffer
{
	struct FString OfferId;  // 0x0 (0x0)
	struct FText Title;  // 0x10 (0x10)
	struct FText Description;  // 0x28 (0x28)
	struct FText LongDescription;  // 0x40 (0x40)
	struct FText RegularPriceText;  // 0x58 (0x58)
	int32_t RegularPrice;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)
	struct FText PriceText;  // 0x78 (0x78)
	int32_t NumericPrice;  // 0x90 (0x90)
	char pad_148[4];  // 0x94 (0x94)
	struct FString CurrencyCode;  // 0x98 (0x98)
	struct FDateTime ReleaseDate;  // 0xA8 (0xA8)
	struct FDateTime ExpirationDate;  // 0xB0 (0xB0)
	uint8_t DiscountType;  // 0xB8 (0xB8)
	char pad_185[7];  // 0xB9 (0xB9)
	struct TMap<struct FString, struct FString> DynamicFields;  // 0xC0 (0xC0)


}; 
 
 // DelegateFunction OnlineSubsystemUtils.LeaderboardQueryResult__DelegateSignature
struct FLeaderboardQueryResult__DelegateSignature
{
	int32_t LeaderboardValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
struct FInAppPurchaseRestoreInfo2
{
	struct FString ItemName;  // 0x0 (0x0)
	struct FString ItemId;  // 0x10 (0x10)
	struct FString ValidationInfo;  // 0x20 (0x20)


}; 
 
 // DelegateFunction OnlineSubsystemUtils.InAppPurchaseRestoreResult2__DelegateSignature
struct FInAppPurchaseRestoreResult2__DelegateSignature
{
	uint8_t PurchaseStatus;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FInAppPurchaseRestoreInfo2> InAppPurchaseRestoreInfo;  // 0x8 (0x8)


}; 
 
 // ScriptStruct OnlineSubsystemUtils.SpectatorReservation
struct FSpectatorReservation
{
	struct FUniqueNetIdRepl SpectatorId;  // 0x0 (0x0)
	struct FPlayerReservation Spectator;  // 0x30 (0x30)


}; 
 
 // DelegateFunction OnlineSubsystemUtils.InAppPurchaseResult2__DelegateSignature
struct FInAppPurchaseResult2__DelegateSignature
{
	uint8_t PurchaseStatus;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FInAppPurchaseReceiptInfo2> InAppPurchaseReceipts;  // 0x8 (0x8)


}; 
 
 // ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
struct FInAppPurchaseReceiptInfo2
{
	struct FString ItemName;  // 0x0 (0x0)
	struct FString ItemId;  // 0x10 (0x10)
	struct FString ValidationInfo;  // 0x20 (0x20)


}; 
 
 // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
struct FCreateProxyObjectForFlush
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct FName SessionName;  // 0x8 (0x8)
	struct ULeaderboardFlushCallbackProxy* ReturnValue;  // 0x10 (0x10)


}; 
 
 // DelegateFunction OnlineSubsystemUtils.OnLeaderboardFlushed__DelegateSignature
struct FOnLeaderboardFlushed__DelegateSignature
{
	struct FName SessionName;  // 0x0 (0x0)


}; 
 
 // DelegateFunction OnlineSubsystemUtils.OnlineConnectionResult__DelegateSignature
struct FOnlineConnectionResult__DelegateSignature
{
	int32_t ErrorCode;  // 0x0 (0x0)


}; 
 
 // DelegateFunction OnlineSubsystemUtils.OnlineLogoutResult__DelegateSignature
struct FOnlineLogoutResult__DelegateSignature
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)


}; 
 
 // DelegateFunction OnlineSubsystemUtils.OnlineShowLoginUIResult__DelegateSignature
struct FOnlineShowLoginUIResult__DelegateSignature
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)


}; 
 
 // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
struct FEndTurn
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct FString MatchID;  // 0x10 (0x10)
	struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface;  // 0x20 (0x20)
	struct UEndTurnCallbackProxy* ReturnValue;  // 0x30 (0x30)


}; 
 
 // DelegateFunction OnlineSubsystemUtils.OnlineTurnBasedMatchResult__DelegateSignature
struct FOnlineTurnBasedMatchResult__DelegateSignature
{
	struct FString MatchID;  // 0x0 (0x0)


}; 
 
 // Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
struct FIsIdling
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
struct FCreateProxyObjectForIntQuery
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct FName StatName;  // 0x8 (0x8)
	struct ULeaderboardQueryCallbackProxy* ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
struct FInAppPurchaseProductRequest2
{
	struct FString ProductIdentifier;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bIsConsumable : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
struct FInAppPurchaseProductInfo2
{
	struct FString Identifier;  // 0x0 (0x0)
	struct FString TransactionIdentifier;  // 0x10 (0x10)
	struct FString DisplayName;  // 0x20 (0x20)
	struct FString DisplayDescription;  // 0x30 (0x30)
	struct FString DisplayPrice;  // 0x40 (0x40)
	float RawPrice;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)
	struct FString CurrencyCode;  // 0x58 (0x58)
	struct FString CurrencySymbol;  // 0x68 (0x68)
	struct FString DecimalSeparator;  // 0x78 (0x78)
	struct FString GroupingSeparator;  // 0x88 (0x88)
	struct FString ReceiptData;  // 0x98 (0x98)
	struct TMap<struct FString, struct FString> DynamicFields;  // 0xA8 (0xA8)


}; 
 
 // ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
struct FPIELoginSettingsInternal
{
	struct FString ID;  // 0x0 (0x0)
	struct FString Token;  // 0x10 (0x10)
	struct FString Type;  // 0x20 (0x20)
	struct TArray<char> TokenBytes;  // 0x30 (0x30)


}; 
 
 // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
struct FCreateProxyObjectForInAppPurchaseUnprocessedPurchases
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct UInAppPurchaseCallbackProxy2* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
struct FCreateSession
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	int32_t PublicConnections;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bUseLAN : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct UCreateSessionCallbackProxy* ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct OnlineSubsystemUtils.PartyReservation
struct FPartyReservation
{
	int32_t TeamNum;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FUniqueNetIdRepl PartyLeader;  // 0x8 (0x8)
	struct TArray<struct FPlayerReservation> PartyMembers;  // 0x38 (0x38)
	struct TArray<struct FPlayerReservation> RemovedPartyMembers;  // 0x48 (0x48)


}; 
 
 // ScriptStruct OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
struct FPartyBeaconCrossplayPlatformMapping
{
	struct FString PlatformName;  // 0x0 (0x0)
	struct FString PlatformType;  // 0x10 (0x10)


}; 
 
 // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
struct FGetCurrentPlayers
{
	struct FBlueprintSessionResult Result;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x120 (0x120)
	char pad_292[4];  // 0x124 (0x124)


}; 
 
 // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
struct FGetCachedAchievementDescription
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct FName AchievementID;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bFoundID : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FText Title;  // 0x20 (0x20)
	struct FText LockedDescription;  // 0x38 (0x38)
	struct FText UnlockedDescription;  // 0x50 (0x50)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool bHidden : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)


}; 
 
 // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
struct FLogout
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct ULogoutCallbackProxy* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
struct FCacheAchievementDescriptions
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct UAchievementQueryCallbackProxy* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
struct FGetCachedAchievementProgress
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct FName AchievementID;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bFoundID : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	float Progress;  // 0x1C (0x1C)


}; 
 
 // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
struct FWriteAchievementProgress
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct FName AchievementName;  // 0x10 (0x10)
	float Progress;  // 0x18 (0x18)
	int32_t UserTag;  // 0x1C (0x1C)
	struct UAchievementWriteCallbackProxy* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
struct FConnectToService
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct UConnectionCallbackProxy* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
struct FGetPlayerDisplayName
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct FString MatchID;  // 0x10 (0x10)
	int32_t PlayerIndex;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FString PlayerDisplayName;  // 0x28 (0x28)


}; 
 
 // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
struct FDestroySession
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct UDestroySessionCallbackProxy* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
struct FServerRemoveMemberFromReservationRequest
{
	struct FString SessionId;  // 0x0 (0x0)
	struct FPartyReservation ReservationUpdate;  // 0x10 (0x10)


}; 
 
 // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
struct FEndMatch
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct TScriptInterface<ITurnBasedMatchInterface> MatchActor;  // 0x10 (0x10)
	struct FString MatchID;  // 0x20 (0x20)
	enum class EMPMatchOutcome LocalPlayerOutcome;  // 0x30 (0x30)
	enum class EMPMatchOutcome OtherPlayersOutcome;  // 0x31 (0x31)
	char pad_50[6];  // 0x32 (0x32)
	struct UEndMatchCallbackProxy* ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
struct FFindSessions
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	int32_t MaxResults;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bUseLAN : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct UFindSessionsCallbackProxy* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
struct FClientReservationResponse
{
	enum class ESpectatorReservationResult ReservationResponse;  // 0x0 (0x0)


}; 
 
 // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
struct FGetMaxPlayers
{
	struct FBlueprintSessionResult Result;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x120 (0x120)
	char pad_292[4];  // 0x124 (0x124)


}; 
 
 // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
struct FGetPingInMs
{
	struct FBlueprintSessionResult Result;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x120 (0x120)
	char pad_292[4];  // 0x124 (0x124)


}; 
 
 // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
struct FQuitMatch
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct FString MatchID;  // 0x10 (0x10)
	enum class EMPMatchOutcome Outcome;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	int32_t TurnTimeoutInSeconds;  // 0x24 (0x24)
	struct UQuitMatchCallbackProxy* ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
struct FGetServerName
{
	struct FBlueprintSessionResult Result;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x120 (0x120)


}; 
 
 // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
struct FFindTurnBasedMatch
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct TScriptInterface<ITurnBasedMatchInterface> MatchActor;  // 0x10 (0x10)
	int32_t MinPlayers;  // 0x20 (0x20)
	int32_t MaxPlayers;  // 0x24 (0x24)
	int32_t PlayerGroup;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool ShowExistingMatches : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	struct UFindTurnBasedMatchCallbackProxy* ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
struct FCreateProxyObjectForInAppPurchase
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct FInAppPurchaseProductRequest2 ProductRequest;  // 0x8 (0x8)
	struct UInAppPurchaseCallbackProxy2* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
struct FCreateProxyObjectForInAppPurchaseQueryOwned
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct UInAppPurchaseCallbackProxy2* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
struct FGetMyPlayerIndex
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct FString MatchID;  // 0x10 (0x10)
	int32_t PlayerIndex;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
struct FCreateProxyObjectForInAppPurchaseQuery
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct TArray<struct FString> ProductIdentifiers;  // 0x8 (0x8)
	struct UInAppPurchaseQueryCallbackProxy2* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
struct FServerAddOrUpdateReservationRequest
{
	struct FString SessionId;  // 0x0 (0x0)
	struct FPartyReservation Reservation;  // 0x10 (0x10)


}; 
 
 // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
struct FCreateProxyObjectForInAppPurchaseRestore
{
	struct TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x10 (0x10)
	struct UInAppPurchaseRestoreCallbackProxy2* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
struct FJoinSession
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct FBlueprintSessionResult SearchResult;  // 0x10 (0x10)
	struct UJoinSessionCallbackProxy* ReturnValue;  // 0x130 (0x130)


}; 
 
 // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
struct FServerCancelReservationRequest
{
	struct FUniqueNetIdRepl Spectator;  // 0x0 (0x0)


}; 
 
 // Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
struct FWriteLeaderboardInteger
{
	struct APlayerController* PlayerController;  // 0x0 (0x0)
	struct FName StatName;  // 0x8 (0x8)
	int32_t StatValue;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
struct FClientSendReservationUpdates
{
	int32_t NumRemainingReservations;  // 0x0 (0x0)


}; 
 
 // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
struct FServerReservationRequest
{
	struct FString SessionId;  // 0x0 (0x0)
	struct FSpectatorReservation Reservation;  // 0x10 (0x10)


}; 
 
 // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
struct FServerUpdateReservationRequest
{
	struct FString SessionId;  // 0x0 (0x0)
	struct FPartyReservation ReservationUpdate;  // 0x10 (0x10)


}; 
 
 // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
struct FShowExternalLoginUI
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* InPlayerController;  // 0x8 (0x8)
	struct UShowLoginUICallbackProxy* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
struct FRegisterTurnBasedMatchInterfaceObject
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct APlayerController* PlayerController;  // 0x8 (0x8)
	struct UObject* Object;  // 0x10 (0x10)


}; 
 
 
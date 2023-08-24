#pragma once 
#include <OnlineSubsystemUtils_Structs.h>
 
 
 
// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0x98(Inherited: 0x30)
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnFailure;  // 0x40 (0x40)
	char pad_80[72];  // 0x50 (0x50)


	struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
}; 
 
 


// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x78(Inherited: 0x30)
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnFailure;  // 0x40 (0x40)
	char pad_80[40];  // 0x50 (0x50)


	struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
}; 
 
 


// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// Size: 0x7F0(Inherited: 0x790)
struct UVoipListenerSynthComponent : USynthComponent
{
	char pad_1936[96];  // 0x790 (0x790)


	bool IsIdling(); // Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
}; 
 
 


// Class OnlineSubsystemUtils.IpConnection
// Size: 0x33A0(Inherited: 0x3310)
struct UIpConnection : UNetConnection
{
	char pad_13072[108];  // 0x3310 (0x3310)
	float SocketErrorDisconnectDelay;  // 0x337C (0x337C)
	char pad_13184[32];  // 0x3380 (0x3380)


}; 
 
 


// Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x840(Inherited: 0x790)
struct UIpNetDriver : UNetDriver
{
	char LogPortUnreach : 1;  // 0x790 (0x790)
	char AllowPlayerPortUnreach : 1;  // 0x790 (0x790)
	char pad_1936_1 : 6;  // 0x790 (0x790)
	char pad_1937[4];  // 0x791 (0x791)
	uint32_t MaxPortCountToTry;  // 0x794 (0x794)
	char pad_1944[4];  // 0x798 (0x798)
	uint32_t ServerDesiredSocketReceiveBufferBytes;  // 0x79C (0x79C)
	uint32_t ServerDesiredSocketSendBufferBytes;  // 0x7A0 (0x7A0)
	uint32_t ClientDesiredSocketReceiveBufferBytes;  // 0x7A4 (0x7A4)
	uint32_t ClientDesiredSocketSendBufferBytes;  // 0x7A8 (0x7A8)
	char pad_1964[4];  // 0x7AC (0x7AC)
	double MaxSecondsInReceive;  // 0x7B0 (0x7B0)
	int32_t NbPacketsBetweenReceiveTimeTest;  // 0x7B8 (0x7B8)
	float ResolutionConnectionTimeout;  // 0x7BC (0x7BC)
	char pad_1984[128];  // 0x7C0 (0x7C0)


}; 
 
 


// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary
{


	void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, float& Progress); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	void GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, struct FText& Title, struct FText& LockedDescription, struct FText& UnlockedDescription, bool& bHidden); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
}; 
 
 


// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x68(Inherited: 0x30)
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnFailure;  // 0x40 (0x40)
	char pad_80[24];  // 0x50 (0x50)


	struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	struct UAchievementQueryCallbackProxy* CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
}; 
 
 


// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x2B8(Inherited: 0x2B8)
struct ATestBeaconHost : AOnlineBeaconHostObject
{


}; 
 
 


// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x80(Inherited: 0x30)
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnFailure;  // 0x40 (0x40)
	char pad_80[48];  // 0x50 (0x50)


	struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
}; 
 
 


// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x78(Inherited: 0x30)
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnFailure;  // 0x40 (0x40)
	char pad_80[40];  // 0x50 (0x50)


	struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
}; 
 
 


// Class OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
// Size: 0x28(Inherited: 0x28)
struct UOnlineServicesEngineInterfaceImpl : UOnlineEngineInterface
{


}; 
 
 


// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x80(Inherited: 0x30)
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnFailure;  // 0x40 (0x40)
	char pad_80[48];  // 0x50 (0x50)


	struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
}; 
 
 


// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x78(Inherited: 0x30)
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnFailure;  // 0x40 (0x40)
	char pad_80[40];  // 0x50 (0x50)


	struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
}; 
 
 


// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x188(Inherited: 0x28)
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface
{
	struct TMap<struct FName, struct FName> MappedUniqueNetIdTypes;  // 0x28 (0x28)
	struct TArray<struct FName> CompatibleUniqueNetIdTypes;  // 0x78 (0x78)
	struct FName VoiceSubsystemNameOverride;  // 0x88 (0x88)
	char pad_144[248];  // 0x90 (0x90)


}; 
 
 


// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x90(Inherited: 0x30)
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnFailure;  // 0x40 (0x40)
	char pad_80[64];  // 0x50 (0x50)


	struct FString GetServerName(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	int32_t GetPingInMs(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	int32_t GetMaxPlayers(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	int32_t GetCurrentPlayers(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	struct UFindSessionsCallbackProxy* FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
}; 
 
 


// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x88(Inherited: 0x30)
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnFailure;  // 0x40 (0x40)
	char pad_80[56];  // 0x50 (0x50)


	struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
}; 
 
 


// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Size: 0xA8(Inherited: 0x28)
struct UInAppPurchaseCallbackProxy2 : UObject
{
	struct FMulticastInlineDelegate OnSuccess;  // [x28 ([x28)
	struct FMulticastInlineDelegate OnFailure;  // 0x38 (0x38)
	char pad_72[96];  // 0x48 (0x48)


	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest2& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
}; 
 
 


// Class OnlineSubsystemUtils.SpectatorBeaconHost
// Size: 0x330(Inherited: 0x2B8)
struct ASpectatorBeaconHost : AOnlineBeaconHostObject
{
	struct USpectatorBeaconState* State;  // 0x2B8 (0x2B8)
	char pad_704[96];  // 0x2C0 (0x2C0)
	char pad_800_1 : 7;  // 0x320 (0x320)
	bool bLogoutOnSessionTimeout : 1;  // 0x320 (0x320)
	char pad_801[3];  // 0x321 (0x321)
	float SessionTimeoutSecs;  // 0x324 (0x324)
	float TravelSessionTimeoutSecs;  // 0x328 (0x328)
	char pad_812[4];  // 0x32C (0x32C)


}; 
 
 


// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Size: 0x68(Inherited: 0x28)
struct UInAppPurchaseQueryCallbackProxy2 : UObject
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x28 (0x28)
	struct FMulticastInlineDelegate OnFailure;  // 0x38 (0x38)
	char pad_72[32];  // 0x48 (0x48)


	struct UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
}; 
 
 


// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x320(Inherited: 0x320)
struct ATestBeaconClient : AOnlineBeaconClient
{


	void ServerPong(); // Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
	void ClientPing(); // Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
}; 
 
 


// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Size: 0xB0(Inherited: 0x28)
struct UInAppPurchaseRestoreCallbackProxy2 : UObject
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x28 (0x28)
	struct FMulticastInlineDelegate OnFailure;  // 0x38 (0x38)
	char pad_72[104];  // 0x48 (0x48)


	struct UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
}; 
 
 


// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x198(Inherited: 0x30)
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnFailure;  // 0x40 (0x40)
	char pad_80[328];  // 0x50 (0x50)


	struct UJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
}; 
 
 


// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary
{


	bool WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue); // Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
}; 
 
 


// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x320(Inherited: 0x2C0)
struct AOnlineBeaconClient : AOnlineBeacon
{
	struct AOnlineBeaconHostObject* BeaconOwner;  // 0x2C0 (0x2C0)
	struct UNetConnection* BeaconConnection;  // 0x2C8 (0x2C8)
	uint8_t ConnectionState;  // 0x2D0 (0x2D0)
	char pad_721[79];  // 0x2D1 (0x2D1)


	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
}; 
 
 


// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x68(Inherited: 0x28)
struct ULeaderboardFlushCallbackProxy : UObject
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x28 (0x28)
	struct FMulticastInlineDelegate OnFailure;  // 0x38 (0x38)
	char pad_72[32];  // 0x48 (0x48)


	struct ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
}; 
 
 


// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0x98(Inherited: 0x28)
struct ULeaderboardQueryCallbackProxy : UObject
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x28 (0x28)
	struct FMulticastInlineDelegate OnFailure;  // 0x38 (0x38)
	char pad_72[80];  // 0x48 (0x48)


	struct ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
}; 
 
 


// Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x68(Inherited: 0x30)
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnFailure;  // 0x40 (0x40)
	char pad_80[24];  // 0x50 (0x50)


	struct ULogoutCallbackProxy* Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
}; 
 
 


// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x2C0(Inherited: 0x290)
struct AOnlineBeacon : AActor
{
	char pad_656[8];  // 0x290 (0x290)
	float BeaconConnectionInitialTimeout;  // 0x298 (0x298)
	float BeaconConnectionTimeout;  // 0x29C (0x29C)
	struct UNetDriver* NetDriver;  // 0x2A0 (0x2A0)
	char pad_680[24];  // 0x2A8 (0x2A8)


}; 
 
 


// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x3D0(Inherited: 0x2C0)
struct AOnlineBeaconHost : AOnlineBeacon
{
	int32_t ListenPort;  // 0x2C0 (0x2C0)
	char pad_708_1 : 7;  // 0x2C4 (0x2C4)
	bool bAuthRequired : 1;  // 0x2C4 (0x2C4)
	char pad_709[3];  // 0x2C5 (0x2C5)
	uint32_t MaxAuthTokenSize;  // 0x2C8 (0x2C8)
	char pad_716[84];  // 0x2CC (0x2CC)
	struct TArray<struct AOnlineBeaconClient*> ClientActors;  // 0x320 (0x320)
	char pad_816[160];  // 0x330 (0x330)


}; 
 
 


// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x2B8(Inherited: 0x290)
struct AOnlineBeaconHostObject : AActor
{
	struct FString BeaconTypeName;  // 0x290 (0x290)
	AOnlineBeaconClient* ClientBeaconActorClass;  // 0x2A0 (0x2A0)
	struct TArray<struct AOnlineBeaconClient*> ClientActors;  // 0x2A8 (0x2A8)


}; 
 
 


// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x50(Inherited: 0x38)
struct UOnlinePIESettings : UDeveloperSettings
{
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bOnlinePIEEnabled : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct TArray<struct FPIELoginSettingsInternal> Logins;  // 0x40 (0x40)


}; 
 
 


// Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x1E0(Inherited: 0x28)
struct UOnlineSessionClient : UOnlineSession
{
	char pad_40[432];  // 0x28 (0x28)
	char pad_472_1 : 7;  // 0x1D8 (0x1D8)
	bool bIsFromInvite : 1;  // 0x1D8 (0x1D8)
	char pad_473_1 : 7;  // 0x1D9 (0x1D9)
	bool bHandlingDisconnect : 1;  // 0x1D9 (0x1D9)
	char pad_474[6];  // 0x1DA (0x1DA)


}; 
 
 


// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x3E8(Inherited: 0x320)
struct APartyBeaconClient : AOnlineBeaconClient
{
	char pad_800[48];  // 0x320 (0x320)
	struct FString DestSessionId;  // 0x350 (0x350)
	struct FPartyReservation PendingReservation;  // 0x360 (0x360)
	uint8_t RequestType;  // 0x3B8 (0x3B8)
	char pad_953_1 : 7;  // 0x3B9 (0x3B9)
	bool bPendingReservationSent : 1;  // 0x3B9 (0x3B9)
	char pad_954_1 : 7;  // 0x3BA (0x3BA)
	bool bCancelReservation : 1;  // 0x3BA (0x3BA)
	char pad_955[45];  // 0x3BB (0x3BB)


	void ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	void ServerReservationRequest(struct FString SessionId, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	void ServerRemoveMemberFromReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	void ServerAddOrUpdateReservationRequest(struct FString SessionId, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
}; 
 
 


// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x330(Inherited: 0x2B8)
struct APartyBeaconHost : AOnlineBeaconHostObject
{
	struct UPartyBeaconState* State;  // 0x2B8 (0x2B8)
	char pad_704[96];  // 0x2C0 (0x2C0)
	char pad_800_1 : 7;  // 0x320 (0x320)
	bool bLogoutOnSessionTimeout : 1;  // 0x320 (0x320)
	char pad_801[3];  // 0x321 (0x321)
	float SessionTimeoutSecs;  // 0x324 (0x324)
	float TravelSessionTimeoutSecs;  // 0x328 (0x328)
	char pad_812[4];  // 0x32C (0x32C)


}; 
 
 


// Class OnlineSubsystemUtils.PartyBeaconState
// Size: 0xA0(Inherited: 0x28)
struct UPartyBeaconState : UObject
{
	struct FName SessionName;  // 0x28 (0x28)
	int32_t NumConsumedReservations;  // 0x30 (0x30)
	int32_t MaxReservations;  // 0x34 (0x34)
	int32_t NumTeams;  // 0x38 (0x38)
	int32_t NumPlayersPerTeam;  // 0x3C (0x3C)
	struct FName TeamAssignmentMethod;  // 0x40 (0x40)
	int32_t ReservedHostTeamNum;  // 0x48 (0x48)
	int32_t ForceTeamNum;  // 0x4C (0x4C)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bRestrictCrossConsole : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)
	struct TArray<struct FString> PlatformCrossplayRestrictions;  // 0x58 (0x58)
	struct TArray<struct FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;  // 0x68 (0x68)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool bEnableRemovalRequests : 1;  // 0x78 (0x78)
	char pad_121[7];  // 0x79 (0x79)
	struct TArray<struct FPartyReservation> Reservations;  // 0x80 (0x80)
	char pad_144[16];  // 0x90 (0x90)


}; 
 
 


// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x78(Inherited: 0x30)
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnFailure;  // 0x40 (0x40)
	char pad_80[40];  // 0x50 (0x50)


	struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, enum class EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
}; 
 
 


// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x60(Inherited: 0x30)
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnFailure;  // 0x40 (0x40)
	char pad_80[16];  // 0x50 (0x50)


	struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
}; 
 
 


// Class OnlineSubsystemUtils.SpectatorBeaconClient
// Size: 0x418(Inherited: 0x320)
struct ASpectatorBeaconClient : AOnlineBeaconClient
{
	char pad_800[48];  // 0x320 (0x320)
	struct FString DestSessionId;  // 0x350 (0x350)
	struct FSpectatorReservation PendingReservation;  // 0x360 (0x360)
	uint8_t RequestType;  // 0x3E8 (0x3E8)
	char pad_1001_1 : 7;  // 0x3E9 (0x3E9)
	bool bPendingReservationSent : 1;  // 0x3E9 (0x3E9)
	char pad_1002_1 : 7;  // 0x3EA (0x3EA)
	bool bCancelReservation : 1;  // 0x3EA (0x3EA)
	char pad_1003[45];  // 0x3EB (0x3EB)


	void ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	void ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
}; 
 
 


// Class OnlineSubsystemUtils.SpectatorBeaconState
// Size: 0x60(Inherited: 0x28)
struct USpectatorBeaconState : UObject
{
	struct FName SessionName;  // 0x28 (0x28)
	int32_t NumConsumedReservations;  // 0x30 (0x30)
	int32_t MaxReservations;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bRestrictCrossConsole : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct TArray<struct FSpectatorReservation> Reservations;  // 0x40 (0x40)
	char pad_80[16];  // 0x50 (0x50)


}; 
 
 


// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary
{


	void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	void GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString& PlayerDisplayName); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	void GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t& PlayerIndex); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	void GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, bool& bIsMyTurn); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
}; 
 
 



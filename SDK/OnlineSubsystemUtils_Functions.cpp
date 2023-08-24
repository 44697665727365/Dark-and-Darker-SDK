#include "pch.h"
#include "SDK.h"

struct UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession");

	FCreateSession parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;
	parms.PublicConnections = PublicConnections;
	parms.bUseLAN = bUseLAN;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UConnectionCallbackProxy* UConnectionCallbackProxy::ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService");

	FConnectToService parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UVoipListenerSynthComponent::IsIdling(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling");

	FIsIdling parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAchievementBlueprintLibrary::GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, float& Progress){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress");

	FGetCachedAchievementProgress parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;
	parms.AchievementID = AchievementID;
	parms.bFoundID = bFoundID;
	parms.Progress = Progress;

	ProcessEvent(fn, &parms);
}

void UAchievementBlueprintLibrary::GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, struct FText& Title, struct FText& LockedDescription, struct FText& UnlockedDescription, bool& bHidden){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription");

	FGetCachedAchievementDescription parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;
	parms.AchievementID = AchievementID;
	parms.bFoundID = bFoundID;
	parms.Title = Title;
	parms.LockedDescription = LockedDescription;
	parms.UnlockedDescription = UnlockedDescription;
	parms.bHidden = bHidden;

	ProcessEvent(fn, &parms);
}

struct UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements");

	FCacheAchievements parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions");

	FCacheAchievementDescriptions parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress");

	FWriteAchievementProgress parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;
	parms.AchievementName = AchievementName;
	parms.Progress = Progress;
	parms.UserTag = UserTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession");

	FDestroySession parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UEndMatchCallbackProxy* UEndMatchCallbackProxy::EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch");

	FEndMatch parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;
	parms.MatchActor = MatchActor;
	parms.MatchID = MatchID;
	parms.LocalPlayerOutcome = LocalPlayerOutcome;
	parms.OtherPlayersOutcome = OtherPlayersOutcome;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn");

	FEndTurn parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;
	parms.MatchID = MatchID;
	parms.TurnBasedMatchInterface = TurnBasedMatchInterface;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UFindSessionsCallbackProxy::GetServerName(struct FBlueprintSessionResult& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName");

	FGetServerName parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UFindSessionsCallbackProxy::GetPingInMs(struct FBlueprintSessionResult& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs");

	FGetPingInMs parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UFindSessionsCallbackProxy::GetMaxPlayers(struct FBlueprintSessionResult& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers");

	FGetMaxPlayers parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UFindSessionsCallbackProxy::GetCurrentPlayers(struct FBlueprintSessionResult& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers");

	FGetCurrentPlayers parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions");

	FFindSessions parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;
	parms.MaxResults = MaxResults;
	parms.bUseLAN = bUseLAN;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch");

	FFindTurnBasedMatch parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;
	parms.MatchActor = MatchActor;
	parms.MinPlayers = MinPlayers;
	parms.MaxPlayers = MaxPlayers;
	parms.PlayerGroup = PlayerGroup;
	parms.ShowExistingMatches = ShowExistingMatches;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases");

	FCreateProxyObjectForInAppPurchaseUnprocessedPurchases parms{};	
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned");

	FCreateProxyObjectForInAppPurchaseQueryOwned parms{};	
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest2& ProductRequest){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase");

	FCreateProxyObjectForInAppPurchase parms{};	
	parms.PlayerController = PlayerController;
	parms.ProductRequest = ProductRequest;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UInAppPurchaseQueryCallbackProxy2* UInAppPurchaseQueryCallbackProxy2::CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery");

	FCreateProxyObjectForInAppPurchaseQuery parms{};	
	parms.PlayerController = PlayerController;
	parms.ProductIdentifiers = ProductIdentifiers;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ATestBeaconClient::ServerPong(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TestBeaconClient.ServerPong");

	FServerPong parms{};	

	ProcessEvent(fn, &parms);
}

void ATestBeaconClient::ClientPing(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TestBeaconClient.ClientPing");

	FClientPing parms{};	

	ProcessEvent(fn, &parms);
}

struct UInAppPurchaseRestoreCallbackProxy2* UInAppPurchaseRestoreCallbackProxy2::CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore");

	FCreateProxyObjectForInAppPurchaseRestore parms{};	
	parms.ConsumableProductFlags = ConsumableProductFlags;
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession");

	FJoinSession parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;
	parms.SearchResult = SearchResult;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ULeaderboardBlueprintLibrary::WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger");

	FWriteLeaderboardInteger parms{};	
	parms.PlayerController = PlayerController;
	parms.StatName = StatName;
	parms.StatValue = StatValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AOnlineBeaconClient::ClientOnConnected(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected");

	FClientOnConnected parms{};	

	ProcessEvent(fn, &parms);
}

struct ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush");

	FCreateProxyObjectForFlush parms{};	
	parms.PlayerController = PlayerController;
	parms.SessionName = SessionName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery");

	FCreateProxyObjectForIntQuery parms{};	
	parms.PlayerController = PlayerController;
	parms.StatName = StatName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ULogoutCallbackProxy* ULogoutCallbackProxy::Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout");

	FLogout parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void APartyBeaconClient::ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest");

	FServerUpdateReservationRequest parms{};	
	parms.SessionId = SessionId;
	parms.ReservationUpdate = ReservationUpdate;

	ProcessEvent(fn, &parms);
}

void APartyBeaconClient::ServerReservationRequest(struct FString SessionId, struct FPartyReservation Reservation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest");

	FServerReservationRequest parms{};	
	parms.SessionId = SessionId;
	parms.Reservation = Reservation;

	ProcessEvent(fn, &parms);
}

void APartyBeaconClient::ServerRemoveMemberFromReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest");

	FServerRemoveMemberFromReservationRequest parms{};	
	parms.SessionId = SessionId;
	parms.ReservationUpdate = ReservationUpdate;

	ProcessEvent(fn, &parms);
}

void APartyBeaconClient::ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest");

	FServerCancelReservationRequest parms{};	
	parms.PartyLeader = PartyLeader;

	ProcessEvent(fn, &parms);
}

void APartyBeaconClient::ServerAddOrUpdateReservationRequest(struct FString SessionId, struct FPartyReservation Reservation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest");

	FServerAddOrUpdateReservationRequest parms{};	
	parms.SessionId = SessionId;
	parms.Reservation = Reservation;

	ProcessEvent(fn, &parms);
}

void APartyBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates");

	FClientSendReservationUpdates parms{};	
	parms.NumRemainingReservations = NumRemainingReservations;

	ProcessEvent(fn, &parms);
}

void APartyBeaconClient::ClientSendReservationFull(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull");

	FClientSendReservationFull parms{};	

	ProcessEvent(fn, &parms);
}

void APartyBeaconClient::ClientReservationResponse(enum class EPartyReservationResult ReservationResponse){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse");

	FClientReservationResponse parms{};	
	parms.ReservationResponse = ReservationResponse;

	ProcessEvent(fn, &parms);
}

void APartyBeaconClient::ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse");

	FClientCancelReservationResponse parms{};	
	parms.ReservationResponse = ReservationResponse;

	ProcessEvent(fn, &parms);
}

struct UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, enum class EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch");

	FQuitMatch parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;
	parms.MatchID = MatchID;
	parms.Outcome = Outcome;
	parms.TurnTimeoutInSeconds = TurnTimeoutInSeconds;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI");

	FShowExternalLoginUI parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.InPlayerController = InPlayerController;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ASpectatorBeaconClient::ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest");

	FServerReservationRequest parms{};	
	parms.SessionId = SessionId;
	parms.Reservation = Reservation;

	ProcessEvent(fn, &parms);
}

void ASpectatorBeaconClient::ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest");

	FServerCancelReservationRequest parms{};	
	parms.Spectator = Spectator;

	ProcessEvent(fn, &parms);
}

void ASpectatorBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates");

	FClientSendReservationUpdates parms{};	
	parms.NumRemainingReservations = NumRemainingReservations;

	ProcessEvent(fn, &parms);
}

void ASpectatorBeaconClient::ClientSendReservationFull(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull");

	FClientSendReservationFull parms{};	

	ProcessEvent(fn, &parms);
}

void ASpectatorBeaconClient::ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse");

	FClientReservationResponse parms{};	
	parms.ReservationResponse = ReservationResponse;

	ProcessEvent(fn, &parms);
}

void ASpectatorBeaconClient::ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse");

	FClientCancelReservationResponse parms{};	
	parms.ReservationResponse = ReservationResponse;

	ProcessEvent(fn, &parms);
}

void UTurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject");

	FRegisterTurnBasedMatchInterfaceObject parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;
	parms.Object = Object;

	ProcessEvent(fn, &parms);
}

void UTurnBasedBlueprintLibrary::GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString& PlayerDisplayName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName");

	FGetPlayerDisplayName parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;
	parms.MatchID = MatchID;
	parms.PlayerIndex = PlayerIndex;
	parms.PlayerDisplayName = PlayerDisplayName;

	ProcessEvent(fn, &parms);
}

void UTurnBasedBlueprintLibrary::GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t& PlayerIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex");

	FGetMyPlayerIndex parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;
	parms.MatchID = MatchID;
	parms.PlayerIndex = PlayerIndex;

	ProcessEvent(fn, &parms);
}

void UTurnBasedBlueprintLibrary::GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, bool& bIsMyTurn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn");

	FGetIsMyTurn parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PlayerController = PlayerController;
	parms.MatchID = MatchID;
	parms.bIsMyTurn = bIsMyTurn;

	ProcessEvent(fn, &parms);
}


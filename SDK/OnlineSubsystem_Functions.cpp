#include "pch.h"
#include "SDK.h"

void UTurnBasedMatchInterface::OnMatchReceivedTurn(struct FString Match, bool bDidBecomeActive){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn");

	FOnMatchReceivedTurn parms{};	
	parms.Match = Match;
	parms.bDidBecomeActive = bDidBecomeActive;

	ProcessEvent(fn, &parms);
}

void UTurnBasedMatchInterface::OnMatchEnded(struct FString Match){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded");

	FOnMatchEnded parms{};	
	parms.Match = Match;

	ProcessEvent(fn, &parms);
}


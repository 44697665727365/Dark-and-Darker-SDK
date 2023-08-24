#include "pch.h"
#include "SDK.h"

void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1");

	FSetSkipAssigningGamepadToPlayer1 parms{};	
	parms.bSkipFirstPlayer = bSkipFirstPlayer;

	ProcessEvent(fn, &parms);
}

bool UGameMapsSettings::GetSkipAssigningGamepadToPlayer1(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1");

	FGetSkipAssigningGamepadToPlayer1 parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UGameMapsSettings* UGameMapsSettings::GetGameMapsSettings(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.GetGameMapsSettings");

	FGetGameMapsSettings parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


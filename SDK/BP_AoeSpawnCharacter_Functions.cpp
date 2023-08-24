#include "pch.h"
#include "SDK.h"

void ABP_AoeSpawnCharacter_C::OnGameState(struct FGameStateData& InGameStateData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AoeSpawnCharacter.BP_AoeSpawnCharacter_C.OnGameState");

	FOnGameState parms{};	
	parms.InGameStateData = InGameStateData;

	ProcessEvent(fn, &parms);
}

void ABP_AoeSpawnCharacter_C::ExecuteUbergraph_BP_AoeSpawnCharacter(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_AoeSpawnCharacter.BP_AoeSpawnCharacter_C.ExecuteUbergraph_BP_AoeSpawnCharacter");

	FExecuteUbergraph_BP_AoeSpawnCharacter parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


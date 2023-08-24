#include "pch.h"
#include "SDK.h"

void ABP_DungeonDown_C::OnDungeonExitOverlapped(struct ADCPlayerCharacterBase* PlayerCharacter, bool& bResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DungeonDown.BP_DungeonDown_C.OnDungeonExitOverlapped");

	FOnDungeonExitOverlapped parms{};	
	parms.PlayerCharacter = PlayerCharacter;
	parms.bResult = bResult;

	ProcessEvent(fn, &parms);
}


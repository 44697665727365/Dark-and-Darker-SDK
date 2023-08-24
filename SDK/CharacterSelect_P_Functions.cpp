#include "pch.h"
#include "SDK.h"

void ACharacterSelect_P_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CharacterSelect_P.CharacterSelect_P_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ACharacterSelect_P_C::ExecuteUbergraph_CharacterSelect_P(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CharacterSelect_P.CharacterSelect_P_C.ExecuteUbergraph_CharacterSelect_P");

	FExecuteUbergraph_CharacterSelect_P parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


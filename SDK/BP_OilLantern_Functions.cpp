#include "pch.h"
#include "SDK.h"

void ABP_OilLantern_C::Turnoff1__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OilLantern.BP_OilLantern_C.Turnoff1__FinishedFunc");

	FTurnoff1__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_OilLantern_C::Turnoff1__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OilLantern.BP_OilLantern_C.Turnoff1__UpdateFunc");

	FTurnoff1__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_OilLantern_C::Turnon1__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OilLantern.BP_OilLantern_C.Turnon1__FinishedFunc");

	FTurnon1__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_OilLantern_C::Turnon1__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OilLantern.BP_OilLantern_C.Turnon1__UpdateFunc");

	FTurnon1__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_OilLantern_C::SpotLight_On__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OilLantern.BP_OilLantern_C.SpotLight_On__FinishedFunc");

	FSpotLight_On__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_OilLantern_C::SpotLight_On__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OilLantern.BP_OilLantern_C.SpotLight_On__UpdateFunc");

	FSpotLight_On__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_OilLantern_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OilLantern.BP_OilLantern_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_OilLantern_C::OnAttachedSheathSocket(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OilLantern.BP_OilLantern_C.OnAttachedSheathSocket");

	FOnAttachedSheathSocket parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_OilLantern_C::ExecuteUbergraph_BP_OilLantern(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OilLantern.BP_OilLantern_C.ExecuteUbergraph_BP_OilLantern");

	FExecuteUbergraph_BP_OilLantern parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


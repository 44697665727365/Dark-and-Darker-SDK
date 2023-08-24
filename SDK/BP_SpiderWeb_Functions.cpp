#include "pch.h"
#include "SDK.h"

void ABP_SpiderWeb_C::UpdateSpiderWebMaterial(struct UMaterialInstanceDynamic* InDynamicMaterialInstance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderWeb.BP_SpiderWeb_C.UpdateSpiderWebMaterial");

	FUpdateSpiderWebMaterial parms{};	
	parms.InDynamicMaterialInstance = InDynamicMaterialInstance;

	ProcessEvent(fn, &parms);
}

void ABP_SpiderWeb_C::ExchangeYZ(struct FVector In, struct FVector& Out){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderWeb.BP_SpiderWeb_C.ExchangeYZ");

	FExchangeYZ parms{};	
	parms.In = In;
	parms.Out = Out;

	ProcessEvent(fn, &parms);
}

void ABP_SpiderWeb_C::SetPointPosition(struct UMaterialInstanceDynamic*& Material Instance, struct FVector TopLeft, struct FVector TopRight, struct FVector BotLeft, struct FVector BotRight, double Influence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderWeb.BP_SpiderWeb_C.SetPointPosition");

	FSetPointPosition parms{};	
	parms.Material Instance = Material Instance;
	parms.TopLeft = TopLeft;
	parms.TopRight = TopRight;
	parms.BotLeft = BotLeft;
	parms.BotRight = BotRight;
	parms.Influence = Influence;

	ProcessEvent(fn, &parms);
}

void ABP_SpiderWeb_C::GetRecoveryTime(double& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderWeb.BP_SpiderWeb_C.GetRecoveryTime");

	FGetRecoveryTime parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_SpiderWeb_C::IsRecovery(bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderWeb.BP_SpiderWeb_C.IsRecovery");

	FIsRecovery parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_SpiderWeb_C::IsContactCountDestroy(bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderWeb.BP_SpiderWeb_C.IsContactCountDestroy");

	FIsContactCountDestroy parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_SpiderWeb_C::IsDisableDestroyContact(bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderWeb.BP_SpiderWeb_C.IsDisableDestroyContact");

	FIsDisableDestroyContact parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_SpiderWeb_C::GetDestroyCount(int32_t& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderWeb.BP_SpiderWeb_C.GetDestroyCount");

	FGetDestroyCount parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_SpiderWeb_C::UserConstructionScript(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderWeb.BP_SpiderWeb_C.UserConstructionScript");

	FUserConstructionScript parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SpiderWeb_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderWeb.BP_SpiderWeb_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SpiderWeb_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderWeb.BP_SpiderWeb_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_SpiderWeb_C::ExecuteUbergraph_BP_SpiderWeb(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SpiderWeb.BP_SpiderWeb_C.ExecuteUbergraph_BP_SpiderWeb");

	FExecuteUbergraph_BP_SpiderWeb parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


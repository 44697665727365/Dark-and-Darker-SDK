#include "pch.h"
#include "SDK.h"

void ABP_DrinkPotionActor_C::Set Height Parameter(double New Height, struct UMaterialInstanceDynamic* Material Instance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.Set Height Parameter");

	FSet Height Parameter parms{};	
	parms.New Height = New Height;
	parms.Material Instance = Material Instance;

	ProcessEvent(fn, &parms);
}

void ABP_DrinkPotionActor_C::OnRep_CurrentLiquidAmount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.OnRep_CurrentLiquidAmount");

	FOnRep_CurrentLiquidAmount parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DrinkPotionActor_C::Calculate Liquid Amount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.Calculate Liquid Amount");

	FCalculate Liquid Amount parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DrinkPotionActor_C::ReceiveTick(float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ReceiveTick");

	FReceiveTick parms{};	
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void ABP_DrinkPotionActor_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DrinkPotionActor_C::SetDrinkingDuration(double Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.SetDrinkingDuration");

	FSetDrinkingDuration parms{};	
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);
}

void ABP_DrinkPotionActor_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_DrinkPotionActor_C::ExecuteUbergraph_BP_DrinkPotionActor(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ExecuteUbergraph_BP_DrinkPotionActor");

	FExecuteUbergraph_BP_DrinkPotionActor parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


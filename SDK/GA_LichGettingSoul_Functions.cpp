#include "pch.h"
#include "SDK.h"

void UGA_LichGettingSoul_C::OnFinish_E5007C9E42916C8FCF424BAE68C22CB5(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichGettingSoul.GA_LichGettingSoul_C.OnFinish_E5007C9E42916C8FCF424BAE68C22CB5");

	FOnFinish_E5007C9E42916C8FCF424BAE68C22CB5 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_LichGettingSoul_C::OnSuccess_EA869A204A64C395D509E9B47D4CA2F2(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichGettingSoul.GA_LichGettingSoul_C.OnSuccess_EA869A204A64C395D509E9B47D4CA2F2");

	FOnSuccess_EA869A204A64C395D509E9B47D4CA2F2 parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_LichGettingSoul_C::OnFinish_D88957B147BE64E8579E43A01CBAC343(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichGettingSoul.GA_LichGettingSoul_C.OnFinish_D88957B147BE64E8579E43A01CBAC343");

	FOnFinish_D88957B147BE64E8579E43A01CBAC343 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_LichGettingSoul_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichGettingSoul.GA_LichGettingSoul_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_LichGettingSoul_C::ExecuteUbergraph_GA_LichGettingSoul(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichGettingSoul.GA_LichGettingSoul_C.ExecuteUbergraph_GA_LichGettingSoul");

	FExecuteUbergraph_GA_LichGettingSoul parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


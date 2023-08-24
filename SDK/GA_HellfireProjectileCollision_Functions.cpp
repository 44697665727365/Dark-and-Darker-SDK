#include "pch.h"
#include "SDK.h"

void UGA_HellfireProjectileCollision_C::OverlapEndTargetActor(struct AActor* InTargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.OverlapEndTargetActor");

	FOverlapEndTargetActor parms{};	
	parms.InTargetActor = InTargetActor;

	ProcessEvent(fn, &parms);
}

void UGA_HellfireProjectileCollision_C::OverlapBeginTargetActor(struct AActor* InTargetActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.OverlapBeginTargetActor");

	FOverlapBeginTargetActor parms{};	
	parms.InTargetActor = InTargetActor;

	ProcessEvent(fn, &parms);
}

void UGA_HellfireProjectileCollision_C::OnDistanceChange_E4D8B0924A37CACC18502CAABDE7F1E2(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.OnDistanceChange_E4D8B0924A37CACC18502CAABDE7F1E2");

	FOnDistanceChange_E4D8B0924A37CACC18502CAABDE7F1E2 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_HellfireProjectileCollision_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_HellfireProjectileCollision_C::OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.OnOverlapBegin");

	FOnOverlapBegin parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void UGA_HellfireProjectileCollision_C::OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.OnOverlapEnd");

	FOnOverlapEnd parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(fn, &parms);
}

void UGA_HellfireProjectileCollision_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_HellfireProjectileCollision_C::ExecuteUbergraph_GA_HellfireProjectileCollision(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HellfireProjectileCollision.GA_HellfireProjectileCollision_C.ExecuteUbergraph_GA_HellfireProjectileCollision");

	FExecuteUbergraph_GA_HellfireProjectileCollision parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


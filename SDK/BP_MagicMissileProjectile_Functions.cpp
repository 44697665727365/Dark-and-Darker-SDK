#include "pch.h"
#include "SDK.h"

void ABP_MagicMissileProjectile_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_MagicMissileProjectile.BP_MagicMissileProjectile_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_MagicMissileProjectile_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_MagicMissileProjectile.BP_MagicMissileProjectile_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_MagicMissileProjectile_C::BndEvt__BP_MagicMissileProjectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_MagicMissileProjectile.BP_MagicMissileProjectile_C.BndEvt__BP_MagicMissileProjectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	FBndEvt__BP_MagicMissileProjectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature parms{};	
	parms.OverlappedComponent = OverlappedComponent;
	parms.OtherActor = OtherActor;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.SweepResult = SweepResult;

	ProcessEvent(fn, &parms);
}

void ABP_MagicMissileProjectile_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_MagicMissileProjectile.BP_MagicMissileProjectile_C.ReceiveEndPlay");

	FReceiveEndPlay parms{};	
	parms.EndPlayReason = EndPlayReason;

	ProcessEvent(fn, &parms);
}

void ABP_MagicMissileProjectile_C::ExecuteUbergraph_BP_MagicMissileProjectile(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_MagicMissileProjectile.BP_MagicMissileProjectile_C.ExecuteUbergraph_BP_MagicMissileProjectile");

	FExecuteUbergraph_BP_MagicMissileProjectile parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


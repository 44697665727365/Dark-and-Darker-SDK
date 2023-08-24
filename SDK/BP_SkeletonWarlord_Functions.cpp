#include "pch.h"
#include "SDK.h"

void ABP_SkeletonWarlord_C::Set Lv Gameplay Effect(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Set Lv Gameplay Effect");

	FSet Lv Gameplay Effect parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Combo Reach Calculation(double& Return){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Combo Reach Calculation");

	FCombo Reach Calculation parms{};	
	parms.Return = Return;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Start Combat(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Start Combat");

	FStart Combat parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::End Combat(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.End Combat");

	FEnd Combat parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::OnApplied_B30537AB4260FD37F0444CBA03F1D53F(struct AActor* Source, struct FGameplayEffectSpecHandle SpecHandle, struct FActiveGameplayEffectHandle ActiveHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.OnApplied_B30537AB4260FD37F0444CBA03F1D53F");

	FOnApplied_B30537AB4260FD37F0444CBA03F1D53F parms{};	
	parms.Source = Source;
	parms.SpecHandle = SpecHandle;
	parms.ActiveHandle = ActiveHandle;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Spawn RoyalGuard_Event(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Spawn RoyalGuard_Event");

	FSpawn RoyalGuard_Event parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Call BackStep_Event(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Call BackStep_Event");

	FCall BackStep_Event parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Position Change_Event(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Position Change_Event");

	FPosition Change_Event parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Call Bombing_Event(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Call Bombing_Event");

	FCall Bombing_Event parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Position Change To Center_Event(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Position Change To Center_Event");

	FPosition Change To Center_Event parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Comeback Event Start(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Comeback Event Start");

	FComeback Event Start parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Combat Activated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Combat Activated");

	FCombat Activated parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Call ThrowingKnives_Event(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Call ThrowingKnives_Event");

	FCall ThrowingKnives_Event parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::ExecuteUbergraph_BP_SkeletonWarlord(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.ExecuteUbergraph_BP_SkeletonWarlord");

	FExecuteUbergraph_BP_SkeletonWarlord parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Call ThrowingKnives__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Call ThrowingKnives__DelegateSignature");

	FCall ThrowingKnives__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Position Change To Center__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Position Change To Center__DelegateSignature");

	FPosition Change To Center__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Call Bombing__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Call Bombing__DelegateSignature");

	FCall Bombing__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Position Change__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Position Change__DelegateSignature");

	FPosition Change__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Call BackStep__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Call BackStep__DelegateSignature");

	FCall BackStep__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_C::Spawn RoyalGuard__DelegateSignature(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Spawn RoyalGuard__DelegateSignature");

	FSpawn RoyalGuard__DelegateSignature parms{};	

	ProcessEvent(fn, &parms);
}


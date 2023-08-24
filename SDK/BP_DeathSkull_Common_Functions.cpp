#include "pch.h"
#include "SDK.h"

void ABP_DeathSkull_Common_C::SetAttackByCollisionOption(bool OnAttack){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.SetAttackByCollisionOption");

	FSetAttackByCollisionOption parms{};	
	parms.OnAttack = OnAttack;

	ProcessEvent(fn, &parms);
}

void ABP_DeathSkull_Common_C::CheckRemainDistanceByVelocity3D(struct FVector MoveDirection, double DeltaTime, double RemainDist, double& ResultDistance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.CheckRemainDistanceByVelocity3D");

	FCheckRemainDistanceByVelocity3D parms{};	
	parms.MoveDirection = MoveDirection;
	parms.DeltaTime = DeltaTime;
	parms.RemainDist = RemainDist;
	parms.ResultDistance = ResultDistance;

	ProcessEvent(fn, &parms);
}

void ABP_DeathSkull_Common_C::CheckRemainDistanceByVelocity2D(struct FVector MoveDirection, double DeltaTime, double RemainDist, double& ResultDistance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.CheckRemainDistanceByVelocity2D");

	FCheckRemainDistanceByVelocity2D parms{};	
	parms.MoveDirection = MoveDirection;
	parms.DeltaTime = DeltaTime;
	parms.RemainDist = RemainDist;
	parms.ResultDistance = ResultDistance;

	ProcessEvent(fn, &parms);
}

void ABP_DeathSkull_Common_C::OnRep_OnDead(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.OnRep_OnDead");

	FOnRep_OnDead parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DeathSkull_Common_C::UpdateGlowing(double DeltaTime, double MaxGlowingTime, double MinGlowingTime, double GlowingScale){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.UpdateGlowing");

	FUpdateGlowing parms{};	
	parms.DeltaTime = DeltaTime;
	parms.MaxGlowingTime = MaxGlowingTime;
	parms.MinGlowingTime = MinGlowingTime;
	parms.GlowingScale = GlowingScale;

	ProcessEvent(fn, &parms);
}

void ABP_DeathSkull_Common_C::OnRep_OnRedEyes(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.OnRep_OnRedEyes");

	FOnRep_OnRedEyes parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DeathSkull_Common_C::OnGlowingEyes(bool OnAttack){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.OnGlowingEyes");

	FOnGlowingEyes parms{};	
	parms.OnAttack = OnAttack;

	ProcessEvent(fn, &parms);
}

void ABP_DeathSkull_Common_C::Added_F10CF2AE44EF117381976A8D8A3D55AF(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.Added_F10CF2AE44EF117381976A8D8A3D55AF");

	FAdded_F10CF2AE44EF117381976A8D8A3D55AF parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DeathSkull_Common_C::ReceiveTick(float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.ReceiveTick");

	FReceiveTick parms{};	
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void ABP_DeathSkull_Common_C::OnBeforeDeath(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.OnBeforeDeath");

	FOnBeforeDeath parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DeathSkull_Common_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DeathSkull_Common_C::ExecuteUbergraph_BP_DeathSkull_Common(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.ExecuteUbergraph_BP_DeathSkull_Common");

	FExecuteUbergraph_BP_DeathSkull_Common parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}


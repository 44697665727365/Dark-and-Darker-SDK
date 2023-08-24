#include "pch.h"
#include "SDK.h"

void UChaosClothingInteractor::SetWind(struct FVector2D Drag, struct FVector2D Lift, float AirDensity, struct FVector WindVelocity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetWind");

	FSetWind parms{};	
	parms.Drag = Drag;
	parms.Lift = Lift;
	parms.AirDensity = AirDensity;
	parms.WindVelocity = WindVelocity;

	ProcessEvent(fn, &parms);
}

void UChaosClothingInteractor::SetVelocityScale(struct FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale");

	FSetVelocityScale parms{};	
	parms.LinearVelocityScale = LinearVelocityScale;
	parms.AngularVelocityScale = AngularVelocityScale;
	parms.FictitiousAngularScale = FictitiousAngularScale;

	ProcessEvent(fn, &parms);
}

void UChaosClothingInteractor::SetPressure(struct FVector2D Pressure){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetPressure");

	FSetPressure parms{};	
	parms.Pressure = Pressure;

	ProcessEvent(fn, &parms);
}

void UChaosClothingInteractor::SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear");

	FSetMaterialLinear parms{};	
	parms.EdgeStiffness = EdgeStiffness;
	parms.BendingStiffness = BendingStiffness;
	parms.AreaStiffness = AreaStiffness;

	ProcessEvent(fn, &parms);
}

void UChaosClothingInteractor::SetMaterial(struct FVector2D EdgeStiffness, struct FVector2D BendingStiffness, struct FVector2D AreaStiffness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetMaterial");

	FSetMaterial parms{};	
	parms.EdgeStiffness = EdgeStiffness;
	parms.BendingStiffness = BendingStiffness;
	parms.AreaStiffness = AreaStiffness;

	ProcessEvent(fn, &parms);
}

void UChaosClothingInteractor::SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear");

	FSetLongRangeAttachmentLinear parms{};	
	parms.TetherStiffness = TetherStiffness;
	parms.TetherScale = TetherScale;

	ProcessEvent(fn, &parms);
}

void UChaosClothingInteractor::SetLongRangeAttachment(struct FVector2D TetherStiffness, struct FVector2D TetherScale){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment");

	FSetLongRangeAttachment parms{};	
	parms.TetherStiffness = TetherStiffness;
	parms.TetherScale = TetherScale;

	ProcessEvent(fn, &parms);
}

void UChaosClothingInteractor::SetGravity(float GravityScale, bool bIsGravityOverridden, struct FVector GravityOverride){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetGravity");

	FSetGravity parms{};	
	parms.GravityScale = GravityScale;
	parms.bIsGravityOverridden = bIsGravityOverridden;
	parms.GravityOverride = GravityOverride;

	ProcessEvent(fn, &parms);
}

void UChaosClothingInteractor::SetDamping(float DampingCoefficient, float LocalDampingCoefficient){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetDamping");

	FSetDamping parms{};	
	parms.DampingCoefficient = DampingCoefficient;
	parms.LocalDampingCoefficient = LocalDampingCoefficient;

	ProcessEvent(fn, &parms);
}

void UChaosClothingInteractor::SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetCollision");

	FSetCollision parms{};	
	parms.CollisionThickness = CollisionThickness;
	parms.FrictionCoefficient = FrictionCoefficient;
	parms.bUseCCD = bUseCCD;
	parms.SelfCollisionThickness = SelfCollisionThickness;

	ProcessEvent(fn, &parms);
}

void UChaosClothingInteractor::SetBackstop(bool bEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetBackstop");

	FSetBackstop parms{};	
	parms.bEnabled = bEnabled;

	ProcessEvent(fn, &parms);
}

void UChaosClothingInteractor::SetAnimDriveLinear(float AnimDriveStiffness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear");

	FSetAnimDriveLinear parms{};	
	parms.AnimDriveStiffness = AnimDriveStiffness;

	ProcessEvent(fn, &parms);
}

void UChaosClothingInteractor::SetAnimDrive(struct FVector2D AnimDriveStiffness, struct FVector2D AnimDriveDamping){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive");

	FSetAnimDrive parms{};	
	parms.AnimDriveStiffness = AnimDriveStiffness;
	parms.AnimDriveDamping = AnimDriveDamping;

	ProcessEvent(fn, &parms);
}

void UChaosClothingInteractor::SetAerodynamics(float DragCoefficient, float LiftCoefficient, struct FVector WindVelocity){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics");

	FSetAerodynamics parms{};	
	parms.DragCoefficient = DragCoefficient;
	parms.LiftCoefficient = LiftCoefficient;
	parms.WindVelocity = WindVelocity;

	ProcessEvent(fn, &parms);
}

void UChaosClothingInteractor::ResetAndTeleport(bool bReset, bool bTeleport){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport");

	FResetAndTeleport parms{};	
	parms.bReset = bReset;
	parms.bTeleport = bTeleport;

	ProcessEvent(fn, &parms);
}


#include "pch.h"
#include "SDK.h"

void UIKRigComponent::SetIKRigGoalTransform(struct FName GoalName, struct FTransform Transform, float PositionAlpha, float RotationAlpha){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRigComponent.SetIKRigGoalTransform");

	FSetIKRigGoalTransform parms{};	
	parms.GoalName = GoalName;
	parms.Transform = Transform;
	parms.PositionAlpha = PositionAlpha;
	parms.RotationAlpha = RotationAlpha;

	ProcessEvent(fn, &parms);
}

void UIKRigComponent::SetIKRigGoalPositionAndRotation(struct FName GoalName, struct FVector Position, struct FQuat Rotation, float PositionAlpha, float RotationAlpha){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation");

	FSetIKRigGoalPositionAndRotation parms{};	
	parms.GoalName = GoalName;
	parms.Position = Position;
	parms.Rotation = Rotation;
	parms.PositionAlpha = PositionAlpha;
	parms.RotationAlpha = RotationAlpha;

	ProcessEvent(fn, &parms);
}

void UIKRigComponent::SetIKRigGoal(struct FIKRigGoal& Goal){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRigComponent.SetIKRigGoal");

	FSetIKRigGoal parms{};	
	parms.Goal = Goal;

	ProcessEvent(fn, &parms);
}

void UIKRigComponent::ClearAllGoals(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRigComponent.ClearAllGoals");

	FClearAllGoals parms{};	

	ProcessEvent(fn, &parms);
}

void UIKGoalCreatorInterface::AddIKGoals(struct TMap<struct FName, struct FIKRigGoal>& OutGoals){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKGoalCreatorInterface.AddIKGoals");

	FAddIKGoals parms{};	
	parms.OutGoals = OutGoals;

	ProcessEvent(fn, &parms);
}

void UIKRetargeter::SetRootSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetRootSettings& RootSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.SetRootSettingsInRetargetProfile");

	FSetRootSettingsInRetargetProfile parms{};	
	parms.RetargetProfile = RetargetProfile;
	parms.RootSettings = RootSettings;

	ProcessEvent(fn, &parms);
}

void UIKRetargeter::SetGlobalSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FRetargetGlobalSettings& GlobalSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile");

	FSetGlobalSettingsInRetargetProfile parms{};	
	parms.RetargetProfile = RetargetProfile;
	parms.GlobalSettings = GlobalSettings;

	ProcessEvent(fn, &parms);
}

void UIKRetargeter::SetChainSpeedPlantSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainSpeedPlantSettings& SpeedPlantSettings, struct FName TargetChainName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile");

	FSetChainSpeedPlantSettingsInRetargetProfile parms{};	
	parms.RetargetProfile = RetargetProfile;
	parms.SpeedPlantSettings = SpeedPlantSettings;
	parms.TargetChainName = TargetChainName;

	ProcessEvent(fn, &parms);
}

void UIKRetargeter::SetChainSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainSettings& ChainSettings, struct FName TargetChainName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.SetChainSettingsInRetargetProfile");

	FSetChainSettingsInRetargetProfile parms{};	
	parms.RetargetProfile = RetargetProfile;
	parms.ChainSettings = ChainSettings;
	parms.TargetChainName = TargetChainName;

	ProcessEvent(fn, &parms);
}

void UIKRetargeter::SetChainIKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainIKSettings& IKSettings, struct FName TargetChainName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile");

	FSetChainIKSettingsInRetargetProfile parms{};	
	parms.RetargetProfile = RetargetProfile;
	parms.IKSettings = IKSettings;
	parms.TargetChainName = TargetChainName;

	ProcessEvent(fn, &parms);
}

void UIKRetargeter::SetChainFKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainFKSettings& FKSettings, struct FName TargetChainName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile");

	FSetChainFKSettingsInRetargetProfile parms{};	
	parms.RetargetProfile = RetargetProfile;
	parms.FKSettings = FKSettings;
	parms.TargetChainName = TargetChainName;

	ProcessEvent(fn, &parms);
}

struct FTargetRootSettings UIKRetargeter::GetRootSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile");

	FGetRootSettingsFromRetargetProfile parms{};	
	parms.RetargetProfile = RetargetProfile;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UIKRetargeter::GetRootSettingsFromRetargetAsset(struct UIKRetargeter* RetargetAsset, struct FName OptionalProfileName, struct FTargetRootSettings& OutSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset");

	FGetRootSettingsFromRetargetAsset parms{};	
	parms.RetargetAsset = RetargetAsset;
	parms.OptionalProfileName = OptionalProfileName;
	parms.OutSettings = OutSettings;

	ProcessEvent(fn, &parms);
}

struct FRetargetGlobalSettings UIKRetargeter::GetGlobalSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile");

	FGetGlobalSettingsFromRetargetProfile parms{};	
	parms.RetargetProfile = RetargetProfile;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UIKRetargeter::GetGlobalSettingsFromRetargetAsset(struct UIKRetargeter* RetargetAsset, struct FName OptionalProfileName, struct FRetargetGlobalSettings& OutSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset");

	FGetGlobalSettingsFromRetargetAsset parms{};	
	parms.RetargetAsset = RetargetAsset;
	parms.OptionalProfileName = OptionalProfileName;
	parms.OutSettings = OutSettings;

	ProcessEvent(fn, &parms);
}

struct FTargetChainSettings UIKRetargeter::GetChainUsingGoalFromRetargetAsset(struct UIKRetargeter* RetargetAsset, struct FName IKGoalName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset");

	FGetChainUsingGoalFromRetargetAsset parms{};	
	parms.RetargetAsset = RetargetAsset;
	parms.IKGoalName = IKGoalName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTargetChainSettings UIKRetargeter::GetChainSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FName TargetChainName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile");

	FGetChainSettingsFromRetargetProfile parms{};	
	parms.RetargetProfile = RetargetProfile;
	parms.TargetChainName = TargetChainName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTargetChainSettings UIKRetargeter::GetChainSettingsFromRetargetAsset(struct UIKRetargeter* RetargetAsset, struct FName TargetChainName, struct FName OptionalProfileName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset");

	FGetChainSettingsFromRetargetAsset parms{};	
	parms.RetargetAsset = RetargetAsset;
	parms.TargetChainName = TargetChainName;
	parms.OptionalProfileName = OptionalProfileName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


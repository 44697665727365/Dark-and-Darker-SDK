#include "pch.h"
#include "SDK.h"

void URigHierarchy::UnsetCurveValueByIndex(int32_t InElementIndex, bool bSetupUndo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.UnsetCurveValueByIndex");

	FUnsetCurveValueByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.bSetupUndo = bSetupUndo;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::UnsetCurveValue(struct FRigElementKey InKey, bool bSetupUndo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.UnsetCurveValue");

	FUnsetCurveValue parms{};	
	parms.InKey = InKey;
	parms.bSetupUndo = bSetupUndo;

	ProcessEvent(fn, &parms);
}

bool URigHierarchy::SwitchToWorldSpace(struct FRigElementKey InChild, bool bInitial, bool bAffectChildren){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SwitchToWorldSpace");

	FSwitchToWorldSpace parms{};	
	parms.InChild = InChild;
	parms.bInitial = bInitial;
	parms.bAffectChildren = bAffectChildren;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SwitchToParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bInitial, bool bAffectChildren){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SwitchToParent");

	FSwitchToParent parms{};	
	parms.InChild = InChild;
	parms.InParent = InParent;
	parms.bInitial = bInitial;
	parms.bAffectChildren = bAffectChildren;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SwitchToDefaultParent(struct FRigElementKey InChild, bool bInitial, bool bAffectChildren){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SwitchToDefaultParent");

	FSwitchToDefaultParent parms{};	
	parms.InChild = InChild;
	parms.bInitial = bInitial;
	parms.bAffectChildren = bAffectChildren;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchy::SortKeys(struct TArray<struct FRigElementKey>& InKeys){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SortKeys");

	FSortKeys parms{};	
	parms.InKeys = InKeys;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetVectorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FVector InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetVectorMetadata");

	FSetVectorMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetVectorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FVector> InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetVectorArrayMetadata");

	FSetVectorArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetTransformMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FTransform InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetTransformMetadata");

	FSetTransformMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetTransformArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FTransform> InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetTransformArrayMetadata");

	FSetTransformArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetTag(struct FRigElementKey InItem, struct FName InTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetTag");

	FSetTag parms{};	
	parms.InItem = InItem;
	parms.InTag = InTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetRotatorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRotator InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetRotatorMetadata");

	FSetRotatorMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetRotatorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FRotator> InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetRotatorArrayMetadata");

	FSetRotatorArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetRigElementKeyMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRigElementKey InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetRigElementKeyMetadata");

	FSetRigElementKeyMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetRigElementKeyArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FRigElementKey> InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata");

	FSetRigElementKeyArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetQuatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FQuat InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetQuatMetadata");

	FSetQuatMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetQuatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FQuat> InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetQuatArrayMetadata");

	FSetQuatArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void URigHierarchy::SetPose_ForBlueprint(struct FRigPose InPose){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetPose_ForBlueprint");

	FSetPose_ForBlueprint parms{};	
	parms.InPose = InPose;

	ProcessEvent(fn, &parms);
}

bool URigHierarchy::SetParentWeightArray(struct FRigElementKey InChild, struct TArray<struct FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetParentWeightArray");

	FSetParentWeightArray parms{};	
	parms.InChild = InChild;
	parms.InWeights = InWeights;
	parms.bInitial = bInitial;
	parms.bAffectChildren = bAffectChildren;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetParentWeight(struct FRigElementKey InChild, struct FRigElementKey InParent, struct FRigElementWeight InWeight, bool bInitial, bool bAffectChildren){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetParentWeight");

	FSetParentWeight parms{};	
	parms.InChild = InChild;
	parms.InParent = InParent;
	parms.InWeight = InWeight;
	parms.bInitial = bInitial;
	parms.bAffectChildren = bAffectChildren;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetNameMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FName InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetNameMetadata");

	FSetNameMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetNameArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FName> InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetNameArrayMetadata");

	FSetNameArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void URigHierarchy::SetLocalTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetLocalTransformByIndex");

	FSetLocalTransformByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.InTransform = InTransform;
	parms.bInitial = bInitial;
	parms.bAffectChildren = bAffectChildren;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommands = bPrintPythonCommands;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::SetLocalTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetLocalTransform");

	FSetLocalTransform parms{};	
	parms.InKey = InKey;
	parms.InTransform = InTransform;
	parms.bInitial = bInitial;
	parms.bAffectChildren = bAffectChildren;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommands = bPrintPythonCommands;

	ProcessEvent(fn, &parms);
}

bool URigHierarchy::SetLinearColorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FLinearColor InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetLinearColorMetadata");

	FSetLinearColorMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetLinearColorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FLinearColor> InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetLinearColorArrayMetadata");

	FSetLinearColorArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetInt32Metadata(struct FRigElementKey InItem, struct FName InMetadataName, int32_t InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetInt32Metadata");

	FSetInt32Metadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetInt32ArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<int32_t> InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetInt32ArrayMetadata");

	FSetInt32ArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void URigHierarchy::SetGlobalTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetGlobalTransformByIndex");

	FSetGlobalTransformByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.InTransform = InTransform;
	parms.bInitial = bInitial;
	parms.bAffectChildren = bAffectChildren;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::SetGlobalTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetGlobalTransform");

	FSetGlobalTransform parms{};	
	parms.InKey = InKey;
	parms.InTransform = InTransform;
	parms.bInitial = bInitial;
	parms.bAffectChildren = bAffectChildren;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);
}

bool URigHierarchy::SetFloatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetFloatMetadata");

	FSetFloatMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetFloatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<float> InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetFloatArrayMetadata");

	FSetFloatArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void URigHierarchy::SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetCurveValueByIndex");

	FSetCurveValueByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.InValue = InValue;
	parms.bSetupUndo = bSetupUndo;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::SetCurveValue(struct FRigElementKey InKey, float InValue, bool bSetupUndo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetCurveValue");

	FSetCurveValue parms{};	
	parms.InKey = InKey;
	parms.InValue = InValue;
	parms.bSetupUndo = bSetupUndo;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlVisibilityByIndex");

	FSetControlVisibilityByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.bVisibility = bVisibility;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::SetControlVisibility(struct FRigElementKey InKey, bool bVisibility){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlVisibility");

	FSetControlVisibility parms{};	
	parms.InKey = InKey;
	parms.bVisibility = bVisibility;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::SetControlValueByIndex(int32_t InElementIndex, struct FRigControlValue InValue, uint8_t InValueType, bool bSetupUndo, bool bPrintPythonCommands){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlValueByIndex");

	FSetControlValueByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.InValue = InValue;
	parms.InValueType = InValueType;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommands = bPrintPythonCommands;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::SetControlValue(struct FRigElementKey InKey, struct FRigControlValue InValue, uint8_t InValueType, bool bSetupUndo, bool bPrintPythonCommands){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlValue");

	FSetControlValue parms{};	
	parms.InKey = InKey;
	parms.InValue = InValue;
	parms.InValueType = InValueType;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommands = bPrintPythonCommands;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::SetControlShapeTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bSetupUndo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex");

	FSetControlShapeTransformByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.InTransform = InTransform;
	parms.bInitial = bInitial;
	parms.bSetupUndo = bSetupUndo;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::SetControlShapeTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bSetupUndo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlShapeTransform");

	FSetControlShapeTransform parms{};	
	parms.InKey = InKey;
	parms.InTransform = InTransform;
	parms.bInitial = bInitial;
	parms.bSetupUndo = bSetupUndo;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::SetControlSettingsByIndex(int32_t InElementIndex, struct FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlSettingsByIndex");

	FSetControlSettingsByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.InSettings = InSettings;
	parms.bSetupUndo = bSetupUndo;
	parms.bForce = bForce;
	parms.bPrintPythonCommands = bPrintPythonCommands;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::SetControlSettings(struct FRigElementKey InKey, struct FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlSettings");

	FSetControlSettings parms{};	
	parms.InKey = InKey;
	parms.InSettings = InSettings;
	parms.bSetupUndo = bSetupUndo;
	parms.bForce = bForce;
	parms.bPrintPythonCommands = bPrintPythonCommands;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::SetControlPreferredRotatorByIndex(int32_t InElementIndex, struct FRotator& InValue, bool bInitial, bool bFixEulerFlips){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex");

	FSetControlPreferredRotatorByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.InValue = InValue;
	parms.bInitial = bInitial;
	parms.bFixEulerFlips = bFixEulerFlips;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::SetControlPreferredRotator(struct FRigElementKey InKey, struct FRotator& InValue, bool bInitial, bool bFixEulerFlips){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlPreferredRotator");

	FSetControlPreferredRotator parms{};	
	parms.InKey = InKey;
	parms.InValue = InValue;
	parms.bInitial = bInitial;
	parms.bFixEulerFlips = bFixEulerFlips;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::SetControlOffsetTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex");

	FSetControlOffsetTransformByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.InTransform = InTransform;
	parms.bInitial = bInitial;
	parms.bAffectChildren = bAffectChildren;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommands = bPrintPythonCommands;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::SetControlOffsetTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlOffsetTransform");

	FSetControlOffsetTransform parms{};	
	parms.InKey = InKey;
	parms.InTransform = InTransform;
	parms.bInitial = bInitial;
	parms.bAffectChildren = bAffectChildren;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommands = bPrintPythonCommands;

	ProcessEvent(fn, &parms);
}

bool URigHierarchy::SetBoolMetadata(struct FRigElementKey InItem, struct FName InMetadataName, bool InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetBoolMetadata");

	FSetBoolMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::SetBoolArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<bool> InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetBoolArrayMetadata");

	FSetBoolArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void URigHierarchy::SendAutoKeyEvent(struct FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SendAutoKeyEvent");

	FSendAutoKeyEvent parms{};	
	parms.InElement = InElement;
	parms.InOffsetInSeconds = InOffsetInSeconds;
	parms.bAsynchronous = bAsynchronous;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::ResetToDefault(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.ResetToDefault");

	FResetToDefault parms{};	

	ProcessEvent(fn, &parms);
}

void URigHierarchy::ResetPoseToInitial(uint8_t InTypeFilter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.ResetPoseToInitial");

	FResetPoseToInitial parms{};	
	parms.InTypeFilter = InTypeFilter;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::ResetCurveValues(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.ResetCurveValues");

	FResetCurveValues parms{};	

	ProcessEvent(fn, &parms);
}

void URigHierarchy::Reset(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.Reset");

	FReset parms{};	

	ProcessEvent(fn, &parms);
}

bool URigHierarchy::RemoveMetadata(struct FRigElementKey InItem, struct FName InMetadataName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.RemoveMetadata");

	FRemoveMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::RemoveAllMetadata(struct FRigElementKey InItem){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.RemoveAllMetadata");

	FRemoveAllMetadata parms{};	
	parms.InItem = InItem;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t URigHierarchy::Num(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.Num");

	FNum parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromVector2D(struct FVector2D InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromVector2D");

	FMakeControlValueFromVector2D parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromVector(struct FVector InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromVector");

	FMakeControlValueFromVector parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromTransformNoScale(struct FTransformNoScale InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale");

	FMakeControlValueFromTransformNoScale parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromTransform(struct FTransform InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromTransform");

	FMakeControlValueFromTransform parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromRotator(struct FRotator InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromRotator");

	FMakeControlValueFromRotator parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromInt(int32_t InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromInt");

	FMakeControlValueFromInt parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromFloat(float InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromFloat");

	FMakeControlValueFromFloat parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromEulerTransform(struct FEulerTransform InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform");

	FMakeControlValueFromEulerTransform parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromBool(bool InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromBool");

	FMakeControlValueFromBool parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::IsValidIndex(int32_t InElementIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsValidIndex");

	FIsValidIndex parms{};	
	parms.InElementIndex = InElementIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::IsSelectedByIndex(int32_t InIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsSelectedByIndex");

	FIsSelectedByIndex parms{};	
	parms.InIndex = InIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::IsSelected(struct FRigElementKey InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsSelected");

	FIsSelected parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::IsProcedural(struct FRigElementKey& InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsProcedural");

	FIsProcedural parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::IsParentedTo(struct FRigElementKey InChild, struct FRigElementKey InParent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsParentedTo");

	FIsParentedTo parms{};	
	parms.InChild = InChild;
	parms.InParent = InParent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::IsCurveValueSetByIndex(int32_t InElementIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsCurveValueSetByIndex");

	FIsCurveValueSetByIndex parms{};	
	parms.InElementIndex = InElementIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::IsCurveValueSet(struct FRigElementKey InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsCurveValueSet");

	FIsCurveValueSet parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::IsControllerAvailable(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsControllerAvailable");

	FIsControllerAvailable parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::HasTag(struct FRigElementKey InItem, struct FName InTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.HasTag");

	FHasTag parms{};	
	parms.InItem = InItem;
	parms.InTag = InTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector URigHierarchy::GetVectorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FVector DefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetVectorMetadata");

	FGetVectorMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.DefaultValue = DefaultValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector URigHierarchy::GetVectorFromControlValue(struct FRigControlValue InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetVectorFromControlValue");

	FGetVectorFromControlValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FVector> URigHierarchy::GetVectorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetVectorArrayMetadata");

	FGetVectorArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D URigHierarchy::GetVector2DFromControlValue(struct FRigControlValue InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetVector2DFromControlValue");

	FGetVector2DFromControlValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransformNoScale URigHierarchy::GetTransformNoScaleFromControlValue(struct FRigControlValue InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue");

	FGetTransformNoScaleFromControlValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform URigHierarchy::GetTransformMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FTransform DefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetTransformMetadata");

	FGetTransformMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.DefaultValue = DefaultValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform URigHierarchy::GetTransformFromControlValue(struct FRigControlValue InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetTransformFromControlValue");

	FGetTransformFromControlValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FTransform> URigHierarchy::GetTransformArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetTransformArrayMetadata");

	FGetTransformArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> URigHierarchy::GetTags(struct FRigElementKey InItem){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetTags");

	FGetTags parms{};	
	parms.InItem = InItem;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchy::GetSelectedKeys(uint8_t InTypeFilter){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetSelectedKeys");

	FGetSelectedKeys parms{};	
	parms.InTypeFilter = InTypeFilter;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRotator URigHierarchy::GetRotatorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRotator DefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetRotatorMetadata");

	FGetRotatorMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.DefaultValue = DefaultValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRotator URigHierarchy::GetRotatorFromControlValue(struct FRigControlValue InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetRotatorFromControlValue");

	FGetRotatorFromControlValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRotator> URigHierarchy::GetRotatorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetRotatorArrayMetadata");

	FGetRotatorArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchy::GetRigidBodyKeys(bool bTraverse){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetRigidBodyKeys");

	FGetRigidBodyKeys parms{};	
	parms.bTraverse = bTraverse;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigElementKey URigHierarchy::GetRigElementKeyMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRigElementKey DefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetRigElementKeyMetadata");

	FGetRigElementKeyMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.DefaultValue = DefaultValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchy::GetRigElementKeyArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata");

	FGetRigElementKeyArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchy::GetReferenceKeys(bool bTraverse){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetReferenceKeys");

	FGetReferenceKeys parms{};	
	parms.bTraverse = bTraverse;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FQuat URigHierarchy::GetQuatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FQuat DefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetQuatMetadata");

	FGetQuatMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.DefaultValue = DefaultValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FQuat> URigHierarchy::GetQuatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetQuatArrayMetadata");

	FGetQuatArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigElementKey URigHierarchy::GetPreviousParent(struct FRigElementKey& InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetPreviousParent");

	FGetPreviousParent parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName URigHierarchy::GetPreviousName(struct FRigElementKey& InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetPreviousName");

	FGetPreviousName parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigPose URigHierarchy::GetPose(bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetPose");

	FGetPose parms{};	
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementWeight> URigHierarchy::GetParentWeightArray(struct FRigElementKey InChild, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetParentWeightArray");

	FGetParentWeightArray parms{};	
	parms.InChild = InChild;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigElementWeight URigHierarchy::GetParentWeight(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetParentWeight");

	FGetParentWeight parms{};	
	parms.InChild = InChild;
	parms.InParent = InParent;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform URigHierarchy::GetParentTransformByIndex(int32_t InElementIndex, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetParentTransformByIndex");

	FGetParentTransformByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform URigHierarchy::GetParentTransform(struct FRigElementKey InKey, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetParentTransform");

	FGetParentTransform parms{};	
	parms.InKey = InKey;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchy::GetParents(struct FRigElementKey InKey, bool bRecursive){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetParents");

	FGetParents parms{};	
	parms.InKey = InKey;
	parms.bRecursive = bRecursive;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t URigHierarchy::GetNumberOfParents(struct FRigElementKey InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetNumberOfParents");

	FGetNumberOfParents parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchy::GetNullKeys(bool bTraverse){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetNullKeys");

	FGetNullKeys parms{};	
	parms.bTraverse = bTraverse;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName URigHierarchy::GetNameMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FName DefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetNameMetadata");

	FGetNameMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.DefaultValue = DefaultValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> URigHierarchy::GetNameArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetNameArrayMetadata");

	FGetNameArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t URigHierarchy::GetMetadataType(struct FRigElementKey InItem, struct FName InMetadataName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetMetadataType");

	FGetMetadataType parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> URigHierarchy::GetMetadataNames(struct FRigElementKey InItem){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetMetadataNames");

	FGetMetadataNames parms{};	
	parms.InItem = InItem;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform URigHierarchy::GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetLocalTransformByIndex");

	FGetLocalTransformByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform URigHierarchy::GetLocalTransform(struct FRigElementKey InKey, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetLocalTransform");

	FGetLocalTransform parms{};	
	parms.InKey = InKey;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform URigHierarchy::GetLocalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex");

	FGetLocalControlShapeTransformByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform URigHierarchy::GetLocalControlShapeTransform(struct FRigElementKey InKey, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetLocalControlShapeTransform");

	FGetLocalControlShapeTransform parms{};	
	parms.InKey = InKey;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FLinearColor URigHierarchy::GetLinearColorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FLinearColor DefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetLinearColorMetadata");

	FGetLinearColorMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.DefaultValue = DefaultValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FLinearColor> URigHierarchy::GetLinearColorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetLinearColorArrayMetadata");

	FGetLinearColorArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchy::GetKeys(struct TArray<int32_t> InElementIndices){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetKeys");

	FGetKeys parms{};	
	parms.InElementIndices = InElementIndices;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigElementKey URigHierarchy::GetKey(int32_t InElementIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetKey");

	FGetKey parms{};	
	parms.InElementIndex = InElementIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t URigHierarchy::GetIntFromControlValue(struct FRigControlValue InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetIntFromControlValue");

	FGetIntFromControlValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t URigHierarchy::GetInt32Metadata(struct FRigElementKey InItem, struct FName InMetadataName, int32_t DefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetInt32Metadata");

	FGetInt32Metadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.DefaultValue = DefaultValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<int32_t> URigHierarchy::GetInt32ArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetInt32ArrayMetadata");

	FGetInt32ArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t URigHierarchy::GetIndex_ForBlueprint(struct FRigElementKey InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetIndex_ForBlueprint");

	FGetIndex_ForBlueprint parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform URigHierarchy::GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalTransformByIndex");

	FGetGlobalTransformByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform URigHierarchy::GetGlobalTransform(struct FRigElementKey InKey, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalTransform");

	FGetGlobalTransform parms{};	
	parms.InKey = InKey;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform URigHierarchy::GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex");

	FGetGlobalControlShapeTransformByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform URigHierarchy::GetGlobalControlShapeTransform(struct FRigElementKey InKey, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform");

	FGetGlobalControlShapeTransform parms{};	
	parms.InKey = InKey;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform URigHierarchy::GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex");

	FGetGlobalControlOffsetTransformByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform URigHierarchy::GetGlobalControlOffsetTransform(struct FRigElementKey InKey, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform");

	FGetGlobalControlOffsetTransform parms{};	
	parms.InKey = InKey;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float URigHierarchy::GetFloatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, float DefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetFloatMetadata");

	FGetFloatMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.DefaultValue = DefaultValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float URigHierarchy::GetFloatFromControlValue(struct FRigControlValue InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetFloatFromControlValue");

	FGetFloatFromControlValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<float> URigHierarchy::GetFloatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetFloatArrayMetadata");

	FGetFloatArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigElementKey URigHierarchy::GetFirstParent(struct FRigElementKey InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetFirstParent");

	FGetFirstParent parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FEulerTransform URigHierarchy::GetEulerTransformFromControlValue(struct FRigControlValue InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue");

	FGetEulerTransformFromControlValue parms{};	
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigElementKey URigHierarchy::GetDefaultParent(struct FRigElementKey InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetDefaultParent");

	FGetDefaultParent parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float URigHierarchy::GetCurveValueByIndex(int32_t InElementIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetCurveValueByIndex");

	FGetCurveValueByIndex parms{};	
	parms.InElementIndex = InElementIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float URigHierarchy::GetCurveValue(struct FRigElementKey InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetCurveValue");

	FGetCurveValue parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchy::GetCurveKeys(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetCurveKeys");

	FGetCurveKeys parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigControlValue URigHierarchy::GetControlValueByIndex(int32_t InElementIndex, uint8_t InValueType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetControlValueByIndex");

	FGetControlValueByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.InValueType = InValueType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigControlValue URigHierarchy::GetControlValue(struct FRigElementKey InKey, uint8_t InValueType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetControlValue");

	FGetControlValue parms{};	
	parms.InKey = InKey;
	parms.InValueType = InValueType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRotator URigHierarchy::GetControlPreferredRotatorByIndex(int32_t InElementIndex, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex");

	FGetControlPreferredRotatorByIndex parms{};	
	parms.InElementIndex = InElementIndex;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRotator URigHierarchy::GetControlPreferredRotator(struct FRigElementKey InKey, bool bInitial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetControlPreferredRotator");

	FGetControlPreferredRotator parms{};	
	parms.InKey = InKey;
	parms.bInitial = bInitial;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct URigHierarchyController* URigHierarchy::GetController(bool bCreateIfNeeded){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetController");

	FGetController parms{};	
	parms.bCreateIfNeeded = bCreateIfNeeded;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchy::GetControlKeys(bool bTraverse){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetControlKeys");

	FGetControlKeys parms{};	
	parms.bTraverse = bTraverse;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchy::GetChildren(struct FRigElementKey InKey, bool bRecursive){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetChildren");

	FGetChildren parms{};	
	parms.InKey = InKey;
	parms.bRecursive = bRecursive;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchy::GetBoolMetadata(struct FRigElementKey InItem, struct FName InMetadataName, bool DefaultValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetBoolMetadata");

	FGetBoolMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;
	parms.DefaultValue = DefaultValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<bool> URigHierarchy::GetBoolArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetBoolArrayMetadata");

	FGetBoolArrayMetadata parms{};	
	parms.InItem = InItem;
	parms.InMetadataName = InMetadataName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchy::GetBoneKeys(bool bTraverse){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetBoneKeys");

	FGetBoneKeys parms{};	
	parms.bTraverse = bTraverse;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchy::GetAllKeys_ForBlueprint(bool bTraverse){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint");

	FGetAllKeys_ForBlueprint parms{};	
	parms.bTraverse = bTraverse;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigNullElement URigHierarchy::FindNull_ForBlueprintOnly(struct FRigElementKey& InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly");

	FFindNull_ForBlueprintOnly parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigControlElement URigHierarchy::FindControl_ForBlueprintOnly(struct FRigElementKey& InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly");

	FFindControl_ForBlueprintOnly parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigBoneElement URigHierarchy::FindBone_ForBlueprintOnly(struct FRigElementKey& InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly");

	FFindBone_ForBlueprintOnly parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void URigHierarchy::CopyPose(struct URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.CopyPose");

	FCopyPose parms{};	
	parms.InHierarchy = InHierarchy;
	parms.bCurrent = bCurrent;
	parms.bInitial = bInitial;
	parms.bWeights = bWeights;
	parms.bMatchPoseInGlobalIfNeeded = bMatchPoseInGlobalIfNeeded;

	ProcessEvent(fn, &parms);
}

void URigHierarchy::CopyHierarchy(struct URigHierarchy* InHierarchy){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.CopyHierarchy");

	FCopyHierarchy parms{};	
	parms.InHierarchy = InHierarchy;

	ProcessEvent(fn, &parms);
}

bool URigHierarchy::Contains_ForBlueprint(struct FRigElementKey InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.Contains_ForBlueprint");

	FContains_ForBlueprint parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AControlRigShapeActor::SetSelected(bool bInSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.SetSelected");

	FSetSelected parms{};	
	parms.bInSelected = bInSelected;

	ProcessEvent(fn, &parms);
}

void AControlRigShapeActor::SetSelectable(bool bInSelectable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.SetSelectable");

	FSetSelectable parms{};	
	parms.bInSelectable = bInSelectable;

	ProcessEvent(fn, &parms);
}

void AControlRigShapeActor::SetHovered(bool bInHovered){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.SetHovered");

	FSetHovered parms{};	
	parms.bInHovered = bInHovered;

	ProcessEvent(fn, &parms);
}

void AControlRigShapeActor::SetGlobalTransform(struct FTransform& InTransform){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.SetGlobalTransform");

	FSetGlobalTransform parms{};	
	parms.InTransform = InTransform;

	ProcessEvent(fn, &parms);
}

void AControlRigShapeActor::SetEnabled(bool bInEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.SetEnabled");

	FSetEnabled parms{};	
	parms.bInEnabled = bInEnabled;

	ProcessEvent(fn, &parms);
}

void AControlRigShapeActor::OnTransformChanged(struct FTransform& NewTransform){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.OnTransformChanged");

	FOnTransformChanged parms{};	
	parms.NewTransform = NewTransform;

	ProcessEvent(fn, &parms);
}

void AControlRigShapeActor::OnSelectionChanged(bool bIsSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.OnSelectionChanged");

	FOnSelectionChanged parms{};	
	parms.bIsSelected = bIsSelected;

	ProcessEvent(fn, &parms);
}

void AControlRigShapeActor::OnManipulatingChanged(bool bIsManipulating){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.OnManipulatingChanged");

	FOnManipulatingChanged parms{};	
	parms.bIsManipulating = bIsManipulating;

	ProcessEvent(fn, &parms);
}

void AControlRigShapeActor::OnHoveredChanged(bool bIsSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.OnHoveredChanged");

	FOnHoveredChanged parms{};	
	parms.bIsSelected = bIsSelected;

	ProcessEvent(fn, &parms);
}

void AControlRigShapeActor::OnEnabledChanged(bool bIsEnabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.OnEnabledChanged");

	FOnEnabledChanged parms{};	
	parms.bIsEnabled = bIsEnabled;

	ProcessEvent(fn, &parms);
}

bool AControlRigShapeActor::IsSelectedInEditor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.IsSelectedInEditor");

	FIsSelectedInEditor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool AControlRigShapeActor::IsHovered(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.IsHovered");

	FIsHovered parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool AControlRigShapeActor::IsEnabled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.IsEnabled");

	FIsEnabled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform AControlRigShapeActor::GetGlobalTransform(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.GetGlobalTransform");

	FGetGlobalTransform parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UControlRig::SupportsEvent(struct FName& InEventName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SupportsEvent");

	FSupportsEvent parms{};	
	parms.InEventName = InEventName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UControlRig::SetVariableFromString(struct FName& InVariableName, struct FString InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetVariableFromString");

	FSetVariableFromString parms{};	
	parms.InVariableName = InVariableName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UControlRig::SetInteractionRigClass(UControlRig* InInteractionRigClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetInteractionRigClass");

	FSetInteractionRigClass parms{};	
	parms.InInteractionRigClass = InInteractionRigClass;

	ProcessEvent(fn, &parms);
}

void UControlRig::SetInteractionRig(struct UControlRig* InInteractionRig){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetInteractionRig");

	FSetInteractionRig parms{};	
	parms.InInteractionRig = InInteractionRig;

	ProcessEvent(fn, &parms);
}

void UControlRig::SetFramesPerSecond(float InFramesPerSecond){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetFramesPerSecond");

	FSetFramesPerSecond parms{};	
	parms.InFramesPerSecond = InFramesPerSecond;

	ProcessEvent(fn, &parms);
}

void UControlRig::SetDeltaTime(float InDeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetDeltaTime");

	FSetDeltaTime parms{};	
	parms.InDeltaTime = InDeltaTime;

	ProcessEvent(fn, &parms);
}

void UControlRig::SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetAbsoluteTime");

	FSetAbsoluteTime parms{};	
	parms.InAbsoluteTime = InAbsoluteTime;
	parms.InSetDeltaTimeZero = InSetDeltaTimeZero;

	ProcessEvent(fn, &parms);
}

void UControlRig::SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetAbsoluteAndDeltaTime");

	FSetAbsoluteAndDeltaTime parms{};	
	parms.InAbsoluteTime = InAbsoluteTime;
	parms.InDeltaTime = InDeltaTime;

	ProcessEvent(fn, &parms);
}

void UControlRig::SelectControl(struct FName& InControlName, bool bSelect){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SelectControl");

	FSelectControl parms{};	
	parms.InControlName = InControlName;
	parms.bSelect = bSelect;

	ProcessEvent(fn, &parms);
}

void UControlRig::RequestInit(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.RequestInit");

	FRequestInit parms{};	

	ProcessEvent(fn, &parms);
}

void UControlRig::RequestConstruction(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.RequestConstruction");

	FRequestConstruction parms{};	

	ProcessEvent(fn, &parms);
}

void UControlRig::OnControlSelectedBP__DelegateSignature(struct UControlRig* Rig, struct FRigControlElement& Control, bool bSelected){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("SparseDelegateFunction ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature");

	FOnControlSelectedBP__DelegateSignature parms{};	
	parms.Rig = Rig;
	parms.Control = Control;
	parms.bSelected = bSelected;

	ProcessEvent(fn, &parms);
}

bool UControlRig::IsControlSelected(struct FName& InControlName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.IsControlSelected");

	FIsControlSelected parms{};	
	parms.InControlName = InControlName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct URigVM* UControlRig::GetVM(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetVM");

	FGetVM parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UControlRig::GetVariableType(struct FName& InVariableName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetVariableType");

	FGetVariableType parms{};	
	parms.InVariableName = InVariableName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UControlRig::GetVariableAsString(struct FName& InVariableName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetVariableAsString");

	FGetVariableAsString parms{};	
	parms.InVariableName = InVariableName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> UControlRig::GetSupportedEvents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetSupportedEvents");

	FGetSupportedEvents parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> UControlRig::GetScriptAccessibleVariables(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetScriptAccessibleVariables");

	FGetScriptAccessibleVariables parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

UControlRig* UControlRig::GetInteractionRigClass(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetInteractionRigClass");

	FGetInteractionRigClass parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UControlRig* UControlRig::GetInteractionRig(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetInteractionRig");

	FGetInteractionRig parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* UControlRig::GetHostingActor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetHostingActor");

	FGetHostingActor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct URigHierarchy* UControlRig::GetHierarchy(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetHierarchy");

	FGetHierarchy parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> UControlRig::GetEvents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetEvents");

	FGetEvents parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UControlRig::GetCurrentFramesPerSecond(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetCurrentFramesPerSecond");

	FGetCurrentFramesPerSecond parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UControlRig::GetAbsoluteTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetAbsoluteTime");

	FGetAbsoluteTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UControlRig*> UControlRig::FindControlRigs(struct UObject* Outer, UControlRig* OptionalClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.FindControlRigs");

	FFindControlRigs parms{};	
	parms.Outer = Outer;
	parms.OptionalClass = OptionalClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UControlRig::ExecuteEvent(struct FName& InEventName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.ExecuteEvent");

	FExecuteEvent parms{};	
	parms.InEventName = InEventName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UControlRig::Execute(uint8_t State, struct FName& InEventName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.Execute");

	FExecute parms{};	
	parms.State = State;
	parms.InEventName = InEventName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> UControlRig::CurrentControlSelection(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.CurrentControlSelection");

	FCurrentControlSelection parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UTransformableControlHandle* UControlRig::CreateTransformableControlHandle(struct UObject* Outer, struct FName& ControlName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.CreateTransformableControlHandle");

	FCreateTransformableControlHandle parms{};	
	parms.Outer = Outer;
	parms.ControlName = ControlName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UControlRig::ContainsEvent(struct FName& InEventName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.ContainsEvent");

	FContainsEvent parms{};	
	parms.InEventName = InEventName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UControlRig::ClearControlSelection(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.ClearControlSelection");

	FClearControlSelection parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UControlRig::CanExecute(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRig.CanExecute");

	FCanExecute parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void AControlRigControlActor::ResetControlActor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigControlActor.ResetControlActor");

	FResetControlActor parms{};	

	ProcessEvent(fn, &parms);
}

void AControlRigControlActor::Refresh(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigControlActor.Refresh");

	FRefresh parms{};	

	ProcessEvent(fn, &parms);
}

void AControlRigControlActor::Clear(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigControlActor.Clear");

	FClear parms{};	

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::Update(float DeltaTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.Update");

	FUpdate parms{};	
	parms.DeltaTime = DeltaTime;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetObjectBinding(struct UObject* InObjectToBind){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetObjectBinding");

	FSetObjectBinding parms{};	
	parms.InObjectToBind = InObjectToBind;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetMappedElements");

	FSetMappedElements parms{};	
	parms.NewMappedElements = NewMappedElements;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetInitialSpaceTransform(struct FName SpaceName, struct FTransform InitialTransform, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetInitialSpaceTransform");

	FSetInitialSpaceTransform parms{};	
	parms.SpaceName = SpaceName;
	parms.InitialTransform = InitialTransform;
	parms.Space = Space;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetInitialBoneTransform(struct FName BoneName, struct FTransform InitialTransform, uint8_t Space, bool bPropagateToChildren){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetInitialBoneTransform");

	FSetInitialBoneTransform parms{};	
	parms.BoneName = BoneName;
	parms.InitialTransform = InitialTransform;
	parms.Space = Space;
	parms.bPropagateToChildren = bPropagateToChildren;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetControlVector2D(struct FName ControlName, struct FVector2D Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlVector2D");

	FSetControlVector2D parms{};	
	parms.ControlName = ControlName;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetControlTransform(struct FName ControlName, struct FTransform Value, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlTransform");

	FSetControlTransform parms{};	
	parms.ControlName = ControlName;
	parms.Value = Value;
	parms.Space = Space;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetControlScale(struct FName ControlName, struct FVector Value, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlScale");

	FSetControlScale parms{};	
	parms.ControlName = ControlName;
	parms.Value = Value;
	parms.Space = Space;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetControlRotator(struct FName ControlName, struct FRotator Value, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlRotator");

	FSetControlRotator parms{};	
	parms.ControlName = ControlName;
	parms.Value = Value;
	parms.Space = Space;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetControlRigClass(UControlRig* InControlRigClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlRigClass");

	FSetControlRigClass parms{};	
	parms.InControlRigClass = InControlRigClass;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetControlPosition(struct FName ControlName, struct FVector Value, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlPosition");

	FSetControlPosition parms{};	
	parms.ControlName = ControlName;
	parms.Value = Value;
	parms.Space = Space;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetControlOffset(struct FName ControlName, struct FTransform OffsetTransform, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlOffset");

	FSetControlOffset parms{};	
	parms.ControlName = ControlName;
	parms.OffsetTransform = OffsetTransform;
	parms.Space = Space;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetControlInt(struct FName ControlName, int32_t Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlInt");

	FSetControlInt parms{};	
	parms.ControlName = ControlName;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetControlFloat(struct FName ControlName, float Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlFloat");

	FSetControlFloat parms{};	
	parms.ControlName = ControlName;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetControlBool(struct FName ControlName, bool Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlBool");

	FSetControlBool parms{};	
	parms.ControlName = ControlName;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetBoneTransform(struct FName BoneName, struct FTransform Transform, uint8_t Space, float Weight, bool bPropagateToChildren){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetBoneTransform");

	FSetBoneTransform parms{};	
	parms.BoneName = BoneName;
	parms.Transform = Transform;
	parms.Space = Space;
	parms.Weight = Weight;
	parms.bPropagateToChildren = bPropagateToChildren;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::SetBoneInitialTransformsFromSkeletalMesh(struct USkeletalMesh* InSkeletalMesh){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh");

	FSetBoneInitialTransformsFromSkeletalMesh parms{};	
	parms.InSkeletalMesh = InSkeletalMesh;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::OnPreInitialize(struct UControlRigComponent* Component){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPreInitialize");

	FOnPreInitialize parms{};	
	parms.Component = Component;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::OnPreForwardsSolve(struct UControlRigComponent* Component){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPreForwardsSolve");

	FOnPreForwardsSolve parms{};	
	parms.Component = Component;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::OnPreConstruction(struct UControlRigComponent* Component){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPreConstruction");

	FOnPreConstruction parms{};	
	parms.Component = Component;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::OnPostInitialize(struct UControlRigComponent* Component){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPostInitialize");

	FOnPostInitialize parms{};	
	parms.Component = Component;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::OnPostForwardsSolve(struct UControlRigComponent* Component){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPostForwardsSolve");

	FOnPostForwardsSolve parms{};	
	parms.Component = Component;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::OnPostConstruction(struct UControlRigComponent* Component){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPostConstruction");

	FOnPostConstruction parms{};	
	parms.Component = Component;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::Initialize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.Initialize");

	FInitialize parms{};	

	ProcessEvent(fn, &parms);
}

struct FTransform UControlRigComponent::GetSpaceTransform(struct FName SpaceName, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetSpaceTransform");

	FGetSpaceTransform parms{};	
	parms.SpaceName = SpaceName;
	parms.Space = Space;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UControlRigComponent::GetInitialSpaceTransform(struct FName SpaceName, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetInitialSpaceTransform");

	FGetInitialSpaceTransform parms{};	
	parms.SpaceName = SpaceName;
	parms.Space = Space;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UControlRigComponent::GetInitialBoneTransform(struct FName BoneName, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetInitialBoneTransform");

	FGetInitialBoneTransform parms{};	
	parms.BoneName = BoneName;
	parms.Space = Space;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> UControlRigComponent::GetElementNames(uint8_t ElementType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetElementNames");

	FGetElementNames parms{};	
	parms.ElementType = ElementType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D UControlRigComponent::GetControlVector2D(struct FName ControlName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlVector2D");

	FGetControlVector2D parms{};	
	parms.ControlName = ControlName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UControlRigComponent::GetControlTransform(struct FName ControlName, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlTransform");

	FGetControlTransform parms{};	
	parms.ControlName = ControlName;
	parms.Space = Space;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UControlRigComponent::GetControlScale(struct FName ControlName, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlScale");

	FGetControlScale parms{};	
	parms.ControlName = ControlName;
	parms.Space = Space;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRotator UControlRigComponent::GetControlRotator(struct FName ControlName, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlRotator");

	FGetControlRotator parms{};	
	parms.ControlName = ControlName;
	parms.Space = Space;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UControlRig* UControlRigComponent::GetControlRig(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlRig");

	FGetControlRig parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UControlRigComponent::GetControlPosition(struct FName ControlName, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlPosition");

	FGetControlPosition parms{};	
	parms.ControlName = ControlName;
	parms.Space = Space;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UControlRigComponent::GetControlOffset(struct FName ControlName, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlOffset");

	FGetControlOffset parms{};	
	parms.ControlName = ControlName;
	parms.Space = Space;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UControlRigComponent::GetControlInt(struct FName ControlName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlInt");

	FGetControlInt parms{};	
	parms.ControlName = ControlName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UControlRigComponent::GetControlFloat(struct FName ControlName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlFloat");

	FGetControlFloat parms{};	
	parms.ControlName = ControlName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UControlRigComponent::GetControlBool(struct FName ControlName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlBool");

	FGetControlBool parms{};	
	parms.ControlName = ControlName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UControlRigComponent::GetBoneTransform(struct FName BoneName, uint8_t Space){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetBoneTransform");

	FGetBoneTransform parms{};	
	parms.BoneName = BoneName;
	parms.Space = Space;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UControlRigComponent::GetAbsoluteTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetAbsoluteTime");

	FGetAbsoluteTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UControlRigComponent::DoesElementExist(struct FName Name, uint8_t ElementType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.DoesElementExist");

	FDoesElementExist parms{};	
	parms.Name = Name;
	parms.ElementType = ElementType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UControlRigComponent::ClearMappedElements(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.ClearMappedElements");

	FClearMappedElements parms{};	

	ProcessEvent(fn, &parms);
}

bool UControlRigComponent::CanExecute(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.CanExecute");

	FCanExecute parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UControlRigComponent::AddMappedSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent, struct TArray<struct FControlRigComponentMappedBone> Bones, struct TArray<struct FControlRigComponentMappedCurve> Curves){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh");

	FAddMappedSkeletalMesh parms{};	
	parms.SkeletalMeshComponent = SkeletalMeshComponent;
	parms.Bones = Bones;
	parms.Curves = Curves;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::AddMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.AddMappedElements");

	FAddMappedElements parms{};	
	parms.NewMappedElements = NewMappedElements;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::AddMappedComponents(struct TArray<struct FControlRigComponentMappedComponent> Components){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.AddMappedComponents");

	FAddMappedComponents parms{};	
	parms.Components = Components;

	ProcessEvent(fn, &parms);
}

void UControlRigComponent::AddMappedCompleteSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh");

	FAddMappedCompleteSkeletalMesh parms{};	
	parms.SkeletalMeshComponent = SkeletalMeshComponent;

	ProcessEvent(fn, &parms);
}

bool URigHierarchyController::SetSelection(struct TArray<struct FRigElementKey>& InKeys, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SetSelection");

	FSetSelection parms{};	
	parms.InKeys = InKeys;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchyController::SetParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SetParent");

	FSetParent parms{};	
	parms.InChild = InChild;
	parms.InParent = InParent;
	parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void URigHierarchyController::SetHierarchy(struct URigHierarchy* InHierarchy){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SetHierarchy");

	FSetHierarchy parms{};	
	parms.InHierarchy = InHierarchy;

	ProcessEvent(fn, &parms);
}

struct FName URigHierarchyController::SetDisplayName(struct FRigElementKey InControl, struct FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SetDisplayName");

	FSetDisplayName parms{};	
	parms.InControl = InControl;
	parms.InDisplayName = InDisplayName;
	parms.bRenameElement = bRenameElement;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchyController::SetControlSettings(struct FRigElementKey InKey, struct FRigControlSettings InSettings, bool bSetupUndo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SetControlSettings");

	FSetControlSettings parms{};	
	parms.InKey = InKey;
	parms.InSettings = InSettings;
	parms.bSetupUndo = bSetupUndo;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchyController::SelectElement(struct FRigElementKey InKey, bool bSelect, bool bClearSelection){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SelectElement");

	FSelectElement parms{};	
	parms.InKey = InKey;
	parms.bSelect = bSelect;
	parms.bClearSelection = bClearSelection;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigElementKey URigHierarchyController::RenameElement(struct FRigElementKey InElement, struct FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.RenameElement");

	FRenameElement parms{};	
	parms.InElement = InElement;
	parms.InName = InName;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;
	parms.bClearSelection = bClearSelection;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchyController::RemoveParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.RemoveParent");

	FRemoveParent parms{};	
	parms.InChild = InChild;
	parms.InParent = InParent;
	parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchyController::RemoveElement(struct FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.RemoveElement");

	FRemoveElement parms{};	
	parms.InElement = InElement;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchyController::RemoveAllParents(struct FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.RemoveAllParents");

	FRemoveAllParents parms{};	
	parms.InChild = InChild;
	parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchyController::MirrorElements(struct TArray<struct FRigElementKey> InKeys, struct FRigMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.MirrorElements");

	FMirrorElements parms{};	
	parms.InKeys = InKeys;
	parms.InSettings = InSettings;
	parms.bSelectNewElements = bSelectNewElements;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommands = bPrintPythonCommands;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchyController::ImportFromText(struct FString InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ImportFromText");

	FImportFromText parms{};	
	parms.InContent = InContent;
	parms.bReplaceExistingElements = bReplaceExistingElements;
	parms.bSelectNewElements = bSelectNewElements;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommands = bPrintPythonCommands;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchyController::ImportCurves(struct USkeleton* InSkeleton, struct FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ImportCurves");

	FImportCurves parms{};	
	parms.InSkeleton = InSkeleton;
	parms.InNameSpace = InNameSpace;
	parms.bSelectCurves = bSelectCurves;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchyController::ImportBones(struct USkeleton* InSkeleton, struct FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ImportBones");

	FImportBones parms{};	
	parms.InSkeleton = InSkeleton;
	parms.InNameSpace = InNameSpace;
	parms.bReplaceExistingBones = bReplaceExistingBones;
	parms.bRemoveObsoleteBones = bRemoveObsoleteBones;
	parms.bSelectBones = bSelectBones;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct URigHierarchy* URigHierarchyController::GetHierarchy(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.GetHierarchy");

	FGetHierarchy parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigControlSettings URigHierarchyController::GetControlSettings(struct FRigElementKey InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.GetControlSettings");

	FGetControlSettings parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString URigHierarchyController::ExportToText(struct TArray<struct FRigElementKey> InKeys){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ExportToText");

	FExportToText parms{};	
	parms.InKeys = InKeys;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString URigHierarchyController::ExportSelectionToText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ExportSelectionToText");

	FExportSelectionToText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigElementKey> URigHierarchyController::DuplicateElements(struct TArray<struct FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.DuplicateElements");

	FDuplicateElements parms{};	
	parms.InKeys = InKeys;
	parms.bSelectNewElements = bSelectNewElements;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommands = bPrintPythonCommands;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchyController::DeselectElement(struct FRigElementKey InKey){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.DeselectElement");

	FDeselectElement parms{};	
	parms.InKey = InKey;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchyController::ClearSelection(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ClearSelection");

	FClearSelection parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigElementKey URigHierarchyController::AddRigidBody(struct FName InName, struct FRigElementKey InParent, struct FRigRigidBodySettings InSettings, struct FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddRigidBody");

	FAddRigidBody parms{};	
	parms.InName = InName;
	parms.InParent = InParent;
	parms.InSettings = InSettings;
	parms.InLocalTransform = InLocalTransform;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigHierarchyController::AddParent(struct FRigElementKey InChild, struct FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddParent");

	FAddParent parms{};	
	parms.InChild = InChild;
	parms.InParent = InParent;
	parms.InWeight = InWeight;
	parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	parms.bSetupUndo = bSetupUndo;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigElementKey URigHierarchyController::AddNull(struct FName InName, struct FRigElementKey InParent, struct FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddNull");

	FAddNull parms{};	
	parms.InName = InName;
	parms.InParent = InParent;
	parms.InTransform = InTransform;
	parms.bTransformInGlobal = bTransformInGlobal;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigElementKey URigHierarchyController::AddCurve(struct FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddCurve");

	FAddCurve parms{};	
	parms.InName = InName;
	parms.InValue = InValue;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigElementKey URigHierarchyController::AddControl_ForBlueprint(struct FName InName, struct FRigElementKey InParent, struct FRigControlSettings InSettings, struct FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddControl_ForBlueprint");

	FAddControl_ForBlueprint parms{};	
	parms.InName = InName;
	parms.InParent = InParent;
	parms.InSettings = InSettings;
	parms.InValue = InValue;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigElementKey URigHierarchyController::AddBone(struct FName InName, struct FRigElementKey InParent, struct FTransform InTransform, bool bTransformInGlobal, uint8_t InBoneType, bool bSetupUndo, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddBone");

	FAddBone parms{};	
	parms.InName = InName;
	parms.InParent = InParent;
	parms.InTransform = InTransform;
	parms.bTransformInGlobal = bTransformInGlobal;
	parms.InBoneType = InBoneType;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FRigElementKey URigHierarchyController::AddAnimationChannel_ForBlueprint(struct FName InName, struct FRigElementKey InParentControl, struct FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint");

	FAddAnimationChannel_ForBlueprint parms{};	
	parms.InName = InName;
	parms.InParentControl = InParentControl;
	parms.InSettings = InSettings;
	parms.bSetupUndo = bSetupUndo;
	parms.bPrintPythonCommand = bPrintPythonCommand;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UControlRigPoseAsset::SelectControls(struct UControlRig* InControlRig, bool bDoMirror){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.SelectControls");

	FSelectControls parms{};	
	parms.InControlRig = InControlRig;
	parms.bDoMirror = bDoMirror;

	ProcessEvent(fn, &parms);
}

void UControlRigPoseAsset::SavePose(struct UControlRig* InControlRig, bool bUseAll){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.SavePose");

	FSavePose parms{};	
	parms.InControlRig = InControlRig;
	parms.bUseAll = bUseAll;

	ProcessEvent(fn, &parms);
}

void UControlRigPoseAsset::ReplaceControlName(struct FName& CurrentName, struct FName& NewName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.ReplaceControlName");

	FReplaceControlName parms{};	
	parms.CurrentName = CurrentName;
	parms.NewName = NewName;

	ProcessEvent(fn, &parms);
}

void UControlRigPoseAsset::PastePose(struct UControlRig* InControlRig, bool bDoKey, bool bDoMirror){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.PastePose");

	FPastePose parms{};	
	parms.InControlRig = InControlRig;
	parms.bDoKey = bDoKey;
	parms.bDoMirror = bDoMirror;

	ProcessEvent(fn, &parms);
}

void UControlRigPoseAsset::GetCurrentPose(struct UControlRig* InControlRig, struct FControlRigControlPose& OutPose){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.GetCurrentPose");

	FGetCurrentPose parms{};	
	parms.InControlRig = InControlRig;
	parms.OutPose = OutPose;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FName> UControlRigPoseAsset::GetControlNames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.GetControlNames");

	FGetControlNames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UControlRigPoseAsset::DoesMirrorMatch(struct UControlRig* ControlRig, struct FName& ControlName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch");

	FDoesMirrorMatch parms{};	
	parms.ControlRig = ControlRig;
	parms.ControlName = ControlName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UControlRigWorkflowOptions::EnsureAtLeastOneRigElementSelected(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected");

	FEnsureAtLeastOneRigElementSelected parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FRigVMUserWorkflow> UControlRigTransformWorkflowOptions::ProvideWorkflows(struct UObject* InSubject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows");

	FProvideWorkflows parms{};	
	parms.InSubject = InSubject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}


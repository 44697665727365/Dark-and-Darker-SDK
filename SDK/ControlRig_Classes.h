#pragma once 
#include <ControlRig_Structs.h>
 
 
 
// Class ControlRig.RigHierarchy
// Size: 0x320(Inherited: 0x28)
struct URigHierarchy : UObject
{
	char pad_40[96];  // 0x28 (0x28)
	uint16_t TopologyVersion;  // 0x88 (0x88)
	uint16_t MetadataVersion;  // 0x8A (0x8A)
	uint16_t MetadataTagVersion;  // 0x8C (0x8C)
	char pad_142_1 : 7;  // 0x8E (0x8E)
	bool bEnableDirtyPropagation : 1;  // 0x8E (0x8E)
	char pad_143[113];  // 0x8F (0x8F)
	int32_t TransformStackIndex;  // 0x100 (0x100)
	char pad_260[116];  // 0x104 (0x104)
	struct URigHierarchyController* HierarchyController;  // 0x178 (0x178)
	char pad_384[88];  // 0x180 (0x180)
	struct TMap<struct FRigElementKey, struct FRigElementKey> PreviousNameMap;  // 0x1D8 (0x1D8)
	char pad_552[128];  // 0x228 (0x228)
	struct URigHierarchy* HierarchyForCacheValidation;  // 0x2A8 (0x2A8)
	char pad_688[112];  // 0x2B0 (0x2B0)


	void UnsetCurveValueByIndex(int32_t InElementIndex, bool bSetupUndo); // Function ControlRig.RigHierarchy.UnsetCurveValueByIndex
	void UnsetCurveValue(struct FRigElementKey InKey, bool bSetupUndo); // Function ControlRig.RigHierarchy.UnsetCurveValue
	bool SwitchToWorldSpace(struct FRigElementKey InChild, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SwitchToWorldSpace
	bool SwitchToParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SwitchToParent
	bool SwitchToDefaultParent(struct FRigElementKey InChild, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SwitchToDefaultParent
	struct TArray<struct FRigElementKey> SortKeys(struct TArray<struct FRigElementKey>& InKeys); // Function ControlRig.RigHierarchy.SortKeys
	bool SetVectorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FVector InValue); // Function ControlRig.RigHierarchy.SetVectorMetadata
	bool SetVectorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FVector> InValue); // Function ControlRig.RigHierarchy.SetVectorArrayMetadata
	bool SetTransformMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FTransform InValue); // Function ControlRig.RigHierarchy.SetTransformMetadata
	bool SetTransformArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FTransform> InValue); // Function ControlRig.RigHierarchy.SetTransformArrayMetadata
	bool SetTag(struct FRigElementKey InItem, struct FName InTag); // Function ControlRig.RigHierarchy.SetTag
	bool SetRotatorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRotator InValue); // Function ControlRig.RigHierarchy.SetRotatorMetadata
	bool SetRotatorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FRotator> InValue); // Function ControlRig.RigHierarchy.SetRotatorArrayMetadata
	bool SetRigElementKeyMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRigElementKey InValue); // Function ControlRig.RigHierarchy.SetRigElementKeyMetadata
	bool SetRigElementKeyArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FRigElementKey> InValue); // Function ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata
	bool SetQuatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FQuat InValue); // Function ControlRig.RigHierarchy.SetQuatMetadata
	bool SetQuatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FQuat> InValue); // Function ControlRig.RigHierarchy.SetQuatArrayMetadata
	void SetPose_ForBlueprint(struct FRigPose InPose); // Function ControlRig.RigHierarchy.SetPose_ForBlueprint
	bool SetParentWeightArray(struct FRigElementKey InChild, struct TArray<struct FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SetParentWeightArray
	bool SetParentWeight(struct FRigElementKey InChild, struct FRigElementKey InParent, struct FRigElementWeight InWeight, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SetParentWeight
	bool SetNameMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FName InValue); // Function ControlRig.RigHierarchy.SetNameMetadata
	bool SetNameArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FName> InValue); // Function ControlRig.RigHierarchy.SetNameArrayMetadata
	void SetLocalTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetLocalTransformByIndex
	void SetLocalTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetLocalTransform
	bool SetLinearColorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FLinearColor InValue); // Function ControlRig.RigHierarchy.SetLinearColorMetadata
	bool SetLinearColorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FLinearColor> InValue); // Function ControlRig.RigHierarchy.SetLinearColorArrayMetadata
	bool SetInt32Metadata(struct FRigElementKey InItem, struct FName InMetadataName, int32_t InValue); // Function ControlRig.RigHierarchy.SetInt32Metadata
	bool SetInt32ArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<int32_t> InValue); // Function ControlRig.RigHierarchy.SetInt32ArrayMetadata
	void SetGlobalTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchy.SetGlobalTransformByIndex
	void SetGlobalTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchy.SetGlobalTransform
	bool SetFloatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, float InValue); // Function ControlRig.RigHierarchy.SetFloatMetadata
	bool SetFloatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<float> InValue); // Function ControlRig.RigHierarchy.SetFloatArrayMetadata
	void SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetCurveValueByIndex
	void SetCurveValue(struct FRigElementKey InKey, float InValue, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetCurveValue
	void SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility); // Function ControlRig.RigHierarchy.SetControlVisibilityByIndex
	void SetControlVisibility(struct FRigElementKey InKey, bool bVisibility); // Function ControlRig.RigHierarchy.SetControlVisibility
	void SetControlValueByIndex(int32_t InElementIndex, struct FRigControlValue InValue, uint8_t InValueType, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlValueByIndex
	void SetControlValue(struct FRigElementKey InKey, struct FRigControlValue InValue, uint8_t InValueType, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlValue
	void SetControlShapeTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex
	void SetControlShapeTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetControlShapeTransform
	void SetControlSettingsByIndex(int32_t InElementIndex, struct FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlSettingsByIndex
	void SetControlSettings(struct FRigElementKey InKey, struct FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlSettings
	void SetControlPreferredRotatorByIndex(int32_t InElementIndex, struct FRotator& InValue, bool bInitial, bool bFixEulerFlips); // Function ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex
	void SetControlPreferredRotator(struct FRigElementKey InKey, struct FRotator& InValue, bool bInitial, bool bFixEulerFlips); // Function ControlRig.RigHierarchy.SetControlPreferredRotator
	void SetControlOffsetTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
	void SetControlOffsetTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlOffsetTransform
	bool SetBoolMetadata(struct FRigElementKey InItem, struct FName InMetadataName, bool InValue); // Function ControlRig.RigHierarchy.SetBoolMetadata
	bool SetBoolArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<bool> InValue); // Function ControlRig.RigHierarchy.SetBoolArrayMetadata
	void SendAutoKeyEvent(struct FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous); // Function ControlRig.RigHierarchy.SendAutoKeyEvent
	void ResetToDefault(); // Function ControlRig.RigHierarchy.ResetToDefault
	void ResetPoseToInitial(uint8_t InTypeFilter); // Function ControlRig.RigHierarchy.ResetPoseToInitial
	void ResetCurveValues(); // Function ControlRig.RigHierarchy.ResetCurveValues
	void Reset(); // Function ControlRig.RigHierarchy.Reset
	bool RemoveMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.RemoveMetadata
	bool RemoveAllMetadata(struct FRigElementKey InItem); // Function ControlRig.RigHierarchy.RemoveAllMetadata
	int32_t Num(); // Function ControlRig.RigHierarchy.Num
	struct FRigControlValue MakeControlValueFromVector2D(struct FVector2D InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromVector2D
	struct FRigControlValue MakeControlValueFromVector(struct FVector InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromVector
	struct FRigControlValue MakeControlValueFromTransformNoScale(struct FTransformNoScale InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
	struct FRigControlValue MakeControlValueFromTransform(struct FTransform InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromTransform
	struct FRigControlValue MakeControlValueFromRotator(struct FRotator InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromRotator
	struct FRigControlValue MakeControlValueFromInt(int32_t InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromInt
	struct FRigControlValue MakeControlValueFromFloat(float InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromFloat
	struct FRigControlValue MakeControlValueFromEulerTransform(struct FEulerTransform InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
	struct FRigControlValue MakeControlValueFromBool(bool InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromBool
	bool IsValidIndex(int32_t InElementIndex); // Function ControlRig.RigHierarchy.IsValidIndex
	bool IsSelectedByIndex(int32_t InIndex); // Function ControlRig.RigHierarchy.IsSelectedByIndex
	bool IsSelected(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.IsSelected
	bool IsProcedural(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.IsProcedural
	bool IsParentedTo(struct FRigElementKey InChild, struct FRigElementKey InParent); // Function ControlRig.RigHierarchy.IsParentedTo
	bool IsCurveValueSetByIndex(int32_t InElementIndex); // Function ControlRig.RigHierarchy.IsCurveValueSetByIndex
	bool IsCurveValueSet(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.IsCurveValueSet
	bool IsControllerAvailable(); // Function ControlRig.RigHierarchy.IsControllerAvailable
	bool HasTag(struct FRigElementKey InItem, struct FName InTag); // Function ControlRig.RigHierarchy.HasTag
	struct FVector GetVectorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FVector DefaultValue); // Function ControlRig.RigHierarchy.GetVectorMetadata
	struct FVector GetVectorFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetVectorFromControlValue
	struct TArray<struct FVector> GetVectorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetVectorArrayMetadata
	struct FVector2D GetVector2DFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetVector2DFromControlValue
	struct FTransformNoScale GetTransformNoScaleFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
	struct FTransform GetTransformMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FTransform DefaultValue); // Function ControlRig.RigHierarchy.GetTransformMetadata
	struct FTransform GetTransformFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetTransformFromControlValue
	struct TArray<struct FTransform> GetTransformArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetTransformArrayMetadata
	struct TArray<struct FName> GetTags(struct FRigElementKey InItem); // Function ControlRig.RigHierarchy.GetTags
	struct TArray<struct FRigElementKey> GetSelectedKeys(uint8_t InTypeFilter); // Function ControlRig.RigHierarchy.GetSelectedKeys
	struct FRotator GetRotatorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRotator DefaultValue); // Function ControlRig.RigHierarchy.GetRotatorMetadata
	struct FRotator GetRotatorFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetRotatorFromControlValue
	struct TArray<struct FRotator> GetRotatorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetRotatorArrayMetadata
	struct TArray<struct FRigElementKey> GetRigidBodyKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetRigidBodyKeys
	struct FRigElementKey GetRigElementKeyMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRigElementKey DefaultValue); // Function ControlRig.RigHierarchy.GetRigElementKeyMetadata
	struct TArray<struct FRigElementKey> GetRigElementKeyArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata
	struct TArray<struct FRigElementKey> GetReferenceKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetReferenceKeys
	struct FQuat GetQuatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FQuat DefaultValue); // Function ControlRig.RigHierarchy.GetQuatMetadata
	struct TArray<struct FQuat> GetQuatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetQuatArrayMetadata
	struct FRigElementKey GetPreviousParent(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.GetPreviousParent
	struct FName GetPreviousName(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.GetPreviousName
	struct FRigPose GetPose(bool bInitial); // Function ControlRig.RigHierarchy.GetPose
	struct TArray<struct FRigElementWeight> GetParentWeightArray(struct FRigElementKey InChild, bool bInitial); // Function ControlRig.RigHierarchy.GetParentWeightArray
	struct FRigElementWeight GetParentWeight(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bInitial); // Function ControlRig.RigHierarchy.GetParentWeight
	struct FTransform GetParentTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetParentTransformByIndex
	struct FTransform GetParentTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetParentTransform
	struct TArray<struct FRigElementKey> GetParents(struct FRigElementKey InKey, bool bRecursive); // Function ControlRig.RigHierarchy.GetParents
	int32_t GetNumberOfParents(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetNumberOfParents
	struct TArray<struct FRigElementKey> GetNullKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetNullKeys
	struct FName GetNameMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FName DefaultValue); // Function ControlRig.RigHierarchy.GetNameMetadata
	struct TArray<struct FName> GetNameArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetNameArrayMetadata
	uint8_t GetMetadataType(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetMetadataType
	struct TArray<struct FName> GetMetadataNames(struct FRigElementKey InItem); // Function ControlRig.RigHierarchy.GetMetadataNames
	struct FTransform GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalTransformByIndex
	struct FTransform GetLocalTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalTransform
	struct FTransform GetLocalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex
	struct FTransform GetLocalControlShapeTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalControlShapeTransform
	struct FLinearColor GetLinearColorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FLinearColor DefaultValue); // Function ControlRig.RigHierarchy.GetLinearColorMetadata
	struct TArray<struct FLinearColor> GetLinearColorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetLinearColorArrayMetadata
	struct TArray<struct FRigElementKey> GetKeys(struct TArray<int32_t> InElementIndices); // Function ControlRig.RigHierarchy.GetKeys
	struct FRigElementKey GetKey(int32_t InElementIndex); // Function ControlRig.RigHierarchy.GetKey
	int32_t GetIntFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetIntFromControlValue
	int32_t GetInt32Metadata(struct FRigElementKey InItem, struct FName InMetadataName, int32_t DefaultValue); // Function ControlRig.RigHierarchy.GetInt32Metadata
	struct TArray<int32_t> GetInt32ArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetInt32ArrayMetadata
	int32_t GetIndex_ForBlueprint(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetIndex_ForBlueprint
	struct FTransform GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalTransformByIndex
	struct FTransform GetGlobalTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalTransform
	struct FTransform GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
	struct FTransform GetGlobalControlShapeTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform
	struct FTransform GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
	struct FTransform GetGlobalControlOffsetTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
	float GetFloatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, float DefaultValue); // Function ControlRig.RigHierarchy.GetFloatMetadata
	float GetFloatFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetFloatFromControlValue
	struct TArray<float> GetFloatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetFloatArrayMetadata
	struct FRigElementKey GetFirstParent(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetFirstParent
	struct FEulerTransform GetEulerTransformFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue
	struct FRigElementKey GetDefaultParent(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetDefaultParent
	float GetCurveValueByIndex(int32_t InElementIndex); // Function ControlRig.RigHierarchy.GetCurveValueByIndex
	float GetCurveValue(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetCurveValue
	struct TArray<struct FRigElementKey> GetCurveKeys(); // Function ControlRig.RigHierarchy.GetCurveKeys
	struct FRigControlValue GetControlValueByIndex(int32_t InElementIndex, uint8_t InValueType); // Function ControlRig.RigHierarchy.GetControlValueByIndex
	struct FRigControlValue GetControlValue(struct FRigElementKey InKey, uint8_t InValueType); // Function ControlRig.RigHierarchy.GetControlValue
	struct FRotator GetControlPreferredRotatorByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex
	struct FRotator GetControlPreferredRotator(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetControlPreferredRotator
	struct URigHierarchyController* GetController(bool bCreateIfNeeded); // Function ControlRig.RigHierarchy.GetController
	struct TArray<struct FRigElementKey> GetControlKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetControlKeys
	struct TArray<struct FRigElementKey> GetChildren(struct FRigElementKey InKey, bool bRecursive); // Function ControlRig.RigHierarchy.GetChildren
	bool GetBoolMetadata(struct FRigElementKey InItem, struct FName InMetadataName, bool DefaultValue); // Function ControlRig.RigHierarchy.GetBoolMetadata
	struct TArray<bool> GetBoolArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetBoolArrayMetadata
	struct TArray<struct FRigElementKey> GetBoneKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetBoneKeys
	struct TArray<struct FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse); // Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
	struct FRigNullElement FindNull_ForBlueprintOnly(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
	struct FRigControlElement FindControl_ForBlueprintOnly(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
	struct FRigBoneElement FindBone_ForBlueprintOnly(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
	void CopyPose(struct URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded); // Function ControlRig.RigHierarchy.CopyPose
	void CopyHierarchy(struct URigHierarchy* InHierarchy); // Function ControlRig.RigHierarchy.CopyHierarchy
	bool Contains_ForBlueprint(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.Contains_ForBlueprint
}; 
 
 


// Class ControlRig.ControlRigShapeActor
// Size: 0x2D8(Inherited: 0x290)
struct AControlRigShapeActor : AActor
{
	struct USceneComponent* ActorRootComponent;  // 0x290 (0x290)
	struct UStaticMeshComponent* StaticMeshComponent;  // 0x298 (0x298)
	uint32_t ControlRigIndex;  // 0x2A0 (0x2A0)
	struct TWeakObjectPtr<UControlRig> ControlRig;  // 0x2A4 (0x2A4)
	struct FName ControlName;  // 0x2AC (0x2AC)
	struct FName ShapeName;  // 0x2B4 (0x2B4)
	struct FName ColorParameterName;  // 0x2BC (0x2BC)
	char pad_708[16];  // 0x2C4 (0x2C4)
	char bSelected : 1;  // 0x2D4 (0x2D4)
	char bHovered : 1;  // 0x2D4 (0x2D4)
	char pad_724_1 : 6;  // 0x2D4 (0x2D4)
	char pad_725[4];  // 0x2D5 (0x2D5)


	void SetSelected(bool bInSelected); // Function ControlRig.ControlRigShapeActor.SetSelected
	void SetSelectable(bool bInSelectable); // Function ControlRig.ControlRigShapeActor.SetSelectable
	void SetHovered(bool bInHovered); // Function ControlRig.ControlRigShapeActor.SetHovered
	void SetGlobalTransform(struct FTransform& InTransform); // Function ControlRig.ControlRigShapeActor.SetGlobalTransform
	void SetEnabled(bool bInEnabled); // Function ControlRig.ControlRigShapeActor.SetEnabled
	void OnTransformChanged(struct FTransform& NewTransform); // Function ControlRig.ControlRigShapeActor.OnTransformChanged
	void OnSelectionChanged(bool bIsSelected); // Function ControlRig.ControlRigShapeActor.OnSelectionChanged
	void OnManipulatingChanged(bool bIsManipulating); // Function ControlRig.ControlRigShapeActor.OnManipulatingChanged
	void OnHoveredChanged(bool bIsSelected); // Function ControlRig.ControlRigShapeActor.OnHoveredChanged
	void OnEnabledChanged(bool bIsEnabled); // Function ControlRig.ControlRigShapeActor.OnEnabledChanged
	bool IsSelectedInEditor(); // Function ControlRig.ControlRigShapeActor.IsSelectedInEditor
	bool IsHovered(); // Function ControlRig.ControlRigShapeActor.IsHovered
	bool IsEnabled(); // Function ControlRig.ControlRigShapeActor.IsEnabled
	struct FTransform GetGlobalTransform(); // Function ControlRig.ControlRigShapeActor.GetGlobalTransform
}; 
 
 


// Class ControlRig.ControlRig
// Size: 0x560(Inherited: 0x28)
struct UControlRig : UObject
{
	char pad_40[30];  // 0x28 (0x28)
	uint8_t ExecutionType;  // 0x46 (0x46)
	char pad_71[1];  // 0x47 (0x47)
	struct FRigHierarchySettings HierarchySettings;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)
	struct FRigVMRuntimeSettings VMRuntimeSettings;  // 0x50 (0x50)
	struct TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations;  // 0x68 (0x68)
	struct URigVM* VM;  // 0xB8 (0xB8)
	struct TMap<uint32_t, struct URigVM*> InitializedVMSnapshots;  // 0xC0 (0xC0)
	char pad_272[8];  // 0x110 (0x110)
	struct URigHierarchy* DynamicHierarchy;  // 0x118 (0x118)
	struct TSoftObjectPtr<UControlRigShapeLibrary> GizmoLibrary;  // 0x120 (0x120)
	struct TArray<struct TSoftObjectPtr<UControlRigShapeLibrary>> ShapeLibraries;  // 0x150 (0x150)
	char pad_352[16];  // 0x160 (0x160)
	struct TMap<struct FName, struct FCachedPropertyPath> InputProperties;  // 0x170 (0x170)
	struct TMap<struct FName, struct FCachedPropertyPath> OutputProperties;  // 0x1C0 (0x1C0)
	char pad_528[168];  // 0x210 (0x210)
	struct FControlRigDrawContainer DrawContainer;  // 0x2B8 (0x2B8)
	char pad_720[24];  // 0x2D0 (0x2D0)
	struct UAnimationDataSourceRegistry* DataSourceRegistry;  // 0x2E8 (0x2E8)
	struct TArray<struct FName> EventQueue;  // 0x2F0 (0x2F0)
	char pad_768[208];  // 0x300 (0x300)
	struct FRigInfluenceMapPerEvent Influences;  // 0x3D0 (0x3D0)
	struct UControlRig* InteractionRig;  // 0x430 (0x430)
	UControlRig* InteractionRigClass;  // 0x438 (0x438)
	struct TArray<struct UAssetUserData*> AssetUserData;  // 0x440 (0x440)
	char pad_1104[200];  // 0x450 (0x450)
	struct FMulticastSparseDelegate OnControlSelected_BP;  // 0x518 (0x518)
	char pad_1305[71];  // 0x519 (0x519)


	bool SupportsEvent(struct FName& InEventName); // Function ControlRig.ControlRig.SupportsEvent
	bool SetVariableFromString(struct FName& InVariableName, struct FString InValue); // Function ControlRig.ControlRig.SetVariableFromString
	void SetInteractionRigClass(UControlRig* InInteractionRigClass); // Function ControlRig.ControlRig.SetInteractionRigClass
	void SetInteractionRig(struct UControlRig* InInteractionRig); // Function ControlRig.ControlRig.SetInteractionRig
	void SetFramesPerSecond(float InFramesPerSecond); // Function ControlRig.ControlRig.SetFramesPerSecond
	void SetDeltaTime(float InDeltaTime); // Function ControlRig.ControlRig.SetDeltaTime
	void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero); // Function ControlRig.ControlRig.SetAbsoluteTime
	void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime); // Function ControlRig.ControlRig.SetAbsoluteAndDeltaTime
	void SelectControl(struct FName& InControlName, bool bSelect); // Function ControlRig.ControlRig.SelectControl
	void RequestInit(); // Function ControlRig.ControlRig.RequestInit
	void RequestConstruction(); // Function ControlRig.ControlRig.RequestConstruction
	void OnControlSelectedBP__DelegateSignature(struct UControlRig* Rig, struct FRigControlElement& Control, bool bSelected); // SparseDelegateFunction ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature
	bool IsControlSelected(struct FName& InControlName); // Function ControlRig.ControlRig.IsControlSelected
	struct URigVM* GetVM(); // Function ControlRig.ControlRig.GetVM
	struct FName GetVariableType(struct FName& InVariableName); // Function ControlRig.ControlRig.GetVariableType
	struct FString GetVariableAsString(struct FName& InVariableName); // Function ControlRig.ControlRig.GetVariableAsString
	struct TArray<struct FName> GetSupportedEvents(); // Function ControlRig.ControlRig.GetSupportedEvents
	struct TArray<struct FName> GetScriptAccessibleVariables(); // Function ControlRig.ControlRig.GetScriptAccessibleVariables
	UControlRig* GetInteractionRigClass(); // Function ControlRig.ControlRig.GetInteractionRigClass
	struct UControlRig* GetInteractionRig(); // Function ControlRig.ControlRig.GetInteractionRig
	struct AActor* GetHostingActor(); // Function ControlRig.ControlRig.GetHostingActor
	struct URigHierarchy* GetHierarchy(); // Function ControlRig.ControlRig.GetHierarchy
	struct TArray<struct FName> GetEvents(); // Function ControlRig.ControlRig.GetEvents
	float GetCurrentFramesPerSecond(); // Function ControlRig.ControlRig.GetCurrentFramesPerSecond
	float GetAbsoluteTime(); // Function ControlRig.ControlRig.GetAbsoluteTime
	struct TArray<struct UControlRig*> FindControlRigs(struct UObject* Outer, UControlRig* OptionalClass); // Function ControlRig.ControlRig.FindControlRigs
	bool ExecuteEvent(struct FName& InEventName); // Function ControlRig.ControlRig.ExecuteEvent
	bool Execute(uint8_t State, struct FName& InEventName); // Function ControlRig.ControlRig.Execute
	struct TArray<struct FName> CurrentControlSelection(); // Function ControlRig.ControlRig.CurrentControlSelection
	struct UTransformableControlHandle* CreateTransformableControlHandle(struct UObject* Outer, struct FName& ControlName); // Function ControlRig.ControlRig.CreateTransformableControlHandle
	bool ContainsEvent(struct FName& InEventName); // Function ControlRig.ControlRig.ContainsEvent
	bool ClearControlSelection(); // Function ControlRig.ControlRig.ClearControlSelection
	bool CanExecute(); // Function ControlRig.ControlRig.CanExecute
}; 
 
 


// Class ControlRig.ControlRigControlActor
// Size: 0x348(Inherited: 0x290)
struct AControlRigControlActor : AActor
{
	struct AActor* ActorToTrack;  // 0x290 (0x290)
	UControlRig* ControlRigClass;  // 0x298 (0x298)
	char pad_672_1 : 7;  // 0x2A0 (0x2A0)
	bool bRefreshOnTick : 1;  // 0x2A0 (0x2A0)
	char pad_673_1 : 7;  // 0x2A1 (0x2A1)
	bool bIsSelectable : 1;  // 0x2A1 (0x2A1)
	char pad_674[6];  // 0x2A2 (0x2A2)
	struct UMaterialInterface* MaterialOverride;  // 0x2A8 (0x2A8)
	struct FString ColorParameter;  // 0x2B0 (0x2B0)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool bCastShadows : 1;  // 0x2C0 (0x2C0)
	char pad_705[7];  // 0x2C1 (0x2C1)
	struct USceneComponent* ActorRootComponent;  // 0x2C8 (0x2C8)
	struct TSoftObjectPtr<UControlRig> ControlRig;  // 0x2D0 (0x2D0)
	struct TArray<struct FName> ControlNames;  // 0x300 (0x300)
	struct TArray<struct FTransform> ShapeTransforms;  // 0x310 (0x310)
	struct TArray<struct UStaticMeshComponent*> Components;  // 0x320 (0x320)
	struct TArray<struct UMaterialInstanceDynamic*> Materials;  // 0x330 (0x330)
	struct FName ColorParameterName;  // 0x340 (0x340)


	void ResetControlActor(); // Function ControlRig.ControlRigControlActor.ResetControlActor
	void Refresh(); // Function ControlRig.ControlRigControlActor.Refresh
	void Clear(); // Function ControlRig.ControlRigControlActor.Clear
}; 
 
 


// Class ControlRig.ControlRigAnimInstance
// Size: 0x350(Inherited: 0x350)
struct UControlRigAnimInstance : UAnimInstance
{


}; 
 
 


// Class ControlRig.TransformableControlHandle
// Size: 0x90(Inherited: 0x58)
struct UTransformableControlHandle : UTransformableHandle
{
	struct TSoftObjectPtr<UControlRig> ControlRig;  // 0x58 (0x58)
	struct FName ControlName;  // 0x88 (0x88)


}; 
 
 


// Class ControlRig.ControlRigObjectHolder
// Size: 0x38(Inherited: 0x28)
struct UControlRigObjectHolder : UObject
{
	struct TArray<struct UObject*> Objects;  // 0x28 (0x28)


}; 
 
 


// Class ControlRig.ControlRigBlueprintGeneratedClass
// Size: 0x380(Inherited: 0x380)
struct UControlRigBlueprintGeneratedClass : UBlueprintGeneratedClass
{


}; 
 
 


// Class ControlRig.ControlRigComponent
// Size: 0x690(Inherited: 0x540)
struct UControlRigComponent : UPrimitiveComponent
{
	UControlRig* ControlRigClass;  // 0x538 (0x538)
	struct FMulticastInlineDelegate OnPreInitializeDelegate;  // 0x540 (0x540)
	struct FMulticastInlineDelegate OnPostInitializeDelegate;  // 0x550 (0x550)
	struct FMulticastInlineDelegate OnPreConstructionDelegate;  // 0x560 (0x560)
	struct FMulticastInlineDelegate OnPostConstructionDelegate;  // 0x570 (0x570)
	struct FMulticastInlineDelegate OnPreForwardsSolveDelegate;  // 0x580 (0x580)
	struct FMulticastInlineDelegate OnPostForwardsSolveDelegate;  // 0x590 (0x590)
	struct TArray<struct FControlRigComponentMappedElement> UserDefinedElements;  // 0x5A0 (0x5A0)
	struct TArray<struct FControlRigComponentMappedElement> MappedElements;  // 0x5B0 (0x5B0)
	char pad_1480_1 : 7;  // 0x5C8 (0x5C8)
	bool bEnableLazyEvaluation : 1;  // 0x5C0 (0x5C0)
	float LazyEvaluationPositionThreshold;  // 0x5C4 (0x5C4)
	float LazyEvaluationRotationThreshold;  // 0x5C8 (0x5C8)
	float LazyEvaluationScaleThreshold;  // 0x5CC (0x5CC)
	char pad_1493_1 : 7;  // 0x5D5 (0x5D5)
	bool bResetTransformBeforeTick : 1;  // 0x5D0 (0x5D0)
	char pad_1494_1 : 7;  // 0x5D6 (0x5D6)
	bool bResetInitialsBeforeConstruction : 1;  // 0x5D1 (0x5D1)
	char pad_1495_1 : 7;  // 0x5D7 (0x5D7)
	bool bUpdateRigOnTick : 1;  // 0x5D2 (0x5D2)
	char pad_1496_1 : 7;  // 0x5D8 (0x5D8)
	bool bUpdateInEditor : 1;  // 0x5D3 (0x5D3)
	char pad_1497_1 : 7;  // 0x5D9 (0x5D9)
	bool bDrawBones : 1;  // 0x5D4 (0x5D4)
	char pad_1498_1 : 7;  // 0x5DA (0x5DA)
	bool bShowDebugDrawing : 1;  // 0x5D5 (0x5D5)
	struct UControlRig* ControlRig;  // 0x5D8 (0x5D8)
	char pad_1507[173];  // 0x5E3 (0x5E3)


	void Update(float DeltaTime); // Function ControlRig.ControlRigComponent.Update
	void SetObjectBinding(struct UObject* InObjectToBind); // Function ControlRig.ControlRigComponent.SetObjectBinding
	void SetMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.SetMappedElements
	void SetInitialSpaceTransform(struct FName SpaceName, struct FTransform InitialTransform, uint8_t Space); // Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
	void SetInitialBoneTransform(struct FName BoneName, struct FTransform InitialTransform, uint8_t Space, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetInitialBoneTransform
	void SetControlVector2D(struct FName ControlName, struct FVector2D Value); // Function ControlRig.ControlRigComponent.SetControlVector2D
	void SetControlTransform(struct FName ControlName, struct FTransform Value, uint8_t Space); // Function ControlRig.ControlRigComponent.SetControlTransform
	void SetControlScale(struct FName ControlName, struct FVector Value, uint8_t Space); // Function ControlRig.ControlRigComponent.SetControlScale
	void SetControlRotator(struct FName ControlName, struct FRotator Value, uint8_t Space); // Function ControlRig.ControlRigComponent.SetControlRotator
	void SetControlRigClass(UControlRig* InControlRigClass); // Function ControlRig.ControlRigComponent.SetControlRigClass
	void SetControlPosition(struct FName ControlName, struct FVector Value, uint8_t Space); // Function ControlRig.ControlRigComponent.SetControlPosition
	void SetControlOffset(struct FName ControlName, struct FTransform OffsetTransform, uint8_t Space); // Function ControlRig.ControlRigComponent.SetControlOffset
	void SetControlInt(struct FName ControlName, int32_t Value); // Function ControlRig.ControlRigComponent.SetControlInt
	void SetControlFloat(struct FName ControlName, float Value); // Function ControlRig.ControlRigComponent.SetControlFloat
	void SetControlBool(struct FName ControlName, bool Value); // Function ControlRig.ControlRigComponent.SetControlBool
	void SetBoneTransform(struct FName BoneName, struct FTransform Transform, uint8_t Space, float Weight, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetBoneTransform
	void SetBoneInitialTransformsFromSkeletalMesh(struct USkeletalMesh* InSkeletalMesh); // Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
	void OnPreInitialize(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreInitialize
	void OnPreForwardsSolve(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreForwardsSolve
	void OnPreConstruction(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreConstruction
	void OnPostInitialize(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostInitialize
	void OnPostForwardsSolve(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostForwardsSolve
	void OnPostConstruction(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostConstruction
	void Initialize(); // Function ControlRig.ControlRigComponent.Initialize
	struct FTransform GetSpaceTransform(struct FName SpaceName, uint8_t Space); // Function ControlRig.ControlRigComponent.GetSpaceTransform
	struct FTransform GetInitialSpaceTransform(struct FName SpaceName, uint8_t Space); // Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
	struct FTransform GetInitialBoneTransform(struct FName BoneName, uint8_t Space); // Function ControlRig.ControlRigComponent.GetInitialBoneTransform
	struct TArray<struct FName> GetElementNames(uint8_t ElementType); // Function ControlRig.ControlRigComponent.GetElementNames
	struct FVector2D GetControlVector2D(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlVector2D
	struct FTransform GetControlTransform(struct FName ControlName, uint8_t Space); // Function ControlRig.ControlRigComponent.GetControlTransform
	struct FVector GetControlScale(struct FName ControlName, uint8_t Space); // Function ControlRig.ControlRigComponent.GetControlScale
	struct FRotator GetControlRotator(struct FName ControlName, uint8_t Space); // Function ControlRig.ControlRigComponent.GetControlRotator
	struct UControlRig* GetControlRig(); // Function ControlRig.ControlRigComponent.GetControlRig
	struct FVector GetControlPosition(struct FName ControlName, uint8_t Space); // Function ControlRig.ControlRigComponent.GetControlPosition
	struct FTransform GetControlOffset(struct FName ControlName, uint8_t Space); // Function ControlRig.ControlRigComponent.GetControlOffset
	int32_t GetControlInt(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlInt
	float GetControlFloat(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlFloat
	bool GetControlBool(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlBool
	struct FTransform GetBoneTransform(struct FName BoneName, uint8_t Space); // Function ControlRig.ControlRigComponent.GetBoneTransform
	float GetAbsoluteTime(); // Function ControlRig.ControlRigComponent.GetAbsoluteTime
	bool DoesElementExist(struct FName Name, uint8_t ElementType); // Function ControlRig.ControlRigComponent.DoesElementExist
	void ClearMappedElements(); // Function ControlRig.ControlRigComponent.ClearMappedElements
	bool CanExecute(); // Function ControlRig.ControlRigComponent.CanExecute
	void AddMappedSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent, struct TArray<struct FControlRigComponentMappedBone> Bones, struct TArray<struct FControlRigComponentMappedCurve> Curves); // Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
	void AddMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.AddMappedElements
	void AddMappedComponents(struct TArray<struct FControlRigComponentMappedComponent> Components); // Function ControlRig.ControlRigComponent.AddMappedComponents
	void AddMappedCompleteSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent); // Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
}; 
 
 


// Class ControlRig.ControlRigShapeLibrary
// Size: 0x170(Inherited: 0x28)
struct UControlRigShapeLibrary : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct FControlRigShapeDefinition DefaultShape;  // 0x30 (0x30)
	struct TSoftObjectPtr<UMaterial> DefaultMaterial;  // 0xE0 (0xE0)
	struct TSoftObjectPtr<UMaterial> XRayMaterial;  // 0x110 (0x110)
	struct FName MaterialColorParameter;  // 0x140 (0x140)
	struct TArray<struct FControlRigShapeDefinition> Shapes;  // 0x148 (0x148)
	char pad_344[24];  // 0x158 (0x158)


}; 
 
 


// Class ControlRig.ControlRigValidator
// Size: 0x68(Inherited: 0x28)
struct UControlRigValidator : UObject
{
	struct TArray<struct UControlRigValidationPass*> Passes;  // 0x28 (0x28)
	char pad_56[48];  // 0x38 (0x38)


}; 
 
 


// Class ControlRig.ControlRigValidationPass
// Size: 0x28(Inherited: 0x28)
struct UControlRigValidationPass : UObject
{


}; 
 
 


// Class ControlRig.AdditiveControlRig
// Size: 0x570(Inherited: 0x560)
struct UAdditiveControlRig : UControlRig
{
	char pad_1376[16];  // 0x560 (0x560)


}; 
 
 


// Class ControlRig.ControlRigPoseProjectSettings
// Size: 0x38(Inherited: 0x28)
struct UControlRigPoseProjectSettings : UObject
{
	struct TArray<struct FDirectoryPath> RootSaveDirs;  // 0x28 (0x28)


}; 
 
 


// Class ControlRig.FKControlRig
// Size: 0x5A0(Inherited: 0x560)
struct UFKControlRig : UControlRig
{
	struct TArray<bool> IsControlActive;  // 0x560 (0x560)
	uint8_t ApplyMode;  // 0x570 (0x570)
	char pad_1393[47];  // 0x571 (0x571)


}; 
 
 


// Class ControlRig.RigHierarchyController
// Size: 0xA0(Inherited: 0x28)
struct URigHierarchyController : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bReportWarningsAndErrors : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	struct TWeakObjectPtr<URigHierarchy> Hierarchy;  // 0x2C (0x2C)
	char pad_52[108];  // 0x34 (0x34)


	bool SetSelection(struct TArray<struct FRigElementKey>& InKeys, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.SetSelection
	bool SetParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.SetParent
	void SetHierarchy(struct URigHierarchy* InHierarchy); // Function ControlRig.RigHierarchyController.SetHierarchy
	struct FName SetDisplayName(struct FRigElementKey InControl, struct FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.SetDisplayName
	bool SetControlSettings(struct FRigElementKey InKey, struct FRigControlSettings InSettings, bool bSetupUndo); // Function ControlRig.RigHierarchyController.SetControlSettings
	bool SelectElement(struct FRigElementKey InKey, bool bSelect, bool bClearSelection); // Function ControlRig.RigHierarchyController.SelectElement
	struct FRigElementKey RenameElement(struct FRigElementKey InElement, struct FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection); // Function ControlRig.RigHierarchyController.RenameElement
	bool RemoveParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.RemoveParent
	bool RemoveElement(struct FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.RemoveElement
	bool RemoveAllParents(struct FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.RemoveAllParents
	struct TArray<struct FRigElementKey> MirrorElements(struct TArray<struct FRigElementKey> InKeys, struct FRigMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchyController.MirrorElements
	struct TArray<struct FRigElementKey> ImportFromText(struct FString InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchyController.ImportFromText
	struct TArray<struct FRigElementKey> ImportCurves(struct USkeleton* InSkeleton, struct FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.ImportCurves
	struct TArray<struct FRigElementKey> ImportBones(struct USkeleton* InSkeleton, struct FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.ImportBones
	struct URigHierarchy* GetHierarchy(); // Function ControlRig.RigHierarchyController.GetHierarchy
	struct FRigControlSettings GetControlSettings(struct FRigElementKey InKey); // Function ControlRig.RigHierarchyController.GetControlSettings
	struct FString ExportToText(struct TArray<struct FRigElementKey> InKeys); // Function ControlRig.RigHierarchyController.ExportToText
	struct FString ExportSelectionToText(); // Function ControlRig.RigHierarchyController.ExportSelectionToText
	struct TArray<struct FRigElementKey> DuplicateElements(struct TArray<struct FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchyController.DuplicateElements
	bool DeselectElement(struct FRigElementKey InKey); // Function ControlRig.RigHierarchyController.DeselectElement
	bool ClearSelection(); // Function ControlRig.RigHierarchyController.ClearSelection
	struct FRigElementKey AddRigidBody(struct FName InName, struct FRigElementKey InParent, struct FRigRigidBodySettings InSettings, struct FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddRigidBody
	bool AddParent(struct FRigElementKey InChild, struct FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo); // Function ControlRig.RigHierarchyController.AddParent
	struct FRigElementKey AddNull(struct FName InName, struct FRigElementKey InParent, struct FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddNull
	struct FRigElementKey AddCurve(struct FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddCurve
	struct FRigElementKey AddControl_ForBlueprint(struct FName InName, struct FRigElementKey InParent, struct FRigControlSettings InSettings, struct FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddControl_ForBlueprint
	struct FRigElementKey AddBone(struct FName InName, struct FRigElementKey InParent, struct FTransform InTransform, bool bTransformInGlobal, uint8_t InBoneType, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddBone
	struct FRigElementKey AddAnimationChannel_ForBlueprint(struct FName InName, struct FRigElementKey InParentControl, struct FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint
}; 
 
 


// Class ControlRig.ControlRigLayerInstance
// Size: 0x350(Inherited: 0x350)
struct UControlRigLayerInstance : UAnimInstance
{


}; 
 
 


// Class ControlRig.ControlRigSettings
// Size: 0x38(Inherited: 0x38)
struct UControlRigSettings : UDeveloperSettings
{


}; 
 
 


// Class ControlRig.MovieSceneControlRigParameterTrack
// Size: 0x100(Inherited: 0x98)
struct UMovieSceneControlRigParameterTrack : UMovieSceneNameableTrack
{
	char pad_152[64];  // 0x98 (0x98)
	struct UControlRig* ControlRig;  // 0xD8 (0xD8)
	struct UMovieSceneSection* SectionToKey;  // 0xE0 (0xE0)
	struct TArray<struct UMovieSceneSection*> Sections;  // 0xE8 (0xE8)
	struct FName TrackName;  // 0xF8 (0xF8)


}; 
 
 


// Class ControlRig.ControlRigSequence
// Size: 0x288(Inherited: 0x220)
struct UControlRigSequence : ULevelSequence
{
	struct TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence;  // 0x220 (0x220)
	struct TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh;  // 0x250 (0x250)
	float LastExportedFrameRate;  // 0x280 (0x280)
	char pad_644[4];  // 0x284 (0x284)


}; 
 
 


// Class ControlRig.MovieSceneControlRigParameterSection
// Size: 0x3C8(Inherited: 0x158)
struct UMovieSceneControlRigParameterSection : UMovieSceneParameterSection
{
	char pad_344[64];  // 0x158 (0x158)
	struct UControlRig* ControlRig;  // 0x198 (0x198)
	UControlRig* ControlRigClass;  // 0x1A0 (0x1A0)
	struct TArray<bool> ControlsMask;  // 0x1A8 (0x1A8)
	struct FMovieSceneTransformMask TransformMask;  // 0x1B8 (0x1B8)
	char pad_444[4];  // 0x1BC (0x1BC)
	struct FMovieSceneFloatChannel Weight;  // 0x1C0 (0x1C0)
	struct TMap<struct FName, struct FChannelMapInfo> ControlChannelMap;  // 0x2D0 (0x2D0)
	struct TArray<struct FEnumParameterNameAndCurve> EnumParameterNamesAndCurves;  // 0x320 (0x320)
	struct TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;  // 0x330 (0x330)
	struct TArray<struct FSpaceControlNameAndChannel> SpaceChannels;  // 0x340 (0x340)
	struct TArray<struct FConstraintAndActiveChannel> ConstraintsChannels;  // 0x350 (0x350)
	char pad_864[104];  // 0x360 (0x360)


}; 
 
 


// Class ControlRig.ControlRigEditorSettings
// Size: 0x38(Inherited: 0x38)
struct UControlRigEditorSettings : UDeveloperSettings
{


}; 
 
 


// Class ControlRig.ControlRigPoseAsset
// Size: 0x88(Inherited: 0x28)
struct UControlRigPoseAsset : UObject
{
	struct FControlRigControlPose Pose;  // 0x28 (0x28)


	void SelectControls(struct UControlRig* InControlRig, bool bDoMirror); // Function ControlRig.ControlRigPoseAsset.SelectControls
	void SavePose(struct UControlRig* InControlRig, bool bUseAll); // Function ControlRig.ControlRigPoseAsset.SavePose
	void ReplaceControlName(struct FName& CurrentName, struct FName& NewName); // Function ControlRig.ControlRigPoseAsset.ReplaceControlName
	void PastePose(struct UControlRig* InControlRig, bool bDoKey, bool bDoMirror); // Function ControlRig.ControlRigPoseAsset.PastePose
	void GetCurrentPose(struct UControlRig* InControlRig, struct FControlRigControlPose& OutPose); // Function ControlRig.ControlRigPoseAsset.GetCurrentPose
	struct TArray<struct FName> GetControlNames(); // Function ControlRig.ControlRigPoseAsset.GetControlNames
	bool DoesMirrorMatch(struct UControlRig* ControlRig, struct FName& ControlName); // Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch
}; 
 
 


// Class ControlRig.ControlRigPoseMirrorSettings
// Size: 0x50(Inherited: 0x28)
struct UControlRigPoseMirrorSettings : UObject
{
	struct FString RightSide;  // 0x28 (0x28)
	struct FString LeftSide;  // 0x38 (0x38)
	enum class EAxis MirrorAxis;  // 0x48 (0x48)
	enum class EAxis AxisToFlip;  // 0x49 (0x49)
	char pad_74[6];  // 0x4A (0x4A)


}; 
 
 


// Class ControlRig.ControlRigSnapSettings
// Size: 0x30(Inherited: 0x28)
struct UControlRigSnapSettings : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bKeepOffset : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool bSnapPosition : 1;  // 0x29 (0x29)
	char pad_42_1 : 7;  // 0x2A (0x2A)
	bool bSnapRotation : 1;  // 0x2A (0x2A)
	char pad_43_1 : 7;  // 0x2B (0x2B)
	bool bSnapScale : 1;  // 0x2B (0x2B)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 


// Class ControlRig.ControlRigWorkflowOptions
// Size: 0xB0(Inherited: 0x98)
struct UControlRigWorkflowOptions : URigVMUserWorkflowOptions
{
	struct URigHierarchy* Hierarchy;  // 0x98 (0x98)
	struct TArray<struct FRigElementKey> Selection;  // 0xA0 (0xA0)


	bool EnsureAtLeastOneRigElementSelected(); // Function ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected
}; 
 
 


// Class ControlRig.ControlRigTransformWorkflowOptions
// Size: 0xB8(Inherited: 0xB0)
struct UControlRigTransformWorkflowOptions : UControlRigWorkflowOptions
{
	enum class ERigTransformType TransformType;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)


	struct TArray<struct FRigVMUserWorkflow> ProvideWorkflows(struct UObject* InSubject); // Function ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows
}; 
 
 


// Class ControlRig.ControlRigNumericalValidationPass
// Size: 0xC0(Inherited: 0x28)
struct UControlRigNumericalValidationPass : UControlRigValidationPass
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bCheckControls : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool bCheckBones : 1;  // 0x29 (0x29)
	char pad_42_1 : 7;  // 0x2A (0x2A)
	bool bCheckCurves : 1;  // 0x2A (0x2A)
	char pad_43[1];  // 0x2B (0x2B)
	float TranslationPrecision;  // 0x2C (0x2C)
	float RotationPrecision;  // 0x30 (0x30)
	float ScalePrecision;  // 0x34 (0x34)
	float CurvePrecision;  // 0x38 (0x38)
	struct FName EventNameA;  // 0x3C (0x3C)
	struct FName EventNameB;  // 0x44 (0x44)
	char pad_76[4];  // 0x4C (0x4C)
	struct FRigPose Pose;  // 0x50 (0x50)


}; 
 
 


